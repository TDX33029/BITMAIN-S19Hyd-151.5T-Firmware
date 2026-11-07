// FUN_010a1a8c @ 010a1a8c size=1284 calls_out=12 calls_in=3
// strings: 

uint FUN_010a1a8c(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  int local_42c0;
  uint local_42b0;
  uint local_42ac;
  undefined1 auStack_42a8 [2408];
  uint *local_3940;
  undefined1 *local_393c;
  undefined1 auStack_3938 [2416];
  undefined1 auStack_2fc8 [2408];
  undefined4 *local_2660;
  undefined1 auStack_2658 [2408];
  undefined1 auStack_1cf0 [2416];
  int *local_1380;
  int local_137c;
  undefined **local_1378;
  int *local_1368;
  undefined4 local_1358;
  undefined1 auStack_1354 [2412];
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  int *local_9d8;
  uint local_9d4;
  undefined1 auStack_9b8 [2416];
  uint local_48;
  undefined1 auStack_41 [29];
  
  puVar12 = (undefined4 *)((uint)&local_1380 | 0x10);
  do {
    do {
      local_42b0 = DAT_01d50470;
      local_42ac = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      uVar10 = DAT_01d50474 + (0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    uVar11 = DAT_01d50470 | DAT_01d50474;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = uVar10;
  } while (uVar11 == 0);
  uVar4 = FUN_01bed4e2(auStack_42a8,param_1,0x968);
  uVar14 = thunk_FUN_01bee35a(uVar4,0x20);
  puVar9 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_393c = auStack_41;
  local_3940 = &local_42b0;
  if ((char)puVar9[0xe] != '\x01') {
    if ((char)puVar9[0xe] == '\x02') {
      FUN_010ec068(auStack_42a8);
      uVar3 = 1;
      goto LAB_010a1b38;
    }
    FUN_019a2bcc(puVar9,&LAB_019efb68);
    *(undefined1 *)(puVar9 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_3938,auStack_42a8,0x970);
  if (0x7ffffffe < *puVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar9 = *puVar9 + 1;
  uVar8 = puVar9[1];
  FUN_01bed4e2(auStack_2fc8,auStack_42a8,0x970);
  if (uVar8 == 2) {
    FUN_010ec068(auStack_2fc8);
    *puVar9 = *puVar9 - 1;
    uVar3 = 0;
LAB_010a1b38:
    local_1380 = (int *)CONCAT31(local_1380._1_3_,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_1380,param_2);
  }
  FUN_01bed4e2(auStack_2658,auStack_42a8,0x968);
  piVar5 = (int *)*local_2660;
  uVar4 = local_2660[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar9[2];
    do {
      iVar6 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_010a1f74;
    piVar7 = (int *)piVar13[0x82];
    if (piVar7 != (int *)0x0) {
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_010a1f74;
      local_42c0 = piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_9b8 | 4,auStack_2658,0x968);
    local_1358 = 0;
    FUN_01bed4e2(auStack_1354,auStack_9b8,0x96c);
    local_1378 = &PTR_LAB_01c1a9f4;
    puVar12[4] = piVar5;
    puVar12[5] = uVar4;
    local_9d4 = local_42c0;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_137c = 0;
    local_1380 = (int *)0xcc;
    local_9e8 = 0;
    local_9e4 = 0;
    local_9e0 = 0;
    local_48 = 0;
    local_1368 = piVar13;
    local_9d8 = piVar7;
    iVar6 = FUN_01be5878(&local_48,0x20,0x9c0);
    uVar8 = local_48;
    if ((iVar6 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x9c0);
    }
    FUN_01bed4e2(local_48,&local_1380,0x9c0);
    iVar6 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_1380 = piVar5;
    local_137c = uVar4;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1380);
    }
    if (iVar6 != 0) {
      FUN_019dc904(puVar9[2],iVar6);
    }
  }
  else {
    piVar13 = (int *)puVar9[2];
    do {
      iVar6 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_010a1f74:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a1f74);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_010a1f74;
      uVar11 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_1cf0 | 4,auStack_2658,0x968);
    local_1358 = 0;
    FUN_01bed4e2(auStack_1354,auStack_1cf0,0x96c);
    *puVar12 = 0;
    puVar12[1] = 0;
    local_137c = 0;
    local_9e8 = 0;
    local_9e4 = 0;
    local_9e0 = 0;
    local_48 = 0;
    puVar12[4] = piVar5;
    puVar12[5] = uVar4;
    local_1378 = (undefined **)&DAT_01c1a38c;
    local_1380 = (int *)0xcc;
    local_1368 = piVar13;
    local_9d8 = piVar7;
    local_9d4 = uVar11;
    iVar6 = FUN_01be5878(&local_48,0x20,0x9c0);
    uVar8 = local_48;
    if ((iVar6 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x9c0);
    }
    FUN_01bed4e2(local_48,&local_1380,0x9c0);
    iVar6 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_1380 = piVar5;
      local_137c = uVar4;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1380);
    }
    if (iVar6 != 0) {
      local_48 = local_48 & 0xffffff00;
      local_1380 = piVar13 + 2;
      local_137c = iVar6;
      local_1378 = (undefined **)&local_48;
      FUN_019ee860(&local_1380);
    }
  }
  *puVar9 = *puVar9 - 1;
  return uVar8;
}

