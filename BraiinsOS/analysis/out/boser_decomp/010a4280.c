// FUN_010a4280 @ 010a4280 size=1168 calls_out=12 calls_in=3
// strings: 

uint FUN_010a4280(undefined4 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  uint local_a48;
  int local_a44;
  undefined1 auStack_a40 [408];
  uint *local_8a8;
  undefined1 *local_8a4;
  undefined1 auStack_8a0 [416];
  undefined1 auStack_700 [408];
  undefined4 *local_568;
  undefined1 auStack_560 [416];
  int *local_3c0;
  int local_3bc;
  undefined **local_3b8;
  int *local_3a8;
  undefined4 local_398;
  undefined1 auStack_394 [412];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  int *local_1e8;
  uint *local_1e4;
  undefined1 auStack_1c8 [412];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_3c0 | 0x10);
  do {
    do {
      local_a48 = DAT_01d50470;
      local_a44 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_a40,param_1,0x198);
  uVar14 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_8a4 = &uStack_25;
  local_8a8 = &local_a48;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_010ec9a8(auStack_a40);
      uVar4 = 1;
      goto LAB_010a4324;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_8a0,auStack_a40,0x1a0);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar8 = puVar10[1];
  FUN_01bed4e2(auStack_700,auStack_a40,0x1a0);
  if (uVar8 == 2) {
    FUN_010ec9a8(auStack_700);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_010a4324:
    local_3c0 = (int *)CONCAT31(local_3c0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_3c0,param_2);
  }
  piVar6 = (int *)*local_568;
  uVar5 = local_568[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_010a46f8;
    piVar7 = (int *)piVar13[0x82];
    puVar11 = puVar10;
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a46f8;
      puVar11 = (uint *)piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_1c8 | 4,param_1,0x198);
    local_398 = 0;
    FUN_01bed4e2(auStack_394,auStack_1c8,0x19c);
    local_3b8 = &PTR_LAB_01c1a4f4;
    local_3c0 = (int *)0xcc;
    puVar12[4] = piVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_3bc = 0;
    local_1f0 = 0;
    local_1f4 = 0;
    local_1f8 = 0;
    local_2c = 0;
    local_3a8 = piVar13;
    local_1e8 = piVar7;
    local_1e4 = puVar11;
    iVar9 = FUN_01be5878(&local_2c,0x20,0x1e0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x1e0);
    }
    FUN_01bed4e2(local_2c,&local_3c0,0x1e0);
    iVar9 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_3c0 = piVar6;
    local_3bc = uVar5;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_3c0);
    }
    if (iVar9 != 0) {
      FUN_019dc904(puVar10[2],iVar9);
    }
  }
  else {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_010a46f8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a46f8);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a46f8;
      param_2 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_560 | 4,param_1,0x198);
    local_398 = 0;
    FUN_01bed4e2(auStack_394,auStack_560,0x19c);
    local_3b8 = (undefined **)&DAT_01c1a274;
    puVar12[4] = piVar6;
    local_3c0 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_3bc = 0;
    local_1f0 = 0;
    local_1f4 = 0;
    local_1f8 = 0;
    local_2c = 0;
    local_3a8 = piVar13;
    local_1e8 = piVar7;
    local_1e4 = (uint *)param_2;
    iVar9 = FUN_01be5878(&local_2c,0x20,0x1e0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x1e0);
    }
    FUN_01bed4e2(local_2c,&local_3c0,0x1e0);
    iVar9 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_3c0 = piVar6;
      local_3bc = uVar5;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_3c0);
    }
    if (iVar9 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_3c0 = piVar13 + 2;
      local_3bc = iVar9;
      local_3b8 = (undefined **)&local_2c;
      FUN_019ee860(&local_3c0);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar8;
}

