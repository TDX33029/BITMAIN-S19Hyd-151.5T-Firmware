// FUN_005e3c78 @ 005e3c78 size=840 calls_out=12 calls_in=1
// strings: 

uint * FUN_005e3c78(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int extraout_r3;
  int extraout_r3_00;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 **local_c8;
  undefined1 uStack_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  uint **local_c0;
  code *local_bc;
  undefined **local_b8;
  undefined4 local_a8;
  int *local_a4;
  uint *local_a0;
  int local_9c;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_60;
  int local_5c;
  
  uVar17 = FUN_0164ec90(param_2);
  piVar10 = (int *)(uVar17 >> 0x20);
  puVar16 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      iVar9 = DAT_018d9204;
      uVar4 = DAT_018d9200;
      uVar11 = DAT_018d9200 + 1;
      local_9c = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar11;
    DAT_018d9204 = local_9c;
  } while (bVar2 && bVar3);
  uVar6 = param_1[1];
  iVar15 = 0x248;
  uVar7 = param_1[2];
  uVar14 = *param_1;
  if ((uVar17 & 1) == 0) {
    piVar12 = piVar10 + 0x60;
    if ((char)*piVar12 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar12);
      if (!bVar2) goto LAB_005e3d4c;
      *(char *)piVar12 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_005e3d4c:
      FUN_01280da8(piVar12);
    }
    FUN_0128236c(piVar12);
    piVar10[0x6a] = piVar10[0x6a] + 1;
    FUN_01282570(piVar12);
    if ((char)*piVar12 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar12);
        if (bVar2) {
          *(char *)piVar12 = '\0';
          local_9c = extraout_r3;
          goto LAB_005e3da8;
        }
      } while ((char)*piVar12 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar12);
    local_9c = extraout_r3_00;
LAB_005e3da8:
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e3e24;
    local_a8 = 0;
    iVar8 = 0x230;
  }
  else {
    iVar15 = 0x178;
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e3e24;
    local_a8 = 1;
    iVar8 = 0x168;
  }
  piVar12 = *(int **)((int)piVar10 + iVar8 + 8);
  if (piVar12 != (int *)0x0) {
    do {
      iVar13 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar13 + 1;
    if (-1 < iVar13) {
      local_a0 = *(uint **)((int)piVar10 + iVar8 + 8);
      local_9c = *(int *)((int)piVar10 + iVar8 + 0xc);
      do {
        uVar11 = *local_a0;
        bVar2 = (bool)hasExclusiveAccess(local_a0);
      } while (!bVar2);
      *local_a0 = uVar11 + 1;
      if (uVar11 < 0x80000000) goto LAB_005e3e2c;
    }
LAB_005e3e24:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5e3e24);
    (*pcVar1)();
  }
  local_a0 = (uint *)0x0;
LAB_005e3e2c:
  local_c0 = (undefined4 **)0xcc;
  *puVar16 = 0;
  puVar16[1] = 0;
  local_bc = (code *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_90 = 0;
  local_c8 = (undefined4 **)0x0;
  local_b8 = &PTR_LAB_0187936c;
  puVar16[6] = uVar4;
  puVar16[7] = iVar9;
  local_a4 = piVar10;
  local_88 = uVar14;
  local_84 = uVar6;
  local_80 = uVar7;
  local_60 = local_a0;
  local_5c = local_9c;
  iVar9 = FUN_016d51b0(&local_c8,0x20,0x80);
  ppuVar5 = local_c8;
  if ((iVar9 != 0) || (local_c8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x80);
  }
  FUN_016dd1aa(local_c8,&local_c0,0x80);
  FUN_0164f1a8(&local_c0,*(undefined4 *)((int)piVar10 + iVar15),ppuVar5,1,uVar17);
  if (((uint)local_c0 & 0xfe) != 4) {
    uStack_c4 = SUB41(local_bc,0);
    local_c1 = (undefined1)((uint)local_bc >> 0x18);
    local_c8 = local_c0;
    local_c3 = (undefined2)((uint)local_bc >> 8);
    local_bc = FUN_015ef5b4;
    local_c0 = (uint **)&local_c8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00582d59,&local_c0,param_2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar9 + -1;
  if ((int)uVar17 == 0) {
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar10);
      return (uint *)ppuVar5;
    }
  }
  else if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar10);
  }
  return (uint *)ppuVar5;
}

