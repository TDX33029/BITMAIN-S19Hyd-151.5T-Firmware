// FUN_00e53c50 @ 00e53c50 size=1192 calls_out=11 calls_in=0
// strings: 

int FUN_00e53c50(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int local_240;
  int *local_230;
  int local_22c;
  undefined1 auStack_228 [128];
  int **local_1a8;
  undefined1 *local_1a4;
  int *local_1a0;
  undefined1 *local_19c;
  undefined **local_198;
  int *local_188;
  undefined4 local_178;
  undefined1 auStack_174 [132];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e0;
  int local_dc;
  int local_b0 [33];
  int local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_1a0 | 0x10);
  do {
    do {
      local_230 = DAT_018d9200;
      local_22c = DAT_018d9204;
      piVar8 = (int *)((int)DAT_018d9200 + 1);
      iVar10 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int *)0x0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = piVar8;
    DAT_018d9204 = iVar10;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_228,param_1,0x80);
  uVar13 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_1a4 = &uStack_25;
  local_1a8 = &local_230;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00e542d8(auStack_228);
      local_b0[0]._0_1_ = 1;
      goto LAB_00e53cf4;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  iVar10 = local_22c;
  piVar8 = local_230;
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e540dc;
  }
  *puVar11 = *puVar11 + 1;
  if (puVar11[1] == 2) {
    FUN_00e542d8(auStack_228);
    local_b0[0]._0_1_ = 0;
    *puVar11 = *puVar11 - 1;
LAB_00e53cf4:
    local_1a0 = local_b0;
    local_19c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_1a0,param_2);
  }
  if ((puVar11[1] & 1) == 0) {
    piVar9 = (int *)puVar11[2];
    do {
      iVar5 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_00e540dc;
    piVar6 = (int *)piVar9[0x8e];
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00e540dc;
      iVar5 = piVar9[0x8e];
      local_240 = piVar9[0x8f];
    }
    FUN_016dd1aa((uint)local_b0 | 4,param_1,0x80);
    local_198 = &PTR_LAB_0187954c;
    local_1a0 = (int *)0xcc;
    puVar12[4] = piVar8;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = iVar10;
    local_19c = (undefined1 *)0x0;
    local_178 = 0;
    local_188 = piVar9;
    FUN_016dd1aa(auStack_174,local_b0,0x84);
    local_dc = local_240;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_2c = 0;
    local_e0 = iVar5;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xe0);
    iVar5 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xe0);
    }
    FUN_016dd1aa(local_2c,&local_1a0,0xe0);
    iVar7 = FUN_00ee0238(piVar9 + 0x40,iVar5,iVar5);
    local_1a0 = piVar8;
    local_19c = (undefined1 *)iVar10;
    if (piVar9[0x8c] != 0) {
      (**(code **)(piVar9[0x8d] + 0x14))
                (piVar9[0x8c] + (*(int *)(piVar9[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      FUN_01659ec0(puVar11[2],iVar7);
    }
  }
  else {
    piVar9 = (int *)puVar11[2];
    do {
      iVar5 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_00e540dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe540dc);
      (*pcVar1)();
    }
    piVar6 = (int *)piVar9[0x5c];
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00e540dc;
      iVar5 = piVar9[0x5c];
      local_240 = piVar9[0x5d];
    }
    FUN_016dd1aa((uint)local_b0 | 4,param_1,0x80);
    local_198 = &PTR_LAB_01879164;
    local_1a0 = (int *)0xcc;
    puVar12[4] = piVar8;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = iVar10;
    local_19c = (undefined1 *)0x0;
    local_178 = 0;
    local_188 = piVar9;
    FUN_016dd1aa(auStack_174,local_b0,0x84);
    local_dc = local_240;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_2c = 0;
    local_e0 = iVar5;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xe0);
    iVar5 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xe0);
    }
    FUN_016dd1aa(local_2c,&local_1a0,0xe0);
    iVar7 = FUN_00ee0238(piVar9 + 0x14,iVar5,iVar5);
    local_1a0 = piVar8;
    local_19c = (undefined1 *)iVar10;
    if (piVar9[0x5a] != 0) {
      (**(code **)(piVar9[0x5b] + 0x14))
                (piVar9[0x5a] + (*(int *)(piVar9[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar7 != 0) {
      local_b0[0]._0_1_ = 0;
      local_1a0 = piVar9 + 2;
      local_19c = (undefined1 *)iVar7;
      local_198 = (undefined **)local_b0;
      FUN_0164511c(&local_1a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar5;
}

