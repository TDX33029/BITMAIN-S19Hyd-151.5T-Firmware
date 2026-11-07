// FUN_01246950 @ 01246950 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_01246950(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4e8 [13];
  undefined4 local_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478;
  undefined1 auStack_46c [12];
  int local_460 [13];
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 local_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  
  FUN_01a42a34(local_460);
  puVar1 = (undefined4 *)((uint)local_460 | 4);
  local_178 = *puVar1;
  uStack_174 = puVar1[1];
  uStack_170 = puVar1[2];
  uStack_16c = puVar1[3];
  uStack_168 = puVar1[4];
  uStack_164 = puVar1[5];
  local_160 = puVar1[6];
  uStack_15c = puVar1[7];
  uStack_158 = puVar1[8];
  uStack_154 = puVar1[9];
  uStack_150 = puVar1[10];
  uStack_14c = puVar1[0xb];
  if (local_460[0] == 4) {
    param_1[2] = local_178;
    param_1[3] = uStack_174;
    param_1[4] = uStack_170;
    param_1[5] = uStack_16c;
    param_1[6] = uStack_168;
    param_1[7] = uStack_164;
    param_1[8] = local_160;
    param_1[9] = uStack_15c;
    param_1[10] = uStack_158;
    param_1[0xb] = uStack_154;
    param_1[0xc] = uStack_150;
    param_1[0xd] = uStack_14c;
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined4 *)((uint)local_4e8 | 4);
  local_4b4 = local_42c;
  uStack_4b0 = uStack_428;
  uStack_4ac = uStack_424;
  uStack_4a8 = uStack_420;
  uStack_4a4 = uStack_41c;
  local_4a0 = local_418;
  uStack_49c = uStack_414;
  uStack_498 = uStack_410;
  uStack_494 = uStack_40c;
  uStack_490 = uStack_408;
  local_48c = local_404;
  uStack_488 = uStack_400;
  uStack_484 = uStack_3fc;
  uStack_480 = uStack_3f8;
  uStack_47c = uStack_3f4;
  *puVar1 = local_178;
  puVar1[1] = uStack_174;
  puVar1[2] = uStack_170;
  puVar1[3] = uStack_16c;
  puVar1[4] = uStack_168;
  puVar1[5] = uStack_164;
  puVar1[6] = local_160;
  puVar1[7] = uStack_15c;
  puVar1[8] = uStack_158;
  puVar1[9] = uStack_154;
  puVar1[10] = uStack_150;
  puVar1[0xb] = uStack_14c;
  local_478 = 0;
  local_4e8[0] = local_460[0];
  FUN_01a56a10(auStack_46c,local_4e8);
                    /* WARNING: Could not recover jumptable at 0x01246a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01246a60 + *(int *)(&DAT_01246a60 + local_460[0] * 4)))();
  return;
}

