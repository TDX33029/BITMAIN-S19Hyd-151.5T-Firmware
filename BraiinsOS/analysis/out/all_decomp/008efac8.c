// FUN_008efac8 @ 008efac8 size=3340 calls_out=19 calls_in=1
// strings: assertion failed: prev.ref_count() >= 1 | assertion failed: prev.ref_count() >= 1

void FUN_008efac8(undefined4 param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  int **ppiVar12;
  int extraout_r2;
  undefined4 uVar13;
  undefined1 uVar14;
  int **ppiVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint *puVar23;
  undefined4 uVar24;
  int *piVar25;
  uint *local_c24;
  uint local_c20;
  int local_c1c;
  undefined4 local_c18;
  uint *local_c14;
  int *local_c10;
  undefined1 local_c0c;
  int *local_b40;
  undefined1 local_b24;
  uint *local_a30;
  undefined1 *local_a2c;
  undefined1 auStack_a28 [496];
  int *local_838;
  undefined1 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 *local_650;
  undefined1 auStack_648 [488];
  int **local_460;
  uint *local_45c;
  uint **local_458;
  uint *local_454 [3];
  int *local_448;
  int local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 auStack_434 [20];
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  uint local_3f4;
  int local_3f0;
  int local_3ec;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined1 *local_3c0;
  int **local_3b8;
  uint *puStack_3b4;
  uint **local_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined1 *local_388;
  int **local_380;
  uint *local_37c;
  uint **local_378;
  undefined1 auStack_370 [152];
  int *local_2d8;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_238;
  uint *local_234;
  uint *local_218 [123];
  uint *local_2c;
  undefined1 uStack_25;
  
  local_440 = thunk_FUN_016d4a50(0x110);
  if (local_440 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x110);
  }
  *(undefined4 *)(local_440 + 0x100) = 0;
  *(undefined4 *)(local_440 + 0x104) = 0;
  *(undefined4 *)(local_440 + 0x108) = 0;
  *(undefined4 *)(local_440 + 0x10c) = 0;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d4 = local_3d4 & 0xffffff00;
  local_3cc = 1;
  local_400 = 0;
  local_418 = 0;
  local_420 = 0;
  local_43c = 0;
  local_45c = (uint *)&DAT_00000001;
  local_460 = (int **)&DAT_00000001;
  local_3c8 = 1;
  local_3fc = 0;
  local_3f8 = 0;
  local_3f4 = 0;
  local_3c4 = 0;
  local_3e4 = 0;
  local_838 = (int *)0x0;
  local_3d0 = 2;
  local_3f0 = local_440;
  local_3ec = local_440;
  iVar6 = FUN_016d51b0(&local_838,0x20,0xa0);
  piVar25 = local_838;
  if ((iVar6 != 0) || (local_838 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  puVar7 = (undefined4 *)((uint)&local_460 | 0x10);
  FUN_016dd1aa(local_838,&local_460,0xa0);
  do {
    iVar6 = *piVar25;
    bVar2 = (bool)hasExclusiveAccess(piVar25);
  } while (!bVar2);
  *piVar25 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_008f07dc;
  puVar8 = (undefined1 *)param_3[2];
  uVar22 = *param_3;
  uVar24 = param_3[1];
  uVar13 = param_3[8];
  uVar18 = param_3[9];
  puVar16 = (undefined1 *)param_3[10];
  local_82c = 0;
  local_834 = 0;
  local_838 = (int *)0x0;
  local_830 = 2;
  FUN_015f3b0c(&local_460,1);
  ppuVar4 = local_458;
  puVar23 = local_45c;
  ppiVar12 = local_460;
  FUN_015f3b0c(&local_460,1);
  ppuVar5 = local_458;
  puVar10 = local_45c;
  ppiVar15 = local_460;
  FUN_016dd1aa(&local_458,&local_838,0x60);
  if (puVar16 == &DAT_3b9aca00) {
    uVar13 = 5;
  }
  local_3b8 = ppiVar12;
  puStack_3b4 = puVar23;
  if (puVar16 == &DAT_3b9aca00) {
    puVar16 = (undefined1 *)0x0;
    uVar18 = 0;
  }
  if (puVar8 == &DAT_3b9aca00) {
    uVar22 = 5;
  }
  if (puVar8 == &DAT_3b9aca00) {
    uVar24 = 0;
  }
  local_3b0 = ppuVar4;
  local_388 = (undefined1 *)0x0;
  if (puVar8 != &DAT_3b9aca00) {
    local_388 = puVar8;
  }
  local_378 = ppuVar5;
  local_380 = ppiVar15;
  local_3f0 = 0;
  local_3ec = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3a0 = 0;
  local_39c = 0;
  local_3f4 = local_3f4 & 0xffffff00;
  local_3f8 = 0;
  local_3dc = local_3dc & 0xffffff00;
  local_3e0 = 0;
  local_3a4 = 0;
  local_3a8 = 0;
  local_37c = puVar10;
  local_45c = (uint *)&DAT_00000001;
  local_460 = (int **)&DAT_00000001;
  local_3c8 = uVar13;
  local_3c4 = uVar18;
  local_3c0 = puVar16;
  local_390 = uVar22;
  uStack_38c = uVar24;
  FUN_016dd1aa(auStack_370,param_3,0x98);
  local_2d8 = piVar25;
  piVar9 = (int *)thunk_FUN_016d4a50(400);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,400);
  }
  FUN_016dd1aa(piVar9,&local_460,400);
  do {
    iVar6 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_008f07dc;
  do {
    do {
      iVar6 = DAT_018d9204;
      local_c20 = DAT_018d9200;
      local_c1c = DAT_018d9204;
      uVar17 = DAT_018d9200 + 1;
      iVar19 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar17;
    DAT_018d9204 = iVar19;
  } while (bVar2 && bVar3);
  local_a2c = &uStack_25;
  local_a30 = &local_c20;
  local_b24 = 0;
  local_b40 = piVar25;
  local_c0c = 0;
  local_c10 = piVar9;
  iVar6 = thunk_FUN_016de0ee(0,iVar6,0x40);
  puVar23 = (uint *)(iVar6 + extraout_r2);
  local_c18 = param_1;
  local_c14 = param_2;
  if ((char)puVar23[0xe] != '\x01') {
    if ((char)puVar23[0xe] == '\x02') {
      uVar14 = 1;
      FUN_008f5814(&local_c18);
      goto LAB_008efe24;
    }
    FUN_015e8e6c(puVar23,FUN_01626eac);
    *(undefined1 *)(puVar23 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_a28,&local_c18,0x1f0);
  if (0x7ffffffe < *puVar23) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_008f07dc;
  }
  *puVar23 = *puVar23 + 1;
  uVar17 = puVar23[1];
  FUN_016dd1aa(&local_838,&local_c18,0x1f0);
  if (uVar17 == 2) {
    FUN_008f5814(&local_838);
    uVar14 = 0;
    *puVar23 = *puVar23 - 1;
LAB_008efe24:
    local_838 = (int *)CONCAT31(local_838._1_3_,uVar14);
    local_45c = (uint *)&LAB_0164eda0;
    local_460 = &local_838;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_460,&DAT_01866b84);
  }
  FUN_016dd1aa(auStack_648,&local_c18,0x1e8);
  ppiVar12 = (int **)*local_650;
  puVar10 = (uint *)local_650[1];
  if ((uVar17 & 1) == 0) {
    piVar25 = (int *)puVar23[2];
    do {
      iVar6 = *piVar25;
      bVar2 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar2);
    *piVar25 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_008f07dc;
    piVar11 = (int *)piVar25[0x8e];
    if (piVar11 == (int *)0x0) {
      iVar6 = 0;
      puVar21 = puVar23;
    }
    else {
      do {
        iVar6 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_008f07dc;
      iVar6 = piVar25[0x8e];
      puVar21 = (uint *)piVar25[0x8f];
    }
    FUN_016dd1aa((uint)local_218 | 4,auStack_648,0x1e8);
    local_458 = (uint **)&PTR_FUN_01865434;
    local_460 = (int **)0xcc;
    puVar7[4] = ppiVar12;
    puVar7[5] = puVar10;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_45c = (uint *)0x0;
    local_438 = 0;
    local_448 = piVar25;
    FUN_016dd1aa(auStack_434,local_218,0x1ec);
    local_240 = 0;
    local_244 = 0;
    local_248 = 0;
    local_2c = (uint *)0x0;
    local_238 = iVar6;
    local_234 = puVar21;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x240);
    puVar21 = local_2c;
    if ((iVar6 != 0) || (local_2c == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x240);
    }
    FUN_016dd1aa(local_2c,&local_460,0x240);
    uVar17 = piVar25[0x47];
    puVar21[4] = piVar25[0x46];
    puVar21[5] = uVar17;
    puVar20 = *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x24));
    ppiVar15 = (int **)(piVar25[0x40] + (piVar25[0x45] & (uint)puVar20) * 0xc);
    if (*(char *)ppiVar15 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(ppiVar15);
      if (!bVar2) goto LAB_008f02c8;
      *(char *)ppiVar15 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008f02c8:
      FUN_01280da8(ppiVar15);
    }
    FUN_0128236c(ppiVar15);
    DataMemoryBarrier(0xb);
    if ((char)piVar25[0x48] == '\0') {
      local_458 = (uint **)(piVar25 + 0x44);
      local_45c = (uint *)(piVar25 + 0x42);
      local_2c = *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x24));
      local_460 = ppiVar15;
      local_454[0] = puVar20;
      if (puVar20 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_2c,local_454,0);
      }
      puVar20 = (uint *)ppiVar15[1];
      local_218[0] = puVar21;
      if (puVar20 == puVar21) {
        FUN_010e0898(ppiVar15 + 1,local_218,&DAT_018ac72c);
        goto LAB_008f07dc;
      }
      *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x1c) + 4) = puVar20;
      *(undefined4 *)((int)puVar21 + *(int *)(puVar21[2] + 0x1c)) = 0;
      if (puVar20 != (uint *)0x0) {
        *(uint **)((int)puVar20 + *(int *)(puVar20[2] + 0x1c)) = puVar21;
      }
      ppiVar15[1] = (int *)puVar21;
      if (ppiVar15[2] == (int *)0x0) {
        ppiVar15[2] = (int *)puVar21;
      }
      do {
        uVar17 = *local_45c;
        bVar2 = (bool)hasExclusiveAccess(local_45c);
      } while (!bVar2);
      *local_45c = uVar17 + 1;
      piVar25[0x43] = piVar25[0x43] + (uint)(0xfffffffe < uVar17);
      do {
        bVar2 = (bool)hasExclusiveAccess(local_458);
      } while (!bVar2);
      *local_458 = (uint *)((int)*local_458 + 1);
      FUN_01282570(ppiVar15);
      if (*(char *)ppiVar15 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppiVar15);
          if (bVar2) {
            *(char *)ppiVar15 = '\0';
            goto LAB_008f0618;
          }
        } while (*(char *)ppiVar15 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppiVar15);
LAB_008f0618:
      puVar20 = puVar21;
    }
    else {
      FUN_01282570(ppiVar15);
      if (*(char *)ppiVar15 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppiVar15);
          if (bVar2) {
            *(char *)ppiVar15 = '\0';
            goto LAB_008f0330;
          }
        } while (*(char *)ppiVar15 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppiVar15);
LAB_008f0330:
      (**(code **)(puVar21[2] + 0x18))(puVar21);
      DataMemoryBarrier(0xb);
      do {
        uVar17 = *puVar21;
        bVar2 = (bool)hasExclusiveAccess(puVar21);
      } while (!bVar2);
      *puVar21 = uVar17 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar17 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      puVar20 = (uint *)0x0;
      if ((uVar17 & 0xffffffc0) == 0x40) {
        (**(code **)(puVar21[2] + 8))(puVar21);
      }
    }
    local_460 = ppiVar12;
    local_45c = puVar10;
    if (piVar25[0x8c] != 0) {
      (**(code **)(piVar25[0x8d] + 0x14))
                (piVar25[0x8c] + (*(int *)(piVar25[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_460);
    }
    if (puVar20 != (uint *)0x0) {
      FUN_01659ec0(puVar23[2],puVar20);
    }
  }
  else {
    piVar25 = (int *)puVar23[2];
    do {
      iVar6 = *piVar25;
      bVar2 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar2);
    *piVar25 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_008f07dc;
    piVar11 = (int *)piVar25[0x5c];
    if (piVar11 == (int *)0x0) {
      iVar6 = 0;
      local_c24 = param_2;
    }
    else {
      do {
        iVar6 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_008f07dc;
      iVar6 = piVar25[0x5c];
      local_c24 = (uint *)piVar25[0x5d];
    }
    FUN_016dd1aa((uint)local_218 | 4,auStack_648,0x1e8);
    local_458 = (uint **)&PTR_LAB_0186540c;
    local_460 = (int **)0xcc;
    puVar7[4] = ppiVar12;
    puVar7[5] = puVar10;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_45c = (uint *)0x0;
    local_438 = 0;
    local_448 = piVar25;
    FUN_016dd1aa(auStack_434,local_218,0x1ec);
    local_234 = local_c24;
    local_240 = 0;
    local_244 = 0;
    local_248 = 0;
    local_2c = (uint *)0x0;
    local_238 = iVar6;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x240);
    puVar21 = local_2c;
    if ((iVar6 != 0) || (local_2c == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x240);
    }
    FUN_016dd1aa(local_2c,&local_460,0x240);
    uVar17 = piVar25[0x1b];
    puVar21[4] = piVar25[0x1a];
    puVar21[5] = uVar17;
    puVar20 = *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x24));
    ppiVar15 = (int **)(piVar25[0x14] + (piVar25[0x19] & (uint)puVar20) * 0xc);
    if (*(char *)ppiVar15 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(ppiVar15);
      if (!bVar2) goto LAB_008f01f4;
      *(char *)ppiVar15 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008f01f4:
      FUN_01280da8(ppiVar15);
    }
    FUN_0128236c(ppiVar15);
    DataMemoryBarrier(0xb);
    if ((char)piVar25[0x1c] == '\0') {
      local_458 = (uint **)(piVar25 + 0x18);
      local_45c = (uint *)(piVar25 + 0x16);
      local_2c = *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x24));
      local_460 = ppiVar15;
      local_454[0] = puVar20;
      if (puVar20 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_2c,local_454,0);
      }
      puVar20 = (uint *)ppiVar15[1];
      local_218[0] = puVar21;
      if (puVar20 == puVar21) {
        FUN_010e0898(ppiVar15 + 1,local_218,&DAT_018ac72c);
LAB_008f07dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x8f07dc);
        (*pcVar1)();
      }
      *(uint **)((int)puVar21 + *(int *)(puVar21[2] + 0x1c) + 4) = puVar20;
      *(undefined4 *)((int)puVar21 + *(int *)(puVar21[2] + 0x1c)) = 0;
      if (puVar20 != (uint *)0x0) {
        *(uint **)((int)puVar20 + *(int *)(puVar20[2] + 0x1c)) = puVar21;
      }
      ppiVar15[1] = (int *)puVar21;
      if (ppiVar15[2] == (int *)0x0) {
        ppiVar15[2] = (int *)puVar21;
      }
      do {
        uVar17 = *local_45c;
        bVar2 = (bool)hasExclusiveAccess(local_45c);
      } while (!bVar2);
      *local_45c = uVar17 + 1;
      piVar25[0x17] = piVar25[0x17] + (uint)(0xfffffffe < uVar17);
      do {
        bVar2 = (bool)hasExclusiveAccess(local_458);
      } while (!bVar2);
      *local_458 = (uint *)((int)*local_458 + 1);
      FUN_01282570(ppiVar15);
      if (*(char *)ppiVar15 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppiVar15);
          if (bVar2) {
            *(char *)ppiVar15 = '\0';
            goto LAB_008f049c;
          }
        } while (*(char *)ppiVar15 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppiVar15);
LAB_008f049c:
      puVar20 = puVar21;
    }
    else {
      FUN_01282570(ppiVar15);
      if (*(char *)ppiVar15 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppiVar15);
          if (bVar2) {
            *(char *)ppiVar15 = '\0';
            goto LAB_008f0258;
          }
        } while (*(char *)ppiVar15 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppiVar15);
LAB_008f0258:
      (**(code **)(puVar21[2] + 0x18))();
      DataMemoryBarrier(0xb);
      do {
        uVar17 = *puVar21;
        bVar2 = (bool)hasExclusiveAccess(puVar21);
      } while (!bVar2);
      *puVar21 = uVar17 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar17 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      puVar20 = (uint *)0x0;
      if ((uVar17 & 0xffffffc0) == 0x40) {
        (**(code **)(puVar21[2] + 8))(puVar21);
      }
    }
    local_460 = ppiVar12;
    local_45c = puVar10;
    if (piVar25[0x5a] != 0) {
      (**(code **)(piVar25[0x5b] + 0x14))
                (piVar25[0x5a] + (*(int *)(piVar25[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_460);
    }
    if (puVar20 != (uint *)0x0) {
      local_218[0] = (uint *)((uint)local_218[0] & 0xffffff00);
      local_458 = local_218;
      local_460 = (int **)(piVar25 + 2);
      local_45c = puVar20;
      FUN_0164511c(&local_460);
    }
  }
  *puVar23 = *puVar23 - 1;
  if (*puVar21 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(puVar21);
    if (bVar2) {
      *puVar21 = 0x84;
      goto LAB_008f06b4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(puVar21[2] + 0x10))(puVar21);
LAB_008f06b4:
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar7 = 1;
  puVar7[1] = 1;
  puVar7[2] = piVar9;
  return;
}

