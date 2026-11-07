// FUN_010a564c @ 010a564c size=1212 calls_out=12 calls_in=3
// strings: 

uint FUN_010a564c(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int local_1cf4;
  uint local_1ce8;
  int local_1ce4;
  undefined1 auStack_1ce0 [1024];
  uint *local_18e0;
  undefined1 *local_18dc;
  undefined1 auStack_18d8 [1032];
  undefined1 auStack_14d0 [1024];
  undefined4 *local_10d0;
  undefined1 auStack_10c8 [1024];
  undefined1 auStack_cc8 [1032];
  int *local_8c0;
  int local_8bc;
  undefined **local_8b8;
  int *local_8a8;
  undefined4 local_898;
  undefined1 auStack_894 [1028];
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  int *local_480;
  int local_47c;
  undefined1 auStack_450 [1032];
  uint local_48;
  undefined1 auStack_41 [29];
  
  puVar12 = (undefined4 *)((uint)&local_8c0 | 0x10);
  do {
    do {
      local_1ce8 = DAT_01d50470;
      local_1ce4 = DAT_01d50474;
      uVar7 = DAT_01d50470 + 1;
      iVar8 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar7;
    DAT_01d50474 = iVar8;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_1ce0,param_1,0x400);
  uVar13 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_18dc = auStack_41;
  local_18e0 = &local_1ce8;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_010ea61c(auStack_1ce0);
      uVar4 = 1;
      goto LAB_010a56f4;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_18d8,auStack_1ce0,0x408);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar7 = puVar10[1];
  FUN_01bed4e2(auStack_14d0,auStack_1ce0,0x408);
  if (uVar7 == 2) {
    FUN_010ea61c(auStack_14d0);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_010a56f4:
    local_8c0 = (int *)CONCAT31(local_8c0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_8c0,param_2);
  }
  FUN_01bed4e2(auStack_10c8,auStack_1ce0,0x400);
  piVar6 = (int *)*local_10d0;
  uVar5 = local_10d0[1];
  if ((uVar7 & 1) == 0) {
    piVar11 = (int *)puVar10[2];
    do {
      iVar8 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_010a5af0;
    piVar9 = (int *)piVar11[0x82];
    if (piVar9 != (int *)0x0) {
      do {
        iVar8 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_010a5af0;
      local_1cf4 = piVar11[0x83];
    }
    FUN_01bed4e2((uint)auStack_450 | 4,auStack_10c8,0x400);
    local_898 = 0;
    FUN_01bed4e2(auStack_894,auStack_450,0x404);
    local_8b8 = &PTR_LAB_01c1a5bc;
    puVar12[4] = piVar6;
    puVar12[5] = uVar5;
    local_47c = local_1cf4;
    local_8c0 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_8bc = 0;
    local_490 = 0;
    local_48c = 0;
    local_488 = 0;
    local_48 = 0;
    local_8a8 = piVar11;
    local_480 = piVar9;
    iVar8 = FUN_01be5878(&local_48,0x20,0x460);
    uVar7 = local_48;
    if ((iVar8 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x460);
    }
    FUN_01bed4e2(local_48,&local_8c0,0x460);
    iVar8 = FUN_01a88f0c(piVar11 + 0x40,uVar7,uVar7);
    local_8c0 = piVar6;
    local_8bc = uVar5;
    if (piVar11[0x80] != 0) {
      (**(code **)(piVar11[0x81] + 0x14))
                (piVar11[0x80] + (*(int *)(piVar11[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_8c0);
    }
    if (iVar8 != 0) {
      FUN_019dc904(puVar10[2],iVar8);
    }
  }
  else {
    piVar11 = (int *)puVar10[2];
    do {
      iVar8 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar8 + 1;
    if (iVar8 < 0) {
LAB_010a5af0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a5af0);
      (*pcVar1)();
    }
    piVar9 = (int *)piVar11[0x50];
    if (piVar9 != (int *)0x0) {
      do {
        iVar8 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_010a5af0;
      local_1cf4 = piVar11[0x51];
    }
    FUN_01bed4e2((uint)auStack_cc8 | 4,auStack_10c8,0x400);
    local_898 = 0;
    FUN_01bed4e2(auStack_894,auStack_cc8,0x404);
    *puVar12 = 0;
    puVar12[1] = 0;
    local_8bc = 0;
    local_490 = 0;
    local_48c = 0;
    local_488 = 0;
    local_48 = 0;
    puVar12[4] = piVar6;
    puVar12[5] = uVar5;
    local_8b8 = (undefined **)&DAT_01c1a6d4;
    local_8c0 = (int *)0xcc;
    local_47c = local_1cf4;
    local_8a8 = piVar11;
    local_480 = piVar9;
    iVar8 = FUN_01be5878(&local_48,0x20,0x460);
    uVar7 = local_48;
    if ((iVar8 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x460);
    }
    FUN_01bed4e2(local_48,&local_8c0,0x460);
    iVar8 = FUN_01a89190(piVar11 + 0x14,uVar7,uVar7);
    if (piVar11[0x4e] != 0) {
      local_8c0 = piVar6;
      local_8bc = uVar5;
      (**(code **)(piVar11[0x4f] + 0x14))
                (piVar11[0x4e] + (*(int *)(piVar11[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_8c0);
    }
    if (iVar8 != 0) {
      local_48 = local_48 & 0xffffff00;
      local_8c0 = piVar11 + 2;
      local_8bc = iVar8;
      local_8b8 = (undefined **)&local_48;
      FUN_019ee860(&local_8c0);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar7;
}

