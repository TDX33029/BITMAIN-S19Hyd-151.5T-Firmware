// FUN_01210650 @ 01210650 size=1256 calls_out=12 calls_in=2
// strings: 

void FUN_01210650(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_b54;
  undefined1 auStack_b48 [176];
  undefined1 auStack_a98 [208];
  uint local_9c8;
  int local_9c4;
  undefined1 auStack_9c0 [381];
  undefined1 local_843;
  uint *local_840;
  undefined1 *local_83c;
  undefined1 auStack_838 [392];
  undefined1 auStack_6b0 [384];
  undefined4 *local_530;
  undefined1 auStack_528 [392];
  int *local_3a0;
  int local_39c;
  int **local_398;
  int *local_388;
  undefined4 local_378;
  undefined1 auStack_374 [388];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int *local_1e0;
  int local_1dc;
  undefined1 auStack_1b0 [388];
  int *local_2c;
  undefined1 uStack_25;
  
  FUN_01bed4e2(auStack_a98,param_1,0x98);
  puVar10 = (undefined4 *)((uint)&local_3a0 | 0x10);
  do {
    do {
      local_9c8 = DAT_01d50470;
      local_9c4 = DAT_01d50474;
      uVar7 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar7;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  FUN_01bed4e2(auStack_9c0,auStack_b48,0x17d);
  local_83c = &uStack_25;
  uVar13 = thunk_FUN_01bee35a(local_83c,0x20);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_840 = &local_9c8;
  local_843 = 0;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_0120cd3c(auStack_9c0);
      uVar4 = 1;
      goto LAB_01210708;
    }
    FUN_019a2bcc(puVar11,&LAB_019efb68);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_838,auStack_9c0,0x188);
  if (0x7ffffffe < *puVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar11 = *puVar11 + 1;
  uVar7 = puVar11[1];
  FUN_01bed4e2(auStack_6b0,auStack_9c0,0x188);
  if (uVar7 == 2) {
    FUN_0120cd3c(auStack_6b0);
    *puVar11 = *puVar11 - 1;
    uVar4 = 0;
LAB_01210708:
    local_3a0 = (int *)CONCAT31(local_3a0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_3a0,&DAT_01c24084);
  }
  piVar6 = (int *)*local_530;
  iVar9 = local_530[1];
  if ((uVar7 & 1) == 0) {
    piVar12 = (int *)puVar11[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01210b20;
    piVar8 = (int *)piVar12[0x82];
    if (piVar8 != (int *)0x0) {
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01210b20;
      local_b54 = piVar12[0x83];
    }
    FUN_01bed4e2((uint)auStack_1b0 | 4,auStack_9c0,0x180);
    local_378 = 0;
    FUN_01bed4e2(auStack_374,auStack_1b0,0x184);
    local_398 = (int **)&PTR_LAB_01c22958;
    local_3a0 = (int *)0xcc;
    local_1dc = local_b54;
    puVar10[4] = piVar6;
    puVar10[5] = iVar9;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_39c = 0;
    local_1e8 = 0;
    local_1ec = 0;
    local_1f0 = 0;
    local_2c = (int *)0x0;
    local_388 = piVar12;
    local_1e0 = piVar8;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x1e0);
    piVar8 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x1e0);
    }
    FUN_01bed4e2(local_2c,&local_3a0,0x1e0);
    iVar5 = FUN_01a88f0c(piVar12 + 0x40,piVar8,piVar8);
    local_3a0 = piVar6;
    local_39c = iVar9;
    if (piVar12[0x80] != 0) {
      (**(code **)(piVar12[0x81] + 0x14))
                (piVar12[0x80] + (*(int *)(piVar12[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_3a0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar11[2],iVar5);
    }
  }
  else {
    piVar12 = (int *)puVar11[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01210b20:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1210b20);
      (*pcVar1)();
    }
    piVar8 = (int *)piVar12[0x50];
    if (piVar8 != (int *)0x0) {
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01210b20;
      local_b54 = piVar12[0x51];
    }
    FUN_01bed4e2((uint)auStack_528 | 4,auStack_9c0,0x180);
    local_378 = 0;
    FUN_01bed4e2(auStack_374,auStack_528,0x184);
    puVar10[4] = piVar6;
    puVar10[5] = iVar9;
    local_398 = (int **)&PTR_LAB_01c22ac0;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_3a0 = (int *)0xcc;
    local_1dc = local_b54;
    local_39c = 0;
    local_1e8 = 0;
    local_1ec = 0;
    local_1f0 = 0;
    local_2c = (int *)0x0;
    local_388 = piVar12;
    local_1e0 = piVar8;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x1e0);
    piVar8 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x1e0);
    }
    FUN_01bed4e2(local_2c,&local_3a0,0x1e0);
    iVar5 = FUN_01a89190(piVar12 + 0x14,piVar8,piVar8);
    local_3a0 = piVar6;
    local_39c = iVar9;
    if (piVar12[0x4e] != 0) {
      (**(code **)(piVar12[0x4f] + 0x14))
                (piVar12[0x4e] + (*(int *)(piVar12[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_3a0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_3a0 = piVar12 + 2;
      local_39c = iVar5;
      local_398 = &local_2c;
      FUN_019ee860(&local_3a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  if (*piVar8 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar8);
    if (bVar2) {
      *piVar8 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar8[2] + 0x10))(piVar8);
  return;
}

