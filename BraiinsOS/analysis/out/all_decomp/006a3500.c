// FUN_006a3500 @ 006a3500 size=1052 calls_out=6 calls_in=1
// strings: 

void FUN_006a3500(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar21;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar6 = FUN_006863d4(param_2);
  if (iVar6 == 0) {
    uVar5 = FUN_00686724(param_2,param_3);
    iVar11 = *param_3;
    iVar13 = param_3[1];
    uVar20 = 0;
    iVar14 = param_3[2];
    uVar1 = *(ushort *)(param_2 + 0xe);
    iVar6 = param_3[1];
    iVar19 = param_2[6];
    uVar18 = param_2[7];
    iVar15 = param_2[9];
    uVar21 = param_2[10];
    uVar17 = (uint)(uVar1 & uVar5);
LAB_006a35f0:
    do {
      uVar7 = uVar17;
      uVar17 = 0;
    } while (uVar18 <= uVar7);
    puVar8 = (ushort *)(iVar19 + uVar7 * 4);
    uVar17 = (uint)*puVar8;
    if (uVar17 == 0xffff) {
      local_48 = *param_3;
      iStack_44 = param_3[1];
      iStack_40 = param_3[2];
      iStack_3c = param_3[3];
      local_38 = *param_4;
      iStack_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar6 = FUN_00686b04(param_2,uVar5,&local_48);
      if (iVar6 != 0) {
LAB_006a3824:
        uVar4 = 3;
        goto LAB_006a38d0;
      }
      if ((uint)param_2[7] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_2[7],&DAT_018a6354);
      }
      puVar10 = (undefined2 *)(param_2[6] + uVar7 * 4);
      *puVar10 = (short)uVar21;
      puVar10[1] = uVar5;
      goto LAB_006a38c8;
    }
    uVar2 = puVar8[1];
    if ((uVar7 - (uVar1 & uVar2) & (uint)uVar1) < uVar20) {
      iVar13 = *param_2;
      iVar6 = param_2[1];
      local_48 = *param_3;
      iStack_44 = param_3[1];
      iStack_40 = param_3[2];
      iStack_3c = param_3[3];
      local_38 = *param_4;
      iStack_34 = param_4[1];
      iStack_30 = param_4[2];
      iStack_2c = param_4[3];
      iStack_28 = param_4[4];
      iVar11 = FUN_00686b04(param_2,uVar5,&local_48);
      if (iVar11 != 0) goto LAB_006a3824;
      iVar11 = param_2[6];
      uVar18 = 0;
      uVar16 = param_2[7];
      uVar17 = uVar21 & 0xffff;
      while( true ) {
        do {
          uVar21 = uVar7;
          uVar7 = 0;
        } while (uVar16 <= uVar21);
        puVar8 = (ushort *)(iVar11 + uVar21 * 4);
        uVar1 = *puVar8;
        if (uVar1 == 0xffff) break;
        *puVar8 = (ushort)uVar17;
        uVar2 = puVar8[1];
        uVar18 = uVar18 + 1;
        puVar8[1] = uVar5;
        uVar17 = (uint)uVar1;
        uVar7 = uVar21 + 1;
        uVar5 = uVar2;
      }
      *puVar8 = (ushort)uVar17;
      iVar14 = *param_2;
      iVar11 = param_2[1];
      puVar8[1] = uVar5;
      if ((uVar20 >> 9 != 0 && (iVar13 != 2 || iVar6 != 0) || 0x7f < uVar18) &&
         (iVar14 == 0 && iVar11 == 0)) {
        *param_2 = 1;
        param_2[1] = 0;
      }
LAB_006a38c8:
      uVar4 = 2;
LAB_006a38d0:
      *(undefined1 *)(param_1 + 4) = uVar4;
      return;
    }
    if (uVar2 == uVar5) {
      if (uVar21 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar21,&DAT_018a6344);
      }
      iVar9 = uVar17 * 0x34 + iVar15;
      if ((*(int *)(iVar9 + 0x20) != 0) != (iVar11 == 0)) {
        if (*(int *)(iVar9 + 0x20) == 0) {
          if (*(char *)(iVar9 + 0x24) == (char)iVar6) goto LAB_006a36a4;
        }
        else if ((*(int *)(iVar9 + 0x28) == iVar14) &&
                (iVar9 = thunk_FUN_016dd50a(*(undefined4 *)(iVar9 + 0x24),iVar13,iVar14), iVar9 == 0
                )) goto LAB_006a36a4;
      }
    }
    uVar20 = uVar20 + 1;
    uVar17 = uVar7 + 1;
    goto LAB_006a35f0;
  }
  iVar6 = *param_4;
  iVar11 = param_4[1];
  iVar13 = param_4[2];
  *(undefined1 *)(param_1 + 4) = 3;
  (**(code **)(iVar6 + 0x10))(param_4 + 3,iVar11,iVar13);
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x10);
  iVar6 = param_3[1];
  iVar11 = param_3[2];
LAB_006a3558:
                    /* WARNING: Could not recover jumptable at 0x006a3568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,iVar6,iVar11);
  return;
LAB_006a36a4:
  local_38 = *param_4;
  iStack_34 = param_4[1];
  iStack_30 = param_4[2];
  iStack_2c = param_4[3];
  iStack_28 = param_4[4];
  piVar12 = (int *)(iVar15 + uVar17 * 0x34);
  if (*piVar12 != 0) {
    FUN_01442274(param_2,piVar12[1]);
    uVar21 = param_2[10];
  }
  if (uVar21 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,uVar21,&DAT_018a63b4);
  }
  iVar6 = uVar17 * 0x34 + param_2[9];
  uVar4 = *(undefined1 *)(iVar6 + 0x1f);
  uVar3 = *(undefined2 *)(iVar6 + 0x1d);
  iVar11 = *(int *)(iVar6 + 0x10);
  iVar13 = *(int *)(iVar6 + 0x14);
  iVar14 = *(int *)(iVar6 + 0x18);
  *param_1 = *(int *)(iVar6 + 0xc);
  param_1[1] = iVar11;
  param_1[2] = iVar13;
  param_1[3] = iVar14;
  *(undefined2 *)((int)param_1 + 0x11) = uVar3;
  *(undefined1 *)((int)param_1 + 0x13) = uVar4;
  uVar4 = *(undefined1 *)(iVar6 + 0x1c);
  *(int *)(iVar6 + 0xc) = local_38;
  *(int *)(iVar6 + 0x10) = iStack_34;
  *(int *)(iVar6 + 0x14) = iStack_30;
  *(int *)(iVar6 + 0x18) = iStack_2c;
  *(int *)(iVar6 + 0x1c) = iStack_28;
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x10);
  iVar6 = param_3[1];
  iVar11 = param_3[2];
  goto LAB_006a3558;
}

