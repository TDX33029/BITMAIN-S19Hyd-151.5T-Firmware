// FUN_016d2b04 @ 016d2b04 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_016d2b04(code *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  FUN_016d2964(param_3 + param_2 + 1,*param_3);
  FUN_016d2ab4();
  (*param_1)(param_2,param_3,param_3 + param_2 + 1);
  FUN_016d2cf4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x16d2b02);
  (*pcVar1)();
}

