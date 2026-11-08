// FUN_01923b18 @ 01923b18 size=800 calls_out=14 calls_in=0
// strings: 

void FUN_01923b18(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [148];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
      uVar3 = param_2[0x17];
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
      FUN_01bed4e2(auStack_124,param_2 + 0x19,0x94);
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
      local_12c = uVar3;
      local_128 = uVar6;
      iVar4 = thunk_FUN_01be5118(0x13c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x13c);
      }
      FUN_01bed4e2(iVar4,&local_188,0x13c);
      FUN_01bed4e2(&local_188,param_4,0x7c);
      FUN_01921aec(param_1,iVar4,param_3,&local_188);
      goto LAB_01923e10;
    }
    if (uVar2 == 6) {
      uVar3 = param_2[0x17];
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
      FUN_01bed4e2(auStack_124,param_2 + 0x19,0x94);
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
      local_12c = uVar3;
      local_128 = uVar6;
      iVar4 = thunk_FUN_01be5118(0x138);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x138);
      }
      FUN_01bed4e2(iVar4,&local_188,0x138);
      FUN_01bed4e2(&local_188,param_4,0x7c);
      FUN_019240c0(param_1,iVar4,param_3,&local_188);
      goto LAB_01923e10;
    }
  }
  FUN_01bed4e2(&local_188,param_4,0x78);
  FUN_0191d9a0(&local_48,param_4,&DAT_0052389f,1,&DAT_0056efc8,2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  param_1[7] = uStack_2c;
  FUN_0191edf0(&local_188);
  piVar5 = (int *)param_2[0x17];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(param_2[0x17]);
  }
  if ((*(char *)(param_2 + 0x12) == '\0') && (param_2[0x13] != -0x80000000)) {
    FUN_0134bd64(param_2[0x13],param_2[0x14]);
  }
  FUN_01902274(param_2);
  FUN_019217b0(param_2 + 0x19);
  if (param_2[10] != -0x7ffffffe) {
    FUN_01921838();
  }
  if (param_2[7] != -0x80000000) {
    FUN_018e3a84();
  }
LAB_01923e10:
  thunk_FUN_01be4678(param_2);
  return;
}

