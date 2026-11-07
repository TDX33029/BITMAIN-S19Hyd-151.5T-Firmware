// FUN_00d5c700 @ 00d5c700 size=776 calls_out=9 calls_in=2
// strings: application/grpc

void FUN_00d5c700(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_500 [104];
  undefined1 auStack_498 [72];
  undefined **local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  int local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  int iStack_3d4;
  int local_3d0;
  int local_3cc;
  int iStack_3c8;
  int iStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  int local_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  undefined1 auStack_398 [112];
  undefined4 local_328;
  undefined4 local_324;
  undefined1 auStack_320 [208];
  undefined4 local_250;
  undefined4 local_24c;
  int local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined2 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined **local_1a0;
  char *local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  int local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [284];
  
  if (*param_2 == 3 && param_2[1] == 0) {
    FUN_01bed4e2(auStack_500,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_500);
  }
  else {
    FUN_01bed4e2(auStack_158,param_2 + 0x10,0x70);
    local_15a = 3;
    local_15c = 200;
    local_19c = (char *)0x0;
    local_1a0 = (undefined **)0x0;
    local_160 = 0;
    local_168 = (uint)local_168._2_2_ << 0x10;
    local_16c = 0;
    local_174 = 0;
    local_178 = 0;
    local_180 = 0;
    local_184 = 0;
    local_188 = 2;
    local_170 = 4;
    local_17c = 4;
    local_3e0 = *param_2;
    iStack_3dc = param_2[1];
    iStack_3d8 = param_2[2];
    iStack_3d4 = param_2[3];
    local_3d0 = param_2[4];
    local_3cc = param_2[5];
    iStack_3c8 = param_2[6];
    iStack_3c4 = param_2[7];
    iStack_3c0 = param_2[8];
    iStack_3bc = param_2[9];
    local_3b8 = param_2[10];
    iStack_3b4 = param_2[0xb];
    iStack_3b0 = param_2[0xc];
    iStack_3ac = param_2[0xd];
    iStack_3a8 = param_2[0xe];
    iStack_3a4 = param_2[0xf];
    FUN_01a68e2c(&local_450,&local_3e0);
    FUN_0142e6dc(&local_1a0);
    local_1a0 = local_450;
    local_19c = (char *)uStack_44c;
    uStack_198 = uStack_448;
    uStack_194 = uStack_444;
    uStack_190 = uStack_440;
    local_18c = local_43c;
    local_188 = uStack_438;
    local_184 = uStack_434;
    local_180 = uStack_430;
    local_17c = uStack_42c;
    local_178 = local_428;
    local_174 = uStack_424;
    local_170 = uStack_420;
    local_16c = uStack_41c;
    local_168 = uStack_418;
    uStack_164 = uStack_414;
    iVar1 = param_2[0x2c];
    FUN_0178e884(0);
    local_160 = iVar1;
    FUN_01bed4e2(&local_3e0,&local_1a0,0xb8);
    FUN_01bed4e2(auStack_158,auStack_398,0x70);
    FUN_01bed4e2(&local_1a0,&local_3e0,0x48);
    FUN_01bed4e2(auStack_498,&local_1a0,0x48);
    FUN_01bed4e2(&local_450,auStack_158,0x70);
    local_1b0 = 0;
    uStack_1ac = 0x1d;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    local_1a0 = &PTR_FUN_01c15c88;
    local_19c = "application/grpc";
    uStack_198 = 0x10;
    uStack_194 = 0;
    uStack_190 = 0;
    FUN_00714c58(&local_3e0,auStack_498,&local_1b0,&local_1a0);
    if ((char)local_3d0 != '\x02') {
      (**(code **)(local_3e0 + 0x10))(&iStack_3d4,iStack_3dc,iStack_3d8);
    }
    FUN_01bed4e2(&local_3e0,&local_450,0x70);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    FUN_01bed4e2(auStack_140,&local_450,0x70);
    local_23c = 0x11;
    uStack_244 = 0;
    uStack_240 = 0x2000;
    local_324 = 0;
    local_328 = 3;
    local_22c = 1;
    local_230 = 0;
    local_234 = 0;
    local_238 = 1;
    local_248 = iVar1;
    FUN_01bed4e2(auStack_320,&local_1a0,0xd0);
    uStack_1b8 = 1;
    local_224 = 0x8000;
    local_21c = 0;
    local_220 = 3;
    local_228 = 0x2000;
    local_250 = param_3;
    local_24c = param_4;
    FUN_01bed4e2(&uStack_198,auStack_320,0x170);
    local_19c = (char *)0x0;
    local_1a0 = (undefined **)0x3;
    iVar1 = thunk_FUN_01be5118(0x178);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x178);
    }
    FUN_01bed4e2(iVar1,&local_1a0,0x178);
    FUN_01bed4e2(param_1,auStack_498,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c14fe0;
  }
  return;
}

