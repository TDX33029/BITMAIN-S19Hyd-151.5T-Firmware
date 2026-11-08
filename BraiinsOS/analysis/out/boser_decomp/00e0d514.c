// FUN_00e0d514 @ 00e0d514 size=724 calls_out=7 calls_in=3
// strings: Bosminer.try_set_tuner_mode | internal error: entered unreachable code

void FUN_00e0d514(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *local_8c8;
  undefined1 *puStack_8c4;
  undefined1 *puStack_8c0;
  int local_8b8;
  int local_8b4;
  undefined1 *local_8b0;
  undefined1 *local_8ac;
  undefined1 *puStack_8a8;
  undefined1 *puStack_8a4;
  undefined4 auStack_8a0 [178];
  int local_5d8;
  int local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined1 *puStack_5c8;
  undefined1 *puStack_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 auStack_2f8 [712];
  undefined1 *local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x16d)) {
  case 0:
    uVar2 = param_2[0x16c];
    uVar3 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar10 = param_2[5];
    FUN_019cfcf0(&local_5d8);
    puVar4 = (undefined4 *)((uint)&local_8b8 | 4);
    *puVar4 = uVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = uVar8;
    puVar4[5] = uVar10;
    param_2[0xe] = &DAT_80000009;
    param_2[0xf] = local_8b8;
    param_2[0x10] = local_8b4;
    param_2[0x11] = local_8b0;
    param_2[0x12] = local_8ac;
    param_2[0x13] = puStack_8a8;
    param_2[0x14] = puStack_8a4;
    param_2[0x15] = auStack_8a0[0];
    param_2[0x1c] = "Bosminer.try_set_tuner_mode";
    param_2[0x1d] = 0x1b;
    param_2[0x1e] = local_5d8;
    param_2[0x1f] = local_5d4;
    param_2[0x20] = local_5d0;
    param_2[0x21] = local_5cc;
    param_2[0x22] = puStack_5c8;
    param_2[0x23] = puStack_5c4;
    param_2[0x24] = local_5c0;
    param_2[0x25] = uStack_5bc;
    param_2[0x26] = uStack_5b8;
    param_2[0x27] = uStack_5b4;
    param_2[0x28] = uStack_5b0;
    param_2[0x29] = uStack_5ac;
    *(undefined1 *)(param_2 + 0x16a) = 0;
    *(undefined1 *)((int)param_2 + 0xaf) = 0;
    param_2[0x2a] = uVar2;
switchD_00e0d63c_caseD_0:
    FUN_01bed4e2(param_2 + 0xb8,param_2 + 6,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c178e8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c178e8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16a)) {
    case 0:
      goto switchD_00e0d63c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  puVar4 = param_2 + 0x16a;
  FUN_00df9fa8(&local_5d8,param_2 + 0xb8,param_3);
  if (local_5d8 == 0x1e && local_5d4 == 0) {
    *(undefined1 *)puVar4 = 3;
LAB_00e0d694:
    *param_1 = 0x80000006;
    uVar1 = 3;
  }
  else {
    local_30 = local_5cc;
    puStack_2c = puStack_5c8;
    puStack_28 = puStack_5c4;
    FUN_01bed4e2(auStack_2f8,&local_5c0,0x2c8);
    FUN_00df9ef8(param_2 + 0xb8);
    if (local_5d8 == 0x1d && local_5d4 == 0) {
      *(undefined1 *)puVar4 = 1;
      if (local_5d0 == &DAT_80000005) goto LAB_00e0d694;
      if (local_5d0 == &DAT_80000004) {
        local_5d0 = &DAT_80000005;
      }
      local_8c8 = local_30;
      puStack_8c4 = puStack_2c;
      puStack_8c0 = puStack_28;
      puVar9 = local_5d0;
    }
    else {
      FUN_01bed4e2(auStack_8a0,auStack_2f8,0x2c8);
      local_8ac = local_30;
      puStack_8a8 = puStack_2c;
      puStack_8a4 = puStack_28;
      local_8b0 = local_5d0;
      local_8b4 = local_5d4;
      local_8b8 = local_5d8;
      if (local_5d8 != 0xd || local_5d4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      puVar9 = &DAT_80000005;
      *(undefined1 *)puVar4 = 1;
      local_8c8 = local_5d0;
      puStack_8c4 = local_30;
      puStack_8c0 = puStack_2c;
    }
    *param_1 = puVar9;
    uVar1 = 1;
    param_1[1] = local_8c8;
    param_1[2] = puStack_8c4;
    param_1[3] = puStack_8c0;
  }
  *(undefined1 *)(param_2 + 0x16d) = uVar1;
  return;
}

