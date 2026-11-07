// FUN_0154d91c @ 0154d91c size=1112 calls_out=12 calls_in=0
// strings: 

void FUN_0154d91c(undefined4 *param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint local_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint local_14c;
  uint local_148;
  undefined1 auStack_144 [4];
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint local_12c;
  uint local_128;
  undefined1 auStack_124 [116];
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_4 < 0x80000001) {
    uVar2 = 1;
    if ((int)param_4[3] < 0) {
      uVar2 = param_4[3] ^ 0x80000000;
    }
    if (uVar2 == 5) {
      uVar6 = param_2[0xf];
      local_140 = param_2[10];
      uStack_13c = param_2[0xb];
      uStack_138 = param_2[0xc];
      uStack_134 = param_2[0xd];
      uStack_130 = param_2[0xe];
      local_90 = param_2[0x36];
      uStack_8c = param_2[0x37];
      local_88 = param_2[0x38];
      uStack_84 = param_2[0x39];
      uStack_80 = param_2[0x3a];
      local_7c = param_2[0x3b];
      uStack_78 = param_2[0x3c];
      uStack_74 = param_2[0x3d];
      local_70 = param_2[0x3e];
      uStack_6c = param_2[0x3f];
      local_68 = param_2[0x40];
      uStack_64 = param_2[0x41];
      uStack_60 = param_2[0x42];
      uStack_5c = param_2[0x43];
      uStack_58 = param_2[0x44];
      uStack_54 = param_2[0x45];
      uVar2 = param_2[0x10];
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      local_17c = param_2[3];
      uStack_178 = param_2[4];
      uStack_174 = param_2[5];
      uStack_170 = param_2[6];
      FUN_016dd1aa(auStack_124,param_2 + 0x11,0x94);
      local_50 = 0;
      local_16c = param_2[7];
      uStack_168 = param_2[8];
      uStack_164 = param_2[9];
      local_160 = 0x80000002;
      local_12c = uVar6;
      local_128 = uVar2;
      iVar3 = thunk_FUN_016d4a50(0x13c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x13c);
      }
      FUN_016dd1aa(iVar3,&local_188,0x13c);
      FUN_016dd1aa(&local_188,param_4,0x7c);
      FUN_01548668(param_1,iVar3,param_3,&local_188);
      goto LAB_0154da38;
    }
    if (uVar2 == 6) {
      uVar6 = param_2[0xf];
      local_140 = param_2[10];
      uStack_13c = param_2[0xb];
      uStack_138 = param_2[0xc];
      uStack_134 = param_2[0xd];
      uStack_130 = param_2[0xe];
      local_90 = param_2[0x36];
      uStack_8c = param_2[0x37];
      local_88 = param_2[0x38];
      uStack_84 = param_2[0x39];
      uStack_80 = param_2[0x3a];
      local_7c = param_2[0x3b];
      uStack_78 = param_2[0x3c];
      uStack_74 = param_2[0x3d];
      local_70 = param_2[0x3e];
      uStack_6c = param_2[0x3f];
      local_68 = param_2[0x40];
      uStack_64 = param_2[0x41];
      uStack_60 = param_2[0x42];
      uStack_5c = param_2[0x43];
      uStack_58 = param_2[0x44];
      uStack_54 = param_2[0x45];
      uVar2 = param_2[0x10];
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      local_17c = param_2[3];
      uStack_178 = param_2[4];
      uStack_174 = param_2[5];
      uStack_170 = param_2[6];
      FUN_016dd1aa(auStack_124,param_2 + 0x11,0x94);
      local_16c = param_2[7];
      uStack_168 = param_2[8];
      uStack_164 = param_2[9];
      local_160 = 0x80000002;
      local_12c = uVar6;
      local_128 = uVar2;
      iVar3 = thunk_FUN_016d4a50(0x138);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x138);
      }
      FUN_016dd1aa(iVar3,&local_188,0x138);
      FUN_016dd1aa(&local_188,param_4,0x7c);
      FUN_0154b3a8(param_1,iVar3,param_3,&local_188);
      goto LAB_0154da38;
    }
    if (uVar2 == 9) {
      uVar6 = param_2[0xf];
      local_160 = param_2[10];
      uStack_15c = param_2[0xb];
      uStack_158 = param_2[0xc];
      uStack_154 = param_2[0xd];
      uStack_150 = param_2[0xe];
      local_b0 = param_2[0x36];
      uStack_ac = param_2[0x37];
      uStack_a8 = param_2[0x38];
      uStack_a4 = param_2[0x39];
      uStack_a0 = param_2[0x3a];
      local_9c = param_2[0x3b];
      uStack_98 = param_2[0x3c];
      uStack_94 = param_2[0x3d];
      local_90 = param_2[0x3e];
      uStack_8c = param_2[0x3f];
      local_88 = param_2[0x40];
      uStack_84 = param_2[0x41];
      uStack_80 = param_2[0x42];
      local_7c = param_2[0x43];
      uStack_78 = param_2[0x44];
      uStack_74 = param_2[0x45];
      uVar2 = param_2[0x10];
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      local_17c = param_2[3];
      uStack_178 = param_2[4];
      uStack_174 = param_2[5];
      uStack_170 = param_2[6];
      FUN_016dd1aa(auStack_144,param_2 + 0x11,0x94);
      local_70 = CONCAT31(local_70._1_3_,1);
      local_16c = param_2[7];
      uStack_168 = param_2[8];
      uStack_164 = param_2[9];
      local_14c = uVar6;
      local_148 = uVar2;
      iVar3 = thunk_FUN_016d4a50(0x11c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x11c);
      }
      FUN_016dd1aa(iVar3,&local_188,0x11c);
      FUN_016dd1aa(&local_188,param_4,0x7c);
      FUN_01549ce8(param_1,iVar3,*param_3,&local_188);
      goto LAB_0154da38;
    }
  }
  FUN_016dd1aa(&local_188,param_4,0x78);
  FUN_015622b4(&local_48,param_4,&DAT_0040c784,1,&DAT_0040c0bd,3);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  param_1[7] = uStack_2c;
  FUN_015430a0(&local_188);
  piVar4 = (int *)param_2[0xf];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2[0xf]);
  }
  if (((char)param_2[10] == '\0') && ((param_2[0xb] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0xc]);
    uVar2 = param_2[5];
    puVar7 = (undefined4 *)param_2[6];
    pcVar5 = (code *)*puVar7;
  }
  else {
    uVar2 = param_2[5];
    puVar7 = (undefined4 *)param_2[6];
    pcVar5 = (code *)*puVar7;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar2);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  if ((*param_2 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  FUN_01547e60(param_2 + 0x11);
  if (param_2[7] != 0x80000000) {
    uVar2 = param_2[8];
    for (uVar6 = param_2[9]; uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_01496be4(uVar2);
      uVar2 = uVar2 + 0x3c;
    }
    if (param_2[7] != 0) {
      thunk_FUN_016d3fb4(param_2[8]);
      thunk_FUN_016d3fb4(param_2);
      return;
    }
  }
LAB_0154da38:
  thunk_FUN_016d3fb4(param_2);
  return;
}

