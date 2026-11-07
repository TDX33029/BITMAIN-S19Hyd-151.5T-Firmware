// FUN_01247fcc @ 01247fcc size=284 calls_out=2 calls_in=1
// strings: 

void FUN_01247fcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_438 [13];
  undefined4 local_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 local_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8;
  undefined1 auStack_3bc [12];
  int local_3b0 [13];
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 local_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  FUN_01a42a34(local_3b0);
  puVar1 = (undefined4 *)((uint)local_3b0 | 4);
  local_120 = *puVar1;
  uStack_11c = puVar1[1];
  uStack_118 = puVar1[2];
  uStack_114 = puVar1[3];
  uStack_110 = puVar1[4];
  uStack_10c = puVar1[5];
  local_108 = puVar1[6];
  uStack_104 = puVar1[7];
  uStack_100 = puVar1[8];
  uStack_fc = puVar1[9];
  uStack_f8 = puVar1[10];
  uStack_f4 = puVar1[0xb];
  if (local_3b0[0] == 4) {
    param_1[2] = local_120;
    param_1[3] = uStack_11c;
    param_1[4] = uStack_118;
    param_1[5] = uStack_114;
    param_1[6] = uStack_110;
    param_1[7] = uStack_10c;
    param_1[8] = local_108;
    param_1[9] = uStack_104;
    param_1[10] = uStack_100;
    param_1[0xb] = uStack_fc;
    param_1[0xc] = uStack_f8;
    param_1[0xd] = uStack_f4;
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined4 *)((uint)local_438 | 4);
  local_404 = local_37c;
  uStack_400 = uStack_378;
  uStack_3fc = uStack_374;
  uStack_3f8 = uStack_370;
  uStack_3f4 = uStack_36c;
  local_3f0 = local_368;
  uStack_3ec = uStack_364;
  uStack_3e8 = uStack_360;
  uStack_3e4 = uStack_35c;
  uStack_3e0 = uStack_358;
  local_3dc = local_354;
  uStack_3d8 = uStack_350;
  uStack_3d4 = uStack_34c;
  uStack_3d0 = uStack_348;
  uStack_3cc = uStack_344;
  *puVar1 = local_120;
  puVar1[1] = uStack_11c;
  puVar1[2] = uStack_118;
  puVar1[3] = uStack_114;
  puVar1[4] = uStack_110;
  puVar1[5] = uStack_10c;
  puVar1[6] = local_108;
  puVar1[7] = uStack_104;
  puVar1[8] = uStack_100;
  puVar1[9] = uStack_fc;
  puVar1[10] = uStack_f8;
  puVar1[0xb] = uStack_f4;
  local_3c8 = 0;
  local_438[0] = local_3b0[0];
  FUN_01a56a10(auStack_3bc,local_438);
                    /* WARNING: Could not recover jumptable at 0x012480d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012480dc + *(int *)(&DAT_012480dc + local_3b0[0] * 4)))();
  return;
}

