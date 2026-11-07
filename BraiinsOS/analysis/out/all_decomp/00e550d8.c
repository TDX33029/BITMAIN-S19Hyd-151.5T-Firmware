// FUN_00e550d8 @ 00e550d8 size=1204 calls_out=11 calls_in=0
// strings: 

int FUN_00e550d8(undefined4 param_1,undefined4 param_2)

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
  int local_34c;
  uint local_340;
  int local_33c;
  undefined1 auStack_338 [112];
  uint *local_2c8;
  undefined1 *local_2c4;
  undefined1 auStack_2c0 [120];
  undefined1 local_248 [112];
  undefined4 *local_1d8;
  undefined1 auStack_1d0 [112];
  int *local_160;
  undefined1 *local_15c;
  undefined **local_158;
  int *local_148;
  undefined4 local_138;
  undefined1 auStack_134 [116];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a0 [116];
  int local_2c;
  undefined1 uStack_25;
  
  puVar10 = (undefined4 *)((uint)&local_160 | 0x10);
  do {
    do {
      local_340 = DAT_018d9200;
      local_33c = DAT_018d9204;
      uVar8 = DAT_018d9200 + 1;
      iVar9 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = iVar9;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(auStack_338,param_1,0x70);
  uVar13 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  local_2c4 = &uStack_25;
  local_2c8 = &local_340;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_00e5575c(auStack_338);
      local_248[0] = 1;
      goto LAB_00e55178;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_2c0,auStack_338,0x78);
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e55570;
  }
  *puVar11 = *puVar11 + 1;
  uVar8 = puVar11[1];
  FUN_016dd1aa(local_248,auStack_338,0x78);
  if (uVar8 == 2) {
    FUN_00e5575c(local_248);
    local_248[0] = 0;
    *puVar11 = *puVar11 - 1;
LAB_00e55178:
    local_160 = (int *)local_248;
    local_15c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_160,param_2);
  }
  FUN_016dd1aa(auStack_1d0,auStack_338,0x70);
  piVar5 = (int *)*local_1d8;
  uVar4 = local_1d8[1];
  if ((uVar8 & 1) == 0) {
    piVar12 = (int *)puVar11[2];
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_00e55570;
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
      if (iVar9 < 0) goto LAB_00e55570;
      iVar9 = piVar12[0x8e];
      local_34c = piVar12[0x8f];
    }
    FUN_016dd1aa((uint)local_a0 | 4,auStack_1d0,0x70);
    local_158 = &PTR_LAB_018797cc;
    local_160 = (int *)0xcc;
    puVar10[4] = piVar5;
    puVar10[5] = uVar4;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_15c = (undefined1 *)0x0;
    local_138 = 0;
    local_148 = piVar12;
    FUN_016dd1aa(auStack_134,local_a0,0x74);
    local_ac = local_34c;
    local_b8 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_2c = 0;
    local_b0 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xc0);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xc0);
    }
    FUN_016dd1aa(local_2c,&local_160,0xc0);
    iVar7 = FUN_00ee0238(piVar12 + 0x40,iVar9,iVar9);
    local_160 = piVar5;
    local_15c = (undefined1 *)uVar4;
    if (piVar12[0x8c] != 0) {
      (**(code **)(piVar12[0x8d] + 0x14))
                (piVar12[0x8c] + (*(int *)(piVar12[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_160);
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
LAB_00e55570:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe55570);
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
      if (iVar9 < 0) goto LAB_00e55570;
      iVar9 = piVar12[0x5c];
      local_34c = piVar12[0x5d];
    }
    FUN_016dd1aa((uint)local_a0 | 4,auStack_1d0,0x70);
    local_158 = &PTR_LAB_018793bc;
    puVar10[4] = piVar5;
    local_160 = (int *)0xcc;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[5] = uVar4;
    local_15c = (undefined1 *)0x0;
    local_138 = 0;
    local_148 = piVar12;
    FUN_016dd1aa(auStack_134,local_a0,0x74);
    local_ac = local_34c;
    local_b8 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_2c = 0;
    local_b0 = iVar9;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0xc0);
    iVar9 = local_2c;
    if ((iVar7 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xc0);
    }
    FUN_016dd1aa(local_2c,&local_160,0xc0);
    iVar7 = FUN_00ee0238(piVar12 + 0x14,iVar9,iVar9);
    if (piVar12[0x5a] != 0) {
      local_160 = piVar5;
      local_15c = (undefined1 *)uVar4;
      (**(code **)(piVar12[0x5b] + 0x14))
                (piVar12[0x5a] + (*(int *)(piVar12[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_160);
    }
    if (iVar7 != 0) {
      local_a0[0] = 0;
      local_160 = piVar12 + 2;
      local_15c = (undefined1 *)iVar7;
      local_158 = (undefined **)local_a0;
      FUN_0164511c(&local_160);
    }
  }
  *puVar11 = *puVar11 - 1;
  return iVar9;
}

