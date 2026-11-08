// FUN_00e4e788 @ 00e4e788 size=1400 calls_out=11 calls_in=0
// strings: 

int FUN_00e4e788(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int local_88d4;
  int local_88d0;
  uint local_88c0;
  int local_88bc;
  undefined1 auStack_88b8 [5800];
  uint *local_7210;
  undefined1 *local_720c;
  undefined1 auStack_7208 [5808];
  undefined1 local_5b58 [5800];
  undefined4 *puStack_44b0;
  undefined1 auStack_44a8 [5800];
  int *local_2e00;
  undefined1 *local_2dfc;
  undefined **local_2df8;
  int *local_2de8;
  undefined4 local_2dd8;
  undefined1 auStack_2dd4 [5804];
  undefined4 local_1728;
  undefined4 local_1724;
  undefined4 local_1720;
  int local_1718;
  int local_1714;
  undefined1 local_16f8 [5808];
  int local_48;
  undefined1 auStack_41 [29];
  
  puVar12 = (undefined4 *)((uint)&local_2e00 | 0x10);
  do {
    do {
      local_88c0 = DAT_018d9200;
      local_88bc = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar10 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar10;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_88b8,param_1,0x16a8);
  uVar13 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar9 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_7210 = &local_88c0;
  local_720c = auStack_41;
  if ((char)puVar9[0xe] != '\x01') {
    if ((char)puVar9[0xe] == '\x02') {
      FUN_00e4eef0(auStack_88b8);
      local_5b58[0] = 1;
      goto LAB_00e4e844;
    }
    FUN_015e8e6c(puVar9,FUN_005bc49c);
    *(undefined1 *)(puVar9 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_7208,auStack_88b8,0x16b0);
  if (0x7ffffffe < *puVar9) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e4ecdc;
  }
  *puVar9 = *puVar9 + 1;
  uVar8 = puVar9[1];
  FUN_016dd1aa(local_5b58,auStack_88b8,0x16b0);
  if (uVar8 == 2) {
    FUN_00e4eef0(local_5b58);
    *puVar9 = *puVar9 - 1;
    local_5b58[0] = 0;
LAB_00e4e844:
    local_2e00 = (int *)local_5b58;
    local_2dfc = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_2e00,param_2);
  }
  FUN_016dd1aa(auStack_44a8,auStack_88b8,0x16a8);
  piVar5 = (int *)*puStack_44b0;
  uVar4 = puStack_44b0[1];
  if ((uVar8 & 1) == 0) {
    piVar11 = (int *)puVar9[2];
    do {
      iVar10 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_00e4ecdc;
    piVar6 = (int *)piVar11[0x8e];
    if (piVar6 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      do {
        iVar10 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00e4ecdc;
      iVar10 = piVar11[0x8e];
      local_88d0 = piVar11[0x8f];
    }
    FUN_016dd1aa((uint)local_16f8 | 4,auStack_44a8,0x16a8);
    local_2df8 = &PTR_LAB_0187922c;
    puVar12[4] = piVar5;
    puVar12[5] = uVar4;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_2dfc = (undefined1 *)0x0;
    local_2e00 = (int *)0xcc;
    local_2dd8 = 0;
    local_2de8 = piVar11;
    FUN_016dd1aa(auStack_2dd4,local_16f8,0x16ac);
    local_1714 = local_88d0;
    local_1728 = 0;
    local_1724 = 0;
    local_1720 = 0;
    local_48 = 0;
    local_1718 = iVar10;
    iVar7 = FUN_016d51b0(&local_48,0x20,0x1700);
    iVar10 = local_48;
    if ((iVar7 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1700);
    }
    FUN_016dd1aa(local_48,&local_2e00,0x1700);
    iVar7 = FUN_00ee0238(piVar11 + 0x40,iVar10,iVar10);
    local_2e00 = piVar5;
    local_2dfc = (undefined1 *)uVar4;
    if (piVar11[0x8c] != 0) {
      (**(code **)(piVar11[0x8d] + 0x14))
                (piVar11[0x8c] + (*(int *)(piVar11[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_2e00);
    }
    if (iVar7 != 0) {
      FUN_01659ec0(puVar9[2],iVar7);
    }
  }
  else {
    piVar11 = (int *)puVar9[2];
    do {
      iVar10 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_00e4ecdc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe4ecdc);
      (*pcVar1)();
    }
    piVar6 = (int *)piVar11[0x5c];
    if (piVar6 == (int *)0x0) {
      local_88d0 = 0;
    }
    else {
      do {
        iVar10 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00e4ecdc;
      local_88d0 = piVar11[0x5c];
      local_88d4 = piVar11[0x5d];
    }
    FUN_016dd1aa((uint)local_16f8 | 4,auStack_44a8,0x16a8);
    local_2df8 = &PTR_LAB_018797f4;
    puVar12[4] = piVar5;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar4;
    local_2dfc = (undefined1 *)0x0;
    local_2e00 = (int *)0xcc;
    local_2dd8 = 0;
    local_2de8 = piVar11;
    FUN_016dd1aa(auStack_2dd4,local_16f8,0x16ac);
    local_1718 = local_88d0;
    local_1714 = local_88d4;
    local_1728 = 0;
    local_1724 = 0;
    local_1720 = 0;
    local_48 = 0;
    iVar7 = FUN_016d51b0(&local_48,0x20,0x1700);
    iVar10 = local_48;
    if ((iVar7 != 0) || (local_48 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1700);
    }
    FUN_016dd1aa(local_48,&local_2e00,0x1700);
    iVar7 = FUN_00ee0238(piVar11 + 0x14,iVar10,iVar10);
    if (piVar11[0x5a] != 0) {
      local_2e00 = piVar5;
      local_2dfc = (undefined1 *)uVar4;
      (**(code **)(piVar11[0x5b] + 0x14))
                (piVar11[0x5a] + (*(int *)(piVar11[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_2e00);
    }
    if (iVar7 != 0) {
      local_16f8[0] = 0;
      local_2e00 = piVar11 + 2;
      local_2df8 = (undefined **)local_16f8;
      local_2dfc = (undefined1 *)iVar7;
      FUN_0164511c(&local_2e00);
    }
  }
  *puVar9 = *puVar9 - 1;
  return iVar10;
}

