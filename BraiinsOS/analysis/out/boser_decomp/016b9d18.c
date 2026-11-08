// FUN_016b9d18 @ 016b9d18 size=524 calls_out=7 calls_in=1
// strings: 

void FUN_016b9d18(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 local_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  int local_568;
  int iStack_564;
  uint uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  ushort local_548;
  undefined2 local_542;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 local_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ushort local_2c8;
  byte local_2c6;
  undefined2 local_2c5;
  undefined1 local_2c3;
  undefined2 local_2c2;
  undefined1 auStack_2c0 [12];
  undefined1 local_2b4;
  int local_2b0;
  int local_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  ushort local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined1 local_264;
  undefined1 local_260;
  undefined4 local_25f;
  undefined1 local_25b;
  
  if ((*(byte *)(param_2 + 0x45) == 2) || ((*(byte *)(param_2 + 0x45) & 1) != 0)) {
    local_25f = 0x2020202;
    local_264 = 3;
    local_278 = 2;
    local_280 = 2;
    local_25b = 2;
    local_2b4 = 2;
    local_2ac = 0;
    local_2b0 = 0;
    local_260 = 0;
    local_288 = 0;
    FUN_016c5e20(&local_598,&local_2b0,auStack_2c0);
    local_548 = local_548 & 0xff;
    local_318 = local_598;
    uStack_314 = uStack_594;
    uStack_310 = uStack_590;
    uStack_30c = uStack_58c;
    uStack_308 = uStack_588;
    local_304 = local_584;
    uStack_300 = uStack_580;
    uStack_2fc = uStack_57c;
    uStack_2f8 = uStack_578;
    uStack_2f4 = uStack_574;
    local_2b0 = local_568;
    local_2ac = iStack_564;
    local_2a8 = uStack_560;
    uStack_2a4 = uStack_55c;
    local_2a0 = local_558;
    uStack_29c = uStack_554;
    uStack_298 = uStack_550;
    uStack_294 = uStack_54c;
    local_2ec = *(undefined4 *)(param_2 + 0xc);
    local_290 = local_548;
    if (*(int *)(param_2 + 8) == 0) {
      local_2ec = 0x200000;
    }
    local_2f0 = 1;
    local_2d8 = local_558;
    uStack_2d4 = uStack_554;
    uStack_2d0 = uStack_550;
    uStack_2cc = uStack_54c;
    local_2c8 = local_548;
    local_2c3 = 0;
    local_2c5 = 1;
    local_2c2 = local_542;
    local_2c6 = *(byte *)(param_2 + 0x49) == 2 | *(byte *)(param_2 + 0x49) & 1;
    local_2e0 = 1;
    local_2dc = 10;
    local_2e4 = 3;
    local_2e8 = 1;
    FUN_016c31a0(&local_598);
    FUN_016c5eb4(&local_598,&local_318);
    do {
      iVar3 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16b9f20);
      (*pcVar1)();
    }
    FUN_016c3230(&local_2b0,&local_598,param_3);
    FUN_016b9f84(&local_598);
    iVar4 = local_2ac;
    iVar3 = local_2b0;
    if (local_2b0 == 2 && local_2ac == 0) {
      iVar4 = 0;
      iVar3 = 2;
      if (local_2a8 < 0x2a) {
        FUN_01338710(&local_2a8);
      }
    }
    else {
      FUN_01bed4e2(&local_598,&local_2a8,0x280);
    }
  }
  else {
    iVar4 = 0;
    iVar3 = 2;
  }
  *param_1 = iVar3;
  param_1[1] = iVar4;
  FUN_01bed4e2(param_1 + 2,&local_598,0x280);
  return;
}

