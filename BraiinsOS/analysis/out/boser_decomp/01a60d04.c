// FUN_01a60d04 @ 01a60d04 size=144 calls_out=3 calls_in=19
// strings: 

void FUN_01a60d04(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_3 < 0) {
LAB_01a60d18:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar3 = param_3;
    if (iVar1 == 0) goto LAB_01a60d18;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *param_1 = iVar3;
  param_1[0xf] = -0x7ffffffd;
  param_1[0xc] = -0x7ffffffd;
  param_1[9] = -0x7ffffffd;
  param_1[6] = -0x7ffffffd;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  param_1[3] = -0x7ffffffd;
  return;
}

