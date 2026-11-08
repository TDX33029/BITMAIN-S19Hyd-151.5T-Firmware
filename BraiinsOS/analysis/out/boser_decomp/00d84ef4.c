// FUN_00d84ef4 @ 00d84ef4 size=796 calls_out=9 calls_in=1
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d85130) */

void FUN_00d84ef4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_7f8 [104];
  undefined1 auStack_790 [72];
  undefined **local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 local_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  int local_5f0;
  int iStack_5ec;
  int iStack_5e8;
  int iStack_5e4;
  int local_5e0;
  int local_5dc;
  int iStack_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  int local_5c8;
  int iStack_5c4;
  int iStack_5c0;
  int iStack_5bc;
  int iStack_5b8;
  int iStack_5b4;
  undefined1 auStack_5a8 [344];
  undefined1 auStack_450 [96];
  undefined1 auStack_3f0 [344];
  int local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined **local_288;
  char *local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  int local_248;
  undefined2 local_244;
  undefined1 local_242;
  undefined1 auStack_240 [376];
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
    FUN_01bed4e2(auStack_7f8,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_7f8);
  }
  else {
    FUN_01bed4e2(auStack_240,param_2 + 0x10,0x158);
    local_242 = 3;
    local_244 = 200;
    local_284 = (char *)0x0;
    local_288 = (undefined **)0x0;
    local_248 = 0;
    local_250 = (uint)local_250._2_2_ << 0x10;
    local_254 = 0;
    local_25c = 0;
    local_260 = 0;
    local_268 = 0;
    local_26c = 0;
    local_270 = 2;
    local_258 = 4;
    local_264 = 4;
    local_5f0 = *param_2;
    iStack_5ec = param_2[1];
    iStack_5e8 = param_2[2];
    iStack_5e4 = param_2[3];
    local_5e0 = param_2[4];
    local_5dc = param_2[5];
    iStack_5d8 = param_2[6];
    iStack_5d4 = param_2[7];
    iStack_5d0 = param_2[8];
    iStack_5cc = param_2[9];
    local_5c8 = param_2[10];
    iStack_5c4 = param_2[0xb];
    iStack_5c0 = param_2[0xc];
    iStack_5bc = param_2[0xd];
    iStack_5b8 = param_2[0xe];
    iStack_5b4 = param_2[0xf];
    FUN_01a68e2c(&local_748,&local_5f0);
    FUN_0142e6dc(&local_288);
    local_288 = local_748;
    local_284 = (char *)uStack_744;
    uStack_280 = uStack_740;
    uStack_27c = uStack_73c;
    uStack_278 = uStack_738;
    local_274 = local_734;
    local_270 = uStack_730;
    local_26c = uStack_72c;
    local_268 = uStack_728;
    local_264 = uStack_724;
    local_260 = local_720;
    local_25c = uStack_71c;
    local_258 = uStack_718;
    local_254 = uStack_714;
    local_250 = uStack_710;
    uStack_24c = uStack_70c;
    iVar1 = param_2[0x66];
    FUN_0178e884(0);
    local_248 = iVar1;
    FUN_01bed4e2(&local_5f0,&local_288,0x1a0);
    FUN_01bed4e2(auStack_240,auStack_5a8,0x158);
    FUN_01bed4e2(&local_288,&local_5f0,0x48);
    FUN_01bed4e2(auStack_790,&local_288,0x48);
    FUN_01bed4e2(&local_748,auStack_240,0x158);
    local_298 = 0;
    local_294 = 0x1d;
    local_290 = 0;
    local_28c = 0;
    local_288 = &PTR_FUN_01c15c88;
    local_284 = "application/grpc";
    uStack_280 = 0x10;
    uStack_27c = 0;
    uStack_278 = 0;
    FUN_00714c58(&local_5f0,auStack_790,&local_298,&local_288);
    if ((char)local_5e0 != '\x02') {
      (**(code **)(local_5f0 + 0x10))(&iStack_5e4,iStack_5ec,iStack_5e8);
    }
    FUN_01bed4e2(&local_5f0,&local_748,0x158);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_290 = 0x2000;
    local_28c = 0x11;
    local_294 = 0;
    local_298 = iVar1;
    FUN_01bed4e2(auStack_3f0,&local_748,0x158);
    local_c0 = local_298;
    uStack_bc = local_294;
    uStack_b8 = local_290;
    uStack_b4 = local_28c;
    local_a4 = 1;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 1;
    FUN_01bed4e2(&uStack_280,auStack_450,0x1b8);
    local_94 = 0;
    uStack_30 = 1;
    local_98 = 3;
    local_288 = (undefined **)0x3;
    local_9c = 0x8000;
    local_284 = (char *)0x0;
    local_a0 = 0x2000;
    local_c8 = param_3;
    local_c4 = param_4;
    iVar1 = thunk_FUN_01be5118(0x260);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x260);
    }
    FUN_01bed4e2(iVar1,&local_288,0x260);
    FUN_01bed4e2(param_1,auStack_790,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c15178;
  }
  return;
}

