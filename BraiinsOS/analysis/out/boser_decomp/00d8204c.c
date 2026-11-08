// FUN_00d8204c @ 00d8204c size=668 calls_out=9 calls_in=1
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d82200) */

void FUN_00d8204c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_268 [104];
  undefined1 auStack_200 [72];
  undefined **local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined **local_138;
  char *local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  int local_f0;
  int local_ec;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 uStack_30;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    iVar1 = param_2[0x13];
    local_f4 = 200;
    local_100 = local_100 & 0xffff0000;
    local_108 = 4;
    local_114 = 4;
    iVar3 = param_2[0x12];
    local_120 = 2;
    local_134 = (char *)0x0;
    local_138 = (undefined **)0x0;
    local_f8 = 0;
    local_104 = 0;
    local_10c = 0;
    local_110 = 0;
    local_118 = 0;
    local_11c = 0;
    local_f2 = 3;
    iVar2 = param_2[0x14];
    local_178 = param_2[2];
    local_174 = param_2[3];
    local_170 = param_2[4];
    local_16c = param_2[5];
    local_168 = param_2[6];
    local_164 = param_2[7];
    iStack_160 = param_2[8];
    iStack_15c = param_2[9];
    iStack_158 = param_2[10];
    iStack_154 = param_2[0xb];
    local_150 = param_2[0xc];
    iStack_14c = param_2[0xd];
    iStack_148 = param_2[0xe];
    iStack_144 = param_2[0xf];
    iStack_140 = param_2[0x10];
    iStack_13c = param_2[0x11];
    local_f0 = iVar3;
    local_ec = iVar1;
    FUN_01a68e2c(&local_1b8);
    FUN_0142e6dc(&local_138);
    local_138 = local_1b8;
    local_134 = (char *)uStack_1b4;
    uStack_130 = uStack_1b0;
    uStack_12c = uStack_1ac;
    uStack_128 = uStack_1a8;
    local_124 = local_1a4;
    local_120 = uStack_1a0;
    local_11c = uStack_19c;
    local_118 = uStack_198;
    local_114 = uStack_194;
    local_110 = local_190;
    local_10c = uStack_18c;
    local_108 = uStack_188;
    local_104 = uStack_184;
    local_100 = uStack_180;
    uStack_fc = uStack_17c;
    FUN_0178e884(0);
    local_f8 = iVar2;
    FUN_01bed4e2(auStack_200,&local_138,0x48);
    local_1b8 = (undefined **)0x0;
    uStack_1b4 = 0x1d;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    local_138 = &PTR_FUN_01c15c88;
    local_134 = "application/grpc";
    uStack_130 = 0x10;
    uStack_12c = 0;
    uStack_128 = 0;
    FUN_00714c58(&local_178,auStack_200,&local_1b8,&local_138);
    if ((char)local_168 != '\x02') {
      (**(code **)(local_178 + 0x10))(&local_16c,local_174,local_170);
    }
    local_c8 = thunk_FUN_01be5118(0x2000);
    if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_170 = 0x2000;
    local_174 = 0;
    local_16c = 0x11;
    uStack_c4 = 0;
    uStack_c0 = 0x2000;
    uStack_30 = 1;
    local_98 = 3;
    local_138 = (undefined **)0x3;
    local_9c = 0x8000;
    local_ac = 1;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 1;
    local_94 = 0;
    local_134 = (char *)0x0;
    local_a0 = 0x2000;
    local_178 = local_c8;
    local_d0 = param_3;
    local_cc = param_4;
    iStack_bc = local_16c;
    local_a8 = iVar3;
    local_a4 = iVar1;
    iVar1 = thunk_FUN_01be5118(0x110);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x110);
    }
    FUN_01bed4e2(iVar1,&local_138,0x110);
    FUN_01bed4e2(param_1,auStack_200,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c14e60;
  }
  else {
    FUN_01bed4e2(auStack_268,param_2,0x68);
    FUN_010a5cf0(param_1,auStack_268);
  }
  return;
}

