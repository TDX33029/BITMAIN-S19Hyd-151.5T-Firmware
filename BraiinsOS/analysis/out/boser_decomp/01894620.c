// FUN_01894620 @ 01894620 size=76 calls_out=1 calls_in=1
// strings: 

int FUN_01894620(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 * param_3;
  if (param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_2,param_2,&DAT_01d21734);
  }
  if (param_2 - uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_4,param_2 - uVar1,&DAT_01d21744);
  }
  return param_1 + uVar1 * 4;
}

