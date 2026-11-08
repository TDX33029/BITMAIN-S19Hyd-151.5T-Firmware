// FUN_00b314f8 @ 00b314f8 size=760 calls_out=6 calls_in=0
// strings: 

void FUN_00b314f8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r8;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r11;
  int iVar11;
  int iVar12;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar5 = *param_2;
    iVar8 = param_2[1];
    uVar4 = 0x80000007;
    param_2[2] = iVar8;
    if ((*(int *)(*(int *)(iVar8 + 0x10) + 0x40) != 7) ||
       (iVar1 = thunk_FUN_01bed842(*(int *)(*(int *)(iVar8 + 0x10) + 0x3c) + 8,&DAT_005325f1,7),
       iVar1 != 0)) goto LAB_00b31784;
    param_2[4] = iVar5;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = iVar8;
LAB_00b31650:
    param_2[6] = iVar5;
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[7] = iVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12310);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12310);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar5 = param_2[4];
      iVar8 = param_2[5];
      goto LAB_00b31650;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12310);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12310);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12310);
      }
      iVar5 = param_2[6];
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      piVar2 = (int *)param_2[0xe];
      piVar7 = (int *)param_2[0xf];
      iVar5 = param_2[0x10];
      goto LAB_00b316d8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x19]) {
      case '\0':
        piVar2 = (int *)param_2[0x11];
        piVar7 = (int *)param_2[0x12];
        iVar5 = param_2[0x13];
        goto LAB_00b316f4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      case '\x03':
        if ((char)param_2[0x18] != '\0') {
          if ((char)param_2[0x18] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21bfc);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bfc);
        }
        iVar8 = param_2[0x14];
        unaff_r11 = param_2[0x15];
      }
    }
    goto LAB_00b31710;
  }
  piVar3 = (int *)param_2[2];
  *(undefined1 *)(param_2 + 9) = 1;
  piVar7 = param_2 + 5;
  *(undefined1 *)(param_2 + 8) = 1;
  piVar2 = param_2 + 4;
  *piVar2 = iVar5;
  iVar5 = piVar3[4];
  iVar11 = piVar3[5];
  iVar10 = piVar3[6];
  iVar9 = piVar3[7];
  iVar8 = piVar3[8];
  iVar1 = piVar3[1];
  iVar6 = piVar3[2];
  iVar12 = piVar3[3];
  *piVar7 = *piVar3;
  param_2[6] = iVar1;
  param_2[7] = iVar6;
  param_2[8] = iVar12;
  param_2[9] = iVar5 + 0x20;
  param_2[0xc] = iVar9;
  param_2[10] = iVar11;
  param_2[0xb] = iVar10;
  *(char *)(param_2 + 0xd) = (char)iVar8;
  iVar5 = piVar3[4];
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[0xe] = (int)piVar2;
  param_2[0xf] = (int)piVar7;
  param_2[0x10] = iVar5;
LAB_00b316d8:
  piVar2 = (int *)*piVar2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x11] = (int)piVar2;
  param_2[0x12] = (int)piVar7;
  param_2[0x13] = iVar5;
LAB_00b316f4:
  iVar8 = *piVar2;
  unaff_r11 = piVar2[1];
  *(undefined1 *)(param_2 + 0x18) = 0;
  param_2[0x14] = iVar8;
  param_2[0x15] = unaff_r11;
  param_2[0x16] = (int)piVar7;
  param_2[0x17] = iVar5;
LAB_00b31710:
  if (unaff_r11 < 0) {
    uVar4 = 0;
LAB_00b3171c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,unaff_r11);
  }
  uVar4 = 1;
  if (unaff_r11 == 0) {
    unaff_r8 = 0;
    iVar5 = 1;
  }
  else {
    iVar5 = FUN_01298504(unaff_r11,1);
    if (iVar5 == 0) goto LAB_00b3171c;
    unaff_r8 = unaff_r11;
  }
  FUN_01bed4e2(iVar5,iVar8,unaff_r11);
  *(undefined1 *)(param_2 + 0x1a) = 1;
  uVar4 = 0x80000002;
  *(undefined1 *)(param_2 + 0x19) = 1;
  *(undefined1 *)(param_2 + 0x18) = 1;
LAB_00b31784:
  param_1[6] = uVar4;
  *param_1 = 0;
  param_1[2] = unaff_r8;
  param_1[3] = iVar5;
  param_1[4] = unaff_r11;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

