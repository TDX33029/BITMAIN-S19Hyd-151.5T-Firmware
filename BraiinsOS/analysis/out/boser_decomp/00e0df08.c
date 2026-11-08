// FUN_00e0df08 @ 00e0df08 size=648 calls_out=7 calls_in=1
// strings: internal error: entered unreachable code

void FUN_00e0df08(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *local_8c8;
  undefined1 *puStack_8c4;
  undefined1 *puStack_8c0;
  undefined1 auStack_8a0 [712];
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
  switch(*(undefined1 *)(param_2 + 0x169)) {
  case 0:
    uVar2 = param_2[0x168];
    uVar4 = *param_2;
    uVar5 = param_2[1];
    FUN_019cfcf0(&local_5d8);
    param_2[0x18] = &DAT_0056c5c8;
    param_2[0x19] = 0x20;
    param_2[10] = 0x8000000d;
    param_2[0xb] = uVar4;
    param_2[0xc] = uVar5;
    param_2[0x1a] = local_5d8;
    param_2[0x1b] = local_5d4;
    param_2[0x1c] = local_5d0;
    param_2[0x1d] = local_5cc;
    param_2[0x1e] = puStack_5c8;
    param_2[0x1f] = puStack_5c4;
    param_2[0x20] = local_5c0;
    param_2[0x21] = uStack_5bc;
    param_2[0x22] = uStack_5b8;
    param_2[0x23] = uStack_5b4;
    param_2[0x24] = uStack_5b0;
    param_2[0x25] = uStack_5ac;
    *(undefined1 *)(param_2 + 0x166) = 0;
    *(undefined1 *)((int)param_2 + 0x9f) = 0;
    param_2[0x26] = uVar2;
switchD_00e0dfe8_caseD_0:
    FUN_01bed4e2(param_2 + 0xb4,param_2 + 2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17908);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17908);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x166)) {
    case 0:
      goto switchD_00e0dfe8_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  puVar6 = param_2 + 0x166;
  FUN_00df9fa8(&local_5d8,param_2 + 0xb4,param_3);
  if (local_5d8 == 0x1e && local_5d4 == 0) {
    *(undefined1 *)puVar6 = 3;
LAB_00e0e040:
    *param_1 = 0x80000006;
    uVar1 = 3;
  }
  else {
    local_30 = local_5cc;
    puStack_2c = puStack_5c8;
    puStack_28 = puStack_5c4;
    FUN_01bed4e2(auStack_2f8,&local_5c0,0x2c8);
    FUN_00df9ef8(param_2 + 0xb4);
    if (local_5d8 == 0x1d && local_5d4 == 0) {
      *(undefined1 *)puVar6 = 1;
      if (local_5d0 == &DAT_80000005) goto LAB_00e0e040;
      if (local_5d0 == &DAT_80000004) {
        local_5d0 = &DAT_80000005;
      }
      local_8c8 = local_30;
      puStack_8c4 = puStack_2c;
      puStack_8c0 = puStack_28;
      puVar3 = local_5d0;
    }
    else {
      FUN_01bed4e2(auStack_8a0,auStack_2f8,0x2c8);
      if (local_5d8 != 0x11 || local_5d4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      puVar3 = &DAT_80000005;
      *(undefined1 *)puVar6 = 1;
      local_8c8 = local_5d0;
      puStack_8c4 = local_30;
      puStack_8c0 = puStack_2c;
    }
    *param_1 = puVar3;
    uVar1 = 1;
    param_1[1] = local_8c8;
    param_1[2] = puStack_8c4;
    param_1[3] = puStack_8c0;
  }
  *(undefined1 *)(param_2 + 0x169) = uVar1;
  return;
}

