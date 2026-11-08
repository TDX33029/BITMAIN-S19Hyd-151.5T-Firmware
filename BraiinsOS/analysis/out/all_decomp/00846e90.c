// FUN_00846e90 @ 00846e90 size=252 calls_out=7 calls_in=0
// strings: 

ulonglong FUN_00846e90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x1f)) {
  case 0:
    unaff_r5 = param_1[0x1d];
    uVar1 = 0;
    if (unaff_r5 < 0) {
LAB_00846ecc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,unaff_r5);
    }
    uVar4 = param_1[0x1c];
    uVar1 = param_1[0x1e];
    if (unaff_r5 == 0) {
      iVar2 = 1;
      iVar3 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(unaff_r5);
      iVar3 = unaff_r5;
      if (iVar2 == 0) {
        uVar1 = 1;
        goto LAB_00846ecc;
      }
    }
    FUN_016dd1aa(iVar2,uVar4,unaff_r5);
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = 0x80000002;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    param_1[3] = unaff_r5;
    param_1[4] = uVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860a6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860a6c);
  }
  uVar5 = FUN_00846334(param_1,param_2);
  if ((uVar5 & 1) == 0) {
    FUN_00845fec(param_1);
    *(undefined1 *)(param_1 + 0x1f) = 1;
    return uVar5 & 0xffffffff00000000;
  }
  *(undefined1 *)(param_1 + 0x1f) = 3;
  return CONCAT44(unaff_r5,1);
}

