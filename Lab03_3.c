/* USER CODE BEGIN PV */
	char str[] ="QUIT";
	char ch1 = 'j' ;
	char ch2[3] =" \n\r";
/* USER CODE END PV */

/* USER CODE BEGIN 3 */
	  if(ch1!='q'){
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) "Input =>", strlen("Input =>"),1000);

		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_RXNE)== RESET){}
		  HAL_UART_Receive(&huart3, (uint8_t*) &ch1, 1, 1000);
		  HAL_Delay(100);

		  ch2[0] = ch1;

		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) ch2, 3,1000);
	  }else{
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) str, strlen(str),1000);
		  break;
	  }

	  /* USER CODE END 3 */
