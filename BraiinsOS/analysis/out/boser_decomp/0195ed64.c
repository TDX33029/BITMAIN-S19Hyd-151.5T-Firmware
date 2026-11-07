// FUN_0195ed64 @ 0195ed64 size=944 calls_out=3 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0195ed64(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 local_254 [12];
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = CONCAT13(local_2c._3_1_,CONCAT12(local_2c._2_1_,(undefined2)local_2c));
  local_44 = CONCAT13(local_44._3_1_,CONCAT12(local_44._2_1_,(undefined2)local_44));
  local_5c = CONCAT13(local_5c._3_1_,CONCAT12(local_5c._2_1_,(undefined2)local_5c));
  local_74 = CONCAT13(local_74._3_1_,CONCAT12(local_74._2_1_,(undefined2)local_74));
  local_8c = CONCAT13(local_8c._3_1_,CONCAT12(local_8c._2_1_,(undefined2)local_8c));
  local_a4 = CONCAT13(local_a4._3_1_,CONCAT12(local_a4._2_1_,(undefined2)local_a4));
  if (param_2 == 0) {
    *param_1 = 0x80000000;
  }
  else {
    local_190 = *(undefined4 *)(param_2 + 0xd4);
    uStack_18c = *(undefined4 *)(param_2 + 0xd8);
    uStack_188 = *(undefined4 *)(param_2 + 0xdc);
    uStack_184 = *(undefined4 *)(param_2 + 0xe0);
    piVar11 = *(int **)(param_2 + 0xd0);
    do {
      iVar5 = *piVar11;
      bVar4 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar4);
    *piVar11 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x195f110);
      (*pcVar1)();
    }
    if (*(int *)(param_2 + 0xc) == -0x80000000) {
      local_180 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_c8,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      FUN_015e8ad4(local_b8,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
      local_ac = *(undefined4 *)(param_2 + 0x24);
      local_a8 = *(undefined4 *)(param_2 + 0x28);
      local_a4 = CONCAT22(CONCAT11(local_a4._3_1_,*(undefined1 *)(param_2 + 0x2e)),
                          *(undefined2 *)(param_2 + 0x2c));
      FUN_015e8ad4(local_a0,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
      local_94 = *(undefined4 *)(param_2 + 0x3c);
      local_90 = *(undefined4 *)(param_2 + 0x40);
      local_8c = CONCAT22(CONCAT11(local_8c._3_1_,*(undefined1 *)(param_2 + 0x46)),
                          *(undefined2 *)(param_2 + 0x44));
      FUN_015e8ad4(local_88,*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x50));
      local_7c = *(undefined4 *)(param_2 + 0x54);
      local_78 = *(undefined4 *)(param_2 + 0x58);
      local_74 = CONCAT22(CONCAT11(local_74._3_1_,*(undefined1 *)(param_2 + 0x5e)),
                          *(undefined2 *)(param_2 + 0x5c));
      FUN_015e8ad4(local_70,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
      local_64 = *(undefined4 *)(param_2 + 0x6c);
      local_60 = *(undefined4 *)(param_2 + 0x70);
      local_5c = CONCAT22(CONCAT11(local_5c._3_1_,*(undefined1 *)(param_2 + 0x76)),
                          *(undefined2 *)(param_2 + 0x74));
      FUN_015e8ad4(&local_58,*(undefined4 *)(param_2 + 0x7c),*(undefined4 *)(param_2 + 0x80));
      local_4c = *(undefined4 *)(param_2 + 0x84);
      local_48 = *(undefined4 *)(param_2 + 0x88);
      local_44 = CONCAT22(CONCAT11(local_44._3_1_,*(undefined1 *)(param_2 + 0x8e)),
                          *(undefined2 *)(param_2 + 0x8c));
      FUN_015e8ad4(&local_40,*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
      local_34 = *(undefined4 *)(param_2 + 0x9c);
      local_30 = *(undefined4 *)(param_2 + 0xa0);
      local_2c = CONCAT22(CONCAT11(local_2c._3_1_,*(undefined1 *)(param_2 + 0xa6)),
                          *(undefined2 *)(param_2 + 0xa4));
      FUN_015e8ad4(&local_180,*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0));
      uStack_1b8 = *(undefined4 *)(param_2 + 0xb4);
      uStack_1b4 = *(undefined4 *)(param_2 + 0xb8);
      uVar2 = *(undefined1 *)(param_2 + 0xc2);
      local_16c = CONCAT13(local_16c._3_1_,*(undefined3 *)(param_2 + 0xbc));
      uVar3 = *(undefined2 *)(param_2 + 0xc0);
      local_260 = local_c8;
      uStack_25c = uStack_c4;
      uStack_258 = uStack_c0;
      uStack_248 = local_ac;
      uStack_244 = local_a8;
      uStack_240 = local_a4;
      uStack_230 = local_94;
      uStack_22c = local_90;
      uStack_228 = local_8c;
      uStack_218 = local_7c;
      uStack_214 = local_78;
      uStack_210 = local_74;
      uStack_200 = local_64;
      uStack_1fc = local_60;
      uStack_1f8 = local_5c;
      uStack_1e8 = local_4c;
      uStack_1e4 = local_48;
      uStack_1e0 = local_44;
      uStack_1d0 = local_34;
      uStack_1cc = local_30;
      uStack_1c8 = local_2c;
      local_1c4 = local_180;
      uStack_1c0 = uStack_17c;
      uStack_1bc = uStack_178;
      uStack_1b0 = local_16c;
      local_174 = uStack_1b8;
      local_170 = uStack_1b4;
      FUN_01bed4e2(&local_180,&local_260,0xb4);
      local_cc = uVar3;
      local_ca = uVar2;
    }
    uVar6 = *(undefined4 *)(param_2 + 0xf4);
    uVar7 = *(undefined4 *)(param_2 + 0xf8);
    uVar10 = *(undefined4 *)(param_2 + 0xe8);
    uVar8 = *(undefined4 *)(param_2 + 0xec);
    uVar12 = *(undefined4 *)(param_2 + 0xe4);
    uVar9 = *(undefined4 *)(param_2 + 0xf0);
    FUN_006666fc(&local_58,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_2 + 0xc4) == -0x80000000) {
      local_40 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
    }
    param_1[0x35] = local_190;
    param_1[0x36] = uStack_18c;
    param_1[0x37] = uStack_188;
    param_1[0x38] = uStack_184;
    FUN_01bed4e2(local_254,&local_180,0xb8);
    local_260 = local_58;
    uStack_25c = uStack_54;
    uStack_258 = uStack_50;
    uStack_19c = local_40;
    uStack_198 = uStack_3c;
    uStack_194 = uStack_38;
    FUN_01bed4e2(param_1,&local_260,0xd0);
    param_1[0x3a] = uVar10;
    param_1[0x3b] = uVar8;
    param_1[0x3d] = uVar6;
    param_1[0x3e] = uVar7;
    param_1[0x39] = uVar12;
    param_1[0x34] = piVar11;
    param_1[0x3c] = uVar9;
  }
  return;
}

