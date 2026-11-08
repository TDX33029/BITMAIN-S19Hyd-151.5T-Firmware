// FUN_00782b5c @ 00782b5c size=1320 calls_out=13 calls_in=1
// strings: BUG: Couldn't build generic_gauge with opts

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff08 : 0x00782dfc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00782b5c(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int *local_224;
  undefined1 auStack_218 [80];
  int local_1c8;
  int local_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
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
  uint local_118;
  undefined4 *local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined4 *local_100;
  int *local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *local_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
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
  
  uVar3 = FUN_0076cd30(local_1b8);
  uVar15 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar8 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
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
  uVar10 = puVar8[3];
  *puVar8 = (int)puVar11 + 1;
  puVar8[1] = uVar14 + ((undefined4 *)0xfffffffe < puVar11);
  uVar7 = puVar8[2];
  FUN_016dd1aa(&local_100,local_1b8,0x60);
  FUN_012b56f4(local_1b8);
  uVar4 = 0;
  local_100 = &DAT_005674cc;
  local_fc = (int *)0;
  local_f8 = 0;
  local_f4 = uVar4;
  local_f0 = puVar11;
  uStack_ec = uVar14;
  local_e8 = uVar7;
  local_e4 = uVar10;
  FUN_016dd1aa(auStack_218,&local_100,0x60);
  if ((undefined4 *)0xaaaaaaa < in_stack_00000008) {
    uVar3 = 0;
    uVar7 = uVar4;
LAB_00782c44:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar7);
  }
  if (in_stack_00000008 == (undefined4 *)0x0) {
    local_224 = (int *)&DAT_00000004;
    local_fc = (int *)&DAT_00000004;
    puVar11 = (undefined4 *)0x0;
    local_100 = (undefined4 *)0x0;
  }
  else {
    uVar7 = (int)in_stack_00000008 * 0xc;
    local_224 = (int *)thunk_FUN_016d4a50(uVar7);
    if (local_224 == (int *)0x0) {
      uVar3 = 4;
      goto LAB_00782c44;
    }
    puVar12 = (uint *)(local_224 + 2);
    puVar11 = (undefined4 *)0x0;
    local_100 = in_stack_00000008;
    local_fc = local_224;
    do {
      uVar3 = 0;
      puVar6 = (undefined4 *)(in_stack_00000004 + (int)puVar11 * 8);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      if ((int)uVar10 < 0) {
LAB_00782d18:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,uVar7);
      }
      if (uVar10 == 0) {
        uVar7 = 1;
        uVar14 = 0;
      }
      else {
        uVar7 = thunk_FUN_016d4a50(uVar10);
        if (uVar7 == 0) {
          uVar3 = 1;
          uVar7 = uVar10;
          goto LAB_00782d18;
        }
        uVar14 = uVar10;
      }
      FUN_016dd1aa(uVar7,uVar9,uVar10);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12[-2] = uVar14;
      *puVar12 = uVar10;
      puVar12[-1] = uVar7;
      puVar12 = puVar12 + 3;
    } while (in_stack_00000008 != puVar11);
    puVar11 = in_stack_00000008;
  }
  puVar6 = (undefined4 *)(local_1c4 + 4);
  for (iVar13 = iStack_1c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (puVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar6);
    }
    puVar6 = puVar6 + 3;
  }
  if (local_1c8 != 0) {
    thunk_FUN_016d3fb4(local_1c4);
  }
  FUN_016dd1aa(local_1b8,auStack_218,0x50);
  local_160 = in_stack_00000008;
  local_15c = uStack_1bc;
  local_164 = local_224;
  local_168 = puVar11;
  FUN_012cd8c4(&local_100,local_1b8);
  uVar10 = local_f4;
  uVar7 = local_f8;
  piVar5 = local_fc;
  puVar11 = local_100;
  if (local_cc == -0x80000000) {
    FUN_0074c178(local_1b8);
    if (puVar11 != (undefined4 *)0x5) {
      local_100 = puVar11;
      local_fc = piVar5;
      local_f8 = uVar7;
      local_f4 = uVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_100,&DAT_0185c0bc);
    }
  }
  else {
    local_148 = local_f0;
    local_144 = uStack_ec;
    uStack_140 = local_e8;
    uStack_13c = local_e4;
    local_138 = local_e0;
    uStack_134 = uStack_dc;
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
      puVar8[2] = local_f8;
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
    local_110 = 0;
    local_10c = 0;
    local_108 = uVar4;
    FUN_016dd1aa(&uStack_d0,local_1b8,0x60);
    local_f8 = 0;
    local_fc = (int *)&DAT_00000001;
    local_100 = (undefined4 *)0x1;
    local_f4 = local_118;
    local_f0 = local_114;
    uStack_ec = local_110;
    local_e8 = local_10c;
    local_e4 = local_108;
    local_30 = 1;
    piVar5 = (int *)thunk_FUN_016d4a50(0xd8);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xd8);
    }
    FUN_016dd1aa(piVar5,&local_100,0xd8);
  }
  do {
    iVar13 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar13 + 1;
  if (iVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x783084);
    (*pcVar1)();
  }
  puVar11 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar11 = piVar5;
  FUN_012c72ac(local_1b8,param_1,puVar11,&DAT_0185bf90);
  if (local_1b8[0] != 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e044,0x24,&local_100,&DAT_0185c0bc);
  }
  return piVar5;
}

