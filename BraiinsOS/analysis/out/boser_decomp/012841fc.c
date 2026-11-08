// FUN_012841fc @ 012841fc size=132 calls_out=3 calls_in=15
// strings: 

void FUN_012841fc(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(param_3,1);
    uVar2 = param_3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *param_1 = iVar1;
  param_1[1] = param_3;
  param_1[2] = uVar2;
  uVar2 = 0x20 - LZCOUNT(uVar2 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  param_1[3] = uVar2 << 2 | 1;
  return;
}

