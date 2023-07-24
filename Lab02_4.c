/* USER CODE BEGIN 3 */
	  if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)==GPIO_PIN_RESET){
		  	 if(b==0){
		  		 HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_SET);
		  		 HAL_Delay(500);
		  	 }
	  		 i=Cou;
	  		 do{

	  			 switch(i){
	  			 case 0:
	  				if(b==1)HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOG,GPIO_PIN_9,GPIO_PIN_RESET);
	  				break;
	  			 case 1:
	  				HAL_GPIO_WritePin(GPIOG,GPIO_PIN_9,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOG,GPIO_PIN_14,GPIO_PIN_RESET);
	  				break;
	  			 case 2:
	  				HAL_GPIO_WritePin(GPIOG,GPIO_PIN_14,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOF,GPIO_PIN_15,GPIO_PIN_RESET);
	  				break;
	  			 case 3:
	  				HAL_GPIO_WritePin(GPIOF,GPIO_PIN_15,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_13,GPIO_PIN_RESET);
	  				break;
	  			 case 4:
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_13,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_RESET);
	  				break;
	  			 case 5:
	  				HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_11,GPIO_PIN_RESET);
	  				break;
	  			 case 6:
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_11,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_RESET);
	  				break;
	  			 case 7:
	  				HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_SET);
	  				HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_RESET);
	  				break;
	  			 }
	  			 HAL_Delay(500);
	  			i=i-1;
	  			if(i<0)i=7;
	  		 }while(i!=Cou);
	  		if(b==0){
	  			HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_RESET);
	  		}
	  }
	  if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_SET){
	  		  Cou=(Cou+1)%8;
	  		  b=1;
	  		  switch(Cou){
	  		  case 0:
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOG,GPIO_PIN_9,GPIO_PIN_SET);
	  			  break;
	  		  case 1:
	  			  HAL_GPIO_WritePin(GPIOG,GPIO_PIN_9,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOG,GPIO_PIN_14,GPIO_PIN_SET);
	  			  break;
	  		  case 2:
	  			  HAL_GPIO_WritePin(GPIOG,GPIO_PIN_14,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_15,GPIO_PIN_SET);
	  			  break;
	  		  case 3:
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_15,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_13,GPIO_PIN_SET);
	  			  break;
	  		  case 4:
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_13,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_SET);
	  			  break;
	  		  case 5:
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_14,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_11,GPIO_PIN_SET);
	  			  break;
	  		  case 6:
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_11,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_SET);
	  			  break;
	  		  case 7:
	  			  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_RESET);
	  			  HAL_GPIO_WritePin(GPIOF,GPIO_PIN_13,GPIO_PIN_SET);
	  			  break;
	  		  }
	  		  HAL_Delay(250);
	  	  }
  }
  /* USER CODE END 3 */
