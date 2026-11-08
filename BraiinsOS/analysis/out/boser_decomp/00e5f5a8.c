// FUN_00e5f5a8 @ 00e5f5a8 size=1708 calls_out=14 calls_in=3
// strings: 

uint FUN_00e5f5a8(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 local_1efc;
  undefined4 local_1ef8;
  undefined4 uStack_1ef4;
  undefined4 uStack_1ef0;
  undefined4 uStack_1eec;
  undefined4 local_1ee8;
  undefined4 uStack_1ee4;
  int *piStack_1ee0;
  undefined4 uStack_1edc;
  undefined4 uStack_1ed8;
  undefined4 local_1ed0;
  undefined4 uStack_1ecc;
  undefined4 uStack_1ec8;
  undefined4 uStack_1ec4;
  undefined4 uStack_1ec0;
  undefined4 uStack_1ebc;
  int *piStack_1eb8;
  undefined4 uStack_1eb4;
  undefined4 uStack_1eb0;
  uint local_1ea8;
  int local_1ea4;
  undefined1 auStack_1ea0 [256];
  int *local_1da0;
  uint local_1d9c;
  int *local_1d98;
  undefined *local_1d94;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  undefined4 uStack_1d88;
  undefined4 uStack_1d84;
  undefined4 uStack_1d80;
  undefined4 uStack_1d7c;
  int *piStack_1d78;
  undefined4 uStack_1d74;
  undefined4 uStack_1d70;
  undefined2 local_1d6c;
  int local_1d68;
  undefined4 local_1d64;
  undefined4 local_1d60;
  undefined4 local_1d50;
  undefined1 local_1d4c;
  uint *local_1a60;
  undefined1 *local_1a5c;
  undefined4 local_1a58;
  undefined4 uStack_1a54;
  undefined4 uStack_1a50;
  undefined4 local_1610;
  undefined4 uStack_160c;
  undefined4 uStack_1608;
  undefined4 *local_11d0;
  undefined1 auStack_11c8 [1088];
  undefined1 auStack_d88 [1096];
  int *local_940;
  int iStack_93c;
  undefined **local_938;
  int *local_928;
  undefined4 local_918;
  undefined1 auStack_914 [1092];
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  int *local_4c0;
  int local_4bc;
  undefined1 auStack_490 [1096];
  uint local_48;
  undefined1 auStack_41 [29];
  
  local_1efc = param_2;
  if (*(short *)(param_1 + 0x3c) != 1) {
    FUN_005faf6c(&local_1efc);
    return 0;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x3e);
  puVar15 = (undefined4 *)((uint)&local_940 | 0x10);
  piVar11 = *(int **)(*(int *)(param_1 + 0x40) + 0x10);
  do {
    iVar6 = *piVar11;
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = iVar6 + 1;
  if (-1 < iVar6) {
    if (*(int *)(param_1 + 0x18) == -0x80000000) {
      local_1a58 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_1a58,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x24) == -0x80000000) {
      local_1610 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_1610,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
    if (*(int *)(param_1 + 0x30) == -0x80000000) {
      local_940 = (int *)0x80000000;
    }
    else {
      FUN_006666fc(&local_940,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    }
    local_1ef8 = local_1a58;
    uStack_1ef4 = uStack_1a54;
    uStack_1ef0 = uStack_1a50;
    uStack_1eec = local_1610;
    local_1ee8 = uStack_160c;
    uStack_1ee4 = uStack_1608;
    piStack_1ee0 = local_940;
    uStack_1edc = iStack_93c;
    uStack_1ed8 = local_938;
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 8);
    uVar16 = *(undefined4 *)(param_1 + 0x10);
    local_1ed0 = local_1a58;
    uStack_1ecc = uStack_1a54;
    uStack_1ec8 = uStack_1a50;
    uStack_1ec4 = local_1610;
    uStack_1ec0 = uStack_160c;
    uStack_1ebc = uStack_1608;
    piStack_1eb8 = local_940;
    uStack_1eb4 = iStack_93c;
    uStack_1eb0 = local_938;
    piVar13 = *(int **)(param_1 + 0x44);
    do {
      iVar8 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar8 + 1;
    if (-1 < iVar8) {
      piVar12 = piVar13 + 0x29;
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = *piVar12 + 1;
      do {
        do {
          iVar8 = DAT_01d50474;
          local_1ea8 = DAT_01d50470;
          local_1ea4 = DAT_01d50474;
          uVar9 = DAT_01d50470 + 1;
          iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
          bVar3 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar3);
        bVar3 = DAT_01d50470 == 0;
        bVar4 = DAT_01d50474 == 0;
        DAT_01d50470 = uVar9;
        DAT_01d50474 = iVar10;
      } while (bVar3 && bVar4);
      uStack_1d90 = local_1a58;
      uStack_1d8c = uStack_1a54;
      uStack_1d88 = uStack_1a50;
      uStack_1d84 = local_1610;
      uStack_1d80 = uStack_160c;
      uStack_1d7c = uStack_1608;
      piStack_1d78 = local_940;
      uStack_1d74 = iStack_93c;
      uStack_1d70 = local_938;
      local_1d94 = &DAT_01c13470;
      local_1d9c = piVar13[0x28] & 0xfffffffe;
      local_1a5c = auStack_41;
      local_1a60 = &local_1ea8;
      local_1d4c = 0;
      local_1da0 = piVar13;
      local_1d98 = piVar11;
      local_1d6c = uVar2;
      local_1d68 = iVar6;
      local_1d64 = uVar7;
      iVar10 = thunk_FUN_01bee35a();
      puVar14 = (uint *)(iVar10 + 0x20);
      local_1d60 = uVar16;
      local_1d50 = param_2;
      if (*(char *)(iVar10 + 0x58) == '\x01') goto LAB_00e5f874;
      if (*(char *)(iVar10 + 0x58) != '\x02') goto LAB_00e5f85c;
      FUN_007a5b74(auStack_1ea0);
      uVar5 = 1;
      while( true ) {
        local_940 = (int *)CONCAT31(local_940._1_3_,uVar5);
        FUN_007a3dd4(&local_940);
LAB_00e5f85c:
        FUN_019a2bcc(puVar14,&LAB_019efb68);
        *(undefined1 *)(iVar10 + 0x58) = 1;
LAB_00e5f874:
        FUN_01bed4e2(&local_1a58,auStack_1ea0,0x448);
        if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d2e14c);
        }
        *puVar14 = *puVar14 + 1;
        uVar9 = *(uint *)(iVar10 + 0x24);
        FUN_01bed4e2(&local_1610,auStack_1ea0,0x448);
        if (uVar9 != 2) break;
        FUN_007a5b74(&local_1610);
        *puVar14 = *puVar14 - 1;
        uVar5 = 0;
      }
      FUN_01bed4e2(auStack_11c8,auStack_1ea0,0x440);
      piVar11 = (int *)*local_11d0;
      uVar7 = local_11d0[1];
      if ((uVar9 & 1) == 0) {
        piVar13 = *(int **)(iVar10 + 0x28);
        do {
          iVar6 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar6 + 1;
        if (-1 < iVar6) {
          piVar12 = (int *)piVar13[0x82];
          if (piVar12 != (int *)0x0) {
            do {
              iVar6 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar6 + 1;
            if (iVar6 < 0) goto LAB_00e5fc34;
            iVar8 = piVar13[0x83];
          }
          FUN_01bed4e2((uint)auStack_490 | 4,auStack_11c8,0x440);
          local_918 = 0;
          FUN_01bed4e2(auStack_914,auStack_490,0x444);
          local_938 = &PTR_FUN_01c094c0;
          puVar15[4] = piVar11;
          puVar15[5] = uVar7;
          *puVar15 = 0;
          puVar15[1] = 0;
          local_940 = (int *)0xcc;
          iStack_93c = 0;
          local_4d0 = 0;
          local_4cc = 0;
          local_4c8 = 0;
          local_48 = 0;
          local_928 = piVar13;
          local_4c0 = piVar12;
          local_4bc = iVar8;
          iVar6 = FUN_01be5878(&local_48,0x20,0x4a0);
          uVar9 = local_48;
          if ((iVar6 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x4a0);
          }
          FUN_01bed4e2(local_48,&local_940,0x4a0);
          iVar6 = FUN_00798220(piVar13 + 0x40,uVar9,uVar9);
          local_940 = piVar11;
          iStack_93c = uVar7;
          if (piVar13[0x80] != 0) {
            (**(code **)(piVar13[0x81] + 0x14))
                      (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,
                       &local_940);
          }
          if (iVar6 != 0) {
            FUN_019dc904(*(undefined4 *)(iVar10 + 0x28),iVar6);
          }
          goto LAB_00e5fbf0;
        }
      }
      else {
        piVar13 = *(int **)(iVar10 + 0x28);
        do {
          iVar8 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar8 + 1;
        if (-1 < iVar8) {
          piVar12 = (int *)piVar13[0x50];
          if (piVar12 != (int *)0x0) {
            do {
              iVar6 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar6 + 1;
            if (iVar6 < 0) goto LAB_00e5fc34;
            iVar6 = piVar13[0x51];
          }
          FUN_01bed4e2((uint)auStack_d88 | 4,auStack_11c8,0x440);
          local_918 = 0;
          FUN_01bed4e2(auStack_914,auStack_d88,0x444);
          puVar15[4] = piVar11;
          puVar15[5] = uVar7;
          *puVar15 = 0;
          puVar15[1] = 0;
          local_940 = (int *)0xcc;
          iStack_93c = 0;
          local_938 = (undefined **)&DAT_01c094e8;
          local_4d0 = 0;
          local_4cc = 0;
          local_4c8 = 0;
          local_48 = 0;
          local_928 = piVar13;
          local_4c0 = piVar12;
          local_4bc = iVar6;
          iVar6 = FUN_01be5878(&local_48,0x20,0x4a0);
          uVar9 = local_48;
          if ((iVar6 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x4a0);
          }
          FUN_01bed4e2(local_48,&local_940,0x4a0);
          iVar6 = FUN_007984a4(piVar13 + 0x14,uVar9,uVar9);
          if (piVar13[0x4e] != 0) {
            local_940 = piVar11;
            iStack_93c = uVar7;
            (**(code **)(piVar13[0x4f] + 0x14))
                      (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                       &local_940);
          }
          if (iVar6 != 0) {
            local_48 = local_48 & 0xffffff00;
            local_940 = piVar13 + 2;
            iStack_93c = iVar6;
            local_938 = (undefined **)&local_48;
            FUN_019ee860(&local_940);
          }
LAB_00e5fbf0:
          *puVar14 = *puVar14 - 1;
          return uVar9;
        }
      }
    }
  }
LAB_00e5fc34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xe5fc34);
  (*pcVar1)();
}

