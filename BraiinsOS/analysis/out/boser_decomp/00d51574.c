// FUN_00d51574 @ 00d51574 size=792 calls_out=9 calls_in=0
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d517ac) */

void FUN_00d51574(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_458 [104];
  undefined1 auStack_3f0 [72];
  undefined **local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  int local_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int local_328;
  int local_324;
  int iStack_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int local_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  undefined1 auStack_2f0 [112];
  undefined1 auStack_280 [96];
  undefined1 auStack_220 [112];
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
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
  undefined1 auStack_158 [144];
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 uStack_30;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    FUN_01bed4e2(auStack_458,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_458);
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
    local_338 = *param_2;
    iStack_334 = param_2[1];
    iStack_330 = param_2[2];
    iStack_32c = param_2[3];
    local_328 = param_2[4];
    local_324 = param_2[5];
    iStack_320 = param_2[6];
    iStack_31c = param_2[7];
    iStack_318 = param_2[8];
    iStack_314 = param_2[9];
    local_310 = param_2[10];
    iStack_30c = param_2[0xb];
    iStack_308 = param_2[0xc];
    iStack_304 = param_2[0xd];
    iStack_300 = param_2[0xe];
    iStack_2fc = param_2[0xf];
    FUN_01a68e2c(&local_3a8,&local_338);
    FUN_0142e6dc(&local_1a0);
    local_1a0 = local_3a8;
    local_19c = (char *)uStack_3a4;
    uStack_198 = uStack_3a0;
    uStack_194 = uStack_39c;
    uStack_190 = uStack_398;
    local_18c = local_394;
    local_188 = uStack_390;
    local_184 = uStack_38c;
    local_180 = uStack_388;
    local_17c = uStack_384;
    local_178 = local_380;
    local_174 = uStack_37c;
    local_170 = uStack_378;
    local_16c = uStack_374;
    local_168 = uStack_370;
    uStack_164 = uStack_36c;
    iVar1 = param_2[0x2c];
    FUN_0178e884(0);
    local_160 = iVar1;
    FUN_01bed4e2(&local_338,&local_1a0,0xb8);
    FUN_01bed4e2(auStack_158,auStack_2f0,0x70);
    FUN_01bed4e2(&local_1a0,&local_338,0x48);
    FUN_01bed4e2(auStack_3f0,&local_1a0,0x48);
    FUN_01bed4e2(&local_3a8,auStack_158,0x70);
    local_1b0 = 0;
    local_1ac = 0x1d;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1a0 = &PTR_FUN_01c15c88;
    local_19c = "application/grpc";
    uStack_198 = 0x10;
    uStack_194 = 0;
    uStack_190 = 0;
    FUN_00714c58(&local_338,auStack_3f0,&local_1b0,&local_1a0);
    if ((char)local_328 != '\x02') {
      (**(code **)(local_338 + 0x10))(&iStack_32c,iStack_334,iStack_330);
    }
    FUN_01bed4e2(&local_338,&local_3a8,0x70);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_1a8 = 0x2000;
    local_1a4 = 0x11;
    local_1ac = 0;
    local_1b0 = iVar1;
    FUN_01bed4e2(auStack_220,&local_3a8,0x70);
    local_c0 = local_1b0;
    uStack_bc = local_1ac;
    uStack_b8 = local_1a8;
    uStack_b4 = local_1a4;
    local_a4 = 1;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 1;
    FUN_01bed4e2(&uStack_198,auStack_280,0xd0);
    local_94 = 0;
    uStack_30 = 1;
    local_98 = 3;
    local_1a0 = (undefined **)0x3;
    local_9c = 0x8000;
    local_19c = (char *)0x0;
    local_a0 = 0x2000;
    local_c8 = param_3;
    local_c4 = param_4;
    iVar1 = thunk_FUN_01be5118(0x178);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x178);
    }
    FUN_01bed4e2(iVar1,&local_1a0,0x178);
    FUN_01bed4e2(param_1,auStack_3f0,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c15310;
  }
  return;
}

