// FUN_006d0474 @ 006d0474 size=112 calls_out=2 calls_in=2
// strings: 

void FUN_006d0474(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = param_2 * 0xc;
  if (0xaaaaaaa < param_2) {
LAB_006d0498:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar1);
  }
  if (iVar1 == 0) {
    uVar2 = 4;
    param_2 = 0;
  }
  else {
    uVar3 = 4;
    uVar2 = FUN_01298504(iVar1,4);
    if (uVar2 == 0) goto LAB_006d0498;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return;
}

