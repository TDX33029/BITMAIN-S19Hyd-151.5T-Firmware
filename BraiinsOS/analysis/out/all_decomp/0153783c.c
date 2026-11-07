// FUN_0153783c @ 0153783c size=2352 calls_out=21 calls_in=0
// strings: server finished

/* WARNING: Removing unreachable block (ram,0x01537c70) */

void FUN_0153783c(undefined4 *param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  code *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_2f8;
  int *local_2e8;
  undefined4 local_2e4;
  undefined1 auStack_2e0 [28];
  int *local_2c4;
  int local_2bc;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int local_260;
  undefined4 local_25c [17];
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined1 local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined1 local_1fa;
  undefined1 local_1f9;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2;
  undefined1 local_1f1;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec;
  undefined1 local_1eb;
  undefined1 local_1ea;
  undefined1 local_1e9;
  int *local_1e8;
  undefined1 *local_1e4;
  undefined1 *local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined1 local_1b4;
  char local_1b3;
  undefined1 auStack_1b0 [68];
  int local_16c;
  char *local_168;
  uint local_164;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 *local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined1 local_d8;
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_30;
  
  FUN_016dd1aa(&local_2e8,param_2,0x138);
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000012)) {
    iVar8 = *param_3;
    if (*(char *)(iVar8 + 0x251) == '\0') {
      local_a4 = 0x10001;
      local_a8 = (undefined1 *)0x80000001;
      local_30 = 4;
      FUN_01525ed4(iVar8,&local_a8,*(char *)(iVar8 + 0x31) == '\x02');
      *(undefined1 *)(iVar8 + 0x255) = 1;
      *(undefined1 *)(param_1 + 1) = 0x1b;
      *param_1 = &DAT_8000001c;
      goto LAB_01537978;
    }
    (*(code *)local_1b8[3])(auStack_1b0,local_1bc);
    FUN_01555e08(&local_16c,local_25c,auStack_1b0,"server finished");
    pcVar3 = local_168;
    uVar12 = 0;
    if (local_164 == param_4[6]) {
      if (local_164 == 0) {
        uVar12 = 1;
      }
      else {
        uVar12 = 1;
        uVar9 = local_164;
        pcVar10 = (char *)param_4[5];
        pcVar14 = local_168;
        do {
          uVar6 = FUN_0156249c(*pcVar14 == *pcVar10);
          uVar12 = uVar6 & uVar12;
          uVar9 = uVar9 - 1;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        } while (uVar9 != 0);
      }
    }
    cVar5 = FUN_0156249c(uVar12);
    if (cVar5 == '\0') {
      local_130 = &DAT_80000019;
      local_a4 = 0x110001;
      local_a8 = (undefined1 *)0x80000001;
      local_30 = 4;
      FUN_01525ed4(iVar8,&local_a8,*(char *)(iVar8 + 0x31) == '\x02');
      *(undefined1 *)(iVar8 + 0x255) = 1;
      *param_1 = local_130;
      param_1[1] = uStack_12c;
      param_1[2] = local_128;
      param_1[3] = local_124;
      param_1[4] = local_120;
      param_1[5] = uStack_11c;
      param_1[6] = uStack_118;
      param_1[7] = uStack_114;
      if (local_16c != 0) {
        thunk_FUN_016d3fb4(pcVar3);
      }
      goto LAB_01537978;
    }
    FUN_0151eddc(&local_1d0,param_4);
    piVar7 = local_2e8;
    local_2f8 = local_2e4;
    bVar15 = local_2e8 == (int *)0x0;
    local_2e8 = (int *)0x0;
    if (bVar15) {
      piVar7 = (int *)thunk_FUN_016d4a50(0x14);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *piVar7 = 1;
      piVar7[1] = 1;
      piVar7[3] = 1;
      piVar7[2] = 0;
      piVar7[4] = 0;
      local_2f8 = 0;
LAB_01537b78:
      if (local_2bc == -0x80000000) goto LAB_01537bd0;
      do {
        iVar8 = *local_2c4;
        bVar15 = (bool)hasExclusiveAccess(local_2c4);
      } while (!bVar15);
      *local_2c4 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x153817c);
        (*pcVar1)();
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar15 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar15);
      *piVar7 = iVar8 + -1;
      piVar7 = local_2c4;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8();
      }
    }
    else {
      if (piVar7[4] == 0) goto LAB_01537b78;
LAB_01537bd0:
    }
    piVar2 = local_1e8;
    iVar8 = local_260;
    if (local_260 == 0) {
      iVar8 = piVar7[4];
    }
    if (local_260 == 0 && iVar8 == 0) {
LAB_01537d9c:
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar15 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar15);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(piVar7);
      }
    }
    else {
      (**(code **)(local_1e8[0x26] + 0x10))
                (&local_d0,local_1e8[0x25] + (*(int *)(local_1e8[0x26] + 8) - 1U & 0xfffffff8) + 8);
      uVar4 = local_c8;
      local_a8 = (undefined1 *)0x80000021;
      if (((uint)local_d0 & 1) == 0) {
        local_130 = (undefined1 *)0x80000021;
        uStack_12c = local_a4;
        local_128 = local_a0;
        local_124 = uStack_9c;
        local_120 = local_98;
        uStack_11c = uStack_94;
        uStack_118 = uStack_90;
        uStack_114 = uStack_8c;
        FUN_01465b84(&local_130);
        goto LAB_01537d9c;
      }
      local_124 = local_c4;
      local_128 = local_c8;
      local_130 = (undefined1 *)0x80000029;
      FUN_0152bfc0(&local_a8);
      iVar8 = *param_3;
      if (*(int *)(iVar8 + 0x228) == -0x80000000) {
        local_c8 = 0;
        local_d0 = (undefined1 *)0x0;
        local_cc = (undefined1 *)4;
      }
      else {
        FUN_01504dd8(&local_a8,*(undefined4 *)(iVar8 + 0x22c),*(undefined4 *)(iVar8 + 0x230));
        local_c8 = local_a0;
        local_d0 = local_a8;
        local_cc = (undefined1 *)local_a4;
      }
      FUN_015323a8(&local_130,piVar7,&local_218,0x30,uVar4,local_c4,local_2f8,&local_d0,
                   piVar2 + 0x28,piVar2 + 0x21);
      local_100 = local_25c[0];
      local_fc = local_280;
      uStack_f8 = uStack_27c;
      uStack_f4 = uStack_278;
      uStack_f0 = uStack_274;
      local_ec = local_270;
      uStack_e8 = uStack_26c;
      uStack_e4 = uStack_268;
      uStack_e0 = uStack_264;
      iStack_dc = local_260;
      local_d8 = local_1b4;
      iVar11 = piVar2[0x1e];
      iVar13 = piVar2[0x1f];
      iVar8 = *(int *)(iVar13 + 8);
      if ((char)local_1e4 == '\0') {
        if (local_1e0 == (undefined1 *)0x80000000) {
          local_b0 = local_1d8;
          local_b4 = local_1dc;
          local_b8 = local_1e0;
        }
        else {
          FUN_00602a1c(&local_a8,local_1dc,local_1d8);
          local_b8 = local_a8;
          local_b4 = local_a4;
          local_b0 = local_a0;
        }
        local_cc = local_b8;
        local_c8 = local_b4;
        local_c4 = local_b0;
        local_d0 = (undefined1 *)((uint)local_d0 & 0xffffff00);
      }
      else {
        local_d0 = local_1e4;
        local_cc = local_1e0;
        local_c8 = local_1dc;
        local_c4 = local_1d8;
        uStack_c0 = uStack_1d4;
      }
      FUN_016dd1aa(&local_a8,&local_130,0x60);
      (**(code **)(iVar13 + 0x18))(iVar11 + (iVar8 - 1U & 0xfffffff8) + 8,&local_d0,&local_a8);
    }
    iVar8 = *param_3;
    if (local_1b3 != '\0') {
      local_a8 = &DAT_80000004;
      local_30 = 4;
      FUN_01525ed4(iVar8,&local_a8,0);
      *(undefined1 *)(iVar8 + 0x31) = 2;
      FUN_01538628(local_25c,&local_1d0,iVar8);
    }
    FUN_01526858(iVar8,param_3[2]);
    local_a8 = (undefined1 *)CONCAT31(local_a8._1_3_,local_218);
    local_130 = (undefined1 *)CONCAT31(local_130._1_3_,local_217);
    local_d0 = (undefined1 *)CONCAT31(local_d0._1_3_,local_216);
    local_b8 = (undefined1 *)CONCAT31(local_b8._1_3_,local_215);
    local_134 = local_214;
    local_135 = local_213;
    local_136 = local_212;
    local_137 = local_211;
    local_138 = local_210;
    local_139 = local_20f;
    local_13a = local_20e;
    local_13b = local_20d;
    local_13c = local_20c;
    local_13d = local_20b;
    local_13e = local_20a;
    local_13f = local_209;
    local_140 = local_208;
    local_141 = local_207;
    local_142 = local_206;
    local_143 = local_205;
    local_144 = local_204;
    local_145 = local_203;
    local_146 = local_202;
    local_147 = local_201;
    local_148 = local_200;
    local_149 = local_1ff;
    local_14a = local_1fe;
    local_14b = local_1fd;
    local_14c = local_1fc;
    local_14d = local_1fb;
    local_14e = local_1fa;
    local_14f = local_1f9;
    local_150 = local_1f8;
    local_151 = local_1f7;
    local_152 = local_1f6;
    local_153 = local_1f5;
    local_154 = local_1f4;
    local_155 = local_1f3;
    local_156 = local_1f2;
    local_157 = local_1f1;
    local_158 = local_1f0;
    local_159 = local_1ef;
    local_15a = local_1ee;
    local_15b = local_1ed;
    local_15c = local_1ec;
    local_15d = local_1eb;
    local_15e = local_1ea;
    local_15f = local_1e9;
    iVar8 = thunk_FUN_016d4a50(0x74);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x74);
    }
    FUN_016dd1aa(iVar8,local_25c,0x74);
    *param_1 = 0x80000029;
    param_1[1] = iVar8;
    param_1[2] = &DAT_018a7af8;
    if (local_16c != 0) {
      thunk_FUN_016d3fb4(local_168);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *local_1e8;
      bVar15 = (bool)hasExclusiveAccess(local_1e8);
    } while (!bVar15);
    *local_1e8 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(local_1e8);
    }
    if (local_2bc != -0x80000000) {
      FUN_015376c0(auStack_2e0);
    }
    if (((char)local_1e4 == '\0') && (((uint)local_1e0 & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(local_1dc);
    }
    if ((code *)*local_1b8 != (code *)0x0) {
      (*(code *)*local_1b8)(local_1bc);
    }
    if (local_1b8[1] != 0) {
      thunk_FUN_016d3fb4(local_1bc);
    }
    if ((local_1d0 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_1cc);
    }
    if (local_2e8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_2e8;
        bVar15 = (bool)hasExclusiveAccess(local_2e8);
      } while (!bVar15);
      *local_2e8 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(local_2e8);
      }
    }
  }
  else {
    FUN_015622b4(&local_a8,param_4,&DAT_0040c784,1,&DAT_0040c0af,1);
    param_1[2] = local_a0;
    param_1[3] = uStack_9c;
    param_1[4] = local_98;
    param_1[5] = uStack_94;
    param_1[6] = uStack_90;
    param_1[7] = uStack_8c;
    *param_1 = local_a8;
    param_1[1] = local_a4;
LAB_01537978:
    FUN_01537054(&local_2e8);
  }
  iVar8 = 1;
  if (0x80000000 < *param_4) {
    iVar8 = *param_4 + 0x7fffffff;
  }
  switch(iVar8) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_015396bc(param_4 + 3);
    if (*param_4 != 0x80000000 && *param_4 != 0) {
LAB_015379cc:
      thunk_FUN_016d3fb4(param_4[1]);
      thunk_FUN_016d3fb4(param_2);
      return;
    }
    break;
  default:
    param_4 = param_4 + 1;
    if (*param_4 != 0x80000000 && *param_4 != 0) goto LAB_015379cc;
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

