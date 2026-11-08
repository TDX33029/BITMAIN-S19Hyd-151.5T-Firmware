// FUN_0086e684 @ 0086e684 size=516 calls_out=7 calls_in=0
// strings: 

void FUN_0086e684(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int unaff_r7;
  ulonglong uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    param_2[1] = *param_2;
    iVar1 = *(int *)(*param_2 + 0x148);
    param_2[3] = 0x101;
    param_2[4] = 0x40000005;
    param_2[5] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[7] = iVar1 + 8;
    param_2[8] = (int)(param_2 + 3);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861338);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861338);
  case '\x04':
    goto switchD_0086e6a0_caseD_4;
  case '\x05':
    goto switchD_0086e6a0_caseD_5;
  case '\x06':
    goto switchD_0086e6a0_caseD_6;
  }
  uVar3 = FUN_0081b024(param_2 + 5,param_3);
  unaff_r7 = (int)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
    *param_1 = 0xd;
    *(undefined1 *)(param_2 + 2) = 3;
    return;
  }
  FUN_0081b77c(param_2 + 5);
  if (unaff_r7 == 0) {
    iVar1 = *(int *)(param_2[1] + 0x148);
    *(undefined1 *)(param_2 + 0x21) = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 50000000;
    param_2[0x20] = iVar1 + 8;
switchD_0086e6a0_caseD_4:
    iVar1 = FUN_0081c170(param_2 + 4,param_3);
    if (iVar1 != 0) {
      *param_1 = 0xd;
      *(undefined1 *)(param_2 + 2) = 4;
      return;
    }
    if ((char)param_2[0x21] == '\x03') {
      FUN_0081c020(param_2 + 0xc);
    }
    *(undefined1 *)((int)param_2 + 0x99) = *(undefined1 *)(param_2[1] + 0x144);
    *(undefined1 *)(param_2 + 0x26) = 0;
    param_2[5] = param_2[1] + 0x148;
    param_2[3] = 0;
switchD_0086e6a0_caseD_5:
    uVar3 = FUN_0081b674(param_2 + 3,param_3);
    unaff_r7 = (int)(uVar3 >> 0x20);
    if ((uVar3 & 1) != 0) {
      *param_1 = 0xd;
      *(undefined1 *)(param_2 + 2) = 5;
      return;
    }
    if ((char)param_2[0x26] == '\x03') {
      FUN_0081b77c(param_2 + 8);
    }
    if (unaff_r7 == 0) {
      iVar1 = *(int *)(param_2[1] + 0x148);
      *(undefined1 *)(param_2 + 0x21) = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 50000000;
      param_2[0x20] = iVar1 + 8;
switchD_0086e6a0_caseD_6:
      iVar1 = FUN_0081c170(param_2 + 4,param_3);
      if (iVar1 != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 2) = 6;
        return;
      }
      uVar2 = 0xc;
      if ((char)param_2[0x21] == '\x03') {
        FUN_0081c020(param_2 + 0xc);
      }
      goto LAB_0086e878;
    }
  }
  uVar2 = 9;
LAB_0086e878:
  *(int *)(param_1 + 4) = unaff_r7;
  *param_1 = uVar2;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

