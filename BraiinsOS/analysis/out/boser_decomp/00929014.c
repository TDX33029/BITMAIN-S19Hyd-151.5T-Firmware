// FUN_00929014 @ 00929014 size=1288 calls_out=12 calls_in=4
// strings: 

void FUN_00929014(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int *piVar15;
  undefined8 uVar16;
  uint local_6dc;
  uint local_6c8;
  int local_6c4;
  int local_6c0 [64];
  uint *local_5c0;
  undefined1 *local_5bc;
  undefined1 auStack_5b8 [264];
  int local_4b0 [64];
  undefined4 *local_3b0;
  undefined1 auStack_3a8 [264];
  int *local_2a0;
  int local_29c;
  int **local_298;
  int *local_288;
  undefined4 local_278;
  undefined1 auStack_274 [260];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int *local_160;
  uint local_15c;
  undefined1 auStack_130 [260];
  int *local_2c;
  undefined1 uStack_25;
  
  puVar13 = (undefined4 *)((uint)&local_2a0 | 0x10);
  do {
    do {
      local_6c8 = DAT_01d50470;
      local_6c4 = DAT_01d50474;
      uVar9 = DAT_01d50470 + 1;
      iVar11 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar9;
    DAT_01d50474 = iVar11;
  } while (bVar2 && bVar3);
  uVar4 = FUN_01bed4e2(local_6c0,param_2,0x100);
  uVar16 = thunk_FUN_01bee35a(uVar4,0x20);
  puVar14 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_5bc = &uStack_25;
  local_5c0 = &local_6c8;
  if ((char)puVar14[0xe] != '\x01') {
    if ((char)puVar14[0xe] == '\x02') {
      uVar8 = 1;
      if (local_6c0[0] != 2) {
        FUN_009d635c(local_6c0);
      }
      goto LAB_009290c4;
    }
    FUN_019a2bcc(puVar14,&LAB_019efb68);
    *(undefined1 *)(puVar14 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_5b8,local_6c0,0x108);
  uVar9 = *puVar14;
  if (0x7ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar14 = uVar9 + 1;
  uVar12 = puVar14[1];
  FUN_01bed4e2(local_4b0,local_6c0,0x108);
  if (uVar12 == 2) {
    if (local_4b0[0] != 2) {
      FUN_009d635c(local_4b0);
      uVar9 = *puVar14 - 1;
    }
    *puVar14 = uVar9;
    uVar8 = 0;
LAB_009290c4:
    local_2a0 = (int *)CONCAT31(local_2a0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_2a0,&DAT_01c0c260);
  }
  piVar6 = (int *)*local_3b0;
  iVar11 = local_3b0[1];
  if ((uVar12 & 1) == 0) {
    piVar15 = (int *)puVar14[2];
    do {
      iVar5 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_009294fc;
    piVar10 = (int *)piVar15[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_009294fc;
      local_6dc = piVar15[0x83];
    }
    FUN_01bed4e2((uint)auStack_130 | 4,param_2,0x100);
    local_278 = 0;
    FUN_01bed4e2(auStack_274,auStack_130,0x104);
    local_298 = (int **)&PTR_LAB_01c0f194;
    local_2a0 = (int *)0xcc;
    local_15c = local_6dc;
    puVar13[4] = piVar6;
    puVar13[5] = iVar11;
    *puVar13 = 0;
    puVar13[1] = 0;
    local_29c = 0;
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_2c = (int *)0x0;
    local_288 = piVar15;
    local_160 = piVar10;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x160);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_2c,&local_2a0,0x160);
    iVar5 = FUN_01a88f0c(piVar15 + 0x40,piVar10,piVar10);
    local_2a0 = piVar6;
    local_29c = iVar11;
    if (piVar15[0x80] != 0) {
      (**(code **)(piVar15[0x81] + 0x14))
                (piVar15[0x80] + (*(int *)(piVar15[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_2a0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar14[2],iVar5);
    }
  }
  else {
    piVar15 = (int *)puVar14[2];
    do {
      iVar5 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_009294fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9294fc);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar15[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_009294fc;
      uVar12 = piVar15[0x51];
    }
    FUN_01bed4e2((uint)auStack_3a8 | 4,param_2,0x100);
    local_278 = 0;
    FUN_01bed4e2(auStack_274,auStack_3a8,0x104);
    local_298 = (int **)&PTR_FUN_01c0f2fc;
    puVar13[4] = piVar6;
    puVar13[5] = iVar11;
    local_2a0 = (int *)0xcc;
    *puVar13 = 0;
    puVar13[1] = 0;
    local_29c = 0;
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_2c = (int *)0x0;
    local_288 = piVar15;
    local_160 = piVar10;
    local_15c = uVar12;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x160);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_2c,&local_2a0,0x160);
    iVar5 = FUN_01a89190(piVar15 + 0x14,piVar10,piVar10);
    local_2a0 = piVar6;
    local_29c = iVar11;
    if (piVar15[0x4e] != 0) {
      (**(code **)(piVar15[0x4f] + 0x14))
                (piVar15[0x4e] + (*(int *)(piVar15[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_2a0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_2a0 = piVar15 + 2;
      local_29c = iVar5;
      local_298 = &local_2c;
      FUN_019ee860(&local_2a0);
    }
  }
  *puVar14 = *puVar14 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_009294bc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_009294bc:
  uVar4 = *(undefined4 *)(param_2 + 0x104);
  uVar7 = *(undefined4 *)(param_2 + 0x108);
  *param_1 = *(undefined4 *)(param_2 + 0x100);
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  return;
}

