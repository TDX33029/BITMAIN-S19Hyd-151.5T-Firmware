// FUN_01a39b64 @ 01a39b64 size=1364 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01a39b64(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_668 [52];
  undefined4 local_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  uint local_608;
  int local_604;
  undefined1 auStack_600 [32];
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined1 auStack_5d4 [112];
  undefined4 local_564;
  undefined4 local_560;
  undefined1 local_55b;
  uint *local_520;
  undefined1 *local_51c;
  undefined1 auStack_518 [232];
  undefined1 auStack_430 [224];
  undefined4 *local_350;
  undefined1 auStack_348 [232];
  int *local_260;
  int local_25c;
  int **local_258;
  int *local_248;
  undefined4 local_238;
  undefined1 auStack_234 [228];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int *local_140;
  uint local_13c;
  undefined1 auStack_110 [228];
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b8e0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2b8e0);
  }
  uVar7 = param_1[0xc];
  puVar4 = (undefined4 *)((uint)&local_260 | 0x10);
  uVar17 = param_1[10];
  uVar9 = param_1[0xb];
  uVar13 = param_1[0xe];
  uVar15 = param_1[0xf];
  local_634 = *param_1;
  uStack_630 = param_1[1];
  uStack_62c = param_1[2];
  uStack_628 = param_1[3];
  uStack_624 = param_1[4];
  local_620 = param_1[5];
  uStack_61c = param_1[6];
  uStack_618 = param_1[7];
  uStack_614 = param_1[8];
  uStack_610 = param_1[9];
  do {
    do {
      local_608 = DAT_01d50470;
      local_604 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar12 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar12;
  } while (bVar2 && bVar3);
  FUN_01bed4e2(auStack_5d4,auStack_668,0x5c);
  local_51c = &uStack_25;
  local_520 = &local_608;
  local_55b = 0;
  local_5e0 = uVar17;
  local_5dc = uVar9;
  local_560 = uVar15;
  uVar18 = thunk_FUN_01bee35a(0,0x20);
  puVar16 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  local_5d8 = uVar7;
  local_564 = uVar13;
  if ((char)puVar16[0xe] != '\x01') {
    if ((char)puVar16[0xe] == '\x02') {
      uVar8 = 1;
      FUN_01a20c8c(auStack_600);
      goto LAB_01a39c6c;
    }
    FUN_019a2bcc(puVar16,&LAB_019efb68);
    *(undefined1 *)(puVar16 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_518,auStack_600,0xe8);
  if (0x7ffffffe < *puVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar16 = *puVar16 + 1;
  uVar11 = puVar16[1];
  FUN_01bed4e2(auStack_430,auStack_600,0xe8);
  if (uVar11 == 2) {
    FUN_01a20c8c(auStack_430);
    uVar8 = 0;
    *puVar16 = *puVar16 - 1;
LAB_01a39c6c:
    local_260 = (int *)CONCAT31(local_260._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_260,&DAT_01d2b8d0);
  }
  piVar5 = (int *)*local_350;
  iVar12 = local_350[1];
  if ((uVar11 & 1) == 0) {
    piVar14 = (int *)puVar16[2];
    do {
      iVar6 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01a3a080;
    piVar10 = (int *)piVar14[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01a3a080;
      uVar11 = piVar14[0x83];
    }
    FUN_01bed4e2((uint)auStack_110 | 4,auStack_600,0xe0);
    local_238 = 0;
    FUN_01bed4e2(auStack_234,auStack_110,0xe4);
    local_258 = (int **)&PTR_LAB_01d2a298;
    local_260 = (int *)0xcc;
    puVar4[4] = piVar5;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = iVar12;
    local_25c = 0;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_2c = (int *)0x0;
    local_248 = piVar14;
    local_140 = piVar10;
    local_13c = uVar11;
    iVar6 = FUN_01be5878(&local_2c,0x20,0x140);
    piVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x140);
    }
    FUN_01bed4e2(local_2c,&local_260,0x140);
    iVar6 = FUN_01a2cc10(piVar14 + 0x40,piVar10,piVar10);
    local_260 = piVar5;
    local_25c = iVar12;
    if (piVar14[0x80] != 0) {
      (**(code **)(piVar14[0x81] + 0x14))
                (piVar14[0x80] + (*(int *)(piVar14[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_260);
    }
    if (iVar6 != 0) {
      FUN_019dc904(puVar16[2],iVar6);
    }
  }
  else {
    piVar14 = (int *)puVar16[2];
    do {
      iVar6 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01a3a080:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a3a080);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar14[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01a3a080;
      uVar11 = piVar14[0x51];
    }
    FUN_01bed4e2((uint)auStack_348 | 4,auStack_600,0xe0);
    local_238 = 0;
    FUN_01bed4e2(auStack_234,auStack_348,0xe4);
    local_258 = (int **)&PTR_LAB_01d2a338;
    puVar4[4] = piVar5;
    local_260 = (int *)0xcc;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = iVar12;
    local_25c = 0;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_2c = (int *)0x0;
    local_248 = piVar14;
    local_140 = piVar10;
    local_13c = uVar11;
    iVar6 = FUN_01be5878(&local_2c,0x20,0x140);
    piVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x140);
    }
    FUN_01bed4e2(local_2c,&local_260,0x140);
    iVar6 = FUN_01a2ce94(piVar14 + 0x14,piVar10,piVar10);
    local_260 = piVar5;
    local_25c = iVar12;
    if (piVar14[0x4e] != 0) {
      (**(code **)(piVar14[0x4f] + 0x14))
                (piVar14[0x4e] + (*(int *)(piVar14[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_260);
    }
    if (iVar6 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_260 = piVar14 + 2;
      local_25c = iVar6;
      local_258 = &local_2c;
      FUN_019ee860(&local_260);
    }
  }
  *puVar16 = *puVar16 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_01a3a040;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_01a3a040:
  *(undefined1 *)(param_1 + 0x10) = 1;
  return 0x1b;
}

