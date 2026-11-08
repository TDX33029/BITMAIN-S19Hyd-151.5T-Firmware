// FUN_01245e0c @ 01245e0c size=284 calls_out=2 calls_in=2
// strings: 

void FUN_01245e0c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4d8 [13];
  undefined4 local_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 local_468;
  undefined1 auStack_45c [12];
  int local_450 [13];
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  
  FUN_01a42a34(local_450);
  puVar1 = (undefined4 *)((uint)local_450 | 4);
  local_170 = *puVar1;
  uStack_16c = puVar1[1];
  uStack_168 = puVar1[2];
  uStack_164 = puVar1[3];
  uStack_160 = puVar1[4];
  uStack_15c = puVar1[5];
  local_158 = puVar1[6];
  uStack_154 = puVar1[7];
  uStack_150 = puVar1[8];
  uStack_14c = puVar1[9];
  uStack_148 = puVar1[10];
  uStack_144 = puVar1[0xb];
  if (local_450[0] == 4) {
    param_1[2] = local_170;
    param_1[3] = uStack_16c;
    param_1[4] = uStack_168;
    param_1[5] = uStack_164;
    param_1[6] = uStack_160;
    param_1[7] = uStack_15c;
    param_1[8] = local_158;
    param_1[9] = uStack_154;
    param_1[10] = uStack_150;
    param_1[0xb] = uStack_14c;
    param_1[0xc] = uStack_148;
    param_1[0xd] = uStack_144;
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined4 *)((uint)local_4d8 | 4);
  local_4a4 = local_41c;
  uStack_4a0 = uStack_418;
  uStack_49c = uStack_414;
  uStack_498 = uStack_410;
  uStack_494 = uStack_40c;
  local_490 = local_408;
  uStack_48c = uStack_404;
  uStack_488 = uStack_400;
  uStack_484 = uStack_3fc;
  uStack_480 = uStack_3f8;
  local_47c = local_3f4;
  uStack_478 = uStack_3f0;
  uStack_474 = uStack_3ec;
  uStack_470 = uStack_3e8;
  uStack_46c = uStack_3e4;
  *puVar1 = local_170;
  puVar1[1] = uStack_16c;
  puVar1[2] = uStack_168;
  puVar1[3] = uStack_164;
  puVar1[4] = uStack_160;
  puVar1[5] = uStack_15c;
  puVar1[6] = local_158;
  puVar1[7] = uStack_154;
  puVar1[8] = uStack_150;
  puVar1[9] = uStack_14c;
  puVar1[10] = uStack_148;
  puVar1[0xb] = uStack_144;
  local_468 = 0;
  local_4d8[0] = local_450[0];
  FUN_01a56a10(auStack_45c,local_4d8);
                    /* WARNING: Could not recover jumptable at 0x01245f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01245f1c + *(int *)(&DAT_01245f1c + local_450[0] * 4)))();
  return;
}

