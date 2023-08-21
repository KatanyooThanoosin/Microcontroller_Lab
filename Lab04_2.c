/* USER CODE BEGIN PV */
char ch1 = '.' ;
/* USER CODE END PV */

/* USER CODE BEGIN 3 */
HAL_UART_Transmit(&huart3, (uint8_t*) &ch1, 1, 1000);
HAL_Delay(400);
/* USER CODE END 3 */

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
	if(GPIO_Pin == GPIO_PIN_0)
	{
		HAL_Delay(250);
		HAL_GPIO_WritePin(GPIOB ,GPIO_PIN_0,!HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_0));
		HAL_UART_Transmit(&huart3, (uint8_t *) "---", 3,100);
		for(int i=0; i<20;i++){
			HAL_UART_Transmit(&huart3, (uint8_t *) "E", 1,100);
			HAL_Delay(200);
		}
	}
}
/* USER CODE END 4 */
