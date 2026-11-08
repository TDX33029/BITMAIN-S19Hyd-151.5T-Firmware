// FUN_0154acd8 @ 0154acd8 size=952 calls_out=12 calls_in=0
// strings: 

void FUN_0154acd8(undefined4 *param_1,uint *param_2,undefined4 param_3,uint *param_4)

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
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint local_12c;
  uint local_128;
  undefined1 auStack_124 [148];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
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
      uVar2 = param_2[0x17];
      local_140 = param_2[0x12];
      uStack_13c = param_2[0x13];
      uStack_138 = param_2[0x14];
      uStack_134 = param_2[0x15];
      uStack_130 = param_2[0x16];
      local_90 = param_2[0x3e];
      uStack_8c = param_2[0x3f];
      uStack_88 = param_2[0x40];
      uStack_84 = param_2[0x41];
      uStack_80 = param_2[0x42];
      local_7c = param_2[0x43];
      uStack_78 = param_2[0x44];
      uStack_74 = param_2[0x45];
      uStack_70 = param_2[0x46];
      uStack_6c = param_2[0x47];
      local_68 = param_2[0x48];
      uStack_64 = param_2[0x49];
      uStack_60 = param_2[0x4a];
      uStack_5c = param_2[0x4b];
      uStack_58 = param_2[0x4c];
      uStack_54 = param_2[0x4d];
      uVar6 = param_2[0x18];
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      local_17c = param_2[3];
      uStack_178 = param_2[4];
      uStack_174 = param_2[5];
      uStack_170 = param_2[6];
      FUN_016dd1aa(auStack_124,param_2 + 0x19,0x94);
      local_160 = param_2[10];
      uStack_15c = param_2[0xb];
      uStack_158 = param_2[0xc];
      uStack_154 = param_2[0xd];
      local_150 = param_2[0xe];
      uStack_14c = param_2[0xf];
      uStack_148 = param_2[0x10];
      uStack_144 = param_2[0x11];
      local_16c = param_2[7];
      uStack_168 = param_2[8];
      uStack_164 = param_2[9];
      local_50 = 0;
      local_12c = uVar2;
      local_128 = uVar6;
      iVar3 = thunk_FUN_016d4a50(0x13c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x13c);
      }
      FUN_016dd1aa(iVar3,&local_188,0x13c);
      FUN_016dd1aa(&local_188,param_4,0x7c);
      FUN_01548668(param_1,iVar3,param_3,&local_188);
      goto LAB_0154ae00;
    }
    if (uVar2 == 6) {
      uVar2 = param_2[0x17];
      local_140 = param_2[0x12];
      uStack_13c = param_2[0x13];
      uStack_138 = param_2[0x14];
      uStack_134 = param_2[0x15];
      uStack_130 = param_2[0x16];
      local_90 = param_2[0x3e];
      uStack_8c = param_2[0x3f];
      uStack_88 = param_2[0x40];
      uStack_84 = param_2[0x41];
      uStack_80 = param_2[0x42];
      local_7c = param_2[0x43];
      uStack_78 = param_2[0x44];
      uStack_74 = param_2[0x45];
      uStack_70 = param_2[0x46];
      uStack_6c = param_2[0x47];
      local_68 = param_2[0x48];
      uStack_64 = param_2[0x49];
      uStack_60 = param_2[0x4a];
      uStack_5c = param_2[0x4b];
      uStack_58 = param_2[0x4c];
      uStack_54 = param_2[0x4d];
      uVar6 = param_2[0x18];
      local_188 = *param_2;
      uStack_184 = param_2[1];
      uStack_180 = param_2[2];
      local_17c = param_2[3];
      uStack_178 = param_2[4];
      uStack_174 = param_2[5];
      uStack_170 = param_2[6];
      FUN_016dd1aa(auStack_124,param_2 + 0x19,0x94);
      local_160 = param_2[10];
      uStack_15c = param_2[0xb];
      uStack_158 = param_2[0xc];
      uStack_154 = param_2[0xd];
      local_150 = param_2[0xe];
      uStack_14c = param_2[0xf];
      uStack_148 = param_2[0x10];
      uStack_144 = param_2[0x11];
      local_16c = param_2[7];
      uStack_168 = param_2[8];
      uStack_164 = param_2[9];
      local_12c = uVar2;
      local_128 = uVar6;
      iVar3 = thunk_FUN_016d4a50(0x138);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x138);
      }
      FUN_016dd1aa(iVar3,&local_188,0x138);
      FUN_016dd1aa(&local_188,param_4,0x7c);
      FUN_0154b3a8(param_1,iVar3,param_3,&local_188);
      goto LAB_0154ae00;
    }
  }
  FUN_016dd1aa(&local_188,param_4,0x78);
  FUN_015622b4(&local_48,param_4,&DAT_0040c784,1,&DAT_00568ee8,2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  param_1[7] = uStack_2c;
  FUN_015430a0(&local_188);
  piVar4 = (int *)param_2[0x17];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2[0x17]);
  }
  if (((char)param_2[0x12] == '\0') && ((param_2[0x13] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0x14]);
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
  FUN_01547e60(param_2 + 0x19);
  if (param_2[10] != 0x80000002) {
    FUN_015482c0();
  }
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
LAB_0154ae00:
  thunk_FUN_016d3fb4(param_2);
  return;
}

