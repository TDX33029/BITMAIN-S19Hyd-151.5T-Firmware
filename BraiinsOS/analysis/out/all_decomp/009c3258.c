// FUN_009c3258 @ 009c3258 size=1292 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_009c3258(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 **ppuVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined4 **ppuVar13;
  uint uVar14;
  undefined4 **ppuVar15;
  undefined8 uVar16;
  undefined4 *in_stack_00000004;
  undefined1 auStack_218 [80];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8 [20];
  undefined4 local_168;
  int *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int *local_154;
  uint local_150;
  uint uStack_14c;
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
  
  uVar3 = FUN_009c19f8(local_1b8);
  uVar16 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar9 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar9[4] == '\0') {
    FUN_015f62e4(&local_100);
    *puVar9 = (uint)local_100;
    puVar9[1] = (uint)local_fc;
    puVar9[2] = local_f8;
    puVar9[3] = local_f4;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  puVar12 = (undefined4 *)*puVar9;
  uVar14 = puVar9[1];
  uVar7 = puVar9[2];
  uVar6 = puVar9[3];
  *puVar9 = (int)puVar12 + 1;
  puVar9[1] = uVar14 + ((undefined4 *)0xfffffffe < puVar12);
  FUN_016dd1aa(&local_100,local_1b8,0x60);
  FUN_012b56f4(local_1b8);
  local_100 = &DAT_005674cc;
  local_fc = (int *)0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = puVar12;
  uStack_ec = uVar14;
  local_e8 = uVar7;
  local_e4 = uVar6;
  FUN_016dd1aa(auStack_218,&local_100,0x60);
  piVar4 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x18);
  }
  local_100 = (undefined4 *)0x2;
  ppuVar8 = (undefined4 **)in_stack_00000004[1];
  uVar3 = *in_stack_00000004;
  local_fc = piVar4;
  if ((int)ppuVar8 < 0) {
    uVar10 = 0;
    ppuVar8 = &local_f0;
  }
  else {
    uVar10 = 0;
    ppuVar11 = (undefined4 **)&DAT_00000001;
    ppuVar13 = (undefined4 **)0x0;
    if (ppuVar8 != (undefined4 **)0x0) {
      ppuVar11 = (undefined4 **)thunk_FUN_016d4a50(ppuVar8);
      if (ppuVar11 == (undefined4 **)0x0) {
        uVar10 = 1;
        goto LAB_009c33c8;
      }
      ppuVar13 = ppuVar8;
    }
    FUN_016dd1aa(ppuVar11,uVar3,ppuVar8);
    uVar3 = in_stack_00000004[2];
    ppuVar15 = (undefined4 **)in_stack_00000004[3];
    *piVar4 = (int)ppuVar13;
    piVar4[1] = (int)ppuVar11;
    piVar4[2] = (int)ppuVar8;
    ppuVar8 = ppuVar11;
    if (-1 < (int)ppuVar15) {
      if (ppuVar15 == (undefined4 **)0x0) {
        iVar5 = 1;
        ppuVar8 = (undefined4 **)0x0;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(ppuVar15);
        ppuVar8 = ppuVar15;
        if (iVar5 == 0) {
          uVar10 = 1;
          goto LAB_009c33c8;
        }
      }
      FUN_016dd1aa(iVar5,uVar3,ppuVar15);
      piVar4[4] = iVar5;
      puVar12 = (undefined4 *)(local_1c4 + 4);
      piVar4[3] = (int)ppuVar8;
      piVar4[5] = (int)ppuVar15;
      for (; local_1c0 != 0; local_1c0 = local_1c0 + -1) {
        if (puVar12[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar12);
        }
        puVar12 = puVar12 + 3;
      }
      if (local_1c8 != 0) {
        thunk_FUN_016d3fb4(local_1c4);
      }
      FUN_016dd1aa(local_1b8,auStack_218,0x50);
      local_15c = local_1bc;
      local_160 = 2;
      local_168 = 2;
      local_164 = piVar4;
      FUN_012cd8c4(&local_100,local_1b8);
      uVar7 = local_f4;
      uVar6 = local_f8;
      piVar4 = local_fc;
      puVar12 = local_100;
      if (local_cc == -0x80000000) {
        FUN_009b61cc(local_1b8);
        if (puVar12 != (undefined4 *)0x5) {
          local_100 = puVar12;
          local_fc = piVar4;
          local_f8 = uVar6;
          local_f4 = uVar7;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034e0e5,0x31,&local_100,&DAT_0186a208);
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
        local_120 = local_c8;
        uStack_11c = uStack_c4;
        local_150 = local_f8;
        uStack_14c = local_f4;
        local_158 = local_100;
        local_124 = local_cc;
        if ((char)puVar9[4] == '\0') {
          FUN_015f62e4(&local_100);
          puVar9[2] = local_f8;
          puVar9[3] = local_f4;
          *puVar9 = (uint)local_100;
          puVar9[1] = (uint)local_fc;
          *(undefined1 *)(puVar9 + 4) = 1;
        }
        uVar6 = *puVar9;
        *puVar9 = uVar6 + 1;
        puVar9[1] = puVar9[1] + (uint)(0xfffffffe < uVar6);
        local_114 = &DAT_005674cc;
        local_70 = local_158;
        piStack_6c = local_154;
        uStack_68 = local_150;
        uStack_64 = uStack_14c;
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
        local_108 = 0;
        FUN_016dd1aa(&uStack_d0,local_1b8,0x60);
        local_f8 = 0;
        local_fc = (int *)&DAT_00000001;
        local_100 = (undefined4 *)0x1;
        local_f4 = uStack_118;
        local_f0 = local_114;
        uStack_ec = local_110;
        local_e8 = local_10c;
        local_e4 = local_108;
        local_30 = 0;
        piVar4 = (int *)thunk_FUN_016d4a50(0xd8);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xd8);
        }
        FUN_016dd1aa(piVar4,&local_100,0xd8);
      }
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x9c3764);
        (*pcVar1)();
      }
      puVar12 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,4);
      }
      *puVar12 = piVar4;
      FUN_012c72ac(local_1b8,param_1,puVar12,&DAT_0186a190);
      if (local_1b8[0] != 5) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034e08e,0x2a,&local_100,&DAT_0186a208);
      }
      return piVar4;
    }
  }
LAB_009c33c8:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar10,ppuVar8);
}

