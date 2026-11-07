// FUN_01475d88 @ 01475d88 size=932 calls_out=2 calls_in=5
// strings: 

void FUN_01475d88(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_e5;
  undefined3 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  int *local_80;
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  
  uVar2 = *(undefined1 *)((int)param_2 + 0xea);
  piVar9 = (int *)param_2[0x2e];
  uVar7 = *(undefined2 *)(param_2 + 0x3a);
  do {
    iVar12 = *piVar9;
    bVar17 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar17);
  *piVar9 = iVar12 + 1;
  local_70 = CONCAT44(local_70._4_4_,(undefined4)local_70);
  if (-1 < iVar12) {
    iVar12 = param_2[0x34];
    bVar17 = param_2[0x30] != 0;
    uVar10 = 0;
    if (bVar17) {
      uVar10 = param_2[0x31];
    }
    if (bVar17) {
      local_158 = uVar10;
    }
    iVar11 = param_2[0x32];
    bVar18 = iVar11 == 1;
    if (bVar18) {
      iVar11 = param_2[0x33];
    }
    if (bVar18) {
      local_15c = iVar11;
    }
    if (iVar12 == 1) {
      local_154 = param_2[0x35];
    }
    uVar13 = param_2[0x2e];
    uVar3 = *(undefined1 *)(param_2 + 0x36);
    uVar14 = *(undefined4 *)((int)param_2 + 0xd9);
    uStack_e4 = (undefined3)((uint)param_2[0x37] >> 8);
    uVar16 = param_2[0x2f];
    uVar4 = *(undefined1 *)((int)param_2 + 0xe1);
    uVar5 = *(undefined1 *)(param_2 + 0x38);
    uVar6 = *(undefined1 *)((int)param_2 + 0xe2);
    piVar9 = (int *)param_2[0x18];
    uVar10 = param_2[0x19];
    do {
      iVar11 = *piVar9;
      bVar8 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar8);
    *piVar9 = iVar11 + 1;
    local_70 = CONCAT44(local_70._4_4_,(undefined4)local_70);
    if (-1 < iVar11) {
      piVar15 = (int *)param_2[0x1a];
      if (piVar15 != (int *)0x0) {
        do {
          iVar11 = *piVar15;
          bVar8 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar8);
        *piVar15 = iVar11 + 1;
        local_70 = CONCAT44(local_70._4_4_,(undefined4)local_70);
        if (iVar11 < 0) goto LAB_01476128;
        local_150 = param_2[0x1b];
      }
      local_e0 = *param_2;
      local_dc = param_2[1];
      local_d8 = param_2[2];
      local_d4 = param_2[3];
      local_d0 = param_2[4];
      local_cc = param_2[5];
      local_c8 = param_2[6];
      local_a0 = param_2[0x10];
      local_98 = param_2[0x12];
      local_94 = param_2[0x13];
      local_90 = param_2[0x14];
      local_8c = param_2[0x15];
      local_88 = param_2[0x16];
      local_b8 = param_2[10];
      uStack_b4 = param_2[0xb];
      local_a8 = param_2[0xe];
      local_a4 = param_2[0xf];
      local_74 = local_150;
      local_c4 = param_2[7];
      local_84 = *(undefined2 *)(param_2 + 0x17);
      local_b0 = param_2[0xc];
      local_c0 = param_2[8];
      local_bc = param_2[9];
      local_80 = piVar9;
      local_7c = uVar10;
      local_78 = piVar15;
      if (param_2[0x1e] == 0x3b9aca01) {
        local_70 = (**(code **)(param_2[0x1d] + 0x14))(param_2[0x1c]);
        uStack_68 = 0x3b9aca01;
      }
      else {
        FUN_0147f5c4(&local_70,param_2 + 0x1c);
      }
      piVar9 = (int *)param_2[0x39];
      if (piVar9 == (int *)0x0) {
        uVar10 = 0;
      }
      else {
        do {
          iVar11 = *piVar9;
          bVar8 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar8);
        *piVar9 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_01476128;
        uVar10 = param_2[0x39];
      }
      *(undefined1 *)(param_1 + 0xea) = uVar2;
      *(undefined2 *)(param_1 + 0xe8) = uVar7;
      FUN_016dd1aa(param_1 + 0x70,&local_70,0x48);
      *(undefined1 *)(param_1 + 0xd8) = uVar3;
      *(undefined4 *)(param_1 + 0xb8) = uVar13;
      *(undefined4 *)(param_1 + 0xbc) = uVar16;
      *(uint *)(param_1 + 0xc0) = (uint)bVar17;
      *(undefined4 *)(param_1 + 0xc4) = local_158;
      *(uint *)(param_1 + 200) = (uint)bVar18;
      local_e5 = (undefined1)((uint)uVar14 >> 0x18);
      *(undefined4 *)(param_1 + 0xd9) = uVar14;
      *(int *)(param_1 + 0xcc) = local_15c;
      *(uint *)(param_1 + 0xdc) = CONCAT31(uStack_e4,local_e5);
      *(undefined1 *)(param_1 + 0xe1) = uVar4;
      *(uint *)(param_1 + 0xd0) = (uint)(iVar12 == 1);
      *(undefined4 *)(param_1 + 0xd4) = local_154;
      *(undefined1 *)(param_1 + 0xe2) = uVar6;
      *(undefined1 *)(param_1 + 0xe0) = uVar5;
      FUN_016dd1aa(param_1,&local_e0,0x70);
      *(undefined4 *)(param_1 + 0xe4) = uVar10;
      return;
    }
  }
LAB_01476128:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1476128);
  (*pcVar1)();
}

