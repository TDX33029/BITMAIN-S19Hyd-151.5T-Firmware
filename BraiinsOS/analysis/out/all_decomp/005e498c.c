// FUN_005e498c @ 005e498c size=884 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_005e498c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  ulonglong uVar16;
  undefined4 **local_e0;
  undefined1 uStack_dc;
  undefined2 local_db;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint **local_c0;
  code *local_bc;
  undefined **local_b8;
  undefined4 local_a8;
  int *local_a4;
  uint *local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint *local_58;
  undefined4 local_54;
  
  uVar16 = FUN_0164ec90(param_2);
  piVar10 = (int *)(uVar16 >> 0x20);
  puVar6 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      iVar9 = DAT_018d9204;
      uVar4 = DAT_018d9200;
      uVar12 = DAT_018d9200 + 1;
      iVar14 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar12;
    DAT_018d9204 = iVar14;
  } while (bVar2 && bVar3);
  uVar7 = param_1[1];
  uVar11 = *param_1;
  local_d8 = param_1[2];
  uStack_d4 = param_1[3];
  uStack_d0 = param_1[4];
  uStack_cc = param_1[5];
  uStack_c8 = param_1[6];
  iVar14 = 0x248;
  if ((uVar16 & 1) == 0) {
    piVar13 = piVar10 + 0x60;
    if ((char)*piVar13 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar13);
      if (!bVar2) goto LAB_005e4a78;
      *(char *)piVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_005e4a78:
      FUN_01280da8(piVar13);
    }
    FUN_0128236c(piVar13);
    piVar10[0x6a] = piVar10[0x6a] + 1;
    FUN_01282570(piVar13);
    if ((char)*piVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (bVar2) {
          *(char *)piVar13 = '\0';
          local_9c = extraout_r12_00;
          goto LAB_005e4ad4;
        }
      } while ((char)*piVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar13);
    local_9c = extraout_r12_01;
LAB_005e4ad4:
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e4b50;
    local_a8 = 0;
    iVar8 = 0x230;
  }
  else {
    iVar14 = 0x178;
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_005e4b50;
    local_a8 = 1;
    iVar8 = 0x168;
    local_9c = extraout_r12;
  }
  piVar13 = *(int **)((int)piVar10 + iVar8 + 8);
  if (piVar13 != (int *)0x0) {
    do {
      iVar15 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar15 + 1;
    if (-1 < iVar15) {
      local_a0 = *(uint **)((int)piVar10 + iVar8 + 8);
      local_9c = *(undefined4 *)((int)piVar10 + iVar8 + 0xc);
      do {
        uVar12 = *local_a0;
        bVar2 = (bool)hasExclusiveAccess(local_a0);
      } while (!bVar2);
      *local_a0 = uVar12 + 1;
      if (uVar12 < 0x80000000) goto LAB_005e4b5c;
    }
LAB_005e4b50:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5e4b50);
    (*pcVar1)();
  }
  local_a0 = (uint *)0x0;
LAB_005e4b5c:
  local_c0 = (undefined4 **)0xcc;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[6] = uVar4;
  puVar6[7] = iVar9;
  local_bc = (code *)0x0;
  local_90 = 0;
  local_b8 = &PTR_LAB_0187977c;
  local_80 = local_d8;
  uStack_7c = uStack_d4;
  uStack_78 = uStack_d0;
  uStack_74 = uStack_cc;
  uStack_70 = uStack_c8;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_e0 = (undefined4 **)0x0;
  local_a4 = piVar10;
  local_88 = uVar11;
  local_84 = uVar7;
  local_58 = local_a0;
  local_54 = local_9c;
  iVar9 = FUN_016d51b0(&local_e0,0x20,0x80);
  ppuVar5 = local_e0;
  if ((iVar9 != 0) || (local_e0 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x80);
  }
  FUN_016dd1aa(local_e0,&local_c0,0x80);
  FUN_0164f1a8(&local_c0,*(undefined4 *)((int)piVar10 + iVar14),ppuVar5,1,uVar16);
  if (((uint)local_c0 & 0xfe) != 4) {
    uStack_dc = SUB41(local_bc,0);
    local_d9 = (undefined1)((uint)local_bc >> 0x18);
    local_e0 = local_c0;
    local_db = (undefined2)((uint)local_bc >> 8);
    local_bc = FUN_015ef5b4;
    local_c0 = (uint **)&local_e0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00582d59,&local_c0,param_2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar9 + -1;
  if ((int)uVar16 == 0) {
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

