// FUN_01388bf4 @ 01388bf4 size=800 calls_out=7 calls_in=1
// strings: 

void FUN_01388bf4(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5c8;
  undefined4 local_5c0;
  undefined1 local_5ac;
  undefined2 local_5a8;
  undefined1 local_5a6;
  undefined4 local_5a5;
  undefined1 local_5a1;
  uint local_4c0 [5];
  undefined4 local_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  int *local_488;
  undefined4 local_484;
  undefined4 uStack_480;
  uint local_47c;
  undefined1 auStack_470 [312];
  uint local_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  int local_310;
  uint local_30c;
  int local_308;
  uint local_304;
  int *local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  uint local_2f4;
  undefined1 local_2f0;
  undefined2 local_2ef;
  undefined1 local_2ed;
  byte local_2ec;
  undefined2 local_2eb;
  undefined1 local_2e9;
  undefined2 local_2e2;
  uint local_2e0;
  undefined4 local_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  int *piStack_2a8;
  undefined4 uStack_2a4;
  undefined1 local_29c;
  undefined1 local_298;
  undefined1 uStack_297;
  undefined1 uStack_296;
  undefined2 uStack_295;
  undefined1 uStack_293;
  undefined1 uStack_292;
  undefined1 uStack_291;
  int local_158;
  undefined1 auStack_154 [304];
  
  iVar2 = 2;
  if ((*(byte *)(param_2 + 0x46) != 2) && ((*(byte *)(param_2 + 0x46) & 1) == 0)) goto LAB_01388ee4;
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 == 2) || ((uVar1 & 1) != 0)) {
    uVar3 = *(uint *)(param_2 + 0x2c);
    if (uVar1 == 2) {
      uVar3 = 0x1e;
    }
    if (uVar3 < *(uint *)(*param_3 + 0x148)) goto LAB_01388ee4;
  }
  uVar1 = *(uint *)(param_2 + 0x24);
  uStack_295 = 0x202;
  uStack_293 = 2;
  local_298 = 2;
  uStack_297 = 2;
  uStack_292 = 0;
  uStack_291 = 3;
  iVar2 = *(int *)(param_2 + 0x20);
  local_2dc = 0;
  local_2e0 = 0;
  local_29c = 2;
  local_2b0 = 2;
  local_2b8 = 2;
  uStack_296 = 0;
  FUN_016dd1aa(local_4c0,&local_2e0,0x48);
  local_2ef = CONCAT11(uStack_296,uStack_297);
  bVar4 = iVar2 == 2;
  if (bVar4) {
    iVar2 = 1;
  }
  local_338 = local_4c0[0];
  uStack_334 = local_4c0[1];
  iStack_330 = local_4c0[2];
  uStack_32c = local_4c0[3];
  uStack_328 = local_4c0[4];
  local_324 = local_4ac;
  uStack_320 = uStack_4a8;
  uStack_31c = uStack_4a4;
  uStack_318 = uStack_4a0;
  uStack_314 = uStack_49c;
  local_300 = local_488;
  local_2f8 = uStack_480;
  local_2fc = local_484;
  local_2ec = *(byte *)(param_2 + 0x49) == 2 | *(byte *)(param_2 + 0x49) & 1;
  local_30c = uVar1 >> 1;
  local_5a1 = 3;
  if (bVar4) {
    local_30c = 0x5000;
  }
  local_5ac = 3;
  local_5a8 = 0x202;
  local_2f4 = local_47c;
  local_2eb = 1;
  local_2f0 = 0;
  local_2e9 = 2;
  local_2ed = 0;
  local_5ec = 0;
  local_5f0 = 0;
  local_5a6 = 2;
  local_5a5 = 0x2020202;
  local_5c0 = 2;
  local_5c8 = 2;
  local_310 = iVar2;
  local_308 = iVar2;
  local_304 = local_30c;
  local_2e2 = local_2ef;
  FUN_01377354(&local_2e0);
  FUN_016dd1aa(local_4c0,&local_5f0,0x50);
  FUN_016dd1aa(auStack_470,&local_2e0,0xf0);
  FUN_0136cc98(local_4c0,&local_338);
  FUN_01363acc(&local_2e0,local_4c0,param_3);
  if ((local_47c & 0xff) != 3 && (local_47c & 0xff) != 2) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_488;
      bVar4 = (bool)hasExclusiveAccess(local_488);
    } while (!bVar4);
    *local_488 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(local_488,local_484);
    }
  }
  FUN_013852f8(auStack_470);
  if (local_158 != 2) {
    FUN_016dd1aa(local_4c0,&local_2e0,0x188);
    FUN_016dd1aa(&local_5f0,auStack_154,300);
    iVar2 = local_158;
    goto LAB_01388ee4;
  }
  local_4c0[0] = local_2e0;
  local_4c0[1] = local_2dc;
  local_4c0[2] = iStack_2d8;
  local_4c0[3] = uStack_2d4;
  local_4c0[4] = uStack_2d0;
  local_4ac = local_2cc;
  uStack_4a8 = uStack_2c8;
  uStack_4a4 = uStack_2c4;
  uStack_4a0 = uStack_2c0;
  uStack_49c = uStack_2bc;
  local_498 = local_2b8;
  uStack_494 = uStack_2b4;
  uStack_490 = local_2b0;
  uStack_48c = uStack_2ac;
  local_488 = piStack_2a8;
  local_484 = uStack_2a4;
  if (local_2e0 < 0x2a) {
    iVar2 = local_2e0 - 0x22;
    if (local_2e0 < 0x22) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0x1c;
      if (local_2e0 == 0x22) {
        iVar2 = 4;
      }
      iStack_2d8 = *(int *)((int)local_4c0 + iVar2);
    }
    else if ((iVar2 != 1) || (iVar2 = 8, iStack_2d8 < -0x7ffffffc)) goto LAB_01388edc;
    if (iStack_2d8 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)local_4c0 + iVar2 + 4));
    }
  }
LAB_01388edc:
  iVar2 = 2;
LAB_01388ee4:
  FUN_016dd1aa(param_1,local_4c0,0x188);
  *(int *)(param_1 + 0x188) = iVar2;
  FUN_016dd1aa(param_1 + 0x18c,&local_5f0,300);
  return;
}

