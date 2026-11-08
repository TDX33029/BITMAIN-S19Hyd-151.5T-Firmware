// FUN_0196aa8c @ 0196aa8c size=112 calls_out=2 calls_in=17
// strings: 

void FUN_0196aa8c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = param_2 * 0x18;
  if (0x5555555 < param_2) {
LAB_0196aab0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar1);
  }
  if (iVar1 == 0) {
    uVar2 = 8;
    param_2 = 0;
  }
  else {
    uVar3 = 8;
    uVar2 = FUN_01298504(iVar1,8);
    if (uVar2 == 0) goto LAB_0196aab0;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return;
}

