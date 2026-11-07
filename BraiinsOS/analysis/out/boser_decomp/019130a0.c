// FUN_019130a0 @ 019130a0 size=896 calls_out=10 calls_in=0
// strings: 

void FUN_019130a0(int *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  uint *puVar6;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  int local_160 [4];
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [56];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  puVar6 = param_2 + 0x38;
  FUN_0191e124(puVar6,param_4);
  if ((*param_4 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_80000004)) {
    local_170 = param_4[4];
    uStack_16c = param_4[5];
    uStack_168 = param_4[6];
    bVar1 = true;
  }
  else {
    FUN_01bed4e2(&local_140,param_4,0x78);
    FUN_0191d9a0(local_160,&local_140,&DAT_0052389f,1,&DAT_00523837,1);
    puVar2 = (uint *)((uint)local_160 | 4);
    local_170 = *puVar2;
    uStack_16c = puVar2[1];
    uStack_168 = puVar2[2];
    FUN_0190eb24(&local_140);
    bVar1 = false;
    if (local_160[0] != -0x7fffffd7) {
      param_1[4] = local_150;
      param_1[5] = iStack_14c;
      param_1[6] = iStack_148;
      param_1[7] = iStack_144;
      param_1[1] = local_170;
      param_1[2] = uStack_16c;
      param_1[3] = uStack_168;
      *param_1 = local_160[0];
      FUN_01913680(param_2);
      return;
    }
  }
  if (*(char *)((int)param_2 + 0xfd) == '\x01') {
    uVar3 = param_2[0x31];
    FUN_01bed4e2(auStack_100,param_2 + 0x10,0x60);
    local_a0 = param_2[0x28];
    uStack_9c = param_2[0x29];
    uStack_98 = param_2[0x2a];
    uStack_94 = param_2[0x2b];
    local_90 = param_2[0x2c];
    uStack_8c = param_2[0x2d];
    local_88 = param_2[0x2e];
    uStack_84 = param_2[0x2f];
    uStack_80 = param_2[0x30];
    local_74 = param_2[0x33];
    uStack_70 = param_2[0x34];
    local_6c = param_2[0x35];
    uStack_68 = param_2[0x36];
    uStack_64 = param_2[0x37];
    local_140 = *param_2;
    uStack_13c = param_2[1];
    uStack_138 = param_2[2];
    local_134 = param_2[3];
    local_130 = param_2[4];
    local_12c = param_2[5];
    uStack_128 = param_2[6];
    uStack_124 = param_2[7];
    uStack_120 = param_2[8];
    uStack_11c = param_2[9];
    local_118 = param_2[10];
    uStack_114 = param_2[0xb];
    uStack_110 = param_2[0xc];
    uStack_10c = param_2[0xd];
    uStack_108 = param_2[0xe];
    uStack_104 = param_2[0xf];
    local_60 = *puVar6;
    uStack_5c = param_2[0x39];
    local_58 = param_2[0x3a];
    local_54 = param_2[0x3b];
    local_50 = param_2[0x3c];
    uStack_4c = param_2[0x3d];
    uStack_48 = param_2[0x3e];
    local_78 = param_2[0x32];
    local_44 = local_170;
    local_40 = uStack_16c;
    uStack_3c = uStack_168;
    local_38._0_2_ = CONCAT11(*(undefined1 *)((int)param_2 + 0xfe),(char)param_2[0x3f]);
    local_7c = uVar3;
    iVar4 = thunk_FUN_01be5118(0x110);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x110);
    }
    FUN_01bed4e2(iVar4,&local_140,0x110);
    ppuVar5 = &PTR_FUN_01d25264;
  }
  else {
    local_140 = local_170;
    uStack_13c = uStack_16c;
    uStack_138 = uStack_168;
    uVar3 = param_2[0x31];
    FUN_01bed4e2(&uStack_128,param_2 + 0x10,0x60);
    local_50 = param_2[0x28];
    uStack_4c = param_2[0x29];
    uStack_48 = param_2[0x2a];
    local_44 = param_2[0x2b];
    local_40 = param_2[0x2c];
    uStack_3c = param_2[0x2d];
    local_38 = param_2[0x2e];
    uStack_34 = param_2[0x2f];
    uStack_30 = param_2[0x30];
    local_6c = param_2[0x33];
    uStack_68 = param_2[0x34];
    uStack_64 = param_2[0x35];
    local_60 = param_2[0x36];
    uStack_5c = param_2[0x37];
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    uStack_b8 = param_2[4];
    local_b4 = param_2[5];
    uStack_b0 = param_2[6];
    uStack_ac = param_2[7];
    uStack_a8 = param_2[8];
    uStack_a4 = param_2[9];
    local_a0 = param_2[10];
    uStack_9c = param_2[0xb];
    uStack_98 = param_2[0xc];
    uStack_94 = param_2[0xd];
    local_90 = param_2[0xe];
    uStack_8c = param_2[0xf];
    local_2c = (undefined1)param_2[0x3f];
    local_88 = *puVar6;
    uStack_84 = param_2[0x39];
    uStack_80 = param_2[0x3a];
    local_7c = param_2[0x3b];
    local_78 = param_2[0x3c];
    local_74 = param_2[0x3d];
    uStack_70 = param_2[0x3e];
    local_2b = *(undefined1 *)((int)param_2 + 0xfe);
    local_54 = param_2[0x32];
    local_12c = 0;
    local_134 = 0;
    local_130 = 1;
    local_58 = uVar3;
    iVar4 = thunk_FUN_01be5118(0x118);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x118);
    }
    FUN_01bed4e2(iVar4,&local_140,0x118);
    ppuVar5 = (undefined **)&DAT_01d2519c;
  }
  *param_1 = -0x7fffffd7;
  param_1[1] = iVar4;
  param_1[2] = (int)ppuVar5;
  if (bVar1) {
    uVar3 = *param_4;
    if (uVar3 < 0x80000001) {
      if ((undefined1 *)param_4[3] != &DAT_80000004) {
        FUN_0190edf4(param_4 + 3);
        uVar3 = *param_4;
      }
      if (uVar3 != 0x80000000) {
        FUN_0134bd64(uVar3,param_4[1]);
      }
    }
    else {
      FUN_0190eb24(param_4);
    }
  }
  thunk_FUN_01be4678(param_2);
  return;
}

