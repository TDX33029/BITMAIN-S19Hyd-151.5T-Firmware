// FUN_00e544d4 @ 00e544d4 size=1232 calls_out=11 calls_in=0
// strings: 

int FUN_00e544d4(undefined4 param_1,undefined4 param_2)

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
  int local_740;
  uint local_730;
  int local_72c;
  undefined1 auStack_728 [336];
  uint *local_5d8;
  undefined1 *local_5d4;
  undefined1 auStack_5d0 [344];
  int local_478 [84];
  undefined4 *local_328;
  int *local_320;
  undefined1 *local_31c;
  undefined **local_318;
  int *local_308;
  undefined4 local_2f8;
  undefined1 auStack_2f4 [340];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_190;
  uint *local_18c;
  undefined1 local_180 [340];
  int local_2c;
  undefined1 uStack_25;
  
  puVar13 = (undefined4 *)((uint)&local_320 | 0x10);
  do {
    do {
      local_730 = DAT_018d9200;
      local_72c = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar10 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar10;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_728,param_1,0x150);
  uVar14 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_5d4 = &uStack_25;
  local_5d8 = &local_730;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00e54b84(auStack_728);
      local_478[0]._0_1_ = 1;
      goto LAB_00e5457c;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_5d0,auStack_728,0x158);
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e54988;
  }
  *puVar11 = *puVar11 + 1;
  uVar8 = puVar11[1];
  FUN_016dd1aa(local_478,auStack_728,0x158);
  if (uVar8 == 2) {
    FUN_00e54b84(local_478);
    local_478[0]._0_1_ = 0;
    *puVar11 = *puVar11 - 1;
LAB_00e5457c:
    local_320 = local_478;
    local_31c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_320,param_2);
  }
  piVar7 = (int *)*local_328;
  uVar4 = local_328[1];
  if ((uVar8 & 1) == 0) {
    piVar9 = (int *)puVar11[2];
    do {
      iVar10 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_00e54988;
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
      if (iVar10 < 0) goto LAB_00e54988;
      iVar10 = piVar9[0x8e];
      puVar12 = (uint *)piVar9[0x8f];
    }
    FUN_016dd1aa((uint)local_180 | 4,param_1,0x150);
    local_318 = &PTR_LAB_018794fc;
    local_320 = (int *)0xcc;
    puVar13[4] = piVar7;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_31c = (undefined1 *)0x0;
    local_2f8 = 0;
    local_308 = piVar9;
    FUN_016dd1aa(auStack_2f4,local_180,0x154);
    local_198 = 0;
    local_19c = 0;
    local_1a0 = 0;
    local_2c = 0;
    local_190 = iVar10;
    local_18c = puVar12;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x1a0);
    iVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1a0);
    }
    FUN_016dd1aa(local_2c,&local_320,0x1a0);
    iVar6 = FUN_00ee0238(piVar9 + 0x40,iVar10,iVar10);
    local_320 = piVar7;
    local_31c = (undefined1 *)uVar4;
    if (piVar9[0x8c] != 0) {
      (**(code **)(piVar9[0x8d] + 0x14))
                (piVar9[0x8c] + (*(int *)(piVar9[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_320);
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
LAB_00e54988:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe54988);
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
      if (iVar10 < 0) goto LAB_00e54988;
      iVar10 = piVar9[0x5c];
      local_740 = piVar9[0x5d];
    }
    FUN_016dd1aa((uint)local_180 | 4,param_1,0x150);
    local_318 = &PTR_LAB_018795c4;
    local_320 = (int *)0xcc;
    puVar13[4] = piVar7;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_31c = (undefined1 *)0x0;
    local_2f8 = 0;
    local_308 = piVar9;
    FUN_016dd1aa(auStack_2f4,local_180,0x154);
    local_18c = (uint *)local_740;
    local_198 = 0;
    local_19c = 0;
    local_1a0 = 0;
    local_2c = 0;
    local_190 = iVar10;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0x1a0);
    iVar10 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1a0);
    }
    FUN_016dd1aa(local_2c,&local_320,0x1a0);
    iVar6 = FUN_00ee0238(piVar9 + 0x14,iVar10,iVar10);
    if (piVar9[0x5a] != 0) {
      local_320 = piVar7;
      local_31c = (undefined1 *)uVar4;
      (**(code **)(piVar9[0x5b] + 0x14))
                (piVar9[0x5a] + (*(int *)(piVar9[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_320);
    }
    if (iVar6 != 0) {
      local_180[0] = 0;
      local_320 = piVar9 + 2;
      local_31c = (undefined1 *)iVar6;
      local_318 = (undefined **)local_180;
      FUN_0164511c(&local_320);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar10;
}

