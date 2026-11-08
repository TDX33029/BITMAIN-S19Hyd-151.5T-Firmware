// FUN_0183f8b4 @ 0183f8b4 size=148 calls_out=3 calls_in=0
// strings: 

void FUN_0183f8b4(int *param_1,int param_2)

{
  int iVar1;
  int unaff_r6;
  int unaff_r7;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = -0x80000000;
  if ((*(int *)(param_2 + 0x238) != -0x80000000) && (*(int *)(param_2 + 0x240) != 0)) {
    uVar3 = 0;
    unaff_r7 = *(int *)(*(int *)(param_2 + 0x23c) + 8);
    if (unaff_r7 < 0) {
LAB_0183f8ec:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,unaff_r7);
    }
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x23c) + 4);
    if (unaff_r7 == 0) {
      unaff_r6 = 1;
      iVar1 = 0;
    }
    else {
      uVar3 = 1;
      unaff_r6 = FUN_01298504(unaff_r7,1);
      iVar1 = unaff_r7;
      if (unaff_r6 == 0) goto LAB_0183f8ec;
    }
    FUN_01bed4e2(unaff_r6,uVar2,unaff_r7);
  }
  *param_1 = iVar1;
  param_1[1] = unaff_r6;
  param_1[2] = unaff_r7;
  return;
}

