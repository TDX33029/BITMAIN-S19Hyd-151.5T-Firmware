// FUN_00982ac4 @ 00982ac4 size=1332 calls_out=9 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00982ac4(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined3 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  ushort *puVar15;
  undefined *puVar16;
  char *pcVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  uint local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_6c;
  uint local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 == 0) {
    iVar8 = FUN_00ab2820();
    uVar4 = *(ushort *)(param_2 + 0x34a);
    *(undefined4 *)(iVar8 + 0x2c0) = 0;
    local_108 = 0;
    puVar15 = (ushort *)(iVar8 + 0x34a);
    *puVar15 = 0;
    if (uVar4 != 0) {
      iVar20 = 0;
      iVar18 = 0;
      local_108 = 0;
      do {
        FUN_006666fc(&local_c0,*(undefined4 *)(param_2 + iVar20 + 0x2c8),
                     *(undefined4 *)(param_2 + iVar20 + 0x2cc));
        iVar21 = param_2 + local_108 * 0x40;
        if (*(int *)(iVar21 + 0x2c) == -0x80000000) {
          local_60 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_60,*(undefined4 *)(iVar21 + 0x30),*(undefined4 *)(iVar21 + 0x34));
        }
        FUN_00983180(&local_30,param_2 + iVar18 + 0x20);
        uVar5 = *(undefined3 *)(iVar21 + 0x38);
        if (*(int *)(param_2 + local_108 * 0x40) == 0) {
          local_50 = 0;
        }
        else {
          FUN_00ab8cac(&local_50,param_2 + iVar18);
        }
        local_c8 = CONCAT13(local_c8._3_1_,uVar5);
        local_100 = local_50;
        uStack_fc = uStack_4c;
        uStack_f8 = uStack_48;
        uStack_f4 = uStack_44;
        local_f0 = local_40;
        local_ec = uStack_3c;
        uStack_e8 = uStack_38;
        uStack_e4 = uStack_34;
        uVar11 = (uint)*puVar15;
        if (10 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                       &DAT_01d305b8);
        }
        *puVar15 = *puVar15 + 1;
        local_108 = local_108 + 1;
        piVar13 = (int *)(iVar8 + 0x2c4 + uVar11 * 0xc);
        iVar18 = iVar18 + 0x40;
        *piVar13 = local_c0;
        piVar13[1] = local_bc;
        piVar13[2] = local_b8;
        puVar19 = (undefined4 *)(iVar8 + uVar11 * 0x40);
        *puVar19 = local_50;
        puVar19[1] = uStack_4c;
        puVar19[2] = uStack_48;
        puVar19[3] = uStack_44;
        puVar19[4] = local_40;
        puVar19[5] = uStack_3c;
        puVar19[6] = uStack_38;
        puVar19[7] = uStack_34;
        puVar19[8] = local_30;
        puVar19[9] = uStack_2c;
        puVar19[10] = uStack_28;
        puVar19[0xb] = local_60;
        puVar19[0xc] = local_5c;
        puVar19[0xd] = local_58;
        puVar19[0xe] = local_c8;
        puVar19[0xf] = uStack_c4;
        iVar20 = iVar20 + 0xc;
      } while (local_108 < *(ushort *)(param_2 + 0x34a));
    }
    *param_1 = iVar8;
    param_1[1] = 0;
    param_1[2] = local_108;
  }
  else {
    FUN_00982ac4(&local_c0,*(undefined4 *)(param_2 + 0x350));
    uVar11 = local_bc;
    if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    iVar8 = thunk_FUN_01be5118(0x380);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x380);
    }
    puVar15 = (ushort *)(iVar8 + 0x34a);
    *puVar15 = 0;
    *(undefined4 *)(iVar8 + 0x2c0) = 0;
    *(int *)(iVar8 + 0x350) = local_c0;
    bVar23 = 0xfffffffe < local_bc;
    local_bc = local_bc + 1;
    if (bVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d305e8);
    }
    *(int *)(local_c0 + 0x2c0) = iVar8;
    *(undefined2 *)(local_c0 + 0x348) = 0;
    local_c0 = iVar8;
    if (*(ushort *)(param_2 + 0x34a) != 0) {
      iVar18 = 0;
      iVar21 = 0;
      uVar22 = 0;
      iVar20 = local_b8;
      do {
        iVar9 = param_2 + iVar21 * 3;
        FUN_006666fc(&local_60,*(undefined4 *)(iVar9 + 0x2c8),*(undefined4 *)(iVar9 + 0x2cc));
        iVar9 = param_2 + iVar21 * 0x10;
        if (*(int *)(iVar9 + 0x2c) == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_30,*(undefined4 *)(iVar9 + 0x30),*(undefined4 *)(iVar9 + 0x34));
        }
        FUN_00983180(&local_50,param_2 + iVar18 + 0x20);
        uVar1 = *(undefined1 *)(iVar9 + 0x38);
        uVar2 = *(undefined1 *)(iVar9 + 0x39);
        uVar3 = *(undefined1 *)(iVar9 + 0x3a);
        if (*(int *)(param_2 + iVar21 * 0x10) == 0) {
          local_100 = 0;
        }
        else {
          FUN_00ab8cac(&local_100,param_2 + iVar18);
        }
        uStack_84 = local_30;
        uStack_80 = uStack_2c;
        uStack_7c = uStack_28;
        local_90 = local_50;
        uStack_8c = uStack_4c;
        local_88 = uStack_48;
        local_78 = CONCAT31(CONCAT21(CONCAT11(local_78._3_1_,uVar3),uVar2),uVar1);
        local_b0 = local_100;
        uStack_ac = uStack_fc;
        uStack_a8 = uStack_f8;
        uStack_a4 = uStack_f4;
        local_a0 = local_f0;
        local_9c = local_ec;
        uStack_98 = uStack_e8;
        uStack_94 = uStack_e4;
        FUN_00982ac4(&local_6c,*(undefined4 *)(param_2 + iVar21 + 0x354),param_3 + -1);
        uVar7 = local_58;
        uVar6 = local_5c;
        uVar14 = local_60;
        iVar9 = local_64;
        if (local_6c == 0) {
          iVar10 = FUN_00ab2820();
          uVar12 = 0;
          *(undefined2 *)(iVar10 + 0x34a) = 0;
          *(undefined4 *)(iVar10 + 0x2c0) = 0;
        }
        else {
          iVar10 = local_6c;
          uVar12 = local_68;
        }
        if (uVar12 != uVar11) {
          uVar14 = 0x30;
          puVar16 = &DAT_01d305c8;
          pcVar17 = &DAT_00533a41;
LAB_00982fa8:
          local_b8 = iVar20;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar17,uVar14,puVar16);
        }
        uVar12 = (uint)*puVar15;
        if (10 < uVar12) {
          uVar14 = 0x20;
          pcVar17 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          puVar16 = &DAT_01d305d8;
          goto LAB_00982fa8;
        }
        uVar4 = (ushort)(uVar12 + 1);
        *puVar15 = uVar4;
        uVar22 = uVar22 + 1;
        iVar21 = iVar21 + 4;
        puVar19 = (undefined4 *)(iVar8 + 0x2c4 + uVar12 * 0xc);
        *puVar19 = uVar14;
        puVar19[1] = uVar6;
        puVar19[2] = uVar7;
        puVar19 = (undefined4 *)(iVar8 + uVar12 * 0x40);
        *puVar19 = local_b0;
        puVar19[1] = uStack_ac;
        puVar19[2] = uStack_a8;
        puVar19[3] = uStack_a4;
        puVar19[4] = local_a0;
        puVar19[5] = local_9c;
        puVar19[6] = uStack_98;
        puVar19[7] = uStack_94;
        puVar19[8] = local_90;
        puVar19[9] = uStack_8c;
        puVar19[10] = local_88;
        puVar19[0xb] = uStack_84;
        puVar19[0xc] = uStack_80;
        puVar19[0xd] = uStack_7c;
        puVar19[0xe] = local_78;
        puVar19[0xf] = uStack_74;
        ((int *)(iVar8 + 0x350))[uVar12 + 1] = iVar10;
        iVar18 = iVar18 + 0x40;
        *(ushort *)(iVar10 + 0x348) = uVar4;
        *(int *)(iVar10 + 0x2c0) = iVar8;
        iVar20 = iVar9 + iVar20 + 1;
      } while (uVar22 < *(ushort *)(param_2 + 0x34a));
      local_b8 = iVar20;
    }
    *param_1 = local_c0;
    param_1[1] = local_bc;
    param_1[2] = local_b8;
  }
  return;
}

