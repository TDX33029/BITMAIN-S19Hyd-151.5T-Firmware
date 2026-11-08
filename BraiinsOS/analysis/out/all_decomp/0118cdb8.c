// FUN_0118cdb8 @ 0118cdb8 size=1836 calls_out=11 calls_in=1
// strings: 

void FUN_0118cdb8(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uVar13 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  uStack_30 = FUN_0123ab30(uVar13,uVar10,&DAT_005680b8,4);
  uVar8 = (undefined4)((ulonglong)uStack_30 >> 0x20);
  piVar4 = (int *)uStack_30;
  if (*param_4 == '\x03') {
LAB_0118ce24:
    FUN_011cb128(param_1 + 1,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),piVar4,
                 uVar8,param_4);
    *param_1 = 1;
    return;
  }
  if (*param_4 != '\x04') {
    uStack_30 = FUN_0123ab30(uVar13,uVar10,&DAT_005680b8,4);
    piVar5 = (int *)uStack_30;
    do {
      iVar9 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar9 + 1;
    if (-1 < iVar9) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar9 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar9 + 1;
      if (-1 < iVar9) {
        local_38 = DAT_018da8b4;
        uStack_34 = DAT_018da8b8;
        local_50 = 6;
        local_84 = 0x4101;
        local_88 = &DAT_80000028;
        local_a8 = 1;
        local_4c = param_4;
        local_a4 = uStack_30;
        iVar9 = thunk_FUN_016d4a50(0x80);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar9,&local_a8,0x80);
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = iVar9;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar4,uVar8);
          return;
        }
        return;
      }
    }
    goto LAB_0118d50c;
  }
  iVar9 = *(int *)(param_4 + 0xc);
  param_4 = *(char **)(param_4 + 8);
  local_a4 = uStack_30;
  if (iVar9 == 1) {
    if (*param_4 == '\x03') goto LAB_0118ce24;
    do {
      iVar9 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar9 + 1;
    if (-1 < iVar9) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar9 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar9 + 1;
      if (-1 < iVar9) {
        local_38 = DAT_018da8b4;
        uStack_34 = DAT_018da8b8;
        local_50 = 6;
        local_84 = 0x4000;
        local_88 = &DAT_80000028;
        local_a8 = 1;
        local_4c = param_4;
        iVar9 = thunk_FUN_016d4a50(0x80);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar9,&local_a8,0x80);
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = iVar9;
        return;
      }
    }
    goto LAB_0118d50c;
  }
  if (iVar9 == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = 0;
    iVar9 = iVar9 * 0x18;
    do {
      if (*param_4 != '\x03') goto LAB_0118d078;
      bVar3 = FUN_012372e0(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
      if (bVar3 == 0) goto LAB_0118d130;
      bVar12 = bVar3 | bVar12;
      iVar9 = iVar9 + -0x18;
      param_4 = param_4 + 0x18;
    } while (iVar9 != 0);
  }
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar7 = piVar4;
  puVar11 = &DAT_018898a8;
  *(byte *)(puVar7 + 2) = bVar12;
  puVar7[1] = uVar8;
  goto LAB_0118d418;
LAB_0118d078:
  do {
    iVar9 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar9 + 1;
  if (iVar9 < 0) goto LAB_0118d50c;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar9 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar9 + 1;
  if (iVar9 < 0) goto LAB_0118d50c;
  local_38 = DAT_018da8b4;
  uStack_34 = DAT_018da8b8;
  local_50 = 6;
  local_84 = 0x4000;
  local_88 = &DAT_80000028;
  local_a8 = 1;
  local_4c = param_4;
  puVar11 = (undefined *)thunk_FUN_016d4a50(0x80);
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(puVar11,&local_a8,0x80);
  goto LAB_0118d3e4;
LAB_0118d130:
  do {
    iVar9 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar9 + 1;
  if (iVar9 < 0) {
LAB_0118d50c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118d50c);
    (*pcVar1)();
  }
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar9 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar9 + 1;
  uVar10 = DAT_018da8b8;
  piVar5 = DAT_018da8b4;
  if (iVar9 < 0) goto LAB_0118d50c;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa8);
  }
  local_118 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (local_118 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(local_118 + 1) = 0x79;
  *local_118 = 0x61727261;
  local_114 = 5;
  local_11c = 5;
  local_120 = CONCAT31(local_120._1_3_,3);
  local_100 = (undefined4 *)thunk_FUN_016d4a50(7);
  if (local_100 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,7);
  }
  local_fc = 7;
  *(undefined4 *)((int)local_100 + 3) = 0x6e61656c;
  local_104 = 7;
  *local_100 = 0x6c6f6f62;
  local_108 = CONCAT31(local_108._1_3_,3);
  local_e8 = (undefined4 *)thunk_FUN_016d4a50(7);
  if (local_e8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,7);
  }
  *(undefined4 *)((int)local_e8 + 3) = 0x72656765;
  local_f0 = CONCAT31(local_f0._1_3_,3);
  *local_e8 = 0x65746e69;
  local_e4 = 7;
  local_ec = 7;
  local_d0 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (local_d0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  local_d8 = CONCAT31(local_d8._1_3_,3);
  *local_d0 = 0x6c6c756e;
  local_cc = 4;
  local_d4 = 4;
  local_b8 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (local_b8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *(undefined2 *)(local_b8 + 1) = 0x7265;
  *local_b8 = 0x626d756e;
  local_b4 = 6;
  local_bc = 6;
  local_c0 = CONCAT31(local_c0._1_3_,3);
  local_a4._4_4_ = (undefined4 *)thunk_FUN_016d4a50(6);
  if (local_a4._4_4_ == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *(undefined2 *)(local_a4._4_4_ + 1) = 0x7463;
  *local_a4._4_4_ = 0x656a626f;
  local_9c = 6;
  local_a4._0_4_ = 6;
  local_a8 = CONCAT31(local_a8._1_3_,3);
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  puVar7[0x26] = puVar6;
  *(undefined2 *)(puVar6 + 1) = 0x676e;
  *puVar6 = 0x69727473;
  puVar7[0x25] = 6;
  puVar7[0x27] = 6;
  *(undefined1 *)(puVar7 + 0x24) = 3;
  *puVar7 = local_120;
  puVar7[1] = local_11c;
  puVar7[2] = local_118;
  puVar7[3] = local_114;
  puVar7[4] = uStack_110;
  puVar7[5] = uStack_10c;
  puVar7[6] = local_108;
  puVar7[7] = local_104;
  puVar7[8] = local_100;
  puVar7[9] = local_fc;
  puVar7[10] = uStack_f8;
  puVar7[0xb] = uStack_f4;
  puVar7[0xc] = local_f0;
  puVar7[0xd] = local_ec;
  puVar7[0xe] = local_e8;
  puVar7[0xf] = local_e4;
  puVar7[0x10] = uStack_e0;
  puVar7[0x11] = uStack_dc;
  puVar7[0x12] = local_d8;
  puVar7[0x13] = local_d4;
  puVar7[0x14] = local_d0;
  puVar7[0x15] = local_cc;
  puVar7[0x16] = uStack_c8;
  puVar7[0x17] = uStack_c4;
  puVar7[0x18] = local_c0;
  puVar7[0x19] = local_bc;
  puVar7[0x1a] = local_b8;
  puVar7[0x1b] = local_b4;
  puVar7[0x1c] = uStack_b0;
  puVar7[0x1d] = uStack_ac;
  puVar7[0x1e] = local_a8;
  puVar7[0x1f] = (undefined4)local_a4;
  puVar7[0x20] = local_a4._4_4_;
  puVar7[0x21] = local_9c;
  puVar7[0x22] = uStack_98;
  puVar7[0x23] = uStack_94;
  local_12c = 7;
  local_134 = 7;
  local_138[0] = 4;
  local_130 = puVar7;
  puVar11 = (undefined *)FUN_011f00b0(piVar4,uVar8,piVar4,uVar8,piVar5,uVar10,param_4,local_138);
  FUN_01164f34(local_138);
LAB_0118d3e4:
  puVar7 = (undefined4 *)0x0;
LAB_0118d418:
  *param_1 = 1;
  param_1[1] = puVar7;
  param_1[2] = puVar11;
  return;
}

