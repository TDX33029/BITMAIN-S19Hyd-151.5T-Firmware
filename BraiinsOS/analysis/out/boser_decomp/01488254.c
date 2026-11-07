// FUN_01488254 @ 01488254 size=112 calls_out=2 calls_in=4
// strings: 

void FUN_01488254(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = param_2 * 0x28;
  if (0x3333333 < param_2) {
LAB_01488278:
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
    if (uVar2 == 0) goto LAB_01488278;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return;
}

