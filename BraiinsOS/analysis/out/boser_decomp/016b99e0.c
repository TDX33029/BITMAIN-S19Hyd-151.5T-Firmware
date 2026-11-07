// FUN_016b99e0 @ 016b99e0 size=540 calls_out=7 calls_in=1
// strings: 

void FUN_016b99e0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_5e8 [12];
  undefined1 local_5dc;
  undefined1 auStack_4b8 [72];
  undefined1 local_470;
  uint local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int local_308;
  uint local_304;
  int local_300;
  uint local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined2 local_2e8;
  undefined1 local_2e6;
  undefined1 local_2e5;
  byte local_2e4;
  undefined2 local_2e3;
  undefined1 local_2e1;
  uint local_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined2 local_298;
  undefined1 local_296;
  undefined4 local_295;
  undefined1 local_291;
  int local_158;
  undefined1 auStack_154 [304];
  
  iVar3 = 2;
  if ((*(byte *)(param_2 + 0x46) == 2) || ((*(byte *)(param_2 + 0x46) & 1) != 0)) {
    uVar1 = *(uint *)(param_2 + 0x28);
    if ((uVar1 == 2) || ((uVar1 & 1) != 0)) {
      uVar2 = *(uint *)(param_2 + 0x2c);
      if (uVar1 == 2) {
        uVar2 = 0x1e;
      }
      if (uVar2 < *(uint *)(*param_3 + 0x148)) goto LAB_016b9bcc;
    }
    uVar1 = *(uint *)(param_2 + 0x24);
    local_295 = 0x2020202;
    local_298 = 0x202;
    local_291 = 3;
    local_29c = CONCAT31(local_29c._1_3_,3);
    local_2b0 = 2;
    local_2b8 = 2;
    local_5dc = 2;
    iVar3 = *(int *)(param_2 + 0x20);
    local_2dc = 0;
    local_2e0 = 0;
    local_296 = 0;
    FUN_016b3574(auStack_4b8,&local_2e0,auStack_5e8);
    local_470 = 0;
    FUN_01bed4e2(&local_2e0,auStack_4b8,0x4b);
    local_330 = local_2e0;
    uStack_32c = local_2dc;
    uStack_328 = uStack_2d8;
    uStack_324 = uStack_2d4;
    uStack_320 = uStack_2d0;
    local_31c = local_2cc;
    uStack_318 = uStack_2c8;
    uStack_314 = uStack_2c4;
    uStack_310 = uStack_2c0;
    uStack_30c = uStack_2bc;
    local_2f8 = local_2a8;
    uStack_2f4 = uStack_2a4;
    uStack_2f0 = uStack_2a0;
    uStack_2ec = local_29c;
    local_2e6 = local_296;
    local_2e4 = *(byte *)(param_2 + 0x49) & 1;
    if (*(byte *)(param_2 + 0x49) == 2) {
      local_2e4 = 1;
    }
    local_2e1 = 2;
    local_2e3 = 1;
    bVar4 = iVar3 == 2;
    if (bVar4) {
      iVar3 = 1;
    }
    local_2e8 = local_298;
    local_2e5 = 0;
    local_304 = uVar1 >> 1;
    if (bVar4) {
      local_304 = 0x5000;
    }
    local_308 = iVar3;
    local_300 = iVar3;
    local_2fc = local_304;
    FUN_016ac9ac(auStack_4b8);
    FUN_016b3608(auStack_4b8,&local_330);
    FUN_016aca40(&local_2e0,auStack_4b8,param_3);
    FUN_016b7b80(auStack_4b8);
    if (local_158 == 2) {
      iVar3 = 2;
      if (local_2e0 < 0x2a) {
        FUN_01338710(&local_2e0);
      }
    }
    else {
      FUN_01bed4e2(auStack_4b8,&local_2e0,0x188);
      FUN_01bed4e2(auStack_5e8,auStack_154,300);
      iVar3 = local_158;
    }
  }
LAB_016b9bcc:
  FUN_01bed4e2(param_1,auStack_4b8,0x188);
  *(int *)(param_1 + 0x188) = iVar3;
  FUN_01bed4e2(param_1 + 0x18c,auStack_5e8,300);
  return;
}

