// FUN_01913770 @ 01913770 size=1500 calls_out=16 calls_in=0
// strings: 

void FUN_01913770(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_210;
  uint local_20c;
  uint uStack_208;
  uint local_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
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
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if (0x80000000 < *param_4) {
LAB_019138dc:
    FUN_01bed4e2(&local_140,param_4,0x78);
    FUN_0191d9a0(&local_210,param_4,&DAT_0052389f,1,&DAT_0056d260,2);
    *param_1 = local_210;
    param_1[1] = local_20c;
    param_1[2] = uStack_208;
    param_1[3] = local_204;
    param_1[4] = local_200;
    param_1[5] = uStack_1fc;
    param_1[6] = uStack_1f8;
    param_1[7] = uStack_1f4;
    FUN_0190eb24(&local_140);
    piVar4 = (int *)param_2[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x31]);
    }
    if (param_2[0x19] != 0x80000000) {
      FUN_0190ebd8(param_2 + 0x10);
    }
    if (((char)param_2[0x33] == '\0') && (param_2[0x34] != 0x80000000)) {
      FUN_0134bd64(param_2[0x34],param_2[0x35]);
    }
    FUN_01902274(param_2 + 0x38);
    FUN_0190f040(param_2 + 0x3f);
    goto LAB_019139a0;
  }
  uVar2 = 1;
  if ((int)param_4[3] < 0) {
    uVar2 = param_4[3] ^ 0x80000000;
  }
  if (uVar2 == 7) {
    uVar2 = param_2[0x31];
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
    local_2c = (undefined1)param_2[0x42];
    local_88 = param_2[0x38];
    uStack_84 = param_2[0x39];
    uStack_80 = param_2[0x3a];
    local_7c = param_2[0x3b];
    local_78 = param_2[0x3c];
    local_74 = param_2[0x3d];
    uStack_70 = param_2[0x3e];
    local_54 = param_2[0x32];
    local_140 = param_2[0x3f];
    uStack_13c = param_2[0x40];
    uStack_138 = param_2[0x41];
    local_2b = *(undefined1 *)((int)param_2 + 0x109);
    local_12c = 0;
    local_134 = 0;
    local_130 = 1;
    local_58 = uVar2;
    iVar7 = thunk_FUN_01be5118(0x118);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x118);
    }
    FUN_01bed4e2(iVar7,&local_140,0x118);
    FUN_01bed4e2(&local_140,param_4,0x7c);
    FUN_019102fc(param_1,iVar7,param_3,&local_140);
    goto LAB_019139a0;
  }
  if (uVar2 != 0x13) goto LAB_019138dc;
  uVar2 = param_2[0x31];
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
  local_60 = param_2[0x38];
  uStack_5c = param_2[0x39];
  local_58 = param_2[0x3a];
  local_54 = param_2[0x3b];
  local_50 = param_2[0x3c];
  uStack_4c = param_2[0x3d];
  uStack_48 = param_2[0x3e];
  local_78 = param_2[0x32];
  local_44 = param_2[0x3f];
  local_40 = param_2[0x40];
  uStack_3c = param_2[0x41];
  local_38 = CONCAT22(local_38._2_2_,(short)param_2[0x42]);
  local_7c = uVar2;
  puVar3 = (uint *)thunk_FUN_01be5118(0x110);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x110);
  }
  FUN_01bed4e2(puVar3,&local_140,0x110);
  FUN_01bed4e2(&local_210,param_4,0x7c);
  FUN_0191e124(puVar3 + 0x38,param_4);
  uVar2 = local_210;
  if ((local_210 < 0x80000001) && (local_204 == 0x80000013)) {
    bVar1 = true;
    local_170 = local_200;
    uStack_16c = uStack_1fc;
    uStack_168 = uStack_1f8;
LAB_01913b60:
    local_190 = local_170;
    uStack_18c = uStack_16c;
    uStack_188 = uStack_168;
    FUN_01935918(&local_180);
    local_160 = puVar3[0x3f];
    uStack_15c = puVar3[0x40];
    uStack_158 = puVar3[0x41];
    local_154 = local_180;
    local_150 = uStack_17c;
    uStack_14c = uStack_178;
    uVar6 = puVar3[0x31];
    FUN_01bed4e2(&uStack_128,puVar3 + 0x10,0x60);
    local_50 = puVar3[0x28];
    uStack_4c = puVar3[0x29];
    uStack_48 = puVar3[0x2a];
    local_44 = puVar3[0x2b];
    local_40 = puVar3[0x2c];
    uStack_3c = puVar3[0x2d];
    local_38 = puVar3[0x2e];
    uStack_34 = puVar3[0x2f];
    uStack_30 = puVar3[0x30];
    local_6c = puVar3[0x33];
    uStack_68 = puVar3[0x34];
    uStack_64 = puVar3[0x35];
    local_60 = puVar3[0x36];
    uStack_5c = puVar3[0x37];
    local_c8 = *puVar3;
    uStack_c4 = puVar3[1];
    uStack_c0 = puVar3[2];
    uStack_bc = puVar3[3];
    uStack_b8 = puVar3[4];
    local_b4 = puVar3[5];
    uStack_b0 = puVar3[6];
    uStack_ac = puVar3[7];
    uStack_a8 = puVar3[8];
    uStack_a4 = puVar3[9];
    local_a0 = puVar3[10];
    uStack_9c = puVar3[0xb];
    uStack_98 = puVar3[0xc];
    uStack_94 = puVar3[0xd];
    local_90 = puVar3[0xe];
    uStack_8c = puVar3[0xf];
    local_2c = (undefined1)puVar3[0x42];
    local_88 = puVar3[0x38];
    uStack_84 = puVar3[0x39];
    uStack_80 = puVar3[0x3a];
    local_7c = puVar3[0x3b];
    local_78 = puVar3[0x3c];
    local_74 = puVar3[0x3d];
    uStack_70 = puVar3[0x3e];
    local_54 = puVar3[0x32];
    local_2b = *(undefined1 *)((int)puVar3 + 0x109);
    local_140 = local_160;
    uStack_13c = uStack_15c;
    uStack_138 = uStack_158;
    local_134 = local_154;
    local_130 = local_150;
    local_12c = uStack_14c;
    local_58 = uVar6;
    uVar6 = thunk_FUN_01be5118(0x118);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x118);
    }
    FUN_01bed4e2(uVar6,&local_140,0x118);
    *param_1 = 0x80000029;
    param_1[1] = uVar6;
    param_1[2] = (uint)&DAT_01d2519c;
    if (bVar1) {
      if (uVar2 < 0x80000001) {
        if (local_204 != 0x80000013) {
          FUN_0190edf4(&local_204);
          uVar2 = local_210;
        }
        if (uVar2 != 0x80000000) {
          FUN_0134bd64(local_210,local_20c);
        }
      }
      else {
        FUN_0190eb24(&local_210);
      }
    }
  }
  else {
    FUN_01bed4e2(&local_140,&local_210,0x78);
    FUN_0191d9a0(&local_160,&local_140,&DAT_0052389f,1,&DAT_0052348c,1);
    uVar6 = local_160;
    puVar5 = (uint *)((uint)&local_160 | 4);
    local_170 = *puVar5;
    uStack_16c = puVar5[1];
    uStack_168 = puVar5[2];
    local_180 = local_150;
    uStack_17c = uStack_14c;
    uStack_178 = uStack_148;
    uStack_174 = uStack_144;
    FUN_0190eb24(&local_140);
    bVar1 = false;
    if (uVar6 == 0x80000029) goto LAB_01913b60;
    local_190 = local_170;
    uStack_18c = uStack_16c;
    uStack_188 = uStack_168;
    param_1[4] = local_180;
    param_1[5] = uStack_17c;
    param_1[6] = uStack_178;
    param_1[7] = uStack_174;
    param_1[1] = local_170;
    param_1[2] = uStack_16c;
    param_1[3] = uStack_168;
    *param_1 = uVar6;
    FUN_019142a0(puVar3);
  }
  thunk_FUN_01be4678(puVar3);
LAB_019139a0:
  thunk_FUN_01be4678(param_2);
  return;
}

