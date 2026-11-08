// FUN_01a2d27c @ 01a2d27c size=1316 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01a2d27c(undefined4 *param_1)

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
  uint local_748;
  int local_744;
  undefined1 auStack_740 [32];
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_668;
  undefined4 local_664;
  undefined1 local_65b;
  uint *local_628;
  undefined1 *local_624;
  undefined1 auStack_620 [288];
  undefined1 auStack_500 [280];
  undefined4 *local_3e8;
  undefined1 auStack_3e0 [288];
  int *local_2c0;
  int local_2bc;
  int **local_2b8;
  int *local_2a8;
  undefined4 local_298;
  undefined1 auStack_294 [284];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  int *local_168;
  uint local_164;
  undefined1 auStack_148 [284];
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2ac48);
  }
  puVar6 = (undefined4 *)((uint)&local_2c0 | 0x10);
  uVar7 = param_1[2];
  local_720 = *param_1;
  local_71c = param_1[1];
  uVar15 = param_1[4];
  local_664 = param_1[5];
  do {
    do {
      local_748 = DAT_01d50470;
      local_744 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar13;
  } while (bVar2 && bVar3);
  local_624 = &uStack_25;
  local_628 = &local_748;
  local_65b = 0;
  uVar16 = thunk_FUN_01bee35a(0,0x20);
  puVar14 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_718 = uVar7;
  local_668 = uVar15;
  if ((char)puVar14[0xe] != '\x01') {
    if ((char)puVar14[0xe] == '\x02') {
      uVar8 = 1;
      FUN_01a211c4(auStack_740);
      goto LAB_01a2d354;
    }
    FUN_019a2bcc(puVar14,&LAB_019efb68);
    *(undefined1 *)(puVar14 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_620,auStack_740,0x120);
  if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar14 = *puVar14 + 1;
  uVar9 = puVar14[1];
  FUN_01bed4e2(auStack_500,auStack_740,0x120);
  if (uVar9 == 2) {
    FUN_01a211c4(auStack_500);
    uVar8 = 0;
    *puVar14 = *puVar14 - 1;
LAB_01a2d354:
    local_2c0 = (int *)CONCAT31(local_2c0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_2c0,&DAT_01d2ac38);
  }
  piVar4 = (int *)*local_3e8;
  iVar13 = local_3e8[1];
  if ((uVar9 & 1) == 0) {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01a2d770;
    piVar10 = (int *)piVar12[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a2d770;
      uVar11 = piVar12[0x83];
    }
    FUN_01bed4e2((uint)auStack_148 | 4,auStack_740,0x118);
    local_298 = 0;
    FUN_01bed4e2(auStack_294,auStack_148,0x11c);
    local_2b8 = (int **)&PTR_LAB_01d2a388;
    local_2c0 = (int *)0xcc;
    puVar6[4] = piVar4;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_2bc = 0;
    local_170 = 0;
    local_174 = 0;
    local_178 = 0;
    local_2c = (int *)0x0;
    local_2a8 = piVar12;
    local_168 = piVar10;
    local_164 = uVar11;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x160);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_2c,&local_2c0,0x160);
    iVar5 = FUN_01a2cc10(piVar12 + 0x40,piVar10,piVar10);
    local_2c0 = piVar4;
    local_2bc = iVar13;
    if (piVar12[0x80] != 0) {
      (**(code **)(piVar12[0x81] + 0x14))
                (piVar12[0x80] + (*(int *)(piVar12[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_2c0);
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
LAB_01a2d770:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a2d770);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar12[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a2d770;
      uVar9 = piVar12[0x51];
    }
    FUN_01bed4e2((uint)auStack_3e0 | 4,auStack_740,0x118);
    local_298 = 0;
    FUN_01bed4e2(auStack_294,auStack_3e0,0x11c);
    local_2b8 = (int **)&PTR_LAB_01d2a310;
    puVar6[4] = piVar4;
    local_2c0 = (int *)0xcc;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_2bc = 0;
    local_170 = 0;
    local_174 = 0;
    local_178 = 0;
    local_2c = (int *)0x0;
    local_2a8 = piVar12;
    local_168 = piVar10;
    local_164 = uVar9;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x160);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_2c,&local_2c0,0x160);
    iVar5 = FUN_01a2ce94(piVar12 + 0x14,piVar10,piVar10);
    local_2c0 = piVar4;
    local_2bc = iVar13;
    if (piVar12[0x4e] != 0) {
      (**(code **)(piVar12[0x4f] + 0x14))
                (piVar12[0x4e] + (*(int *)(piVar12[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_2c0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_2c0 = piVar12 + 2;
      local_2bc = iVar5;
      local_2b8 = &local_2c;
      FUN_019ee860(&local_2c0);
    }
  }
  *puVar14 = *puVar14 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_01a2d72c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_01a2d72c:
  *(undefined1 *)(param_1 + 6) = 1;
  return 0x1b;
}

