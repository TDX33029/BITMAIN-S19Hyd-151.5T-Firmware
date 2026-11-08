// FUN_01a2eb20 @ 01a2eb20 size=1300 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01a2eb20(undefined4 *param_1)

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
  uint local_3c8;
  int local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_390;
  undefined4 local_38c;
  undefined1 local_374;
  uint *local_340;
  undefined1 *local_33c;
  undefined1 auStack_338 [136];
  undefined1 auStack_2b0 [128];
  undefined4 *local_230;
  undefined1 auStack_228 [136];
  int *local_1a0;
  int local_19c;
  int **local_198;
  int *local_188;
  undefined4 local_178;
  undefined1 auStack_174 [132];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int *local_e0;
  uint local_dc;
  undefined1 auStack_b0 [132];
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2aff8);
  }
  puVar6 = (undefined4 *)((uint)&local_1a0 | 0x10);
  uVar7 = param_1[2];
  local_3c0 = *param_1;
  local_3bc = param_1[1];
  uVar15 = param_1[4];
  local_38c = param_1[5];
  do {
    do {
      local_3c8 = DAT_01d50470;
      local_3c4 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar13;
  } while (bVar2 && bVar3);
  local_33c = &uStack_25;
  local_340 = &local_3c8;
  local_374 = 0;
  uVar16 = thunk_FUN_01bee35a(0,0x20);
  puVar14 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_3b8 = uVar7;
  local_390 = uVar15;
  if ((char)puVar14[0xe] != '\x01') {
    if ((char)puVar14[0xe] == '\x02') {
      uVar8 = 1;
      FUN_01a21b3c(&local_3c0);
      goto LAB_01a2ebf4;
    }
    FUN_019a2bcc(puVar14,&LAB_019efb68);
    *(undefined1 *)(puVar14 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_338,&local_3c0,0x88);
  if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar14 = *puVar14 + 1;
  uVar9 = puVar14[1];
  FUN_01bed4e2(auStack_2b0,&local_3c0,0x88);
  if (uVar9 == 2) {
    FUN_01a21b3c(auStack_2b0);
    uVar8 = 0;
    *puVar14 = *puVar14 - 1;
LAB_01a2ebf4:
    local_1a0 = (int *)CONCAT31(local_1a0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_1a0,&DAT_01d2afe8);
  }
  piVar4 = (int *)*local_230;
  iVar13 = local_230[1];
  if ((uVar9 & 1) == 0) {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01a2f004;
    piVar10 = (int *)piVar12[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a2f004;
      uVar11 = piVar12[0x83];
    }
    FUN_01bed4e2((uint)auStack_b0 | 4,&local_3c0,0x80);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_b0,0x84);
    local_198 = (int **)&PTR_LAB_01d2a158;
    local_1a0 = (int *)0xcc;
    puVar6[4] = piVar4;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_19c = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_2c = (int *)0x0;
    local_188 = piVar12;
    local_e0 = piVar10;
    local_dc = uVar11;
    iVar5 = FUN_01be5878(&local_2c,0x20,0xe0);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_2c,&local_1a0,0xe0);
    iVar5 = FUN_01a2cc10(piVar12 + 0x40,piVar10,piVar10);
    local_1a0 = piVar4;
    local_19c = iVar13;
    if (piVar12[0x80] != 0) {
      (**(code **)(piVar12[0x81] + 0x14))
                (piVar12[0x80] + (*(int *)(piVar12[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
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
LAB_01a2f004:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a2f004);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar12[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a2f004;
      uVar9 = piVar12[0x51];
    }
    FUN_01bed4e2((uint)auStack_228 | 4,&local_3c0,0x80);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_228,0x84);
    local_198 = (int **)&PTR_LAB_01d2a040;
    puVar6[4] = piVar4;
    local_1a0 = (int *)0xcc;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_19c = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_2c = (int *)0x0;
    local_188 = piVar12;
    local_e0 = piVar10;
    local_dc = uVar9;
    iVar5 = FUN_01be5878(&local_2c,0x20,0xe0);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_2c,&local_1a0,0xe0);
    iVar5 = FUN_01a2ce94(piVar12 + 0x14,piVar10,piVar10);
    local_1a0 = piVar4;
    local_19c = iVar13;
    if (piVar12[0x4e] != 0) {
      (**(code **)(piVar12[0x4f] + 0x14))
                (piVar12[0x4e] + (*(int *)(piVar12[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_1a0 = piVar12 + 2;
      local_19c = iVar5;
      local_198 = &local_2c;
      FUN_019ee860(&local_1a0);
    }
  }
  *puVar14 = *puVar14 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_01a2efc0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_01a2efc0:
  *(undefined1 *)(param_1 + 6) = 1;
  return 0x1b;
}

