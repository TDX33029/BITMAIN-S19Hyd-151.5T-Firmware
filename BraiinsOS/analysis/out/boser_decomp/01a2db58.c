// FUN_01a2db58 @ 01a2db58 size=2632 calls_out=15 calls_in=2
// strings: 

undefined4 FUN_01a2db58(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int extraout_r2;
  undefined1 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int *local_518;
  int local_514;
  int *local_510 [34];
  int *local_488;
  int local_484;
  undefined1 auStack_400 [32];
  undefined4 local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  undefined4 local_3bc;
  int *local_3b8;
  undefined1 local_3b3;
  undefined4 local_3b0;
  uint local_3ac;
  undefined1 local_3a6;
  int **local_380;
  undefined1 *local_37c;
  int **local_370;
  undefined1 *local_36c;
  undefined1 auStack_368 [152];
  undefined1 auStack_2d0 [128];
  undefined4 *local_250;
  undefined4 *local_240;
  undefined1 auStack_238 [152];
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
  undefined4 local_d8;
  int *local_d0;
  uint local_cc;
  undefined1 auStack_c0 [155];
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 10) != '\0') {
    if (*(char *)(param_1 + 10) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2aec8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2aec8);
  }
  piVar8 = (int *)param_1[8];
  puVar4 = (undefined4 *)((uint)&local_1a0 | 0x10);
  do {
    iVar5 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_01a2e558;
  uVar15 = *param_1;
  piVar6 = (int *)param_1[9];
  uVar13 = param_1[1];
  uVar14 = param_1[2];
  do {
    iVar5 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_01a2e558;
  piVar9 = piVar6 + 0x11;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = *piVar9 + 1;
  do {
    do {
      local_518 = DAT_01d50470;
      local_514 = DAT_01d50474;
      piVar9 = (int *)((int)DAT_01d50470 + 1);
      iVar5 = DAT_01d50474 + (uint)((int *)0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == (int *)0x0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = piVar9;
    DAT_01d50474 = iVar5;
  } while (bVar2 && bVar3);
  local_37c = &uStack_25;
  local_380 = &local_518;
  local_3b3 = 0;
  local_3e0 = uVar15;
  local_3dc = uVar13;
  local_3b8 = piVar6;
  uVar16 = thunk_FUN_01bee35a(piVar6,piVar8,0x20);
  local_3bc = (undefined4)((ulonglong)uVar16 >> 0x20);
  puVar12 = (uint *)((int)uVar16 + extraout_r2);
  local_3d8 = uVar14;
  if ((char)puVar12[0xe] != '\x01') {
    if ((char)puVar12[0xe] == '\x02') {
      uVar10 = 1;
      FUN_01a21cd4(auStack_400);
      goto LAB_01a2dc7c;
    }
    FUN_019a2bcc(puVar12,&LAB_019efb68);
    *(undefined1 *)(puVar12 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_368,auStack_400,0x88);
  if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar12 = *puVar12 + 1;
  uVar11 = puVar12[1];
  FUN_01bed4e2(auStack_2d0,auStack_400,0x88);
  if (uVar11 == 2) {
    FUN_01a21cd4(auStack_2d0);
    uVar10 = 0;
    *puVar12 = *puVar12 - 1;
LAB_01a2dc7c:
    local_1a0 = (int *)CONCAT31(local_1a0._1_3_,uVar10);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_1a0,&DAT_01d2aea8);
  }
  piVar8 = (int *)*local_250;
  iVar5 = local_250[1];
  if ((uVar11 & 1) == 0) {
    piVar6 = (int *)puVar12[2];
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01a2e558;
    piVar9 = (int *)piVar6[0x82];
    if (piVar9 != (int *)0x0) {
      do {
        iVar7 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01a2e558;
      uVar14 = piVar6[0x83];
    }
    FUN_01bed4e2((uint)&local_488 | 4,auStack_400,0x80);
    FUN_01bed4e2(local_510,&local_488,0x84);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,local_510,0x84);
    local_198 = (int **)&PTR_LAB_01d2a090;
    local_1a0 = (int *)0xcc;
    puVar4[4] = piVar8;
    puVar4[5] = iVar5;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_19c = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_488 = (int *)0x0;
    local_188 = piVar6;
    local_e0 = piVar9;
    local_dc = uVar14;
    iVar7 = FUN_01be5878(&local_488,0x20,0xe0);
    piVar9 = local_488;
    if ((iVar7 != 0) || (local_488 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_488,&local_1a0,0xe0);
    iVar7 = FUN_01a2cc10(piVar6 + 0x40,piVar9,piVar9);
    local_1a0 = piVar8;
    local_19c = iVar5;
    if (piVar6[0x80] != 0) {
      (**(code **)(piVar6[0x81] + 0x14))
                (piVar6[0x80] + (*(int *)(piVar6[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      FUN_019dc904(puVar12[2],iVar7);
    }
  }
  else {
    piVar6 = (int *)puVar12[2];
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01a2e558;
    piVar9 = (int *)piVar6[0x50];
    if (piVar9 != (int *)0x0) {
      do {
        iVar7 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01a2e558;
      uVar11 = piVar6[0x51];
    }
    FUN_01bed4e2((uint)&local_488 | 4,auStack_400,0x80);
    FUN_01bed4e2(local_510,&local_488,0x84);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,local_510,0x84);
    local_198 = (int **)&PTR_LAB_01d2a3d8;
    puVar4[4] = piVar8;
    puVar4[5] = iVar5;
    local_1a0 = (int *)0xcc;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_19c = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_488 = (int *)0x0;
    local_188 = piVar6;
    local_e0 = piVar9;
    local_dc = uVar11;
    iVar7 = FUN_01be5878(&local_488,0x20,0xe0);
    piVar9 = local_488;
    if ((iVar7 != 0) || (local_488 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_488,&local_1a0,0xe0);
    iVar7 = FUN_01a2ce94(piVar6 + 0x14,piVar9,piVar9);
    local_1a0 = piVar8;
    local_19c = iVar5;
    if (piVar6[0x4e] != 0) {
      (**(code **)(piVar6[0x4f] + 0x14))
                (piVar6[0x4e] + (*(int *)(piVar6[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      local_488 = (int *)((uint)local_488 & 0xffffff00);
      local_1a0 = piVar6 + 2;
      local_19c = iVar7;
      local_198 = &local_488;
      FUN_019ee860(&local_1a0);
    }
  }
  *puVar12 = *puVar12 - 1;
  if (*piVar9 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar9);
    if (!bVar2) goto LAB_01a2e07c;
    *piVar9 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_01a2e07c:
    (**(code **)(piVar9[2] + 0x10))(piVar9);
  }
  local_3b0 = param_1[8];
  uVar14 = param_1[9];
  local_3e0 = param_1[4];
  local_3dc = param_1[5];
  local_3d8 = param_1[6];
  do {
    do {
      local_488 = DAT_01d50470;
      local_484 = DAT_01d50474;
      piVar8 = (int *)((int)DAT_01d50470 + 1);
      iVar5 = DAT_01d50474 + (uint)((int *)0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == (int *)0x0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = piVar8;
    DAT_01d50474 = iVar5;
  } while (bVar2 && bVar3);
  local_36c = &uStack_25;
  local_370 = &local_488;
  local_3a6 = 0;
  local_3ac = uVar14;
  if ((char)puVar12[0xe] != '\x01') {
    if ((char)puVar12[0xe] == '\x02') {
      uVar10 = 1;
      FUN_01a20f44(auStack_400);
      goto LAB_01a2e118;
    }
    FUN_019a2bcc(puVar12,&LAB_019efb68);
    *(undefined1 *)(puVar12 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_368,auStack_400,0x98);
  if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar12 = *puVar12 + 1;
  uVar11 = puVar12[1];
  FUN_01bed4e2(auStack_2d0,auStack_400,0x98);
  if (uVar11 == 2) {
    FUN_01a20f44(auStack_2d0);
    uVar10 = 0;
    *puVar12 = *puVar12 - 1;
LAB_01a2e118:
    local_1a0 = (int *)CONCAT31(local_1a0._1_3_,uVar10);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_1a0,&DAT_01d2aeb8);
  }
  piVar8 = (int *)*local_240;
  iVar5 = local_240[1];
  if ((uVar11 & 1) == 0) {
    piVar6 = (int *)puVar12[2];
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01a2e558;
    piVar9 = (int *)piVar6[0x82];
    if (piVar9 != (int *)0x0) {
      do {
        iVar7 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01a2e558;
      uVar14 = piVar6[0x83];
    }
    FUN_01bed4e2((uint)auStack_c0 | 4,auStack_400,0x90);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_c0,0x94);
    local_198 = (int **)&PTR_LAB_01d2a130;
    local_1a0 = (int *)0xcc;
    puVar4[4] = piVar8;
    puVar4[5] = iVar5;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_19c = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = (int *)0x0;
    local_510[0] = (int *)0x0;
    local_188 = piVar6;
    local_d0 = piVar9;
    local_cc = uVar14;
    iVar7 = FUN_01be5878(local_510,0x20,0xe0);
    piVar9 = local_510[0];
    if ((iVar7 != 0) || (local_510[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_510[0],&local_1a0,0xe0);
    iVar7 = FUN_01a2cc10(piVar6 + 0x40,piVar9,piVar9);
    local_1a0 = piVar8;
    local_19c = iVar5;
    if (piVar6[0x80] != 0) {
      (**(code **)(piVar6[0x81] + 0x14))
                (piVar6[0x80] + (*(int *)(piVar6[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      FUN_019dc904(puVar12[2],iVar7);
    }
  }
  else {
    piVar6 = (int *)puVar12[2];
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_01a2e558:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a2e558);
      (*pcVar1)();
    }
    piVar9 = (int *)piVar6[0x50];
    if (piVar9 != (int *)0x0) {
      do {
        iVar7 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01a2e558;
      uVar11 = piVar6[0x51];
    }
    FUN_01bed4e2((uint)auStack_238 | 4,auStack_400,0x90);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_238,0x94);
    local_198 = (int **)&PTR_LAB_01d2a4a0;
    puVar4[4] = piVar8;
    puVar4[5] = iVar5;
    local_1a0 = (int *)0xcc;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_19c = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = (int *)0x0;
    local_510[0] = (int *)0x0;
    local_188 = piVar6;
    local_d0 = piVar9;
    local_cc = uVar11;
    iVar7 = FUN_01be5878(local_510,0x20,0xe0);
    piVar9 = local_510[0];
    if ((iVar7 != 0) || (local_510[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_510[0],&local_1a0,0xe0);
    iVar7 = FUN_01a2ce94(piVar6 + 0x14,piVar9,piVar9);
    local_1a0 = piVar8;
    local_19c = iVar5;
    if (piVar6[0x4e] != 0) {
      (**(code **)(piVar6[0x4f] + 0x14))
                (piVar6[0x4e] + (*(int *)(piVar6[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      local_510[0] = (int *)((uint)local_510[0] & 0xffffff00);
      local_1a0 = piVar6 + 2;
      local_19c = iVar7;
      local_198 = local_510;
      FUN_019ee860(&local_1a0);
    }
  }
  *puVar12 = *puVar12 - 1;
  if (*piVar9 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar9);
    if (bVar2) {
      *piVar9 = 0x84;
      goto LAB_01a2e518;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar9[2] + 0x10))(piVar9);
LAB_01a2e518:
  *(undefined1 *)(param_1 + 10) = 1;
  return 0x1b;
}

