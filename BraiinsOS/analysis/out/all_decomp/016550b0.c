// FUN_016550b0 @ 016550b0 size=860 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_016550b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int extraout_r2;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 auStack_a7 [39];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  piVar3 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x20);
  }
  *(undefined1 *)(piVar3 + 7) = 0;
  piVar3[6] = 0;
  *piVar3 = 1;
  piVar3[1] = 1;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    puVar11 = *(undefined1 **)(param_1 + 0x20);
    *puVar5 = 1;
    puVar5[1] = 1;
    puVar5[2] = piVar3;
    if (puVar11 == &DAT_3b9aca00) {
      uVar17 = 10;
      puVar11 = (undefined1 *)0x0;
      uVar6 = 0;
    }
    else {
      uVar17 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
    }
    local_ec = 0;
    local_f0 = 0;
    uVar20 = thunk_FUN_016de0ee(uVar6,0,0x2c0);
    local_f8 = (undefined4)((ulonglong)uVar20 >> 0x20);
    puVar13 = (uint *)((int)uVar20 + extraout_r2);
    local_f4 = 4;
    if ((char)puVar13[4] == '\0') {
      FUN_015f62e4(&local_d0);
      *puVar13 = local_d0;
      puVar13[1] = local_cc;
      puVar13[2] = local_c8;
      puVar13[3] = local_c4;
      *(undefined1 *)(puVar13 + 4) = 1;
    }
    uVar7 = puVar13[2];
    uVar18 = *puVar13;
    uVar10 = puVar13[1];
    uVar8 = puVar13[3];
    *puVar13 = uVar18 + 1;
    puVar13[1] = uVar10 + (0xfffffffe < uVar18);
    local_108 = &DAT_005674cc;
    local_118 = local_f8;
    local_114 = local_f4;
    local_110 = local_f0;
    local_10c = local_ec;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    FUN_016dd1aa((uint)&local_f8 | 7,&local_118,0x20);
    piVar9 = *(int **)(param_1 + 0x28);
    do {
      iVar4 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar9 = *(int **)(param_1 + 0x30);
      uVar12 = *(undefined4 *)(param_1 + 0x28);
      uVar14 = *(undefined4 *)(param_1 + 0x2c);
      uVar19 = *(undefined4 *)(param_1 + 8);
      uVar16 = *(undefined4 *)(param_1 + 0xc);
      if (piVar9 == (int *)0x0) {
        local_13c = 0;
        piVar9 = *(int **)(param_1 + 0x38);
      }
      else {
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0165540c;
        local_13c = *(undefined4 *)(param_1 + 0x30);
        local_140 = *(undefined4 *)(param_1 + 0x34);
        piVar9 = *(int **)(param_1 + 0x38);
      }
      if (piVar9 == (int *)0x0) {
        uVar15 = 0;
      }
      else {
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0165540c;
        local_144 = *(undefined4 *)(param_1 + 0x3c);
        uVar15 = *(undefined4 *)(param_1 + 0x38);
      }
      FUN_016dd1aa(auStack_a7,&local_f8,0x27);
      local_cc = 1;
      local_d0 = 1;
      local_44 = local_144;
      local_68 = 0;
      local_a8 = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_40 = 0;
      local_58 = 0;
      local_5c = 0;
      local_70 = 0;
      local_c8 = uVar19;
      local_c4 = uVar16;
      local_c0 = uVar17;
      uStack_bc = uVar6;
      local_b8 = puVar11;
      local_b0 = uVar12;
      local_ac = uVar14;
      local_80 = uVar18;
      local_7c = uVar10;
      local_78 = uVar7;
      local_74 = uVar8;
      local_6c = puVar5;
      local_50 = local_13c;
      local_4c = local_140;
      local_48 = uVar15;
      local_3c = param_2;
      iVar4 = thunk_FUN_016d4a50(0xa8);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0xa8);
      }
      FUN_016dd1aa(iVar4,&local_d0,0xa8);
      return CONCAT44(piVar3,iVar4);
    }
  }
LAB_0165540c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x165540c);
  (*pcVar1)();
}

