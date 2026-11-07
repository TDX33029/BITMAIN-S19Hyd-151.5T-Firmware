// FUN_00d889c8 @ 00d889c8 size=852 calls_out=10 calls_in=0
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d88c00) */

void FUN_00d889c8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined1 auStack_378 [104];
  undefined1 auStack_310 [72];
  undefined **local_2c8;
  int local_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int local_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  undefined1 auStack_280 [120];
  undefined **local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined **local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8;
  char *local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined1 auStack_160 [48];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined **local_c0;
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
    FUN_01bed4e2(auStack_378,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_378);
  }
  else {
    FUN_01bed4e2(auStack_160,param_2 + 0x10,0x78);
    local_162 = 3;
    local_164 = 200;
    local_1a4 = (char *)0x0;
    local_1a8 = (undefined **)0x0;
    local_168 = 0;
    local_170 = (uint)local_170._2_2_ << 0x10;
    local_174 = 0;
    local_17c = 0;
    local_180 = 0;
    local_188 = 0;
    local_18c = 0;
    local_190 = 2;
    local_178 = 4;
    local_184 = 4;
    local_2c8 = (undefined **)*param_2;
    local_2c4 = param_2[1];
    iStack_2c0 = param_2[2];
    iStack_2bc = param_2[3];
    iStack_2b8 = param_2[4];
    local_2b4 = param_2[5];
    iStack_2b0 = param_2[6];
    iStack_2ac = param_2[7];
    iStack_2a8 = param_2[8];
    iStack_2a4 = param_2[9];
    local_2a0 = param_2[10];
    iStack_29c = param_2[0xb];
    iStack_298 = param_2[0xc];
    iStack_294 = param_2[0xd];
    iStack_290 = param_2[0xe];
    iStack_28c = param_2[0xf];
    FUN_01a68e2c(&local_1e8,&local_2c8);
    FUN_0142e6dc(&local_1a8);
    local_1a8 = local_1e8;
    local_1a4 = (char *)local_1e4;
    uStack_1a0 = local_1e0;
    uStack_19c = local_1dc;
    uStack_198 = local_1d8;
    local_194 = local_1d4;
    local_190 = uStack_1d0;
    local_18c = uStack_1cc;
    local_188 = uStack_1c8;
    local_184 = uStack_1c4;
    local_180 = local_1c0;
    local_17c = uStack_1bc;
    local_178 = uStack_1b8;
    local_174 = uStack_1b4;
    local_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    iVar2 = param_2[0x2e];
    FUN_0178e884(0);
    local_168 = iVar2;
    FUN_01bed4e2(&local_2c8,&local_1a8,0xc0);
    FUN_01bed4e2(auStack_160,auStack_280,0x78);
    FUN_01bed4e2(&local_1a8,&local_2c8,0x48);
    FUN_01bed4e2(auStack_310,&local_1a8,0x48);
    FUN_01bed4e2(&local_2c8,auStack_160,0x78);
    local_1f8 = 0;
    uStack_1f4 = 0x1d;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    local_1a8 = &PTR_FUN_01c15c88;
    local_1a4 = "application/grpc";
    uStack_1a0 = 0x10;
    uStack_19c = 0;
    uStack_198 = 0;
    FUN_00714c58(&local_1e8,auStack_310,&local_1f8,&local_1a8);
    if ((char)local_1d8 != '\x02') {
      (*(code *)local_1e8[4])(&local_1dc,local_1e4,local_1e0);
    }
    FUN_01bed4e2(&local_1a8,&local_2c8,0x78);
    local_208 = (undefined **)thunk_FUN_01be5118(0x2000);
    iVar2 = local_2c4;
    ppuVar1 = local_2c8;
    if (local_208 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1);
    }
    local_1e0 = 0x2000;
    local_1e4 = 0;
    uStack_1fc = 0x11;
    uStack_204 = 0;
    uStack_200 = 0x2000;
    local_1e8 = local_208;
    local_1dc = uStack_1fc;
    if (local_2c8 == (undefined **)0x4 && local_2c4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2d8a4);
    }
    FUN_01bed4e2(&uStack_1a0,&iStack_2c0,0x70);
    local_130 = 3;
    uStack_12c = 0;
    local_c0 = local_208;
    uStack_bc = uStack_204;
    uStack_b8 = uStack_200;
    uStack_b4 = uStack_1fc;
    local_98 = 3;
    local_9c = 0x8000;
    local_a0 = 0x2000;
    uStack_30 = 1;
    local_94 = 0;
    local_1a4 = (char *)iVar2;
    local_1a8 = ppuVar1;
    local_a4 = 1;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 1;
    local_c8 = param_3;
    local_c4 = param_4;
    iVar2 = thunk_FUN_01be5118(0x180);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x180);
    }
    FUN_01bed4e2(iVar2,&local_1a8,0x180);
    FUN_01bed4e2(param_1,auStack_310,0x48);
    *(int *)(param_1 + 0x48) = iVar2;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c15658;
  }
  return;
}

