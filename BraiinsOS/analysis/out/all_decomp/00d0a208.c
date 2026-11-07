// FUN_00d0a208 @ 00d0a208 size=1232 calls_out=11 calls_in=4
// strings: 

int FUN_00d0a208(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int local_4c0;
  uint local_4b0;
  int local_4ac;
  undefined1 auStack_4a8 [208];
  uint *local_3d8;
  undefined1 *local_3d4;
  undefined1 auStack_3d0 [216];
  int local_2f8 [52];
  undefined4 *local_228;
  int *local_220;
  undefined1 *local_21c;
  undefined **local_218;
  int *local_208;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [212];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_110;
  uint *local_10c;
  undefined1 local_100 [212];
  int local_2c;
  undefined1 uStack_25;
  
  puVar13 = (undefined4 *)((uint)&local_220 | 0x10);
  do {
    do {
      local_4b0 = DAT_018d9200;
      local_4ac = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar10 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar10;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_4a8,param_1,0xd0);
  uVar14 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_3d4 = &uStack_25;
  local_3d8 = &local_4b0;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00d0a8b8(auStack_4a8);
      local_2f8[0]._0_1_ = 1;
      goto LAB_00d0a2b0;
    }
    FUN_015e8e6c(puVar11,FUN_00bacf28);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_3d0,auStack_4a8,0xd8);
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00d0a6bc;
  }
  *puVar11 = *puVar11 + 1;
  uVar8 = puVar11[1];
  FUN_016dd1aa(local_2f8,auStack_4a8,0xd8);
  if (uVar8 == 2) {
    FUN_00d0a8b8(local_2f8);
    local_2f8[0]._0_1_ = 0;
    *puVar11 = *puVar11 - 1;
LAB_00d0a2b0:
    local_220 = local_2f8;
    local_21c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_220,param_2);
  }
  piVar7 = (int *)*local_228;
  uVar4 = local_228[1];
  if ((uVar8 & 1) == 0) {
    piVar9 = (int *)puVar11[2];
    do {
      iVar10 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_00d0a6bc;
    piVar5 = (int *)piVar9[0x8e];
    if (piVar5 == (int *)0x0) {
      iVar10 = 0;
      puVar12 = puVar11;
    }
    else {
      do {
        iVar10 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00d0a6bc;
      iVar10 = piVar9[0x8e];
      puVar12 = (uint *)piVar9[0x8f];
    }
    FUN_016dd1aa((uint)local_100 | 4,param_1,0xd0);
    local_218 = &PTR_LAB_018763c0;
    local_220 = (int *)0xcc;
    puVar13[4] = piVar7;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_21c = (undefined1 *)0x0;
    local_1f8 = 0;
    local_208 = piVar9;
    FUN_016dd1aa(auStack_1f4,local_100,0xd4);
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_2c = 0;
    local_110 = iVar10;
    local_10c = puVar12;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x120);
    iVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x120);
    }
    FUN_016dd1aa(local_2c,&local_220,0x120);
    iVar6 = FUN_00c61cb4(piVar9 + 0x40,iVar10,iVar10);
    local_220 = piVar7;
    local_21c = (undefined1 *)uVar4;
    if (piVar9[0x8c] != 0) {
      (**(code **)(piVar9[0x8d] + 0x14))
                (piVar9[0x8c] + (*(int *)(piVar9[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_220);
    }
    if (iVar6 != 0) {
      FUN_01659ec0(puVar11[2],iVar6);
    }
  }
  else {
    piVar9 = (int *)puVar11[2];
    do {
      iVar10 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_00d0a6bc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xd0a6bc);
      (*pcVar1)();
    }
    piVar5 = (int *)piVar9[0x5c];
    if (piVar5 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      do {
        iVar10 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00d0a6bc;
      iVar10 = piVar9[0x5c];
      local_4c0 = piVar9[0x5d];
    }
    FUN_016dd1aa((uint)local_100 | 4,param_1,0xd0);
    local_218 = &PTR_LAB_01876258;
    local_220 = (int *)0xcc;
    puVar13[4] = piVar7;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_21c = (undefined1 *)0x0;
    local_1f8 = 0;
    local_208 = piVar9;
    FUN_016dd1aa(auStack_1f4,local_100,0xd4);
    local_10c = (uint *)local_4c0;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_2c = 0;
    local_110 = iVar10;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x120);
    iVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x120);
    }
    FUN_016dd1aa(local_2c,&local_220,0x120);
    iVar6 = FUN_00c61cb4(piVar9 + 0x14,iVar10,iVar10);
    if (piVar9[0x5a] != 0) {
      local_220 = piVar7;
      local_21c = (undefined1 *)uVar4;
      (**(code **)(piVar9[0x5b] + 0x14))
                (piVar9[0x5a] + (*(int *)(piVar9[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_220);
    }
    if (iVar6 != 0) {
      local_100[0] = 0;
      local_220 = piVar9 + 2;
      local_21c = (undefined1 *)iVar6;
      local_218 = (undefined **)local_100;
      FUN_0164511c(&local_220);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar10;
}

