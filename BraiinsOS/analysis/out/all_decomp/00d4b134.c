// FUN_00d4b134 @ 00d4b134 size=1032 calls_out=11 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_00d4b134(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 **local_708;
  undefined *local_704;
  undefined1 *local_700;
  undefined4 local_6fc;
  undefined1 auStack_6d0 [48];
  undefined1 auStack_6a0 [180];
  undefined4 local_5ec;
  undefined4 local_5e8;
  int local_5d8;
  undefined4 local_5d4;
  uint local_5c0;
  undefined4 *local_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 auStack_528 [224];
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 local_3fc;
  undefined4 *local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 *local_3e8 [14];
  undefined1 auStack_3b0 [248];
  int local_2b8;
  undefined4 local_2b4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint local_2a0;
  undefined4 *local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  byte local_26a;
  undefined1 local_269;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 *local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00d4b680(&local_708);
  bVar6 = *(int *)(param_2 + 0x148) == 1;
  if (bVar6) {
    local_178 = *(undefined4 **)(param_2 + 0x14c);
    local_174 = *(undefined4 *)(param_2 + 0x150);
    local_170 = *(undefined4 *)(param_2 + 0x154);
  }
  uVar5 = (uint)bVar6;
  FUN_016dd1aa(local_3e8,&local_708,0x148);
  local_29c = local_178;
  local_298 = local_174;
  local_294 = local_170;
  local_2a0 = uVar5;
  local_26a = FUN_009b670c(auStack_3b0);
  local_26a = local_26a & 1;
  local_170 = 0;
  local_178 = (undefined4 *)0x0;
  local_6fc = 0;
  local_700 = &DAT_60000020;
  local_708 = &local_178;
  local_704 = &DAT_018630bc;
  local_174 = 1;
  local_269 = extraout_r1;
  iVar2 = FUN_0093efbc(&local_26a,&local_708);
  uVar4 = local_170;
  uVar3 = local_174;
  puVar1 = local_178;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_258,
                 &DAT_018630d4,&DAT_018af130);
  }
  FUN_00849e70(&local_178,local_3e8);
  if (uVar5 != 0) {
    local_250 = local_294;
    local_254 = local_298;
    local_258 = local_29c;
  }
  FUN_016dd1aa(&local_708,&local_178,0x148);
  local_5bc = local_258;
  uStack_5b8 = local_254;
  uStack_5b4 = local_250;
  local_5c0 = (uint)(uVar5 != 0);
  FUN_007c6680(&local_178,auStack_6d0);
  FUN_00f20400(&local_30,local_5ec,local_5e8);
  FUN_016dd1aa(&local_258,&local_178,0xe0);
  local_264 = local_30;
  local_260 = uStack_2c;
  local_25c = uStack_28;
  FUN_007c94ec(auStack_6d0);
  if (local_5d8 != 0) {
    thunk_FUN_016d3fb4(local_5d4);
  }
  local_3f4 = uVar3;
  local_3f8 = puVar1;
  local_3f0 = uVar4;
  FUN_016dd1aa(auStack_528,&local_258,0xe0);
  local_448 = 1;
  local_444 = 0;
  local_438 = 0;
  local_434 = 0;
  local_428 = 0;
  local_424 = 0;
  local_418 = 0;
  local_414 = 0;
  local_440 = 0;
  local_430 = 300000000;
  local_410 = 300000000;
  local_3fc = 25000000;
  local_420 = 60000000;
  local_40c = local_268;
  uStack_408 = local_264;
  uStack_404 = local_260;
  uStack_400 = local_25c;
  FUN_007c94ec(auStack_3b0);
  if (local_2b8 != 0) {
    thunk_FUN_016d3fb4(local_2b4);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018dad80 != 0) {
    local_708 = local_3e8;
    local_3e8[0] = &DAT_018dad80;
    FUN_015eedc4(&DAT_018dad80,1,&local_708,&DAT_01878080,&DAT_018ac9b8);
  }
  FUN_016dd1aa(local_3e8,auStack_528,0x140);
  local_2a8 = *param_5;
  uStack_2a4 = param_5[1];
  local_2a0 = param_5[2];
  local_29c = (undefined4 *)param_5[3];
  local_298 = param_5[4];
  local_294 = param_5[5];
  uStack_290 = param_5[6];
  uStack_28c = param_5[7];
  uStack_288 = param_5[8];
  local_284 = param_5[9];
  uStack_280 = param_5[10];
  uStack_27c = param_5[0xb];
  uStack_278 = param_5[0xc];
  uStack_274 = param_5[0xd];
  FUN_016dd1aa(auStack_6a0,local_3e8,0x178);
  FUN_016dd1aa(&local_708,param_3,0x68);
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(param_1 + 0x218) = *param_4;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  FUN_016dd1aa(param_1,&local_708,0x1e0);
  *(undefined4 *)(param_1 + 0x1ec) = 0x400ccccc;
  *(undefined8 *)(param_1 + 0x1e0) = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x1e8) = 0xcccccccd;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined2 *)(param_1 + 0x200) = 2;
  *(undefined **)(param_1 + 0x20c) = &DAT_018db520;
  *(undefined2 *)(param_1 + 0x210) = 2;
  *(int *)(param_1 + 0x204) = param_2 + 0x38;
  *(undefined **)(param_1 + 0x208) = &DAT_018dad84;
  *(undefined4 *)(param_1 + 0x228) = param_7;
  *(undefined4 *)(param_1 + 0x22c) = 1;
  *(int *)(param_1 + 0x230) = param_2;
  *(undefined4 *)(param_1 + 0x234) = param_6;
  return;
}

