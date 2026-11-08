// FUN_00767950 @ 00767950 size=1232 calls_out=11 calls_in=4
// strings: 

int FUN_00767950(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int local_228;
  uint local_218;
  int local_214;
  uint *local_210;
  undefined1 *local_20c;
  undefined1 auStack_208 [72];
  undefined1 auStack_1c0 [80];
  undefined4 *local_170 [20];
  undefined4 **local_120;
  undefined1 *local_11c;
  undefined **local_118;
  int *local_108;
  undefined4 local_f8;
  undefined1 auStack_f4 [76];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_98;
  int local_94;
  undefined1 local_78 [76];
  int local_2c;
  undefined1 uStack_25;
  
  puVar13 = (undefined4 *)((uint)&local_120 | 0x10);
  do {
    do {
      local_218 = DAT_018d9200;
      local_214 = DAT_018d9204;
      uVar9 = DAT_018d9200 + 1;
      iVar11 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar9;
    DAT_018d9204 = iVar11;
  } while (bVar2 && bVar3);
  local_20c = &uStack_25;
  local_210 = &local_218;
  uVar4 = FUN_016dd1aa(auStack_208,param_1,0x44);
  uVar14 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar12 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  if ((char)puVar12[0xe] != '\x01') {
    if ((char)puVar12[0xe] == '\x02') {
      FUN_00768004(&local_210);
      uVar7 = 1;
      goto LAB_007679f4;
    }
    FUN_015e8e6c(puVar12,FUN_009948a0);
    *(undefined1 *)(puVar12 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_1c0,&local_210,0x4c);
  if (0x7ffffffe < *puVar12) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00767e04;
  }
  *puVar12 = *puVar12 + 1;
  uVar9 = puVar12[1];
  FUN_016dd1aa(local_170,&local_210,0x4c);
  if (uVar9 == 2) {
    FUN_00768004(local_170);
    uVar7 = 0;
    *puVar12 = *puVar12 - 1;
LAB_007679f4:
    local_170[0] = (undefined4 *)CONCAT31(local_170[0]._1_3_,uVar7);
    local_120 = local_170;
    local_11c = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_120,&DAT_0185c43c);
  }
  ppuVar8 = (undefined4 **)*local_170[0];
  uVar4 = local_170[0][1];
  if ((uVar9 & 1) == 0) {
    piVar10 = (int *)puVar12[2];
    do {
      iVar11 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_00767e04;
    piVar5 = (int *)piVar10[0x8e];
    if (piVar5 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      do {
        iVar11 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_00767e04;
      iVar11 = piVar10[0x8e];
      local_228 = piVar10[0x8f];
    }
    FUN_016dd1aa((uint)local_78 | 4,param_1,0x44);
    local_118 = &PTR_LAB_018580a4;
    local_120 = (undefined4 **)0xcc;
    puVar13[4] = ppuVar8;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_11c = (undefined1 *)0x0;
    local_f8 = 0;
    local_108 = piVar10;
    FUN_016dd1aa(auStack_f4,local_78,0x48);
    local_94 = local_228;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_2c = 0;
    local_98 = iVar11;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0xa0);
    iVar11 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xa0);
    }
    FUN_016dd1aa(local_2c,&local_120,0xa0);
    iVar6 = FUN_0072c788(piVar10 + 0x40,iVar11,iVar11);
    local_120 = ppuVar8;
    local_11c = (undefined1 *)uVar4;
    if (piVar10[0x8c] != 0) {
      (**(code **)(piVar10[0x8d] + 0x14))
                (piVar10[0x8c] + (*(int *)(piVar10[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_120);
    }
    if (iVar6 != 0) {
      FUN_01659ec0(puVar12[2],iVar6);
    }
  }
  else {
    piVar10 = (int *)puVar12[2];
    do {
      iVar11 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar11 + 1;
    if (iVar11 < 0) {
LAB_00767e04:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x767e04);
      (*pcVar1)();
    }
    piVar5 = (int *)piVar10[0x5c];
    if (piVar5 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      do {
        iVar11 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_00767e04;
      iVar11 = piVar10[0x5c];
      local_228 = piVar10[0x5d];
    }
    FUN_016dd1aa((uint)local_78 | 4,param_1,0x44);
    local_118 = &PTR_LAB_01858234;
    local_120 = (undefined4 **)0xcc;
    puVar13[4] = ppuVar8;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[5] = uVar4;
    local_11c = (undefined1 *)0x0;
    local_f8 = 0;
    local_108 = piVar10;
    FUN_016dd1aa(auStack_f4,local_78,0x48);
    local_94 = local_228;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_2c = 0;
    local_98 = iVar11;
    iVar6 = FUN_016d51b0(&local_2c,0x20,0xa0);
    iVar11 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xa0);
    }
    FUN_016dd1aa(local_2c,&local_120,0xa0);
    iVar6 = FUN_0072c788(piVar10 + 0x14,iVar11,iVar11);
    if (piVar10[0x5a] != 0) {
      local_120 = ppuVar8;
      local_11c = (undefined1 *)uVar4;
      (**(code **)(piVar10[0x5b] + 0x14))
                (piVar10[0x5a] + (*(int *)(piVar10[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_120);
    }
    if (iVar6 != 0) {
      local_78[0] = 0;
      local_120 = (undefined4 **)(piVar10 + 2);
      local_11c = (undefined1 *)iVar6;
      local_118 = (undefined **)local_78;
      FUN_0164511c(&local_120);
    }
  }
  *puVar12 = *puVar12 - 1;
  return iVar11;
}

