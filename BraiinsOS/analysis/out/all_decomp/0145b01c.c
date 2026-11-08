// FUN_0145b01c @ 0145b01c size=2344 calls_out=17 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1 | assertion failed: prev.ref_count() >= 1

void FUN_0145b01c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint **ppuVar13;
  uint *puVar14;
  int *piVar15;
  undefined8 uVar16;
  uint **local_a0;
  uint *local_9c;
  uint **local_98;
  uint local_94 [3];
  int *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  uint local_2c;
  uint *local_28;
  
  puVar11 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      puVar14 = DAT_018d9204;
      ppuVar13 = DAT_018d9200;
      ppuVar7 = (uint **)((int)DAT_018d9200 + 1);
      puVar8 = (uint *)((int)DAT_018d9204 + (uint)((uint **)0xfffffffe < DAT_018d9200));
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (uint **)0x0;
    bVar3 = DAT_018d9204 == (uint *)0x0;
    DAT_018d9200 = ppuVar7;
    DAT_018d9204 = puVar8;
  } while (bVar2 && bVar3);
  uVar16 = thunk_FUN_016de0ee(&DAT_018d9200,0x40);
  puVar8 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar8[0xe] != '\x01') {
    if ((char)puVar8[0xe] == '\x02') {
      if ((code *)*param_3 != (code *)0x0) {
        (*(code *)*param_3)(param_2);
      }
      uVar10 = 1;
      if (param_3[1] != 0) {
        thunk_FUN_016d3fb4(param_2);
      }
      goto LAB_0145b0b4;
    }
    FUN_015e8e6c(puVar8,FUN_009948a0);
    *(undefined1 *)(puVar8 + 0xe) = 1;
  }
  if (0x7ffffffe < *puVar8) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_0145b918;
  }
  *puVar8 = *puVar8 + 1;
  if (puVar8[1] == 2) {
    if ((code *)*param_3 != (code *)0x0) {
      (*(code *)*param_3)(param_2);
    }
    if (param_3[1] != 0) {
      thunk_FUN_016d3fb4(param_2);
    }
    uVar10 = 0;
    *puVar8 = *puVar8 - 1;
LAB_0145b0b4:
    local_28 = (uint *)CONCAT31(local_28._1_3_,uVar10);
    local_9c = (uint *)&LAB_0164eda0;
    local_a0 = &local_28;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_a0,&DAT_018a6078);
  }
  if ((puVar8[1] & 1) == 0) {
    piVar15 = (int *)puVar8[2];
    do {
      iVar4 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0145b918;
    piVar5 = (int *)piVar15[0x8e];
    if (piVar5 == (int *)0x0) {
      local_50 = 0;
      local_4c = 0;
    }
    else {
      do {
        iVar4 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_0145b918;
      local_50 = piVar15[0x8e];
      local_4c = piVar15[0x8f];
    }
    *puVar11 = 0;
    puVar11[1] = 0;
    local_9c = (uint *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_78 = 0;
    local_28 = (uint *)0x0;
    puVar11[4] = ppuVar13;
    puVar11[5] = puVar14;
    local_a0 = (uint **)0xcc;
    local_98 = (uint **)&PTR_LAB_018a383c;
    local_88 = piVar15;
    local_70 = param_2;
    local_6c = param_3;
    iVar4 = FUN_016d51b0(&local_28,0x20,0x60);
    puVar12 = local_28;
    if ((iVar4 != 0) || (local_28 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x60);
    }
    FUN_016dd1aa(local_28,&local_a0,0x60);
    uVar6 = piVar15[0x47];
    puVar12[4] = piVar15[0x46];
    puVar12[5] = uVar6;
    uVar6 = *(uint *)((int)puVar12 + *(int *)(puVar12[2] + 0x24));
    ppuVar7 = (uint **)(piVar15[0x40] + (piVar15[0x45] & uVar6) * 0xc);
    if (*(char *)ppuVar7 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(ppuVar7);
      if (!bVar2) goto LAB_0145b454;
      *(char *)ppuVar7 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0145b454:
      FUN_01280da8(ppuVar7);
    }
    FUN_0128236c(ppuVar7);
    DataMemoryBarrier(0xb);
    if ((char)piVar15[0x48] == '\0') {
      local_98 = (uint **)(piVar15 + 0x44);
      local_9c = (uint *)(piVar15 + 0x42);
      local_2c = *(uint *)((int)puVar12 + *(int *)(puVar12[2] + 0x24));
      local_a0 = ppuVar7;
      local_94[0] = uVar6;
      if (uVar6 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_2c,local_94,0);
      }
      puVar9 = ppuVar7[1];
      local_28 = puVar12;
      if (puVar9 == puVar12) {
        FUN_01446ab0(ppuVar7 + 1,&local_28,&DAT_018ac72c);
        goto LAB_0145b918;
      }
      *(uint **)((int)puVar12 + *(int *)(puVar12[2] + 0x1c) + 4) = puVar9;
      *(undefined4 *)((int)puVar12 + *(int *)(puVar12[2] + 0x1c)) = 0;
      if (puVar9 != (uint *)0x0) {
        *(uint **)((int)puVar9 + *(int *)(puVar9[2] + 0x1c)) = puVar12;
      }
      ppuVar7[1] = puVar12;
      if (ppuVar7[2] == (uint *)0x0) {
        ppuVar7[2] = puVar12;
      }
      do {
        uVar6 = *local_9c;
        bVar2 = (bool)hasExclusiveAccess(local_9c);
      } while (!bVar2);
      *local_9c = uVar6 + 1;
      piVar15[0x43] = piVar15[0x43] + (uint)(0xfffffffe < uVar6);
      do {
        bVar2 = (bool)hasExclusiveAccess(local_98);
      } while (!bVar2);
      *local_98 = (uint *)((int)*local_98 + 1);
      FUN_01282570(ppuVar7);
      if (*(char *)ppuVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppuVar7);
          if (bVar2) {
            *(char *)ppuVar7 = '\0';
            goto LAB_0145b78c;
          }
        } while (*(char *)ppuVar7 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppuVar7);
LAB_0145b78c:
      puVar9 = puVar12;
    }
    else {
      FUN_01282570(ppuVar7);
      if (*(char *)ppuVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(ppuVar7);
          if (bVar2) {
            *(char *)ppuVar7 = '\0';
            goto LAB_0145b4bc;
          }
        } while (*(char *)ppuVar7 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(ppuVar7);
LAB_0145b4bc:
      (**(code **)(puVar12[2] + 0x18))();
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar12;
        bVar2 = (bool)hasExclusiveAccess(puVar12);
      } while (!bVar2);
      *puVar12 = uVar6 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar6 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      puVar9 = (uint *)0x0;
      if ((uVar6 & 0xffffffc0) == 0x40) {
        (**(code **)(puVar12[2] + 8))(puVar12);
      }
    }
    local_a0 = ppuVar13;
    local_9c = puVar14;
    if (piVar15[0x8c] != 0) {
      (**(code **)(piVar15[0x8d] + 0x14))
                (piVar15[0x8c] + (*(int *)(piVar15[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_01659ec0(puVar8[2],puVar9);
    }
    goto LAB_0145b7e0;
  }
  piVar15 = (int *)puVar8[2];
  do {
    iVar4 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_0145b918;
  piVar5 = (int *)piVar15[0x5c];
  if (piVar5 == (int *)0x0) {
    local_50 = 0;
    local_4c = 0;
  }
  else {
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0145b918;
    local_50 = piVar15[0x5c];
    local_4c = piVar15[0x5d];
  }
  *puVar11 = 0;
  puVar11[1] = 0;
  local_9c = (uint *)0x0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_78 = 0;
  local_28 = (uint *)0x0;
  puVar11[4] = ppuVar13;
  puVar11[5] = puVar14;
  local_a0 = (uint **)0xcc;
  local_98 = (uint **)&PTR_LAB_018a3864;
  local_88 = piVar15;
  local_70 = param_2;
  local_6c = param_3;
  iVar4 = FUN_016d51b0(&local_28,0x20,0x60);
  puVar12 = local_28;
  if ((iVar4 != 0) || (local_28 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x60);
  }
  FUN_016dd1aa(local_28,&local_a0,0x60);
  uVar6 = piVar15[0x1b];
  puVar12[4] = piVar15[0x1a];
  puVar12[5] = uVar6;
  uVar6 = *(uint *)((int)puVar12 + *(int *)(puVar12[2] + 0x24));
  ppuVar7 = (uint **)(piVar15[0x14] + (piVar15[0x19] & uVar6) * 0xc);
  if (*(char *)ppuVar7 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(ppuVar7);
    if (!bVar2) goto LAB_0145b37c;
    *(char *)ppuVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0145b37c:
    FUN_01280da8(ppuVar7);
  }
  FUN_0128236c(ppuVar7);
  DataMemoryBarrier(0xb);
  if ((char)piVar15[0x1c] == '\0') {
    local_98 = (uint **)(piVar15 + 0x18);
    local_9c = (uint *)(piVar15 + 0x16);
    local_2c = *(uint *)((int)puVar12 + *(int *)(puVar12[2] + 0x24));
    local_a0 = ppuVar7;
    local_94[0] = uVar6;
    if (uVar6 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_2c,local_94,0);
    }
    puVar9 = ppuVar7[1];
    local_28 = puVar12;
    if (puVar9 == puVar12) {
      FUN_01446ab0(ppuVar7 + 1,&local_28,&DAT_018ac72c);
LAB_0145b918:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x145b918);
      (*pcVar1)();
    }
    *(uint **)((int)puVar12 + *(int *)(puVar12[2] + 0x1c) + 4) = puVar9;
    *(undefined4 *)((int)puVar12 + *(int *)(puVar12[2] + 0x1c)) = 0;
    if (puVar9 != (uint *)0x0) {
      *(uint **)((int)puVar9 + *(int *)(puVar9[2] + 0x1c)) = puVar12;
    }
    ppuVar7[1] = puVar12;
    if (ppuVar7[2] == (uint *)0x0) {
      ppuVar7[2] = puVar12;
    }
    do {
      uVar6 = *local_9c;
      bVar2 = (bool)hasExclusiveAccess(local_9c);
    } while (!bVar2);
    *local_9c = uVar6 + 1;
    piVar15[0x17] = piVar15[0x17] + (uint)(0xfffffffe < uVar6);
    do {
      bVar2 = (bool)hasExclusiveAccess(local_98);
    } while (!bVar2);
    *local_98 = (uint *)((int)*local_98 + 1);
    FUN_01282570(ppuVar7);
    if (*(char *)ppuVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(ppuVar7);
        if (bVar2) {
          *(char *)ppuVar7 = '\0';
          goto LAB_0145b620;
        }
      } while (*(char *)ppuVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c();
LAB_0145b620:
    puVar9 = puVar12;
  }
  else {
    FUN_01282570(ppuVar7);
    if (*(char *)ppuVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(ppuVar7);
        if (bVar2) {
          *(char *)ppuVar7 = '\0';
          goto LAB_0145b3e8;
        }
      } while (*(char *)ppuVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(ppuVar7);
LAB_0145b3e8:
    (**(code **)(puVar12[2] + 0x18))(puVar12);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar12;
      bVar2 = (bool)hasExclusiveAccess(puVar12);
    } while (!bVar2);
    *puVar12 = uVar6 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar6 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    puVar9 = (uint *)0x0;
    if ((uVar6 & 0xffffffc0) == 0x40) {
      (**(code **)(puVar12[2] + 8))(puVar12);
    }
  }
  local_a0 = ppuVar13;
  local_9c = puVar14;
  if (piVar15[0x5a] != 0) {
    (**(code **)(piVar15[0x5b] + 0x14))
              (piVar15[0x5a] + (*(int *)(piVar15[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
  }
  if (puVar9 != (uint *)0x0) {
    local_28 = (uint *)((uint)local_28 & 0xffffff00);
    local_98 = &local_28;
    local_a0 = (uint **)(piVar15 + 2);
    local_9c = puVar9;
    FUN_0164511c(&local_a0);
  }
LAB_0145b7e0:
  *puVar8 = *puVar8 - 1;
  if (*puVar12 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(puVar12);
    if (bVar2) {
      *puVar12 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(puVar12[2] + 0x10))(puVar12);
  return;
}

