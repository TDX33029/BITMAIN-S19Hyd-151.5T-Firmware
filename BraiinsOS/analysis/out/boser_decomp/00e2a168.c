// FUN_00e2a168 @ 00e2a168 size=1052 calls_out=13 calls_in=2
// strings: Bosminer.get_root_hub | BUG: Root hub with HB info should be present | internal error: entered unreachable code

void FUN_00e2a168(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined1 *local_1188;
  undefined4 local_1180;
  undefined4 uStack_117c;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined1 auStack_1170 [712];
  undefined4 ***local_ea8;
  undefined *local_ea4;
  undefined1 auStack_ea0 [104];
  undefined1 auStack_e38 [624];
  undefined4 ***local_bc8;
  undefined *puStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 local_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined1 auStack_b98 [88];
  undefined1 auStack_b40 [624];
  undefined4 ***local_8d0;
  undefined *local_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 auStack_8b8 [712];
  undefined4 ***local_5f0;
  undefined *local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 ***local_310;
  undefined *puStack_30c;
  undefined4 uStack_308;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5a4)) {
  case 0:
    uVar4 = *(undefined4 *)(param_2 + 0x5a0);
    cVar5 = '\x02';
    *(undefined4 *)(param_2 + 0x598) = uVar4;
    *(undefined2 *)(param_2 + 0x59d) = 2;
LAB_00e2a1ec:
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5f0);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    if (cVar5 == '\x03') {
      cVar5 = '\x02';
    }
    local_bc8 = local_5f0;
    puStack_bc4 = local_5ec;
    uStack_bc0 = local_5e8;
    uStack_bbc = local_5e4;
    uStack_bb8 = uStack_5e0;
    uStack_bb4 = uStack_5dc;
    local_bb0 = local_5d8;
    uStack_bac = uStack_5d4;
    uStack_ba8 = uStack_5d0;
    uStack_ba4 = uStack_5cc;
    uStack_ba0 = uStack_5c8;
    uStack_b9c = uStack_5c4;
    *(char *)(param_2 + 0x24) = cVar5;
    *(char **)(param_2 + 0x58) = "Bosminer.get_root_hub";
    *(undefined4 *)(param_2 + 0x5c) = 0x15;
    *(undefined1 **)(param_2 + 0x20) = &DAT_80000004;
    *(undefined4 ****)(param_2 + 0x60) = local_5f0;
    *(undefined **)(param_2 + 100) = local_5ec;
    *(undefined4 *)(param_2 + 0x68) = local_5e8;
    *(undefined4 *)(param_2 + 0x6c) = local_5e4;
    *(undefined4 *)(param_2 + 0x70) = uStack_5e0;
    *(undefined4 *)(param_2 + 0x74) = uStack_5dc;
    *(undefined4 *)(param_2 + 0x78) = local_5d8;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5d4;
    *(undefined4 *)(param_2 + 0x80) = uStack_5d0;
    *(undefined4 *)(param_2 + 0x84) = uStack_5cc;
    *(undefined4 *)(param_2 + 0x88) = uStack_5c8;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5c4;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar4;
switchD_00e2a348_caseD_0:
    FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1819c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1819c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x59e)) {
    case 0:
      cVar5 = *(char *)(param_2 + 0x59d);
      uVar4 = *(undefined4 *)(param_2 + 0x598);
      goto LAB_00e2a1ec;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d6c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 0:
      goto switchD_00e2a348_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  local_1188 = (undefined1 *)(param_2 + 0x59e);
  FUN_00df9fa8(&local_5f0,param_2 + 0x2c8,param_3);
  puVar6 = local_5ec;
  pppuVar3 = local_5f0;
  if (local_5f0 == (undefined4 ***)&DAT_0000001e && local_5ec == (undefined *)0x0) {
    uVar1 = 3;
    *(undefined1 *)(param_2 + 0x590) = 3;
    *local_1188 = 3;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e2a52c;
  }
  local_48 = local_5e8;
  uStack_44 = local_5e4;
  uStack_40 = uStack_5e0;
  uStack_3c = uStack_5dc;
  FUN_01bed4e2(&local_310,&local_5d8,0x2c8);
  FUN_00df9ef8(param_2 + 0x2c8);
  if (pppuVar3 == (undefined4 ***)&DAT_0000001d && puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    pppuVar3 = (undefined4 ***)&SUB_00000004;
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
  }
  else {
    FUN_01bed4e2(auStack_8b8,&local_310,0x2c8);
    local_8c8 = local_48;
    uStack_8c4 = uStack_44;
    uStack_8c0 = uStack_40;
    uStack_8bc = uStack_3c;
    local_8cc = puVar6;
    local_8d0 = pppuVar3;
    if (puVar6 != (undefined *)0x0 || puVar6 < (undefined *)(uint)(&DAT_00000003 < pppuVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
    }
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    FUN_01bed4e2(auStack_b98,&local_310,0x2c8);
  }
  *(undefined1 *)(param_2 + 0x590) = 1;
  *(undefined1 *)(param_2 + 0x59e) = 1;
  *(undefined1 *)(param_2 + 0x59c) = 0;
  local_1180 = local_38;
  uStack_117c = uStack_34;
  uStack_1178 = uStack_30;
  uStack_1174 = uStack_2c;
  FUN_01bed4e2(auStack_1170,auStack_b98,0x2c8);
  FUN_00e7a7b0(param_2);
  if (pppuVar3 == (undefined4 ***)&SUB_00000004 && puVar6 == (undefined *)0x0) {
    local_5f0 = &local_8d0;
    local_8c8 = 0;
    local_8d0 = (undefined4 ***)0x0;
    local_5e4 = 0;
    local_8cc = (undefined *)0x1;
    local_5e8 = 0x60000020;
    local_5ec = &DAT_01c17420;
    iVar2 = FUN_00aeeb78(&local_38,&local_5f0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_310,&DAT_01c17458,&DAT_01d30334);
    }
    local_310 = local_8d0;
    puStack_30c = local_8cc;
    uStack_308 = local_8c8;
    FUN_01a70fd4(&local_5f0,0xd,&local_310);
    FUN_00dfb5e8(&local_38);
    FUN_01bed4e2(auStack_ea0,&local_5f0,0x68);
LAB_00e2a4d8:
    local_ea4 = (undefined *)0x0;
    local_ea8 = (undefined4 ***)&DAT_00000003;
  }
  else {
    if (pppuVar3 == (undefined4 ***)&DAT_00000003 && puVar6 == (undefined *)0x0) {
      FUN_01a71aac(auStack_ea0,0xd,"BUG: Root hub with HB info should be present",0x2c);
      goto LAB_00e2a4d8;
    }
    local_ea8 = pppuVar3;
    local_ea4 = puVar6;
    FUN_01bed4e2(auStack_ea0,&local_1180,0x68);
    FUN_01bed4e2(auStack_e38,auStack_b40,0x270);
  }
  FUN_01bed4e2(param_1,&local_ea8,0x2e0);
  uVar1 = 1;
LAB_00e2a52c:
  *(undefined1 *)(param_2 + 0x5a4) = uVar1;
  return;
}

