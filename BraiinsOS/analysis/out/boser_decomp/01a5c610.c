// FUN_01a5c610 @ 01a5c610 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_01a5c610(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = param_2 * 0x70;
  if (0x1249249 < param_2) {
LAB_01a5c634:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar1);
  }
  if (iVar1 == 0) {
    iVar2 = 8;
    param_2 = 0;
  }
  else {
    uVar3 = 8;
    iVar2 = FUN_01298504(iVar1,8);
    if (iVar2 == 0) goto LAB_01a5c634;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = iVar2;
  param_1[3] = 0;
  return;
}

