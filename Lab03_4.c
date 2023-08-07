/* USER CODE BEGIN PV */
	char init[] = "Display Blinking LED PRESS (1, 2)\n\rDisplay Group Members PRESS m\n\rQuit PRESS q\n\r";
	char inp[] = "\tInput =>";
	char m[] = "64010001\n\rKatanyoo Thanoosin\n\r64010017\n\rKittayot Sangngam\n\r";
	char quit[] = "Quit";
	char uc[] = "Unknown Command\n\r";
	char td[3] =" \n\r";
	char t;
/* USER CODE END PV */

/* USER CODE BEGIN 2 */
  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
  HAL_UART_Transmit(&huart3, (uint8_t*) init, strlen(init),1000);
/* USER CODE END 2 */

/* USER CODE BEGIN 3 */
	  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
	  HAL_UART_Transmit(&huart3, (uint8_t*) inp, strlen(inp),1000);

	  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_RXNE)== RESET){}
	  HAL_UART_Receive(&huart3, (uint8_t*) &t, 1, 1000);
	  HAL_Delay(100);

	  td[0]=t;
	  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
	  HAL_UART_Transmit(&huart3, (uint8_t*) td, strlen(td),1000);

	  if(t=='q'){
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) quit, strlen(quit),1000);
		  break;
	  }
	  else if(t=='1'){
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_RESET);
		  HAL_Delay(300);

		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_RESET);
		  HAL_Delay(300);

		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_0,GPIO_PIN_RESET);
	  }
	  else if(t=='2'){
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_RESET);
		  HAL_Delay(300);

		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_RESET);
		  HAL_Delay(300);

		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_SET);
		  HAL_Delay(300);
		  HAL_GPIO_WritePin(GPIOD,GPIO_PIN_1,GPIO_PIN_RESET);
	  }
	  else if(t=='m'){
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) m, strlen(m),1000);
	  }
	  else{
		  while(__HAL_UART_GET_FLAG(&huart3,UART_FLAG_TC)==RESET){}
		  HAL_UART_Transmit(&huart3, (uint8_t*) uc, strlen(uc),1000);
	  }
	/* USER CODE END 3 */
