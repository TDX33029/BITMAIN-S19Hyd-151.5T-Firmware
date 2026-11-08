// FUN_01389054 @ 01389054 size=856 calls_out=7 calls_in=1
// strings: 

void FUN_01389054(int *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_63c;
  uint local_638 [5];
  undefined4 local_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  int iStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  int *local_5f8;
  undefined4 local_5f4;
  char local_5ec;
  undefined1 auStack_5e0 [552];
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 local_390;
  int local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 uStack_36c;
  undefined1 local_368;
  undefined1 local_367;
  byte local_366;
  undefined2 local_365;
  undefined1 local_363;
  int local_360;
  int local_35c;
  uint uStack_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined2 local_30c;
  undefined2 local_30a;
  int local_308;
  int local_304;
  uint local_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8;
  undefined1 local_2b7;
  byte local_2b6;
  undefined2 local_2b5;
  undefined1 local_2b3;
  undefined2 local_2b2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  if ((*(byte *)(param_2 + 0x45) == 2) || ((*(byte *)(param_2 + 0x45) & 1) != 0)) {
    pbVar1 = (byte *)(param_2 + 0x49);
    local_30c = 0x200;
    bVar6 = *(int *)(param_2 + 8) == 1;
    local_310 = 0x2020200;
    if (bVar6) {
      param_2 = *(int *)(param_2 + 0xc);
    }
    bVar3 = *pbVar1 == 2 | *pbVar1 & 1;
    local_63c = 0x200000;
    local_35c = 0;
    local_360 = 0;
    if (bVar6) {
      local_63c = param_2;
    }
    local_314 = CONCAT31(local_314._1_3_,2);
    local_338 = 0;
    local_328 = 2;
    local_330 = 2;
    local_3b8 = 0;
    uStack_3b4 = 0;
    local_37c = 10;
    local_38c = local_63c;
    local_380 = 1;
    local_384 = 3;
    local_388 = 1;
    local_390 = 1;
    uStack_36c = local_314;
    local_368 = 0;
    local_30 = 0x2020202;
    local_363 = 0;
    local_365 = 1;
    local_367 = 0;
    local_7c = 0;
    local_80 = 0;
    local_34 = 3;
    local_2c = 0x202;
    local_58 = 0;
    local_48 = 2;
    local_50 = 2;
    local_366 = bVar3;
    FUN_01377354(&local_308);
    FUN_016dd1aa(local_638,&local_80,0x58);
    FUN_016dd1aa(auStack_5e0,&local_308,0xf0);
    local_308 = local_360;
    local_304 = local_35c;
    local_300 = uStack_358;
    uStack_2fc = uStack_354;
    iStack_2f8 = iStack_350;
    local_2f4 = local_34c;
    uStack_2f0 = uStack_348;
    local_2ec = uStack_344;
    uStack_2e8 = uStack_340;
    uStack_2e4 = uStack_33c;
    local_2cc = 10;
    local_2d4 = 3;
    local_2dc = local_63c;
    local_2d0 = 1;
    local_2d8 = 1;
    local_2e0 = 1;
    local_2c8 = local_320;
    uStack_2c4 = uStack_31c;
    uStack_2c0 = uStack_318;
    uStack_2bc = local_314;
    local_2b8 = (undefined1)local_310;
    local_2b3 = 0;
    local_2b5 = 1;
    local_2b7 = 0;
    local_2b2 = local_30a;
    local_2b6 = bVar3;
    FUN_013916fc(local_638,&local_308);
    do {
      iVar4 = *param_3;
      bVar6 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar6);
    *param_3 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x13893a8);
      (*pcVar2)();
    }
    FUN_0138d6f0(&local_308,local_638);
    if (local_5ec != '\x03' && local_5ec != '\x02') {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *local_5f8;
        bVar6 = (bool)hasExclusiveAccess(local_5f8);
      } while (!bVar6);
      *local_5f8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_5f8,local_5f4);
      }
    }
    FUN_013852f8(auStack_5e0);
    iVar5 = local_304;
    iVar4 = local_308;
    if (local_308 != 2 || local_304 != 0) {
      FUN_016dd1aa(local_638,&local_300,0x280);
      goto LAB_01389328;
    }
    local_638[0] = local_300;
    local_638[1] = uStack_2fc;
    local_638[2] = iStack_2f8;
    local_638[3] = local_2f4;
    local_638[4] = uStack_2f0;
    local_624 = local_2ec;
    uStack_620 = uStack_2e8;
    uStack_61c = uStack_2e4;
    uStack_618 = local_2e0;
    iStack_614 = local_2dc;
    local_610 = local_2d8;
    uStack_60c = local_2d4;
    uStack_608 = local_2d0;
    uStack_604 = local_2cc;
    uStack_600 = local_2c8;
    uStack_5fc = uStack_2c4;
    if (local_300 < 0x2a) {
      iVar4 = local_300 - 0x22;
      if (local_300 < 0x22) {
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        iVar4 = 0x1c;
        if (local_300 == 0x22) {
          iVar4 = 4;
        }
        iVar5 = *(int *)((int)local_638 + iVar4);
      }
      else if ((iVar4 != 1) || (iVar4 = 8, iVar5 = iStack_2f8, iStack_2f8 < -0x7ffffffc))
      goto LAB_01389078;
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)local_638 + iVar4 + 4));
      }
    }
  }
LAB_01389078:
  iVar5 = 0;
  iVar4 = 2;
LAB_01389328:
  *param_1 = iVar4;
  param_1[1] = iVar5;
  FUN_016dd1aa(param_1 + 2,local_638,0x280);
  return;
}

