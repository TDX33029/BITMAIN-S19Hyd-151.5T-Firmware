// FUN_0107ad80 @ 0107ad80 size=2880 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0107ad80(int *param_1,short *param_2,short param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  short sVar13;
  undefined2 uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  int local_184;
  int local_16c;
  int local_158;
  int local_150;
  int local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined2 local_124;
  short local_122;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined2 local_104;
  undefined2 local_100;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  short local_72;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  short local_2c;
  short local_2a;
  
  *(undefined1 *)(param_2 + 0x20) = 1;
  sVar1 = *param_2;
  if (sVar1 == 1) {
    iVar20 = *(int *)(param_2 + 6);
    uVar4 = 0;
    if (iVar20 < 0) goto LAB_0107adc0;
    uVar4 = *(undefined4 *)(param_2 + 4);
    sVar13 = 1;
    if (iVar20 == 0) {
      local_150 = 0;
      local_14c = 1;
LAB_0107ae50:
      FUN_016dd1aa(local_14c,uVar4,iVar20);
      goto LAB_0107ae64;
    }
    local_14c = thunk_FUN_016d4a50(iVar20);
    local_150 = iVar20;
    if (local_14c != 0) goto LAB_0107ae50;
LAB_0107ae40:
    uVar4 = 1;
LAB_0107adc0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,iVar20);
  }
  local_2c = param_2[1];
  local_150 = *(int *)(param_2 + 2);
  local_14c = *(int *)(param_2 + 4);
  iVar20 = *(int *)(param_2 + 6);
  local_148 = *(undefined4 *)(param_2 + 8);
  local_144 = *(int *)(param_2 + 10);
  local_140 = *(int *)(param_2 + 0xc);
  local_13c = *(int *)(param_2 + 0xe);
  local_138 = *(undefined4 *)(param_2 + 0x10);
  sVar13 = 0;
LAB_0107ae64:
  sVar2 = param_2[0x12];
  if (sVar2 == 1) {
    iVar16 = *(int *)(param_2 + 0x18);
    uVar4 = 0;
    if (iVar16 < 0) {
LAB_0107ae8c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,iVar16);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    if (iVar16 == 0) {
      local_158 = 0;
      iVar5 = 1;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar16);
      local_158 = iVar16;
      if (iVar5 == 0) {
        uVar4 = 1;
        goto LAB_0107ae8c;
      }
    }
    FUN_016dd1aa(iVar5,uVar4,iVar16);
    local_74 = 1;
  }
  else {
    local_158 = *(int *)(param_2 + 0x14);
    local_74 = 0;
    local_e0 = *(undefined4 *)(param_2 + 0x1a);
    uStack_dc = *(undefined4 *)(param_2 + 0x1c);
    uStack_d8 = *(undefined4 *)(param_2 + 0x1e);
    local_2a = param_2[0x13];
    iVar5 = *(int *)(param_2 + 0x16);
    iVar16 = *(int *)(param_2 + 0x18);
  }
  local_58 = 1;
  local_94 = local_150;
  local_98 = CONCAT22(local_2c,sVar13);
  local_90 = local_14c;
  local_88 = local_148;
  iStack_84 = local_144;
  iStack_80 = local_140;
  iStack_7c = local_13c;
  uStack_78 = local_138;
  local_72 = local_2a;
  local_64 = local_e0;
  uStack_60 = uStack_dc;
  uStack_5c = uStack_d8;
  local_70 = local_158;
  local_8c = iVar20;
  local_6c = iVar5;
  local_68 = iVar16;
  puVar6 = (uint *)FUN_01090fd0(param_1[4],param_1[5],param_1[6],param_1[7],&local_98);
  iVar20 = *param_1;
  uVar12 = param_1[1];
  local_184 = 0;
  puVar9 = puVar6;
  while( true ) {
    uVar21 = uVar12 & (uint)puVar9;
    uVar19 = *(uint *)(iVar20 + uVar21);
    uVar7 = uVar19 ^ ((uint)puVar6 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar8 = uVar21 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar12;
      iVar16 = FUN_0103cf5c(uVar8 * -0x118 + iVar20 + -0x118,&local_98);
      uVar7 = uVar7 - 1 & uVar7;
      if (iVar16 != 0) {
        puVar6 = (uint *)(uVar8 * -0x118 + iVar20);
        iVar20 = 0;
        if (sVar1 != 0) {
          iVar20 = local_150;
        }
        if (sVar1 != 0 && iVar20 != 0) {
          thunk_FUN_016d3fb4(local_14c);
        }
        iVar20 = 0;
        if (sVar2 != 0) {
          iVar20 = local_158;
        }
        if (sVar2 != 0 && iVar20 != 0) {
          thunk_FUN_016d3fb4(iVar5);
        }
        goto LAB_0107b0f4;
      }
    }
    if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
    local_184 = local_184 + 4;
    puVar9 = (uint *)(uVar21 + local_184);
  }
  if (param_1[2] == 0) {
    FUN_01098564(param_1,param_1 + 4);
  }
  FUN_016dd1aa(&local_e0,(uint)&local_98 | 2,0x42);
  if (sVar13 != 2) {
    FUN_016dd1aa(&local_148,&local_e0,0x42);
    puVar9 = (uint *)*param_1;
    uVar12 = param_1[1];
    uVar7 = uVar12 & (uint)puVar6;
    uVar19 = *(uint *)((int)puVar9 + uVar7) & 0x80808080;
    if (uVar19 == 0) {
      iVar20 = 4;
      do {
        uVar7 = uVar7 + iVar20;
        iVar20 = iVar20 + 4;
        uVar7 = uVar7 & uVar12;
        uVar19 = *(uint *)((int)puVar9 + uVar7) & 0x80808080;
      } while (uVar19 == 0);
    }
    uVar7 = uVar7 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) & uVar12;
    uVar19 = (uint)*(char *)((int)puVar9 + uVar7);
    if (-1 < (int)uVar19) {
      uVar7 = *puVar9 & 0x80808080;
      uVar7 = LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
      uVar19 = (uint)*(byte *)((int)puVar9 + (uVar7 >> 3));
      uVar7 = uVar7 >> 3;
    }
    iVar20 = param_1[2];
    bVar3 = (byte)((uint)puVar6 >> 0x19);
    *(byte *)((int)puVar9 + uVar7) = bVar3;
    puVar6 = puVar9 + uVar7 * -0x46;
    *(byte *)((int)puVar9 + (uVar7 - 4 & uVar12) + 4) = bVar3;
    *(short *)(puVar6 + -0x46) = sVar13;
    param_1[2] = iVar20 - (uVar19 & 1);
    FUN_016dd1aa((int)puVar6 - 0x116,&local_148,0x42);
    iVar20 = param_1[3];
    puVar6[-0x18] = (uint)&DAT_3b9aca00;
    puVar6[-0x32] = (uint)&DAT_3b9aca00;
    param_1[3] = iVar20 + 1;
  }
LAB_0107b0f4:
  puVar9 = puVar6 + -0x34;
  if (param_3 == 0) {
    puVar15 = puVar9;
    if ((undefined1 *)puVar6[-0x32] != &DAT_3b9aca00) goto LAB_0107b6e4;
    sVar1 = param_2[0x20];
    if (*param_2 == 1) {
      iVar20 = *(int *)(param_2 + 6);
      uVar4 = 0;
      if (iVar20 < 0) goto LAB_0107adc0;
      uVar4 = *(undefined4 *)(param_2 + 4);
      if (iVar20 == 0) {
        local_150 = 0;
        local_158 = 1;
      }
      else {
        local_158 = thunk_FUN_016d4a50(iVar20);
        local_150 = iVar20;
        if (local_158 == 0) goto LAB_0107ae40;
      }
      FUN_016dd1aa(local_158,uVar4,iVar20);
      uVar14 = 1;
      if (param_2[0x12] != 1) goto LAB_0107b5bc;
LAB_0107b290:
      iVar16 = *(int *)(param_2 + 0x18);
      uVar4 = 0;
      if (iVar16 < 0) {
LAB_0107b2a0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,iVar16);
      }
      uVar4 = *(undefined4 *)(param_2 + 0x16);
      uVar18 = 1;
      if (iVar16 == 0) {
        iVar5 = 1;
        local_16c = 0;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar16);
        local_16c = iVar16;
        if (iVar5 == 0) {
          uVar4 = 1;
          goto LAB_0107b2a0;
        }
      }
      FUN_016dd1aa(iVar5,uVar4,iVar16);
    }
    else {
      local_2c = param_2[1];
      local_150 = *(int *)(param_2 + 2);
      local_158 = *(int *)(param_2 + 4);
      iVar20 = *(int *)(param_2 + 6);
      local_98 = *(undefined4 *)(param_2 + 8);
      local_94 = *(int *)(param_2 + 10);
      local_90 = *(int *)(param_2 + 0xc);
      local_8c = *(int *)(param_2 + 0xe);
      local_88 = *(undefined4 *)(param_2 + 0x10);
      uVar14 = 0;
      if (param_2[0x12] == 1) goto LAB_0107b290;
LAB_0107b5bc:
      local_16c = *(int *)(param_2 + 0x14);
      iVar5 = *(int *)(param_2 + 0x16);
      iVar16 = *(int *)(param_2 + 0x18);
      local_e0 = *(undefined4 *)(param_2 + 0x1a);
      uStack_dc = *(undefined4 *)(param_2 + 0x1c);
      uStack_d8 = *(undefined4 *)(param_2 + 0x1e);
      local_2a = param_2[0x13];
      uVar18 = 0;
    }
    local_148 = CONCAT22(local_2c,uVar14);
    local_144 = local_150;
    local_138 = local_98;
    iStack_134 = local_94;
    iStack_130 = local_90;
    iStack_12c = local_8c;
    uStack_128 = local_88;
    local_100 = 0;
    local_104 = 0;
    local_122 = local_2a;
    local_114 = local_e0;
    uStack_110 = uStack_dc;
    uStack_10c = uStack_d8;
    local_140 = local_158;
    local_13c = iVar20;
    local_124 = uVar18;
    local_120 = local_16c;
    local_11c = iVar5;
    local_118 = iVar16;
    local_108 = (char)sVar1;
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar10 = 1;
    puVar10[1] = 1;
    FUN_01093a0c(&local_98,&local_148,puVar10,0);
    FUN_016dd1aa(puVar9,&local_98,0x68);
    goto LAB_0107b6e4;
  }
  puVar15 = puVar6 + -0x1a;
  if ((undefined1 *)puVar6[-0x18] != &DAT_3b9aca00) goto LAB_0107b6e4;
  sVar1 = param_2[0x20];
  if (*param_2 == 1) {
    iVar20 = *(int *)(param_2 + 6);
    uVar4 = 0;
    if (iVar20 < 0) goto LAB_0107adc0;
    uVar4 = *(undefined4 *)(param_2 + 4);
    if (iVar20 == 0) {
      local_158 = 0;
      local_150 = 1;
    }
    else {
      local_150 = thunk_FUN_016d4a50(iVar20);
      local_158 = iVar20;
      if (local_150 == 0) goto LAB_0107ae40;
    }
    FUN_016dd1aa(local_150,uVar4,iVar20);
    uVar14 = 1;
    if (param_2[0x12] != 1) goto LAB_0107b468;
LAB_0107b21c:
    iVar17 = *(int *)(param_2 + 0x18);
    uVar4 = 0;
    if (iVar17 < 0) {
LAB_0107b22c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,iVar17);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    if (iVar17 == 0) {
      iVar5 = 0;
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(iVar17);
      iVar5 = iVar17;
      if (iVar16 == 0) {
        uVar4 = 1;
        goto LAB_0107b22c;
      }
    }
    FUN_016dd1aa(iVar16,uVar4,iVar17);
    local_124 = 1;
  }
  else {
    local_2c = param_2[1];
    local_158 = *(int *)(param_2 + 2);
    local_150 = *(int *)(param_2 + 4);
    iVar20 = *(int *)(param_2 + 6);
    local_98 = *(undefined4 *)(param_2 + 8);
    local_94 = *(int *)(param_2 + 10);
    local_90 = *(int *)(param_2 + 0xc);
    local_8c = *(int *)(param_2 + 0xe);
    local_88 = *(undefined4 *)(param_2 + 0x10);
    uVar14 = 0;
    if (param_2[0x12] == 1) goto LAB_0107b21c;
LAB_0107b468:
    local_2a = param_2[0x13];
    local_124 = 0;
    local_e0 = *(undefined4 *)(param_2 + 0x1a);
    uStack_dc = *(undefined4 *)(param_2 + 0x1c);
    uStack_d8 = *(undefined4 *)(param_2 + 0x1e);
    iVar5 = *(int *)(param_2 + 0x14);
    iVar16 = *(int *)(param_2 + 0x16);
    iVar17 = *(int *)(param_2 + 0x18);
  }
  local_148 = CONCAT22(local_2c,uVar14);
  local_144 = local_158;
  local_138 = local_98;
  iStack_134 = local_94;
  iStack_130 = local_90;
  iStack_12c = local_8c;
  uStack_128 = local_88;
  local_104 = 0;
  local_122 = local_2a;
  local_114 = local_e0;
  uStack_110 = uStack_dc;
  uStack_10c = uStack_d8;
  local_100 = 1;
  local_140 = local_150;
  local_13c = iVar20;
  local_120 = iVar5;
  local_11c = iVar16;
  local_118 = iVar17;
  local_108 = (char)sVar1;
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar10 = 1;
  puVar10[1] = 1;
  FUN_01093a0c(&local_98,&local_148,puVar10,0);
  FUN_016dd1aa(puVar15,&local_98,0x68);
LAB_0107b6e4:
  FUN_01093af0(&local_148,puVar15,param_4);
  if (param_3 == 0) {
    FUN_016dd1aa(&local_98,&local_148,0x68);
    if ((undefined1 *)puVar6[-0x32] != &DAT_3b9aca00) {
      bVar22 = (short)puVar6[-0x2e] != 0;
      uVar12 = 0;
      if (bVar22) {
        uVar12 = puVar6[-0x2d];
      }
      if (bVar22 && uVar12 != 0) {
        thunk_FUN_016d3fb4(puVar6[-0x2c]);
      }
      bVar22 = (short)puVar6[-0x25] != 0;
      uVar12 = 0;
      if (bVar22) {
        uVar12 = puVar6[-0x24];
      }
      if (bVar22 && uVar12 != 0) {
        thunk_FUN_016d3fb4(puVar6[-0x23]);
      }
      piVar11 = (int *)puVar6[-0x30];
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar11;
        bVar22 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar22);
      *piVar11 = iVar20 + -1;
      if (iVar20 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(puVar6[-0x30],puVar6[-0x2f]);
      }
    }
  }
  else {
    FUN_016dd1aa(&local_98,&local_148,0x68);
    puVar9 = puVar6 + -0x1a;
    if ((undefined1 *)puVar6[-0x18] != &DAT_3b9aca00) {
      bVar22 = (short)puVar6[-0x14] != 0;
      uVar12 = 0;
      if (bVar22) {
        uVar12 = puVar6[-0x13];
      }
      if (bVar22 && uVar12 != 0) {
        thunk_FUN_016d3fb4(puVar6[-0x12]);
      }
      bVar22 = (short)puVar6[-0xb] != 0;
      uVar12 = 0;
      if (bVar22) {
        uVar12 = puVar6[-10];
      }
      if (bVar22 && uVar12 != 0) {
        thunk_FUN_016d3fb4(puVar6[-9]);
      }
      piVar11 = (int *)puVar6[-0x16];
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar11;
        bVar22 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar22);
      *piVar11 = iVar20 + -1;
      if (iVar20 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(puVar6[-0x16],puVar6[-0x15]);
      }
    }
  }
  FUN_016dd1aa(puVar9,&local_98,0x68);
  iVar20 = 0;
  if (*param_2 != 0) {
    iVar20 = *(int *)(param_2 + 2);
  }
  if (*param_2 != 0 && iVar20 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 4));
  }
  iVar20 = 0;
  if (param_2[0x12] != 0) {
    iVar20 = *(int *)(param_2 + 0x14);
  }
  if (!(param_2[0x12] != 0 && iVar20 != 0)) {
    return;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x16));
  return;
}

