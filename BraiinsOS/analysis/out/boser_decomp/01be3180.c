// FUN_01be3180 @ 01be3180 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_01be3180(code *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  FUN_01be2fe0(param_3 + param_2 + 1,*param_3);
  FUN_01be3130();
  (*param_1)(param_2,param_3,param_3 + param_2 + 1);
  FUN_01be3370();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x1be317e);
  (*pcVar1)();
}

