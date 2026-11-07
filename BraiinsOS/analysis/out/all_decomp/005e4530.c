// FUN_005e4530 @ 005e4530 size=840 calls_out=12 calls_in=0
// strings: 

uint * FUN_005e4530(undefined4 *param_1,undefined4 param_2)

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
  undefined4 **local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  uint **local_a0;
  code *local_9c;
  undefined **local_98;
  undefined4 local_88;
  int *local_84;
  uint *local_80;
  int local_7c;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  
  uVar17 = FUN_0164ec90(param_2);
  piVar10 = (int *)(uVar17 >> 0x20);
  puVar16 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      iVar9 = DAT_018d9204;
      uVar4 = DAT_018d9200;
      uVar11 = DAT_018d9200 + 1;
      local_7c = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar11;
    DAT_018d9204 = local_7c;
  } while (bVar2 && bVar3);
  uVar6 = param_1[1];
  iVar15 = 0x248;
  uVar7 = param_1[2];
  uVar14 = *param_1;
  if ((uVar17 & 1) == 0) {
    piVar12 = piVar10 + 0x60;
    if ((char)*piVar12 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar12);
      if (!bVar2) goto LAB_005e4604;
      *(char *)piVar12 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_005e4604:
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
          local_7c = extraout_r3;
          goto LAB_005e4660;
        }
      } while ((char)*piVar12 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar12);
    local_7c = extraout_r3_00;
LAB_005e4660:
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e46dc;
    local_88 = 0;
    iVar8 = 0x230;
  }
  else {
    iVar15 = 0x178;
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e46dc;
    local_88 = 1;
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
      local_80 = *(uint **)((int)piVar10 + iVar8 + 8);
      local_7c = *(int *)((int)piVar10 + iVar8 + 0xc);
      do {
        uVar11 = *local_80;
        bVar2 = (bool)hasExclusiveAccess(local_80);
      } while (!bVar2);
      *local_80 = uVar11 + 1;
      if (uVar11 < 0x80000000) goto LAB_005e46e4;
    }
LAB_005e46dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5e46dc);
    (*pcVar1)();
  }
  local_80 = (uint *)0x0;
LAB_005e46e4:
  local_a0 = (undefined4 **)0xcc;
  *puVar16 = 0;
  puVar16[1] = 0;
  local_9c = (code *)0x0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_70 = 0;
  local_a8 = (undefined4 **)0x0;
  local_98 = &PTR_LAB_01879574;
  puVar16[6] = uVar4;
  puVar16[7] = iVar9;
  local_84 = piVar10;
  local_68 = uVar14;
  local_64 = uVar6;
  local_60 = uVar7;
  local_48 = local_80;
  local_44 = local_7c;
  iVar9 = FUN_016d51b0(&local_a8,0x20,0x60);
  ppuVar5 = local_a8;
  if ((iVar9 != 0) || (local_a8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x60);
  }
  FUN_016dd1aa(local_a8,&local_a0,0x60);
  FUN_0164f1a8(&local_a0,*(undefined4 *)((int)piVar10 + iVar15),ppuVar5,1,uVar17);
  if (((uint)local_a0 & 0xfe) != 4) {
    uStack_a4 = SUB41(local_9c,0);
    local_a1 = (undefined1)((uint)local_9c >> 0x18);
    local_a8 = local_a0;
    local_a3 = (undefined2)((uint)local_9c >> 8);
    local_9c = FUN_015ef5b4;
    local_a0 = (uint **)&local_a8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00582d59,&local_a0,param_2);
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

