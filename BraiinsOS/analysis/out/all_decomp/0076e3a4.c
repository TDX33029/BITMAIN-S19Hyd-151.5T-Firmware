// FUN_0076e3a4 @ 0076e3a4 size=1284 calls_out=11 calls_in=1
// strings: 

void FUN_0076e3a4(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int local_138;
  uint local_128;
  int local_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  uint *local_108;
  undefined1 *local_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  uint *puStack_e8;
  undefined1 *puStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  uint *local_c8;
  undefined1 *puStack_c4;
  int *local_c0;
  undefined1 *local_bc;
  undefined **local_b8;
  int *local_a8;
  undefined4 local_98;
  undefined *local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  undefined *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_2c;
  undefined1 uStack_25;
  
  puVar4 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      local_128 = DAT_018d9200;
      local_124 = DAT_018d9204;
      uVar12 = DAT_018d9200 + 1;
      iVar14 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar12;
    DAT_018d9204 = iVar14;
  } while (bVar2 && bVar3);
  local_120 = *param_1;
  iStack_11c = param_1[1];
  iStack_118 = param_1[2];
  iStack_114 = param_1[3];
  local_110 = param_1[4];
  iStack_10c = param_1[5];
  iVar14 = thunk_FUN_016de0ee();
  puVar15 = (uint *)(iVar14 + 0x40);
  local_104 = &uStack_25;
  local_108 = &local_128;
  if (*(char *)(iVar14 + 0x78) != '\x01') {
    if (*(char *)(iVar14 + 0x78) == '\x02') {
      FUN_007649a4(&local_120);
      uVar6 = 1;
      goto LAB_0076e44c;
    }
    FUN_015e8e6c(puVar15,FUN_009948a0);
    *(undefined1 *)(iVar14 + 0x78) = 1;
  }
  local_100 = local_120;
  iStack_fc = iStack_11c;
  iStack_f8 = iStack_118;
  iStack_f4 = iStack_114;
  local_f0 = local_110;
  iStack_ec = iStack_10c;
  puStack_e8 = local_108;
  puStack_e4 = local_104;
  if (0x7ffffffe < *puVar15) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_0076e88c;
  }
  *puVar15 = *puVar15 + 1;
  local_e0 = local_120;
  iStack_dc = iStack_11c;
  iStack_d8 = iStack_118;
  iStack_d4 = iStack_114;
  local_d0 = local_110;
  iStack_cc = iStack_10c;
  local_c8 = local_108;
  puStack_c4 = local_104;
  if (*(uint *)(iVar14 + 0x44) == 2) {
    FUN_007649a4(&local_e0);
    uVar6 = 0;
    *puVar15 = *puVar15 - 1;
LAB_0076e44c:
    local_e0 = CONCAT31(local_e0._1_3_,uVar6);
    local_c0 = &local_e0;
    local_bc = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_c0,&DAT_018a6078);
  }
  piVar8 = (int *)*local_108;
  uVar12 = local_108[1];
  if ((*(uint *)(iVar14 + 0x44) & 1) == 0) {
    piVar10 = *(int **)(iVar14 + 0x48);
    do {
      iVar9 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_0076e88c;
    piVar7 = (int *)piVar10[0x8e];
    if (piVar7 == (int *)0x0) {
      local_68 = 0;
    }
    else {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0076e88c;
      local_68 = piVar10[0x8e];
      local_138 = piVar10[0x8f];
    }
    iVar9 = param_1[1];
    iVar11 = param_1[2];
    iVar13 = param_1[3];
    iVar16 = param_1[4];
    iVar17 = param_1[5];
    piVar7 = (int *)((uint)&local_48 | 4);
    *piVar7 = *param_1;
    piVar7[1] = iVar9;
    piVar7[2] = iVar11;
    piVar7[3] = iVar13;
    piVar7[4] = iVar16;
    piVar7[5] = iVar17;
    puVar4[4] = piVar8;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = uVar12;
    local_bc = (undefined1 *)0x0;
    local_b8 = &PTR_LAB_01858284;
    local_c0 = (int *)0xcc;
    local_98 = 0;
    local_94 = local_48;
    uStack_90 = uStack_44;
    uStack_8c = uStack_40;
    local_88 = local_3c;
    uStack_84 = uStack_38;
    uStack_80 = uStack_34;
    uStack_7c = uStack_30;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = (int *)0x0;
    local_64 = local_138;
    local_a8 = piVar10;
    iVar9 = FUN_016d51b0(&local_2c,0x20,0x60);
    piVar7 = local_2c;
    if ((iVar9 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x60);
    }
    FUN_016dd1aa(local_2c,&local_c0,0x60);
    iVar9 = FUN_0072c788(piVar10 + 0x40,piVar7,piVar7);
    local_c0 = piVar8;
    local_bc = (undefined1 *)uVar12;
    if (piVar10[0x8c] != 0) {
      (**(code **)(piVar10[0x8d] + 0x14))
                (piVar10[0x8c] + (*(int *)(piVar10[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (iVar9 != 0) {
      FUN_01659ec0(*(undefined4 *)(iVar14 + 0x48),iVar9);
    }
  }
  else {
    piVar10 = *(int **)(iVar14 + 0x48);
    do {
      iVar14 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_0076e88c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x76e88c);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar10[0x5c];
    if (piVar7 == (int *)0x0) {
      local_68 = 0;
    }
    else {
      do {
        iVar14 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_0076e88c;
      local_68 = piVar10[0x5c];
      local_138 = piVar10[0x5d];
    }
    iVar14 = param_1[1];
    iVar9 = param_1[2];
    iVar11 = param_1[3];
    iVar13 = param_1[4];
    iVar16 = param_1[5];
    piVar7 = (int *)((uint)&local_48 | 4);
    *piVar7 = *param_1;
    piVar7[1] = iVar14;
    piVar7[2] = iVar9;
    piVar7[3] = iVar11;
    piVar7[4] = iVar13;
    piVar7[5] = iVar16;
    puVar4[4] = piVar8;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = uVar12;
    local_bc = (undefined1 *)0x0;
    local_b8 = &PTR_LAB_0185802c;
    local_c0 = (int *)0xcc;
    local_98 = 0;
    local_94 = local_48;
    uStack_90 = uStack_44;
    uStack_8c = uStack_40;
    local_88 = local_3c;
    uStack_84 = uStack_38;
    uStack_80 = uStack_34;
    uStack_7c = uStack_30;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = (int *)0x0;
    local_64 = local_138;
    local_a8 = piVar10;
    iVar14 = FUN_016d51b0(&local_2c,0x20,0x60);
    piVar7 = local_2c;
    if ((iVar14 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x60);
    }
    FUN_016dd1aa(local_2c,&local_c0,0x60);
    uVar5 = FUN_0072c788(piVar10 + 0x14,piVar7,piVar7);
    local_c0 = piVar8;
    local_bc = (undefined1 *)uVar12;
    if (piVar10[0x5a] != 0) {
      (**(code **)(piVar10[0x5b] + 0x14))
                (piVar10[0x5a] + (*(int *)(piVar10[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (uVar5 != 0) {
      local_48 = (undefined *)((uint)local_48 & 0xffffff00);
      local_b8 = &local_48;
      local_c0 = piVar10 + 2;
      local_bc = (undefined1 *)uVar5;
      FUN_0164511c(&local_c0);
    }
  }
  *puVar15 = *puVar15 - 1;
  if (*piVar7 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar7);
    if (bVar2) {
      *piVar7 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar7[2] + 0x10))(piVar7);
  return;
}

