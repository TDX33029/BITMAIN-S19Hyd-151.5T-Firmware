// FUN_0091f0bc @ 0091f0bc size=1724 calls_out=11 calls_in=0
// strings: generator | timestamp/var/lock/bosminer.lock | generator | timestamp/var/lock/bosminer.lock | no more values in next_value_seed; internal error in ValueDeserializer

/* WARNING: Removing unreachable block (ram,0x0091f934) */
/* WARNING: Removing unreachable block (ram,0x0091fae0) */

void FUN_0091f0bc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_398;
  int local_394;
  int local_390;
  int local_37c;
  int local_378;
  undefined4 local_368;
  int local_33c;
  int local_338;
  undefined4 local_31c;
  undefined4 local_318;
  undefined1 auStack_310 [72];
  int local_2c8 [2];
  undefined4 local_2c0;
  undefined4 local_2bc;
  int *local_258;
  int *local_254;
  undefined4 local_250;
  int *local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 auStack_238 [12];
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_1f0 [28];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 auStack_174 [4];
  undefined4 local_170;
  int local_16c;
  undefined1 auStack_128 [72];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  piVar5 = *(int **)(param_2 + 0x14);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar3 = iVar1 * 4 + 4, iVar1 + iVar3 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar3);
  }
  piVar2 = param_1 + 4;
  local_248 = *(undefined4 *)(param_2 + 0x30);
  uStack_244 = *(undefined4 *)(param_2 + 0x34);
  uStack_240 = *(undefined4 *)(param_2 + 0x38);
  local_24c = piVar5 + iVar4 * 0x30;
  local_2c8[0] = 4;
  local_258 = piVar5;
  local_250 = uVar7;
  if (iVar4 == 0) {
    iVar3 = -0x7fffffff;
    iVar4 = -0x7fffffff;
    iVar1 = -0x7fffffff;
    local_254 = piVar5;
LAB_0091f8e0:
    if (iVar1 == -0x7fffffff) {
      iVar1 = -0x80000000;
    }
    *piVar2 = local_338;
    param_1[5] = local_398;
    if (iVar4 == -0x7fffffff) {
      iVar4 = -0x80000000;
    }
    if (iVar3 == -0x7fffffff) {
      iVar3 = -0x80000000;
    }
    param_1[7] = local_378;
    param_1[8] = local_394;
    param_1[10] = local_37c;
    param_1[0xb] = local_390;
    param_1[1] = 0;
    param_1[6] = iVar4;
    param_1[9] = iVar3;
    *param_1 = 2;
    param_1[2] = local_33c;
    param_1[3] = iVar1;
    FUN_009248d4(&local_258);
LAB_0091f960:
    if (local_2c8[0] != 4) {
      FUN_00919614(auStack_310);
      FUN_008f91a8(local_2c8);
    }
    return;
  }
  iVar3 = -0x7fffffff;
  iVar4 = -0x7fffffff;
  iVar1 = -0x7fffffff;
LAB_0091f1e4:
  local_254 = piVar5 + 0x30;
  iVar6 = *piVar5;
  if (iVar6 == 4) goto LAB_0091f8e0;
  FUN_016dd1aa(auStack_238,piVar5 + 0x1c,0x48);
  FUN_016dd1aa((uint)local_1f0 | 4,piVar5 + 1,0x6c);
  uVar7 = 0;
  if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
    uVar7 = 1;
    local_31c = local_228;
    local_318 = local_224;
  }
  local_1f0[0] = iVar6;
  FUN_01676758(auStack_128,auStack_238);
  local_178 = local_318;
  local_17c = local_31c;
  local_180 = uVar7;
  FUN_016dd1aa(auStack_174,auStack_128,0x48);
  uVar7 = local_170;
  if (local_16c == 5) {
    iVar6 = thunk_FUN_016dd50a(local_170,&DAT_0035b835,5);
    if (iVar6 == 0) {
      uVar7 = 1;
    }
    else {
LAB_0091f320:
      uVar7 = 4;
    }
  }
  else if (local_16c == 9) {
    iVar6 = thunk_FUN_016dd50a(local_170,"generator",9);
    if (iVar6 == 0) {
      uVar7 = 2;
    }
    else {
      iVar6 = thunk_FUN_016dd50a(uVar7,"timestamp/var/lock/bosminer.lock",9);
      if (iVar6 != 0) goto LAB_0091f320;
      uVar7 = 3;
    }
  }
  else {
    if ((local_16c != 7) || (iVar6 = thunk_FUN_016dd50a(local_170,&DAT_00410ff9,7), iVar6 != 0))
    goto LAB_0091f320;
    uVar7 = 0;
  }
  FUN_00919614(auStack_174);
  FUN_016dd1aa(&local_e0,auStack_238,0x48);
  FUN_016dd1aa(auStack_98,local_1f0,0x70);
  if (local_2c8[0] != 4) {
    FUN_00919614(auStack_310);
    FUN_008f91a8(local_2c8);
  }
  FUN_016dd1aa(auStack_310,&local_e0,0xb8);
  iVar6 = local_2c8[0];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar7) {
  case 0:
    if (iVar1 != -0x7fffffff) {
      FUN_009244cc(&local_e0,&DAT_00410ff9,7);
      goto LAB_0091faf8;
    }
    FUN_0091d048(&local_e0,auStack_310);
    if (local_e0 == 2) {
      local_398 = local_d4;
      local_338 = local_d8;
      iVar1 = local_dc;
      goto LAB_0091f1d4;
    }
    *piVar2 = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
    iVar1 = -0x7fffffff;
    *param_1 = local_e0;
    param_1[1] = local_dc;
LAB_0091fa24:
    param_1[2] = local_d8;
    param_1[3] = local_d4;
    break;
  case 1:
    if (iVar4 != -0x7fffffff) {
      FUN_009244cc(&local_e0,&DAT_0035b835,5);
      goto LAB_0091faf8;
    }
    FUN_0091d048(&local_e0,auStack_310);
    if (local_e0 != 2) {
      *piVar2 = local_d0;
      param_1[5] = iStack_cc;
      param_1[6] = local_c8;
      param_1[7] = iStack_c4;
      param_1[8] = local_c0;
      param_1[9] = iStack_bc;
      param_1[10] = iStack_b8;
      param_1[0xb] = iStack_b4;
      *param_1 = local_e0;
      param_1[1] = local_dc;
      iVar4 = -0x7fffffff;
      goto LAB_0091fa24;
    }
    local_394 = local_d4;
    local_378 = local_d8;
    iVar4 = local_dc;
LAB_0091f1d4:
    piVar5 = local_254;
    if (local_254 == local_24c) goto LAB_0091f8e0;
    goto LAB_0091f1e4;
  case 2:
    if (iVar3 != -0x7fffffff) {
      FUN_009244cc(&local_e0,"generator",9);
      goto LAB_0091faf8;
    }
    FUN_0091d048(&local_e0,auStack_310);
    local_37c = local_d8;
    local_390 = local_d4;
    if (local_e0 == 2) {
      iVar3 = local_dc;
      goto LAB_0091f1d4;
    }
    *piVar2 = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = local_d8;
    param_1[3] = local_d4;
    goto LAB_0091fb30;
  case 3:
    local_2c8[0] = 4;
    if (iVar6 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                   &DAT_0187eedc);
    }
    FUN_016dd1aa(local_1f0,auStack_310,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0091f4d4 + *(int *)(&UNK_0091f4d4 + iVar6 * 4)))(local_2c0,local_368,local_2bc);
    return;
  case 4:
    FUN_0091a568(&local_e0,auStack_310);
    if (local_e0 == 2) goto LAB_0091f1d4;
LAB_0091faf8:
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = local_d8;
    param_1[3] = local_d4;
    param_1[4] = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
  }
  if ((-0x7fffffff < iVar3) && (iVar3 != 0)) {
    thunk_FUN_016d3fb4(local_37c);
  }
LAB_0091fb30:
  if ((-0x7fffffff < iVar4) && (iVar4 != 0)) {
    thunk_FUN_016d3fb4(local_378);
  }
  if ((-0x7fffffff < iVar1) && (iVar1 != 0)) {
    thunk_FUN_016d3fb4(local_338);
  }
  FUN_009248d4(&local_258);
  goto LAB_0091f960;
}

