// FUN_01a34fbc @ 01a34fbc size=1328 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01a34fbc(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint local_528;
  int local_524;
  undefined1 auStack_520 [32];
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined1 local_4c2;
  uint *local_480;
  undefined1 *local_47c;
  undefined1 auStack_478 [168];
  undefined1 auStack_3d0 [160];
  undefined4 *local_330;
  undefined1 auStack_328 [160];
  undefined1 auStack_288 [168];
  int *local_1e0;
  int local_1dc;
  int **local_1d8;
  int *local_1c8;
  undefined4 local_1b8;
  undefined1 auStack_1b4 [164];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int *local_100;
  uint local_fc;
  undefined1 auStack_d0 [164];
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2b300);
  }
  puVar6 = (undefined4 *)((uint)&local_1e0 | 0x10);
  uVar7 = param_1[2];
  local_500 = *param_1;
  local_4fc = param_1[1];
  uVar15 = param_1[4];
  local_4c8 = param_1[5];
  do {
    do {
      local_528 = DAT_01d50470;
      local_524 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar13;
  } while (bVar2 && bVar3);
  local_47c = &uStack_25;
  local_480 = &local_528;
  local_4c2 = 0;
  uVar16 = thunk_FUN_01bee35a(0,0x20);
  puVar14 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_4f8 = uVar7;
  local_4cc = uVar15;
  if ((char)puVar14[0xe] != '\x01') {
    if ((char)puVar14[0xe] == '\x02') {
      uVar8 = 1;
      FUN_01a21ebc(auStack_520);
      goto LAB_01a35094;
    }
    FUN_019a2bcc(puVar14,&LAB_019efb68);
    *(undefined1 *)(puVar14 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_478,auStack_520,0xa8);
  if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar14 = *puVar14 + 1;
  uVar9 = puVar14[1];
  FUN_01bed4e2(auStack_3d0,auStack_520,0xa8);
  if (uVar9 == 2) {
    FUN_01a21ebc(auStack_3d0);
    uVar8 = 0;
    *puVar14 = *puVar14 - 1;
LAB_01a35094:
    local_1e0 = (int *)CONCAT31(local_1e0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_1e0,&DAT_01d2b2f0);
  }
  FUN_01bed4e2(auStack_328,auStack_520,0xa0);
  piVar4 = (int *)*local_330;
  iVar13 = local_330[1];
  if ((uVar9 & 1) == 0) {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01a354bc;
    piVar10 = (int *)piVar12[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a354bc;
      uVar11 = piVar12[0x83];
    }
    FUN_01bed4e2((uint)auStack_d0 | 4,auStack_328,0xa0);
    local_1b8 = 0;
    FUN_01bed4e2(auStack_1b4,auStack_d0,0xa4);
    local_1d8 = (int **)&PTR_LAB_01d2a108;
    local_1e0 = (int *)0xcc;
    puVar6[4] = piVar4;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_1dc = 0;
    local_108 = 0;
    local_10c = 0;
    local_110 = 0;
    local_2c = (int *)0x0;
    local_1c8 = piVar12;
    local_100 = piVar10;
    local_fc = uVar11;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x100);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x100);
    }
    FUN_01bed4e2(local_2c,&local_1e0,0x100);
    iVar5 = FUN_01a2cc10(piVar12 + 0x40,piVar10,piVar10);
    local_1e0 = piVar4;
    local_1dc = iVar13;
    if (piVar12[0x80] != 0) {
      (**(code **)(piVar12[0x81] + 0x14))
                (piVar12[0x80] + (*(int *)(piVar12[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1e0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar14[2],iVar5);
    }
  }
  else {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01a354bc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a354bc);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar12[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a354bc;
      uVar9 = piVar12[0x51];
    }
    FUN_01bed4e2((uint)auStack_288 | 4,auStack_328,0xa0);
    local_1b8 = 0;
    FUN_01bed4e2(auStack_1b4,auStack_288,0xa4);
    local_1d8 = (int **)&PTR_LAB_01d2a0e0;
    puVar6[4] = piVar4;
    local_1e0 = (int *)0xcc;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_1dc = 0;
    local_108 = 0;
    local_10c = 0;
    local_110 = 0;
    local_2c = (int *)0x0;
    local_1c8 = piVar12;
    local_100 = piVar10;
    local_fc = uVar9;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x100);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x100);
    }
    FUN_01bed4e2(local_2c,&local_1e0,0x100);
    iVar5 = FUN_01a2ce94(piVar12 + 0x14,piVar10,piVar10);
    local_1e0 = piVar4;
    local_1dc = iVar13;
    if (piVar12[0x4e] != 0) {
      (**(code **)(piVar12[0x4f] + 0x14))
                (piVar12[0x4e] + (*(int *)(piVar12[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1e0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_1e0 = piVar12 + 2;
      local_1dc = iVar5;
      local_1d8 = &local_2c;
      FUN_019ee860(&local_1e0);
    }
  }
  *puVar14 = *puVar14 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_01a35478;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_01a35478:
  *(undefined1 *)(param_1 + 6) = 1;
  return 0x1b;
}

