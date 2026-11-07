// FUN_009c38b4 @ 009c38b4 size=1332 calls_out=13 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff08 : 0x009c3b60 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_009c38b4(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int *local_224;
  undefined1 auStack_218 [80];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8 [20];
  undefined4 *local_168;
  int *local_164;
  undefined4 *local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int *local_154;
  uint local_150;
  uint local_14c;
  undefined4 *local_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 *local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined4 *local_100;
  int *local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 *local_70;
  int *piStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 *puStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  uVar3 = FUN_009c19f8(local_1b8);
  uVar18 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar8 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar8[4] == '\0') {
    FUN_015f62e4(&local_100);
    *puVar8 = (uint)local_100;
    puVar8[1] = (uint)local_fc;
    puVar8[2] = local_f8;
    puVar8[3] = local_f4;
    *(undefined1 *)(puVar8 + 4) = 1;
  }
  puVar11 = (undefined4 *)*puVar8;
  uVar14 = puVar8[1];
  uVar7 = puVar8[3];
  *puVar8 = (int)puVar11 + 1;
  puVar8[1] = uVar14 + ((undefined4 *)0xfffffffe < puVar11);
  puVar16 = puVar8 + 2;
  uVar13 = *puVar16;
  FUN_016dd1aa(&local_100,local_1b8,0x60);
  FUN_012b56f4(local_1b8);
  uVar9 = 0;
  local_100 = &DAT_005674cc;
  local_fc = (int *)uVar9;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = puVar11;
  local_ec = uVar14;
  local_e8 = uVar13;
  local_e4 = uVar7;
  FUN_016dd1aa(auStack_218,&local_100,0x60);
  if ((undefined4 *)0xaaaaaaa < in_stack_00000008) {
    uVar3 = 0;
    uVar7 = uVar9;
LAB_009c39a0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar7);
  }
  if (in_stack_00000008 == (undefined4 *)0x0) {
    local_224 = (int *)&DAT_00000004;
    local_fc = (int *)&DAT_00000004;
    in_stack_00000008 = (undefined4 *)0x0;
    local_100 = (undefined4 *)0x0;
  }
  else {
    uVar7 = (int)in_stack_00000008 * 0xc;
    local_224 = (int *)thunk_FUN_016d4a50(uVar7);
    if (local_224 == (int *)0x0) {
      uVar3 = 4;
      goto LAB_009c39a0;
    }
    puVar11 = (undefined4 *)0x0;
    local_100 = in_stack_00000008;
    piVar5 = local_224 + 2;
    puVar4 = puVar16;
    local_fc = local_224;
    do {
      uVar3 = 0;
      puVar6 = (undefined4 *)(in_stack_00000004 + (int)puVar11 * 8);
      uVar10 = *puVar6;
      puVar12 = (uint *)puVar6[1];
      if ((int)puVar12 < 0) {
LAB_009c3a70:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,puVar4);
      }
      if (puVar12 == (uint *)0x0) {
        puVar4 = (uint *)&DAT_00000001;
        puVar17 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)thunk_FUN_016d4a50(puVar12);
        if (puVar4 == (uint *)0x0) {
          uVar3 = 1;
          puVar4 = puVar12;
          goto LAB_009c3a70;
        }
        puVar17 = puVar12;
      }
      FUN_016dd1aa(puVar4,uVar10,puVar12);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      piVar5[-2] = (int)puVar17;
      piVar5[-1] = (int)puVar4;
      *piVar5 = (int)puVar12;
      piVar5 = piVar5 + 3;
    } while (in_stack_00000008 != puVar11);
  }
  puVar11 = (undefined4 *)(local_1c4 + 4);
  for (iVar15 = local_1c0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (puVar11[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar11);
    }
    puVar11 = puVar11 + 3;
  }
  if (local_1c8 != 0) {
    thunk_FUN_016d3fb4(local_1c4);
  }
  FUN_016dd1aa(local_1b8,auStack_218,0x50);
  local_15c = local_1bc;
  local_164 = local_224;
  local_168 = in_stack_00000008;
  local_160 = in_stack_00000008;
  FUN_012cd8c4(&local_100,local_1b8);
  uVar13 = local_f4;
  uVar7 = local_f8;
  piVar5 = local_fc;
  puVar11 = local_100;
  if (local_cc == -0x80000000) {
    FUN_009b61cc(local_1b8);
    if (puVar11 != (undefined4 *)0x5) {
      local_100 = puVar11;
      local_fc = piVar5;
      local_f8 = uVar7;
      local_f4 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034e0e5,0x31,&local_100,&DAT_0186a208);
    }
  }
  else {
    local_148 = local_f0;
    local_144 = local_ec;
    uStack_140 = local_e8;
    uStack_13c = local_e4;
    local_138 = local_e0;
    uStack_134 = local_dc;
    local_130 = local_d8;
    uStack_12c = local_d4;
    uStack_128 = uStack_d0;
    local_154 = local_fc;
    local_150 = local_f8;
    local_14c = local_f4;
    local_120 = local_c8;
    uStack_11c = uStack_c4;
    local_158 = local_100;
    local_124 = local_cc;
    if ((char)puVar8[4] == '\0') {
      FUN_015f62e4(&local_100);
      *puVar16 = local_f8;
      puVar8[3] = local_f4;
      *puVar8 = (uint)local_100;
      puVar8[1] = (uint)local_fc;
      *(undefined1 *)(puVar8 + 4) = 1;
    }
    uVar7 = *puVar8;
    *puVar8 = uVar7 + 1;
    puVar8[1] = puVar8[1] + (uint)(0xfffffffe < uVar7);
    local_114 = &DAT_005674cc;
    local_70 = local_158;
    piStack_6c = local_154;
    uStack_68 = local_150;
    uStack_64 = local_14c;
    puStack_60 = local_148;
    local_5c = local_144;
    uStack_58 = uStack_140;
    uStack_54 = uStack_13c;
    uStack_50 = local_138;
    uStack_4c = uStack_134;
    local_48 = local_130;
    uStack_44 = uStack_12c;
    uStack_40 = uStack_128;
    iStack_3c = local_124;
    uStack_38 = local_120;
    uStack_34 = uStack_11c;
    local_110 = uVar9;
    local_10c = 0;
    local_108 = 0;
    FUN_016dd1aa(&uStack_d0,local_1b8,0x60);
    local_f8 = 0;
    local_fc = (int *)&DAT_00000001;
    local_100 = (undefined4 *)0x1;
    local_f4 = uStack_118;
    local_f0 = local_114;
    local_ec = local_110;
    local_e8 = local_10c;
    local_e4 = local_108;
    local_30 = 0;
    piVar5 = (int *)thunk_FUN_016d4a50(0xd8);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xd8);
    }
    FUN_016dd1aa(piVar5,&local_100,0xd8);
  }
  do {
    iVar15 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar15 + 1;
  if (iVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9c3de8);
    (*pcVar1)();
  }
  puVar11 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar11 = piVar5;
  FUN_012c72ac(local_1b8,param_1,puVar11,&DAT_0186a1a4);
  if (local_1b8[0] != 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e08e,0x2a,&local_100,&DAT_0186a208);
  }
  return piVar5;
}

