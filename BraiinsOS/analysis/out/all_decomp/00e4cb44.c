// FUN_00e4cb44 @ 00e4cb44 size=1228 calls_out=11 calls_in=0
// strings: 

int FUN_00e4cb44(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_d0c;
  uint local_d00;
  int local_cfc;
  undefined1 auStack_cf8 [528];
  uint *local_ae8;
  undefined1 *local_ae4;
  undefined1 auStack_ae0 [536];
  undefined1 local_8c8 [528];
  undefined4 *local_6b8;
  undefined1 auStack_6b0 [528];
  int *local_4a0;
  undefined1 *local_49c;
  undefined **local_498;
  int *local_488;
  undefined4 local_478;
  undefined1 auStack_474 [532];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  int local_250;
  int local_24c;
  undefined1 local_240 [532];
  int local_2c;
  undefined1 uStack_25;
  
  puVar10 = (undefined4 *)((uint)&local_4a0 | 0x10);
  do {
    do {
      local_d00 = DAT_018d9200;
      local_cfc = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar9 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar9;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_cf8,param_1,0x210);
  uVar13 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_ae4 = &uStack_25;
  local_ae8 = &local_d00;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00e4d1e0(auStack_cf8);
      local_8c8[0] = 1;
      goto LAB_00e4cbe8;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_ae0,auStack_cf8,0x218);
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e4cff0;
  }
  *puVar11 = *puVar11 + 1;
  uVar8 = puVar11[1];
  FUN_016dd1aa(local_8c8,auStack_cf8,0x218);
  if (uVar8 == 2) {
    FUN_00e4d1e0(local_8c8);
    local_8c8[0] = 0;
    *puVar11 = *puVar11 - 1;
LAB_00e4cbe8:
    local_4a0 = (int *)local_8c8;
    local_49c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_4a0,param_2);
  }
  FUN_016dd1aa(auStack_6b0,auStack_cf8,0x210);
  piVar5 = (int *)*local_6b8;
  uVar4 = local_6b8[1];
  if ((uVar8 & 1) == 0) {
    piVar12 = (int *)puVar11[2];
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_00e4cff0;
    piVar6 = (int *)piVar12[0x8e];
    if (piVar6 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_00e4cff0;
      iVar9 = piVar12[0x8e];
      local_d0c = piVar12[0x8f];
    }
    FUN_016dd1aa((uint)local_240 | 4,auStack_6b0,0x210);
    local_498 = &PTR_LAB_01879394;
    local_4a0 = (int *)0xcc;
    puVar10[4] = piVar5;
    puVar10[5] = uVar4;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_49c = (undefined1 *)0x0;
    local_478 = 0;
    local_488 = piVar12;
    FUN_016dd1aa(auStack_474,local_240,0x214);
    local_24c = local_d0c;
    local_258 = 0;
    local_25c = 0;
    local_260 = 0;
    local_2c = 0;
    local_250 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0x260);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x260);
    }
    FUN_016dd1aa(local_2c,&local_4a0,0x260);
    iVar7 = FUN_00ee0238(piVar12 + 0x40,iVar9,iVar9);
    local_4a0 = piVar5;
    local_49c = (undefined1 *)uVar4;
    if (piVar12[0x8c] != 0) {
      (**(code **)(piVar12[0x8d] + 0x14))
                (piVar12[0x8c] + (*(int *)(piVar12[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_4a0);
    }
    if (iVar7 != 0) {
      FUN_01659ec0(puVar11[2],iVar7);
    }
  }
  else {
    piVar12 = (int *)puVar11[2];
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_00e4cff0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe4cff0);
      (*pcVar1)();
    }
    piVar6 = (int *)piVar12[0x5c];
    if (piVar6 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_00e4cff0;
      iVar9 = piVar12[0x5c];
      local_d0c = piVar12[0x5d];
    }
    FUN_016dd1aa((uint)local_240 | 4,auStack_6b0,0x210);
    local_498 = &PTR_LAB_0187963c;
    puVar10[4] = piVar5;
    local_4a0 = (int *)0xcc;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[5] = uVar4;
    local_49c = (undefined1 *)0x0;
    local_478 = 0;
    local_488 = piVar12;
    FUN_016dd1aa(auStack_474,local_240,0x214);
    local_24c = local_d0c;
    local_258 = 0;
    local_25c = 0;
    local_260 = 0;
    local_2c = 0;
    local_250 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0x260);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x260);
    }
    FUN_016dd1aa(local_2c,&local_4a0,0x260);
    iVar7 = FUN_00ee0238(piVar12 + 0x14,iVar9,iVar9);
    if (piVar12[0x5a] != 0) {
      local_4a0 = piVar5;
      local_49c = (undefined1 *)uVar4;
      (**(code **)(piVar12[0x5b] + 0x14))
                (piVar12[0x5a] + (*(int *)(piVar12[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_4a0);
    }
    if (iVar7 != 0) {
      local_240[0] = 0;
      local_4a0 = piVar12 + 2;
      local_49c = (undefined1 *)iVar7;
      local_498 = (undefined **)local_240;
      FUN_0164511c(&local_4a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar9;
}

