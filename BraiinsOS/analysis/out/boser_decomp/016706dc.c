// FUN_016706dc @ 016706dc size=132 calls_out=3 calls_in=2
// strings: 

void FUN_016706dc(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 < 0) {
LAB_016706f8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    if (iVar1 == 0) goto LAB_016706f8;
    iVar2 = param_3;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  param_1[5] = param_5;
  *param_1 = 0x80000001;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}

