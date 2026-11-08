// FUN_00bbd104 @ 00bbd104 size=576 calls_out=8 calls_in=2
// strings: 

longlong FUN_00bbd104(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r7;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x12]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018715f0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018715f0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[10]) {
    case '\0':
      iVar3 = param_1[5];
      iVar5 = param_1[6];
      goto LAB_00bbd204;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871740);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871740);
    case '\x03':
      goto switchD_00bbd170_caseD_3;
    case '\x04':
      goto switchD_00bbd170_caseD_4;
    }
  }
  param_1[2] = param_1[1];
  iVar3 = *(int *)(*param_1 + 0x3c0);
  piVar2 = *(int **)(*param_1 + 0x3bc);
  param_1[3] = (int)piVar2;
  param_1[4] = (int)(piVar2 + iVar3);
  if (piVar2 != piVar2 + iVar3) {
    do {
      param_1[3] = (int)(piVar2 + 1);
      iVar3 = *piVar2 + 0x10;
      param_1[5] = iVar3;
      iVar5 = param_1[2];
      param_1[6] = iVar5;
      *(undefined1 *)(param_1 + 10) = 0;
LAB_00bbd204:
      param_1[0xb] = iVar3 + 900;
      param_1[0xc] = -1;
      param_1[7] = iVar3;
      param_1[8] = iVar5;
switchD_00bbd170_caseD_3:
      iVar3 = FUN_00c8101c(param_1 + 0xb,param_2);
      if (iVar3 == 0) {
        uVar1 = 3;
LAB_00bbd300:
        *(undefined1 *)(param_1 + 10) = uVar1;
        *(undefined1 *)(param_1 + 0x12) = 3;
        return CONCAT44(unaff_r7,1);
      }
      param_1[9] = iVar3;
      if (param_1[0xb] != 0) {
        FUN_00c8204c(param_1[0xb],param_1[0xc],1);
        iVar3 = param_1[9];
      }
      iVar5 = param_1[8];
      if (*(int *)(iVar3 + 0x28) == iVar5) {
LAB_00bbd330:
        uVar7 = 0;
        FUN_00c822ec(iVar3);
      }
      else {
        iVar6 = *(int *)(iVar3 + 0x20);
        if (iVar6 == 0) {
LAB_00bbd328:
          *(int *)(iVar3 + 0x28) = iVar5;
          iVar3 = param_1[9];
          goto LAB_00bbd330;
        }
        *(undefined1 *)(param_1 + 0x11) = 0;
        param_1[0xb] = iVar6 + 8;
        param_1[0xc] = iVar5;
switchD_00bbd170_caseD_4:
        uVar9 = FUN_00bd4b0c(param_1 + 0xb,param_2);
        uVar7 = (uint)(uVar9 >> 0x20);
        if ((uVar9 & 1) != 0) {
          uVar1 = 4;
          goto LAB_00bbd300;
        }
        if ((char)param_1[0x11] == '\x03') {
          puVar8 = (undefined4 *)param_1[0x10];
          iVar3 = param_1[0xf];
          pcVar4 = (code *)*puVar8;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(iVar3);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(iVar3);
          }
        }
        iVar3 = param_1[9];
        if (uVar7 == 0) {
          iVar5 = param_1[8];
          goto LAB_00bbd328;
        }
        FUN_00c822ec();
      }
      *(undefined1 *)(param_1 + 10) = 1;
      FUN_00bbd058(param_1 + 5);
      if (uVar7 != 0) goto LAB_00bbd1d0;
      piVar2 = (int *)param_1[3];
      unaff_r7 = 0;
    } while (piVar2 != (int *)param_1[4]);
  }
  uVar7 = 0;
LAB_00bbd1d0:
  *(undefined1 *)(param_1 + 0x12) = 1;
  return (ulonglong)uVar7 << 0x20;
}

