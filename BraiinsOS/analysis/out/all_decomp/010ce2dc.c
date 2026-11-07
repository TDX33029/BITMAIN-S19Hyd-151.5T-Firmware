// FUN_010ce2dc @ 010ce2dc size=836 calls_out=12 calls_in=0
// strings: 

uint * FUN_010ce2dc(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 *puVar13;
  ulonglong uVar14;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_60;
  int local_5c;
  
  uVar14 = FUN_0164ec90(&DAT_01885388);
  piVar9 = (int *)(uVar14 >> 0x20);
  puVar13 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      iVar8 = DAT_018d9204;
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
  iVar6 = 0x248;
  if ((uVar14 & 1) == 0) {
    piVar10 = piVar9 + 0x60;
    if ((char)*piVar10 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar2) goto LAB_010ce3fc;
      *(char *)piVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_010ce3fc:
      FUN_01280da8(piVar10);
    }
    FUN_0128236c(piVar10);
    piVar9[0x6a] = piVar9[0x6a] + 1;
    FUN_01282570(piVar10);
    if ((char)*piVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar10);
        if (bVar2) {
          *(char *)piVar10 = '\0';
          local_9c = extraout_r3;
          goto LAB_010ce458;
        }
      } while ((char)*piVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar10);
    local_9c = extraout_r3_00;
LAB_010ce458:
    do {
      iVar7 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_010ce620;
    local_a8 = 0;
    piVar10 = piVar9 + 0x8c;
    piVar12 = (int *)piVar9[0x8e];
  }
  else {
    iVar6 = 0x178;
    do {
      iVar7 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_010ce620;
    local_a8 = 1;
    piVar10 = piVar9 + 0x5a;
    piVar12 = (int *)piVar9[0x5c];
  }
  if (piVar12 != (int *)0x0) {
    do {
      iVar7 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar7 + 1;
    if (-1 < iVar7) {
      local_a0 = (uint *)piVar10[2];
      local_9c = piVar10[3];
      do {
        uVar11 = *local_a0;
        bVar2 = (bool)hasExclusiveAccess(local_a0);
      } while (!bVar2);
      *local_a0 = uVar11 + 1;
      if (uVar11 < 0x80000000) goto LAB_010ce490;
    }
LAB_010ce620:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10ce620);
    (*pcVar1)();
  }
  local_a0 = (uint *)0x0;
LAB_010ce490:
  *puVar13 = 0;
  puVar13[1] = 0;
  local_bc = (code *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_90 = 0;
  local_c8 = (undefined4 **)0x0;
  local_c0 = (undefined4 **)0xcc;
  local_b8 = &PTR_LAB_018852a4;
  puVar13[6] = uVar4;
  puVar13[7] = iVar8;
  local_a4 = piVar9;
  local_88 = param_1;
  local_84 = param_2;
  local_60 = local_a0;
  local_5c = local_9c;
  iVar8 = FUN_016d51b0(&local_c8,0x20,0x80);
  ppuVar5 = local_c8;
  if ((iVar8 != 0) || (local_c8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x80);
  }
  FUN_016dd1aa(local_c8,&local_c0,0x80);
  FUN_0164f1a8(&local_c0,*(undefined4 *)((int)piVar9 + iVar6),ppuVar5,1,uVar14);
  if (((uint)local_c0 & 0xfe) != 4) {
    uStack_c4 = SUB41(local_bc,0);
    local_c1 = (undefined1)((uint)local_bc >> 0x18);
    local_c8 = local_c0;
    local_c3 = (undefined2)((uint)local_bc >> 8);
    local_bc = FUN_015ef5b4;
    local_c0 = (uint **)&local_c8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00582d59,&local_c0,&DAT_01885388);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar8 + -1;
  if ((int)uVar14 == 0) {
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar9);
      return (uint *)ppuVar5;
    }
  }
  else if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar9);
  }
  return (uint *)ppuVar5;
}

