// FUN_00d64250 @ 00d64250 size=556 calls_out=7 calls_in=2
// strings: application/grpc

void FUN_00d64250(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_500 [104];
  undefined1 auStack_498 [72];
  undefined1 auStack_450 [112];
  int local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined1 auStack_3d4 [4];
  char local_3d0;
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
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [284];
  
  if (*param_2 == 3 && param_2[1] == 0) {
    FUN_01bed4e2(auStack_500,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_500);
  }
  else {
    FUN_00d5b6ec(&local_1a0);
    FUN_01bed4e2(auStack_398,auStack_158,0x70);
    FUN_01bed4e2(&local_3e0,&local_1a0,0x48);
    FUN_01bed4e2(auStack_498,&local_3e0,0x48);
    FUN_01bed4e2(auStack_450,auStack_398,0x70);
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
    if (local_3d0 != '\x02') {
      (**(code **)(local_3e0 + 0x10))(auStack_3d4,uStack_3dc,uStack_3d8);
    }
    FUN_01bed4e2(&local_3e0,auStack_450,0x70);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    FUN_01bed4e2(auStack_140,auStack_450,0x70);
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
    *(undefined **)(param_1 + 0x4c) = &DAT_01c15a00;
  }
  return;
}

