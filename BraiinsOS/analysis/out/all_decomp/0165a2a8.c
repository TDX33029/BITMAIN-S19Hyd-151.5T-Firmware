// FUN_0165a2a8 @ 0165a2a8 size=980 calls_out=15 calls_in=5
// strings: 

void FUN_0165a2a8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int extraout_r3;
  int extraout_r3_00;
  ulonglong uVar16;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_60;
  int local_5c;
  
  FUN_00fb4860(&local_e8);
  if ((short)local_e8 != 2) {
    *param_1 = local_e8;
    param_1[1] = uStack_e4;
    param_1[2] = uStack_e0;
    param_1[3] = uStack_dc;
    param_1[4] = local_d8;
    param_1[5] = uStack_d4;
    param_1[6] = uStack_d0;
    param_1[7] = uStack_cc;
    return;
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar7 = 1;
    iVar11 = 0;
  }
  else {
    iVar7 = thunk_FUN_016d4a50(param_3);
    iVar11 = param_3;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(iVar7,param_2,param_3);
  uVar16 = FUN_0164ec90(&DAT_018acf3c);
  piVar12 = (int *)(uVar16 >> 0x20);
  puVar8 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      iVar5 = DAT_018d9204;
      uVar4 = DAT_018d9200;
      uVar14 = DAT_018d9200 + 1;
      local_9c = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar14;
    DAT_018d9204 = local_9c;
  } while (bVar2 && bVar3);
  iVar9 = 0x248;
  if ((uVar16 & 1) == 0) {
    piVar13 = piVar12 + 0x60;
    if ((char)*piVar13 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar13);
      if (!bVar2) goto LAB_0165a44c;
      *(char *)piVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0165a44c:
      FUN_01280da8(piVar13);
    }
    FUN_0128236c(piVar13);
    piVar12[0x6a] = piVar12[0x6a] + 1;
    FUN_01282570(piVar13);
    if ((char)*piVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (bVar2) {
          *(char *)piVar13 = '\0';
          local_9c = extraout_r3;
          goto LAB_0165a4a8;
        }
      } while ((char)*piVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar13);
    local_9c = extraout_r3_00;
LAB_0165a4a8:
    do {
      iVar10 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_0165a67c;
    local_a8 = 0;
    piVar13 = piVar12 + 0x8c;
    piVar15 = (int *)piVar12[0x8e];
  }
  else {
    iVar9 = 0x178;
    do {
      iVar10 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_0165a67c;
    local_a8 = 1;
    piVar13 = piVar12 + 0x5a;
    piVar15 = (int *)piVar12[0x5c];
  }
  if (piVar15 != (int *)0x0) {
    do {
      iVar10 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar10 + 1;
    if (-1 < iVar10) {
      local_a0 = (uint *)piVar13[2];
      local_9c = piVar13[3];
      do {
        uVar14 = *local_a0;
        bVar2 = (bool)hasExclusiveAccess(local_a0);
      } while (!bVar2);
      *local_a0 = uVar14 + 1;
      if (uVar14 < 0x80000000) goto LAB_0165a4e0;
    }
LAB_0165a67c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x165a67c);
    (*pcVar1)();
  }
  local_a0 = (uint *)0x0;
LAB_0165a4e0:
  local_b8 = &PTR_LAB_018ace6c;
  puVar8[6] = uVar4;
  puVar8[7] = iVar5;
  *puVar8 = 0;
  puVar8[1] = 0;
  local_c0 = (undefined4 **)0xcc;
  local_bc = (code *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_90 = 0;
  local_c8 = (undefined4 **)0x0;
  local_a4 = piVar12;
  local_88 = iVar11;
  local_84 = iVar7;
  local_80 = param_3;
  local_60 = local_a0;
  local_5c = local_9c;
  iVar11 = FUN_016d51b0(&local_c8,0x20,0x80);
  ppuVar6 = local_c8;
  if ((iVar11 != 0) || (local_c8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x80);
  }
  FUN_016dd1aa(local_c8,&local_c0,0x80);
  FUN_0164f1a8(&local_c0,*(undefined4 *)((int)piVar12 + iVar9),ppuVar6,1,uVar16);
  if (((uint)local_c0 & 0xfe) != 4) {
    uStack_c4 = SUB41(local_bc,0);
    local_c1 = (undefined1)((uint)local_bc >> 0x18);
    local_c8 = local_c0;
    local_c3 = (undefined2)((uint)local_bc >> 8);
    local_bc = FUN_015ef5b4;
    local_c0 = (uint **)&local_c8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00582d59,&local_c0,&DAT_018acf3c);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar11 + -1;
  if ((int)uVar16 == 0) {
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar12);
    }
  }
  else if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar12);
  }
  param_1[1] = ppuVar6;
  *(undefined2 *)param_1 = 3;
  return;
}

