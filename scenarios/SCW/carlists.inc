country = {
    tag = EUS
	ai = "kaiserreich\Carlist spain.ai"
    intrinsic_gov_type = fascist

    policy = {
        date = { year = 0 month = january day = 0 } 
		democratic = 1 
		political_left = 2 
		freedom = 2 
		free_market = 4 
		professional_army = 4 
		defense_lobby = 4 
		interventionism = 5 
    	}

	dissent = 5
	capital = 451 #burgos

   	manpower = 400

	transports = 60
	escorts = 14

	# Resource Reserves
	energy	=	15000
	metal	=	10000
	rare_materials  =	10000
	oil 	=	10000
	supplies =	5000
	money	=	500

	free = { 
		rare_materials = 3 
		metal = 6 
		energy = 12 
		ic = 6 
		} 	


	HeadOfState = { type = 9 id = 580001 } 
	HeadOfGovernment = { type = 9 id = 580002 } 
	ForeignMinister = { type = 9 id = 580003 } 
	ArmamentMinister = { type = 9 id = 580046 } 
	MinisterOfSecurity = { type = 9 id = 580005 } 
	MinisterOfIntelligence = { type = 9 id = 580006 } 
	ChiefOfStaff = { type = 9 id = 580007 } 
	ChiefOfArmy = { type = 9 id = 580008 } 
	ChiefOfNavy = { type = 9 id = 580054 } 
	ChiefOfAir = { type = 9 id = 580055 } 

	ownedprovinces = { 441 449 444 448 451 445 443 446 456 } 
    controlledprovinces = { 441 449 444 448 451 445 443 446 456 } 
	nationalprovinces = { 441 449 444 448 451 445 443 446 456 453 466 460 457 458 472 474 471 470 467 463 468 464 461 469 348 440 438 436 442 475 437 439 452 447 450 455 462 459 473 465 454 990 991 } 
	claimedprovinces = { } 
	
	techapps = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 2860 2870 2880 2020 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1070 1080 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 3410 3420 3430 3440 3210 3220 3230 3240 3250 3610 3620 3630 3640 3110 3120 3130 3140 3010 3020 3030 3040 3050 3060 3720 3730 3736 3740 3750 3900 12100 3810 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 5190 5600 5610 5620 14000 14010 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910 6010 6020 8010 8020 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8070 5060 2150 2900 1090 5070 1250 2910 1100 55000 8030 2920 } 

	deactivate = { 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7100 7110 7120 7130 7140 7150 7160 16050 16000 16040 7170 7180 7190 16010 16020 7200 7210 7220 7230 7400 7410 7240 7640 7650 7260 7270 7620 7630 } 

#######################################################################

## UNIDADES NAVALES

	navalunit = {
		location = 441 #Galicia
		base = 441
		id = { type = 17500 id = 25 }
		name = "Flota del Atl�ntico"
		leader = 3471 #Cervera en atlantico
		division = { id = { type = 17500 id = 26 }
		     	     name = "Flotilla de Torpederos nro. 1"
		     	     strength = 100
		             type = destroyer
		             model = 0 }
		division = { id = { type = 17500 id = 27 }
		             name = "Flotilla de Torpederos nro. 2"
		             strength = 100
		             type = destroyer
		             model = 1 }
		division = { id = { type = 17500 id = 28 }
		             name = "1a Flotilla de Transporte Naval"
		             strength = 100
		             type = transport }
		division = { id = { type = 17500 id = 29 }
		             name = "2a Flotilla de Transporte Naval"
		             strength = 100
		             type = transport }
		}

#FUERZAS AEREAS (hechas)

	airunit = {
		location = 441 #Vigo
		base = 441
		id = { type = 17500 id = 30 }
		name = "Grupo Mixto 5G5"
		leader = 3487 #Mu�oz Jimenez
		division = { id = { type = 17500 id = 31 }
			     name = "1a Grupo A�reo T�ctica ARE"
			     strength = 30
			     type = tactical_bomber }
		division = { id = { type = 17500 id = 32 }
			     name = "2a Grupo A�reo T�ctica ARE"
			     strength = 30
			     type = tactical_bomber }
	}



	airunit = {
		location = 715 #Ceuta
		base = 715
		id = { type = 17500 id = 33 }
		name = "Fuerzas A�reas de �frica"
		leader = 3486 #Kindelan
		division = { id = { type = 17500 id = 34 }
			     name = "Grupo A�reo de Observaci�n"
			     strength = 30
			     type = interceptor }
	}



## EJ�RCITOS DE TIERRA (hechos)

	landunit = {
		id = { type = 4800 id = 1 }
		location = 441 #Coruna
		name = "VI Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 2 }
			name = "12a Division Organica"
			type = infantry
			model = 8 
			}		
	}	
	
	landunit = {
		id = { type = 4800 id = 3 }
		location = 449 #Coruna
		name = "X Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 4 }
			name = "10a Division Organica"
			type = infantry
			model = 8 
			}		
	}	
	
	landunit = {
		id = { type = 4800 id = 5 }
		location = 448 #Leon
		name = "I Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 6 }
			name = "1a Division de Caballeria"
			type = cavalry
			model = 8 
			extra = light_armor_brigade
			brigade_model = 2
			}		
	}
	
	landunit = {
		id = { type = 4800 id = 7 }
		location = 443 #Bilbao
		name = "IX Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 8 }
			name = "11a Division Organica"
			type = infantry
			model = 8 
			}		
	}		
	
	landunit = {
		id = { type = 4800 id = 9 }
		location = 446 #Pamplona
		name = "3a Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 10 }
			name = "6a Division Organica"
			type = infantry
			model = 8 
			extra = anti_air
			brigade_model = 2
			}		
	}			
	
	landunit = {
		id = { type = 4800 id = 11 }
		location = 446 #Pamplona
		name = "I Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 12 }
			name = "1a Requete"
			type = militia
			model = 4 
			}		
	}			
	
	landunit = {
		id = { type = 4800 id = 13 }
		location = 456 #Soria
		name = "II Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 14 }
			name = "Brigadas Navarras"
			type = militia
			model = 4 
			}		
	}		
	
	landunit = {
		id = { type = 4800 id = 15 }
		location = 448 #Soria
		name = "III Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 16 }
			name = "3a Requete"
			type = militia
			model = 4 
			}		
	}		
	
	landunit = {
		id = { type = 4800 id = 17 }
		location = 451 #Burgos
		name = "IV Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 18 }
			name = "1. Division de Infanteria"
			type = infantry
			model = 9 
			}	

		division = {
			id = { type = 4800 id = 19 }
			name = "1a Division de Caballeria"
			type = cavalry
			model = 8 
			}				
	}			
	
	landunit = {
		id = { type = 4800 id = 20 }
		location = 456 #Soria
		name = "V Cuerpo del Ej�rcito"

		division = {
			id = { type = 4800 id = 21 }
			name = "2a Requete"
			type = militia
			model = 4 
			}					
	}		

}
