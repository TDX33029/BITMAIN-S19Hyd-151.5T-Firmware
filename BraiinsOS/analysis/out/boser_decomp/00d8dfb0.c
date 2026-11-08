// FUN_00d8dfb0 @ 00d8dfb0 size=812 calls_out=9 calls_in=1
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d8e1f8) */

void FUN_00d8dfb0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_7d8 [104];
  undefined1 auStack_770 [72];
  undefined **local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 local_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  int local_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  int local_5c8;
  int local_5c4;
  int iStack_5c0;
  int iStack_5bc;
  int iStack_5b8;
  int iStack_5b4;
  int local_5b0;
  int iStack_5ac;
  int iStack_5a8;
  int iStack_5a4;
  int iStack_5a0;
  int iStack_59c;
  undefined1 auStack_590 [336];
  undefined1 auStack_440 [96];
  undefined1 auStack_3e0 [336];
  int local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined **local_280;
  char *local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  int local_240;
  undefined2 local_23c;
  undefined1 local_23a;
  undefined1 auStack_238 [368];
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
    FUN_01bed4e2(auStack_7d8,param_2 + 2,0x68);
    FUN_010a5cf0(param_1,auStack_7d8);
  }
  else {
    FUN_01bed4e2(auStack_238,param_2 + 0x10,0x150);
    local_23a = 3;
    local_23c = 200;
    local_27c = (char *)0x0;
    local_280 = (undefined **)0x0;
    local_240 = 0;
    local_248 = (uint)local_248._2_2_ << 0x10;
    local_24c = 0;
    local_254 = 0;
    local_258 = 0;
    local_260 = 0;
    local_264 = 0;
    local_268 = 2;
    local_250 = 4;
    local_25c = 4;
    local_5d8 = *param_2;
    iStack_5d4 = param_2[1];
    iStack_5d0 = param_2[2];
    iStack_5cc = param_2[3];
    local_5c8 = param_2[4];
    local_5c4 = param_2[5];
    iStack_5c0 = param_2[6];
    iStack_5bc = param_2[7];
    iStack_5b8 = param_2[8];
    iStack_5b4 = param_2[9];
    local_5b0 = param_2[10];
    iStack_5ac = param_2[0xb];
    iStack_5a8 = param_2[0xc];
    iStack_5a4 = param_2[0xd];
    iStack_5a0 = param_2[0xe];
    iStack_59c = param_2[0xf];
    FUN_01a68e2c(&local_728,&local_5d8);
    FUN_0142e6dc(&local_280);
    local_280 = local_728;
    local_27c = (char *)uStack_724;
    uStack_278 = uStack_720;
    uStack_274 = uStack_71c;
    uStack_270 = uStack_718;
    local_26c = local_714;
    local_268 = uStack_710;
    local_264 = uStack_70c;
    local_260 = uStack_708;
    local_25c = uStack_704;
    local_258 = local_700;
    local_254 = uStack_6fc;
    local_250 = uStack_6f8;
    local_24c = uStack_6f4;
    local_248 = uStack_6f0;
    uStack_244 = uStack_6ec;
    iVar1 = param_2[100];
    FUN_0178e884(0);
    local_240 = iVar1;
    FUN_01bed4e2(&local_5d8,&local_280,0x198);
    FUN_01bed4e2(auStack_238,auStack_590,0x150);
    FUN_01bed4e2(&local_280,&local_5d8,0x48);
    FUN_01bed4e2(auStack_770,&local_280,0x48);
    FUN_01bed4e2(&local_728,auStack_238,0x150);
    local_290 = 0;
    local_28c = 0x1d;
    local_288 = 0;
    local_284 = 0;
    local_280 = &PTR_FUN_01c15c88;
    local_27c = "application/grpc";
    uStack_278 = 0x10;
    uStack_274 = 0;
    uStack_270 = 0;
    FUN_00714c58(&local_5d8,auStack_770,&local_290,&local_280);
    if ((char)local_5c8 != '\x02') {
      (**(code **)(local_5d8 + 0x10))(&iStack_5cc,iStack_5d4,iStack_5d0);
    }
    FUN_01bed4e2(&local_5d8,&local_728,0x150);
    iVar1 = thunk_FUN_01be5118(0x2000);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_288 = 0x2000;
    local_284 = 0x11;
    local_28c = 0;
    local_290 = iVar1;
    FUN_01bed4e2(auStack_3e0,&local_728,0x150);
    local_c0 = local_290;
    uStack_bc = local_28c;
    uStack_b8 = local_288;
    uStack_b4 = local_284;
    local_a4 = 1;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 1;
    FUN_01bed4e2(&uStack_278,auStack_440,0x1b0);
    local_94 = 0;
    uStack_30 = 1;
    local_98 = 3;
    local_280 = (undefined **)0x3;
    local_9c = 0x8000;
    local_27c = (char *)0x0;
    local_a0 = 0x2000;
    local_c8 = param_3;
    local_c4 = param_4;
    iVar1 = thunk_FUN_01be5118(600);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,600);
    }
    FUN_01bed4e2(iVar1,&local_280,600);
    FUN_01bed4e2(param_1,auStack_770,0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    *(undefined **)(param_1 + 0x4c) = &DAT_01c152c8;
  }
  return;
}

