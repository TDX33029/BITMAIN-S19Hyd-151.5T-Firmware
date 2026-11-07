// FUN_01407ebc @ 01407ebc size=1204 calls_out=6 calls_in=1
// strings: 

void FUN_01407ebc(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  undefined1 local_54;
  undefined4 local_53;
  undefined4 local_4f;
  undefined3 uStack_4b;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined3 uStack_28;
  
  iVar6 = FUN_01441d3c(param_2);
  if (iVar6 != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Could not recover jumptable at 0x01407f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
    return;
  }
  uVar5 = FUN_0144195c(param_2,param_3);
  uVar2 = *(ushort *)(param_2 + 0xe);
  iVar14 = param_2[6];
  uVar17 = 0;
  uVar13 = param_2[7];
  uVar18 = param_2[10];
  iVar6 = param_2[9];
  uVar16 = (uint)(uVar2 & uVar5);
  do {
    do {
      uVar7 = uVar16;
      uVar16 = 0;
    } while (uVar13 <= uVar7);
    puVar8 = (ushort *)(iVar14 + uVar7 * 4);
    uVar16 = (uint)*puVar8;
    if (uVar16 == 0xffff) {
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        local_48 = 0;
        local_44._0_1_ = (undefined1)param_3[1];
      }
      else {
        (**(code **)*param_3)(&local_48,param_3 + 3,param_3[1],param_3[2]);
        local_30 = CONCAT13((undefined1)iStack_40,local_44._1_3_);
        local_2c._0_3_ = (undefined3)((uint)iStack_40 >> 8);
        local_2c._3_1_ = (undefined1)iStack_3c;
        uStack_28 = (undefined3)((uint)iStack_3c >> 8);
      }
      local_53 = local_30;
      local_4f = local_2c;
      uStack_4b = uStack_28;
      iStack_40 = param_4[2];
      iStack_3c = param_4[3];
      iStack_38 = param_4[4];
      local_58 = local_48;
      local_54 = (undefined1)local_44;
      local_48 = *param_4;
      local_44 = param_4[1];
      iVar6 = FUN_0145da44(param_2,uVar5,&local_58);
      if (iVar6 != 0) {
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
      if ((uint)param_2[7] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_2[7],&DAT_018a6354);
      }
      puVar10 = (undefined2 *)(param_2[6] + uVar7 * 4);
      *puVar10 = (short)uVar18;
      puVar10[1] = uVar5;
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    uVar3 = puVar8[1];
    if ((uVar7 - (uVar2 & uVar3) & (uint)uVar2) < uVar17) {
      iVar14 = *param_2;
      iVar6 = param_2[1];
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        local_44._0_1_ = (undefined1)param_3[1];
        local_48 = 0;
      }
      else {
        (**(code **)*param_3)(&local_48,param_3 + 3,param_3[1],param_3[2]);
        local_30 = CONCAT13((undefined1)iStack_40,local_44._1_3_);
        local_2c._0_3_ = (undefined3)((uint)iStack_40 >> 8);
        local_2c._3_1_ = (undefined1)iStack_3c;
        uStack_28 = (undefined3)((uint)iStack_3c >> 8);
      }
      local_53 = local_30;
      local_4f = local_2c;
      uStack_4b = uStack_28;
      iStack_40 = param_4[2];
      iStack_3c = param_4[3];
      iStack_38 = param_4[4];
      local_58 = local_48;
      local_54 = (undefined1)local_44;
      local_48 = *param_4;
      local_44 = param_4[1];
      iVar9 = FUN_0145da44(param_2,uVar5,&local_58);
      if (iVar9 != 0) {
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
      iVar9 = param_2[6];
      uVar13 = 0;
      uVar12 = param_2[7];
      uVar16 = uVar18 & 0xffff;
      while( true ) {
        do {
          uVar18 = uVar7;
          uVar7 = 0;
        } while (uVar12 <= uVar18);
        puVar8 = (ushort *)(iVar9 + uVar18 * 4);
        uVar2 = *puVar8;
        if (uVar2 == 0xffff) break;
        *puVar8 = (ushort)uVar16;
        uVar3 = puVar8[1];
        uVar13 = uVar13 + 1;
        puVar8[1] = uVar5;
        uVar16 = (uint)uVar2;
        uVar7 = uVar18 + 1;
        uVar5 = uVar3;
      }
      puVar8[1] = uVar5;
      *puVar8 = (ushort)uVar16;
      if ((uVar17 >> 9 != 0 && (iVar14 != 2 || iVar6 != 0) || 0x7f < uVar13) &&
          (*param_2 == 0 && param_2[1] == 0)) {
        *param_2 = 1;
        param_2[1] = 0;
      }
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if (uVar3 == uVar5) {
      if (uVar18 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar18,&DAT_018a6344);
      }
      iVar9 = uVar16 * 0x34 + iVar6;
      if ((*(int *)(iVar9 + 0x20) != 0) != (*param_3 == 0)) {
        if (*(int *)(iVar9 + 0x20) == 0) {
          if (*(char *)(iVar9 + 0x24) == (char)param_3[1]) {
LAB_01408034:
            local_48 = *param_4;
            local_44 = param_4[1];
            iStack_40 = param_4[2];
            iStack_3c = param_4[3];
            iStack_38 = param_4[4];
            piVar11 = (int *)(iVar6 + uVar16 * 0x34);
            if (*piVar11 != 0) {
              FUN_01442274(param_2,piVar11[1]);
              uVar18 = param_2[10];
            }
            if (uVar18 <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar16,uVar18,&DAT_018a63b4);
            }
            iVar6 = uVar16 * 0x34 + param_2[9];
            uVar1 = *(undefined1 *)(iVar6 + 0x1f);
            uVar4 = *(undefined2 *)(iVar6 + 0x1d);
            iVar14 = *(int *)(iVar6 + 0x10);
            iVar9 = *(int *)(iVar6 + 0x14);
            iVar15 = *(int *)(iVar6 + 0x18);
            *param_1 = *(int *)(iVar6 + 0xc);
            param_1[1] = iVar14;
            param_1[2] = iVar9;
            param_1[3] = iVar15;
            *(undefined2 *)((int)param_1 + 0x11) = uVar4;
            *(undefined1 *)((int)param_1 + 0x13) = uVar1;
            uVar1 = *(undefined1 *)(iVar6 + 0x1c);
            *(int *)(iVar6 + 0xc) = local_48;
            *(int *)(iVar6 + 0x10) = local_44;
            *(int *)(iVar6 + 0x14) = iStack_40;
            *(int *)(iVar6 + 0x18) = iStack_3c;
            *(int *)(iVar6 + 0x1c) = iStack_38;
            *(undefined1 *)(param_1 + 4) = uVar1;
            return;
          }
        }
        else if ((*(int *)(iVar9 + 0x28) == param_3[2]) &&
                (iVar9 = thunk_FUN_016dd50a(*(undefined4 *)(iVar9 + 0x24),param_3[1]), iVar9 == 0))
        goto LAB_01408034;
      }
    }
    uVar17 = uVar17 + 1;
    uVar16 = uVar7 + 1;
  } while( true );
}

