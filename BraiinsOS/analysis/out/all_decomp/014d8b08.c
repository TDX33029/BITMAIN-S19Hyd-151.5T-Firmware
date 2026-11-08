// FUN_014d8b08 @ 014d8b08 size=3004 calls_out=7 calls_in=1
// strings: 

void FUN_014d8b08(int param_1,undefined4 *param_2,uint *param_3,int param_4,undefined4 *param_5,
                 byte *param_6,int param_7,int param_8,undefined1 param_9,undefined1 param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint *puVar24;
  undefined4 unaff_r4;
  int *piVar25;
  undefined1 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  int *piVar32;
  uint uVar33;
  int *piVar34;
  int *piVar35;
  int *piVar36;
  int *piVar37;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  undefined1 local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_21c;
  undefined4 local_210;
  uint local_204;
  int local_1d4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  undefined1 local_15c;
  uint local_158;
  uint local_154;
  int *local_150;
  uint local_14c;
  undefined1 local_148;
  int *local_144;
  uint local_140;
  int *local_13c;
  uint local_138;
  int *local_134;
  uint local_130;
  int *local_12c;
  int *local_128;
  uint local_124;
  int *local_120;
  uint local_11c;
  uint local_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar26 = 0;
  uVar30 = 0;
  if (*param_6 == 2) {
LAB_014d8b64:
    uVar26 = uVar30;
    uVar30 = 0;
  }
  else {
    unaff_r4 = *(undefined4 *)(param_6 + 1);
    if ((*param_6 & 1) != 0) {
      local_110 = *(uint *)(param_6 + 5);
      local_10c = *(uint *)(param_6 + 9);
      local_108 = *(uint *)(param_6 + 0xd);
      uVar30 = 1;
      goto LAB_014d8b64;
    }
    uVar30 = 1;
  }
  iVar5 = FUN_014d8990(param_2);
  *(undefined4 *)(iVar5 + 0x7b) = unaff_r4;
  *(undefined1 *)(iVar5 + 0x7a) = uVar26;
  *(undefined4 *)(iVar5 + 0x76) = unaff_r4;
  *(undefined1 *)(iVar5 + 0x75) = uVar30;
  *(uint *)(iVar5 + 0x7f) = local_110;
  *(uint *)(iVar5 + 0x83) = local_10c;
  *(uint *)(iVar5 + 0x87) = local_108;
  if (param_7 != 0) {
    if (param_8 < 0) {
      uVar6 = 0;
      goto LAB_014d8c90;
    }
    if (param_8 == 0) {
      iVar5 = 0;
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(param_8);
      if (iVar7 == 0) {
        uVar6 = 1;
        goto LAB_014d8c90;
      }
      iVar5 = param_8;
    }
    FUN_016dd1aa(iVar7,param_7,param_8);
    iVar8 = FUN_014d8990(param_2);
    if ((*(uint *)(iVar8 + 0x68) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x6c));
    }
    *(int *)(iVar8 + 0x68) = iVar5;
    *(int *)(iVar8 + 0x6c) = iVar7;
    *(int *)(iVar8 + 0x70) = param_8;
  }
  iVar5 = FUN_014d8990(param_2);
  *(undefined1 *)(iVar5 + 0x8b) = param_9;
  iVar5 = FUN_014d8990(param_2);
  uVar6 = 0;
  *(undefined1 *)(iVar5 + 0x74) = 0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_016dd1aa(&local_108,param_3,0xb0);
    local_10c = 1;
    local_110 = 1;
    piVar35 = (int *)thunk_FUN_016d4a50(0xb8);
    if (piVar35 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xb8);
    }
    FUN_016dd1aa(piVar35,&local_110,0xb8);
    do {
      iVar5 = *piVar35;
      bVar42 = (bool)hasExclusiveAccess(piVar35);
    } while (!bVar42);
    *piVar35 = iVar5 + 1;
    piVar25 = piVar35;
    if (iVar5 < 0) goto LAB_014d96e4;
    goto LAB_014d8d00;
  }
  uVar27 = param_3[4];
  param_8 = uVar27 * 0xc;
  if (0xaaaaaaa < uVar27) {
LAB_014d8c90:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,param_8);
  }
  if (param_8 == 0) {
    local_10c = 4;
    local_110 = 0;
  }
  else {
    uVar38 = param_3[3];
    uVar9 = thunk_FUN_016d4a50(param_8);
    if (uVar9 == 0) {
      uVar6 = 4;
      goto LAB_014d8c90;
    }
    local_110 = uVar27;
    local_10c = uVar9;
    if (uVar27 != 0) {
      piVar35 = (int *)(uVar9 + 4);
      uVar9 = 0;
      iVar5 = param_1;
      do {
        if (param_8 == 0) break;
        iVar7 = *(int *)(uVar38 + 8);
        uVar6 = 0;
        if (iVar7 < 0) {
LAB_014d96b0:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,iVar5);
        }
        uVar6 = *(undefined4 *)(uVar38 + 4);
        if (iVar7 == 0) {
          local_1d4 = 0;
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(iVar7,uVar6);
          if (iVar5 == 0) {
            uVar6 = 1;
            iVar5 = iVar7;
            goto LAB_014d96b0;
          }
          local_1d4 = iVar7;
        }
        uVar9 = uVar9 + 1;
        uVar38 = uVar38 + 0xc;
        FUN_016dd1aa(iVar5,uVar6,iVar7);
        param_8 = param_8 + -0xc;
        piVar35[1] = iVar7;
        *piVar35 = iVar5;
        piVar35[-1] = local_1d4;
        piVar35 = piVar35 + 3;
      } while (uVar27 != uVar9);
    }
  }
  local_58 = local_110;
  uStack_54 = local_10c;
  piVar35 = (int *)param_3[0x1c];
  do {
    iVar5 = *piVar35;
    bVar42 = (bool)hasExclusiveAccess(piVar35);
  } while (!bVar42);
  *piVar35 = iVar5 + 1;
  uStack_50 = uVar27;
  if (iVar5 < 0) {
LAB_014d96e4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x14d96e4);
    (*pcVar2)();
  }
  uVar38 = *param_3;
  uVar9 = param_3[1];
  uVar41 = param_3[0x1d];
  piVar25 = (int *)param_3[0x1f];
  uVar27 = param_3[0x1e];
  do {
    iVar5 = *piVar25;
    bVar42 = (bool)hasExclusiveAccess(piVar25);
  } while (!bVar42);
  *piVar25 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_014d96e4;
  piVar37 = (int *)param_3[0x21];
  uVar10 = param_3[0x20];
  uVar4 = param_3[0x2b];
  do {
    iVar5 = *piVar37;
    bVar42 = (bool)hasExclusiveAccess(piVar37);
  } while (!bVar42);
  *piVar37 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_014d96e4;
  uVar30 = *(undefined1 *)((int)param_3 + 0xaf);
  uVar26 = *(undefined1 *)((int)param_3 + 0xae);
  uVar33 = param_3[0x22];
  piVar39 = (int *)param_3[0x23];
  uVar3 = *(undefined1 *)((int)param_3 + 0xad);
  do {
    iVar5 = *piVar39;
    bVar42 = (bool)hasExclusiveAccess(piVar39);
  } while (!bVar42);
  *piVar39 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_014d96e4;
  piVar36 = (int *)param_3[0x25];
  uVar11 = param_3[0x24];
  do {
    iVar5 = *piVar36;
    bVar42 = (bool)hasExclusiveAccess(piVar36);
  } while (!bVar42);
  *piVar36 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_014d96e4;
  piVar32 = (int *)param_3[0x26];
  uVar40 = param_3[0x29];
  uVar23 = param_3[0x2a];
  do {
    iVar5 = *piVar32;
    bVar42 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar42);
  *piVar32 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_014d96e4;
  uVar16 = param_3[7];
  uVar12 = param_3[0x27];
  uVar6 = 0;
  uVar13 = uVar16 * 8;
  bVar43 = 0x1ffffffe < uVar16;
  bVar42 = uVar16 == 0x1fffffff;
  if (uVar16 < 0x20000000) {
    bVar43 = 0x7ffffffb < uVar13;
    bVar42 = uVar13 == 0x7ffffffc;
  }
  if (bVar43 && !bVar42) {
LAB_014d8f88:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,uVar13);
  }
  uVar19 = param_3[6];
  local_210 = 0;
  if (uVar13 == 0) {
    iVar5 = 4;
    local_204 = 0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(uVar13);
    local_204 = uVar16;
    if (iVar5 == 0) {
      uVar6 = 4;
      goto LAB_014d8f88;
    }
  }
  FUN_016dd1aa(iVar5,uVar19,uVar13);
  uVar19 = param_3[10];
  bVar43 = 0x1ffffffe < uVar19;
  bVar42 = uVar19 == 0x1fffffff;
  uVar13 = uVar19 * 8;
  if (uVar19 < 0x20000000) {
    bVar43 = 0x7ffffffb < uVar13;
    bVar42 = uVar13 == 0x7ffffffc;
  }
  if (bVar43 && !bVar42) {
LAB_014d9014:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_210,uVar13);
  }
  uVar20 = param_3[9];
  if (uVar13 == 0) {
    iVar7 = 4;
    local_21c = 0;
  }
  else {
    iVar7 = thunk_FUN_016d4a50(uVar13);
    local_21c = uVar19;
    if (iVar7 == 0) {
      local_210 = 4;
      goto LAB_014d9014;
    }
  }
  local_250 = 0x14d9080;
  FUN_016dd1aa(iVar7,uVar20,uVar13);
  piVar34 = (int *)param_3[0x28];
  do {
    iVar8 = *piVar34;
    bVar42 = (bool)hasExclusiveAccess(piVar34);
  } while (!bVar42);
  *piVar34 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_014d96e4;
  uVar13 = param_3[0xb];
  if (uVar13 == 0x80000002) {
    local_248 = 0x80000002;
    local_24c = 0;
    local_15c = local_23c;
  }
  else {
    if (uVar13 == 0x80000000) {
      uVar6 = 0;
      uVar13 = param_3[0xe];
      if ((int)uVar13 < 0) goto LAB_014d9188;
      uVar14 = param_3[0xd];
      local_22c._0_2_ = *(undefined2 *)((int)param_3 + 0x3e);
      uVar20 = (uint)(ushort)param_3[0xf];
      if (uVar13 == 0) {
        local_24c = 0;
        local_250 = 1;
      }
      else {
        local_250 = thunk_FUN_016d4a50(uVar13);
        local_24c = uVar13;
        if (local_250 == 0) {
LAB_014d916c:
          uVar6 = 1;
LAB_014d9188:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,uVar13);
        }
      }
      uVar21 = 0x14d922c;
      FUN_016dd1aa(local_250,uVar14);
      local_248 = 0x80000000;
      local_224 = uVar13;
LAB_014d9410:
      uVar14 = param_3[0x1a];
      uVar17 = param_3[0x1b];
      puVar24 = &local_44;
      local_110 = CONCAT22((undefined2)local_22c,(short)uVar20);
      puVar15 = &local_48;
      local_1c0 = uVar21;
    }
    else {
      if (uVar13 != 0x80000001) {
        uVar6 = 0;
        uVar13 = param_3[0xd];
        if ((int)uVar13 < 0) goto LAB_014d9188;
        uVar20 = param_3[0xc];
        uVar14 = param_3[0x11];
        uVar17 = param_3[0x12];
        local_228 = 0;
        if (uVar13 == 0) {
          local_24c = 1;
          local_248 = 0;
        }
        else {
          local_24c = thunk_FUN_016d4a50(uVar13);
          if (local_24c == 0) {
            uVar6 = 1;
            goto LAB_014d9188;
          }
          local_248 = uVar13;
        }
        FUN_016dd1aa(local_24c,uVar20);
        uVar21 = param_3[0x10];
        bVar43 = 0x1ffffffe < uVar21;
        bVar42 = uVar21 == 0x1fffffff;
        uVar1 = uVar21 * 8;
        if (uVar21 < 0x20000000) {
          bVar43 = 0x7ffffffd < uVar1;
          bVar42 = uVar1 == 0x7ffffffe;
        }
        if (bVar43 && !bVar42) {
LAB_014d926c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_228,uVar1);
        }
        uVar18 = param_3[0xf];
        if (uVar1 == 0) {
          uVar20 = 2;
          local_254 = 0;
        }
        else {
          uVar20 = thunk_FUN_016d4a50(uVar1);
          if (uVar20 == 0) {
            local_228 = 2;
            goto LAB_014d926c;
          }
          local_254 = uVar21;
        }
        FUN_016dd1aa(uVar20,uVar18,uVar1);
        local_f4 = CONCAT31(local_f4._1_3_,(char)uVar17);
        local_238 = param_3[0x18];
        uVar17 = param_3[0x17];
        local_110 = local_248;
        local_23c = (undefined1)param_3[0x19];
        local_104 = local_254;
        local_10c = local_24c;
        local_108 = uVar13;
        local_100 = uVar20;
        local_fc = uVar21;
        local_f8 = uVar14;
        if (param_3[0x16] == 0x80000000) {
          local_244 = 0x80000000;
          local_240 = uVar17;
        }
        else {
          if (local_238 == 0) {
            local_240 = 1;
          }
          else {
            local_240 = thunk_FUN_016d4a50(local_238);
            if (local_240 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_238);
            }
          }
          FUN_016dd1aa(local_240,uVar17,local_238);
          local_244 = local_238;
        }
        FUN_01497b38(&local_1c0,param_3[0x14],param_3[0x15]);
        local_22c._0_2_ = (undefined2)(uVar20 >> 0x10);
        local_30 = local_1b8;
        local_38 = local_1c0;
        local_3c = local_f4;
        local_40 = local_f8;
        local_34 = local_1bc;
        local_224 = local_254;
        local_250 = uVar13;
        goto LAB_014d9410;
      }
      uVar6 = 0;
      uVar13 = param_3[0xe];
      if ((int)uVar13 < 0) goto LAB_014d9188;
      uVar20 = param_3[0xd];
      uVar14 = param_3[0xf];
      uVar17 = param_3[0x10];
      if (uVar13 == 0) {
        local_24c = 0;
        local_250 = 1;
      }
      else {
        local_250 = thunk_FUN_016d4a50(uVar13);
        local_24c = uVar13;
        if (local_250 == 0) goto LAB_014d916c;
      }
      FUN_016dd1aa(local_250,uVar20);
      local_248 = 0x80000001;
      puVar15 = &local_1c0;
      puVar24 = &local_110;
      local_224 = uVar13;
    }
    *puVar15 = uVar17;
    *puVar24 = uVar14;
    local_230 = local_1c0;
    local_228 = local_48;
    local_234 = local_110;
    local_22c = local_44;
    local_15c = local_23c;
  }
  local_1b8 = local_58;
  local_1ac = local_204;
  local_1a0 = local_21c;
  local_188 = local_224;
  local_1b4 = uStack_54;
  local_184 = local_234;
  local_180 = local_230;
  local_17c = local_40;
  uStack_178 = local_3c;
  uStack_174 = local_38;
  uStack_170 = local_34;
  uStack_16c = local_30;
  local_154 = local_228;
  local_158 = local_22c;
  puVar29 = (undefined4 *)(uStack_54 + 4);
  local_160 = local_238;
  local_164 = local_240;
  local_168 = local_244;
  local_1b0 = 0;
  local_1c0 = uVar38;
  local_1bc = uVar9;
  local_1a8 = iVar5;
  local_1a4 = uVar16;
  local_19c = iVar7;
  local_198 = uVar19;
  local_194 = local_248;
  local_190 = local_24c;
  local_18c = local_250;
  local_150 = piVar35;
  local_14c = uVar41;
  local_148 = (char)uVar27;
  local_144 = piVar25;
  local_140 = uVar10;
  local_13c = piVar37;
  local_138 = uVar33;
  local_134 = piVar39;
  local_130 = uVar11;
  local_12c = piVar36;
  local_128 = piVar32;
  local_124 = uVar12;
  local_120 = piVar34;
  local_11c = uVar40;
  local_118 = uVar23;
  local_114 = (char)uVar4;
  local_113 = uVar3;
  local_112 = uVar26;
  local_111 = uVar30;
  for (uVar13 = uStack_50; uVar13 != 0; uVar13 = uVar13 - 1) {
    if (puVar29[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar29);
    }
    puVar29 = puVar29 + 3;
  }
  FUN_016dd1aa(&local_108,param_3,0xb0);
  local_10c = 1;
  local_110 = 1;
  piVar35 = (int *)thunk_FUN_016d4a50(0xb8);
  if (piVar35 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb8);
  }
  FUN_016dd1aa(piVar35,&local_110,0xb8);
  FUN_016dd1aa(&local_108,&local_1c0,0xb0);
  local_10c = 1;
  local_110 = 1;
  piVar25 = (int *)thunk_FUN_016d4a50(0xb8);
  if (piVar25 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb8);
  }
  FUN_016dd1aa(piVar25,&local_110,0xb8);
LAB_014d8d00:
  uVar6 = param_2[1];
  uVar22 = param_2[2];
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar22;
  uVar6 = param_5[1];
  uVar22 = param_5[2];
  uVar28 = param_5[3];
  uVar31 = param_5[4];
  *(undefined4 *)(param_1 + 0x18) = *param_5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar22;
  *(undefined4 *)(param_1 + 0x24) = uVar28;
  *(undefined4 *)(param_1 + 0x28) = uVar31;
  *(undefined1 *)(param_1 + 0x45) = param_9;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x40) = param_4;
  *(int **)(param_1 + 0x3c) = piVar25;
  *(int **)(param_1 + 0x38) = piVar35;
  *(undefined1 *)(param_1 + 0x46) = param_10;
  *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

