// FUN_01247494 @ 01247494 size=284 calls_out=2 calls_in=2
// strings: 

void FUN_01247494(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4a8 [13];
  undefined4 local_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 local_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 local_438;
  undefined1 auStack_42c [12];
  int local_420 [13];
  undefined4 local_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  
  FUN_01a42a34(local_420);
  puVar1 = (undefined4 *)((uint)local_420 | 4);
  local_158 = *puVar1;
  uStack_154 = puVar1[1];
  uStack_150 = puVar1[2];
  uStack_14c = puVar1[3];
  uStack_148 = puVar1[4];
  uStack_144 = puVar1[5];
  local_140 = puVar1[6];
  uStack_13c = puVar1[7];
  uStack_138 = puVar1[8];
  uStack_134 = puVar1[9];
  uStack_130 = puVar1[10];
  uStack_12c = puVar1[0xb];
  if (local_420[0] == 4) {
    param_1[2] = local_158;
    param_1[3] = uStack_154;
    param_1[4] = uStack_150;
    param_1[5] = uStack_14c;
    param_1[6] = uStack_148;
    param_1[7] = uStack_144;
    param_1[8] = local_140;
    param_1[9] = uStack_13c;
    param_1[10] = uStack_138;
    param_1[0xb] = uStack_134;
    param_1[0xc] = uStack_130;
    param_1[0xd] = uStack_12c;
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined4 *)((uint)local_4a8 | 4);
  local_474 = local_3ec;
  uStack_470 = uStack_3e8;
  uStack_46c = uStack_3e4;
  uStack_468 = uStack_3e0;
  uStack_464 = uStack_3dc;
  local_460 = local_3d8;
  uStack_45c = uStack_3d4;
  uStack_458 = uStack_3d0;
  uStack_454 = uStack_3cc;
  uStack_450 = uStack_3c8;
  local_44c = local_3c4;
  uStack_448 = uStack_3c0;
  uStack_444 = uStack_3bc;
  uStack_440 = uStack_3b8;
  uStack_43c = uStack_3b4;
  *puVar1 = local_158;
  puVar1[1] = uStack_154;
  puVar1[2] = uStack_150;
  puVar1[3] = uStack_14c;
  puVar1[4] = uStack_148;
  puVar1[5] = uStack_144;
  puVar1[6] = local_140;
  puVar1[7] = uStack_13c;
  puVar1[8] = uStack_138;
  puVar1[9] = uStack_134;
  puVar1[10] = uStack_130;
  puVar1[0xb] = uStack_12c;
  local_438 = 0;
  local_4a8[0] = local_420[0];
  FUN_01a56a10(auStack_42c,local_4a8);
                    /* WARNING: Could not recover jumptable at 0x012475a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012475a4 + *(int *)(&DAT_012475a4 + local_420[0] * 4)))();
  return;
}

