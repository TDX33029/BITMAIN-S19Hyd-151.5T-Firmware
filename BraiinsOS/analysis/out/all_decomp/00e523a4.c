// FUN_00e523a4 @ 00e523a4 size=1204 calls_out=11 calls_in=0
// strings: 

int FUN_00e523a4(undefined4 param_1,undefined4 param_2)

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
  int local_2cc;
  uint local_2c0;
  int local_2bc;
  undefined1 auStack_2b8 [88];
  uint *local_260;
  undefined1 *local_25c;
  undefined1 auStack_258 [96];
  undefined1 local_1f8 [88];
  undefined4 *local_1a0;
  undefined1 auStack_198 [88];
  int *local_140;
  undefined1 *local_13c;
  undefined **local_138;
  int *local_128;
  undefined4 local_118;
  undefined1 auStack_114 [92];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_88 [92];
  int local_2c;
  undefined1 uStack_25;
  
  puVar10 = (undefined4 *)((uint)&local_140 | 0x10);
  do {
    do {
      local_2c0 = DAT_018d9200;
      local_2bc = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar9 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar9;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_2b8,param_1,0x58);
  uVar13 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_25c = &uStack_25;
  local_260 = &local_2c0;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00e52a28(auStack_2b8);
      local_1f8[0] = 1;
      goto LAB_00e52444;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_258,auStack_2b8,0x60);
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e5283c;
  }
  *puVar11 = *puVar11 + 1;
  uVar8 = puVar11[1];
  FUN_016dd1aa(local_1f8,auStack_2b8,0x60);
  if (uVar8 == 2) {
    FUN_00e52a28(local_1f8);
    local_1f8[0] = 0;
    *puVar11 = *puVar11 - 1;
LAB_00e52444:
    local_140 = (int *)local_1f8;
    local_13c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_140,param_2);
  }
  FUN_016dd1aa(auStack_198,auStack_2b8,0x58);
  piVar5 = (int *)*local_1a0;
  uVar4 = local_1a0[1];
  if ((uVar8 & 1) == 0) {
    piVar12 = (int *)puVar11[2];
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_00e5283c;
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
      if (iVar9 < 0) goto LAB_00e5283c;
      iVar9 = piVar12[0x8e];
      local_2cc = piVar12[0x8f];
    }
    FUN_016dd1aa((uint)local_88 | 4,auStack_198,0x58);
    local_138 = &PTR_LAB_01879664;
    local_140 = (int *)0xcc;
    puVar10[4] = piVar5;
    puVar10[5] = uVar4;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_13c = (undefined1 *)0x0;
    local_118 = 0;
    local_128 = piVar12;
    FUN_016dd1aa(auStack_114,local_88,0x5c);
    local_a4 = local_2cc;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_a8 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xa0);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xa0);
    }
    FUN_016dd1aa(local_2c,&local_140,0xa0);
    iVar7 = FUN_00ee0238(piVar12 + 0x40,iVar9,iVar9);
    local_140 = piVar5;
    local_13c = (undefined1 *)uVar4;
    if (piVar12[0x8c] != 0) {
      (**(code **)(piVar12[0x8d] + 0x14))
                (piVar12[0x8c] + (*(int *)(piVar12[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_140);
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
LAB_00e5283c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe5283c);
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
      if (iVar9 < 0) goto LAB_00e5283c;
      iVar9 = piVar12[0x5c];
      local_2cc = piVar12[0x5d];
    }
    FUN_016dd1aa((uint)local_88 | 4,auStack_198,0x58);
    local_138 = &PTR_LAB_0187918c;
    puVar10[4] = piVar5;
    local_140 = (int *)0xcc;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[5] = uVar4;
    local_13c = (undefined1 *)0x0;
    local_118 = 0;
    local_128 = piVar12;
    FUN_016dd1aa(auStack_114,local_88,0x5c);
    local_a4 = local_2cc;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_a8 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xa0);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xa0);
    }
    FUN_016dd1aa(local_2c,&local_140,0xa0);
    iVar7 = FUN_00ee0238(piVar12 + 0x14,iVar9,iVar9);
    if (piVar12[0x5a] != 0) {
      local_140 = piVar5;
      local_13c = (undefined1 *)uVar4;
      (**(code **)(piVar12[0x5b] + 0x14))
                (piVar12[0x5a] + (*(int *)(piVar12[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_140);
    }
    if (iVar7 != 0) {
      local_88[0] = 0;
      local_140 = piVar12 + 2;
      local_13c = (undefined1 *)iVar7;
      local_138 = (undefined **)local_88;
      FUN_0164511c(&local_140);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar9;
}

