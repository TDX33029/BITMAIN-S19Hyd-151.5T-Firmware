// FUN_00a74ba0 @ 00a74ba0 size=1776 calls_out=23 calls_in=0
// strings: enablepool | Bosminer.client_try_enable | internal error: entered unreachable code

void FUN_00a74ba0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined4 *local_948;
  undefined4 *local_944;
  undefined4 *local_940;
  undefined1 *local_938;
  undefined1 *puStack_934;
  undefined1 *puStack_930;
  undefined1 *local_92c;
  undefined1 *local_928;
  undefined1 *local_924;
  undefined4 local_920 [4];
  undefined1 *local_910;
  undefined1 *puStack_90c;
  undefined1 *puStack_908;
  undefined1 *local_900;
  undefined1 *puStack_8fc;
  undefined1 *puStack_8f8;
  undefined1 *local_8f0;
  undefined1 *local_8ec;
  undefined1 *local_8e8;
  undefined1 *local_8e4;
  undefined1 *local_8e0;
  undefined1 *puStack_8dc;
  undefined1 *puStack_8d8;
  undefined1 *puStack_8d4;
  undefined1 *puStack_8d0;
  undefined1 *puStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined1 *local_8b0;
  undefined1 *local_8ac;
  undefined1 *local_8a8;
  undefined1 *local_8a4;
  undefined1 *local_8a0;
  undefined1 *local_89c;
  undefined1 auStack_898 [712];
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined1 *local_5c8;
  undefined1 *local_5c4;
  undefined1 *local_5c0;
  undefined1 *local_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined1 *local_2f0;
  undefined1 *puStack_2ec;
  undefined1 *puStack_2e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 8)) {
  case 0:
    uVar8 = *param_2;
    uVar9 = param_2[1];
    FUN_00a5cd54(&local_5d0,uVar8,"enablepool",10);
    if (local_5d0 == (undefined1 *)0x2) {
      FUN_00a7547c(&local_5d0,uVar9);
      if (local_5d0 != (undefined1 *)0x2) {
        *(undefined1 *)(param_2 + 0x3b) = 0;
        param_2[9] = uVar8;
        param_2[2] = local_5d0;
        param_2[3] = local_5cc;
        param_2[4] = local_5c8;
        goto switchD_00a74bc4_caseD_3;
      }
      local_920[0] = 0;
      FUN_014a5cd0(&local_938,local_920);
    }
    else {
      puVar6 = (undefined4 *)((uint)&local_938 | 4);
      *puVar6 = local_5cc;
      puVar6[1] = local_5c8;
      puVar6[2] = local_5c4;
      puVar6[3] = local_5c0;
      puVar6[4] = local_5bc;
      local_938 = local_5d0;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f66c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f66c);
  case 3:
switchD_00a74bc4_caseD_3:
    FUN_00a6fd0c(&local_5d0,param_2 + 9,param_3);
    puVar7 = local_5bc;
    puVar2 = local_5c0;
    puVar10 = local_5d0;
    if (local_5d0 == (undefined1 *)0x3) {
      uVar5 = 3;
      *param_1 = 3;
      goto LAB_00a75258;
    }
    local_910 = local_5cc;
    puStack_90c = local_5c8;
    puStack_908 = local_5c4;
    cVar1 = *(char *)(param_2 + 0x3b);
    bVar12 = cVar1 == '\x03';
    if (bVar12) {
      cVar1 = *(char *)(param_2 + 0x3a);
    }
    if (bVar12 && cVar1 == '\x03') {
      FUN_00b99500(param_2 + 0xb);
    }
    if (puVar10 == (undefined1 *)0x2) {
      param_2[5] = local_910;
      param_2[6] = puStack_90c;
      param_2[7] = puStack_908;
      *(undefined2 *)(param_2 + 0x173) = 0;
      param_2[0x172] = param_2 + 5;
      goto switchD_00a74bc4_caseD_4;
    }
    puVar6 = (undefined4 *)((uint)&local_938 | 4);
    *puVar6 = local_910;
    puVar6[1] = puStack_90c;
    puVar6[2] = puStack_908;
    local_924 = puVar7;
    local_928 = puVar2;
    local_938 = puVar10;
    break;
  case 4:
switchD_00a74bc4_caseD_4:
    FUN_00a70fd4(&local_5d0,param_2 + 10,param_3);
    puVar7 = local_5bc;
    puVar2 = local_5c0;
    puVar10 = local_5d0;
    if (local_5d0 == (undefined1 *)0x3) {
      *param_1 = 3;
      uVar5 = 4;
      goto LAB_00a75258;
    }
    local_900 = local_5cc;
    puStack_8fc = local_5c8;
    puStack_8f8 = local_5c4;
    if (*(char *)(param_2 + 0x173) == '\x03') {
      FUN_00a7389c(param_2 + 10);
    }
    if (puVar10 == (undefined1 *)0x2) {
      param_2[9] = local_900;
      param_2[10] = puStack_8fc;
      param_2[0xb] = puStack_8f8;
      FUN_00a75860(&local_5d0,param_2[10],param_2[0xb],param_2[2],param_2[3],param_2[4]);
      puVar10 = local_5c8;
      if (local_5d0 != (undefined1 *)0x1) {
        param_2[0xc] = local_5c4;
        param_2[0xd] = local_5c0;
        param_2[0xe] = local_5bc;
        if ((*(int *)(local_5cc + 0x1a4) == -0x80000000) ||
           (FUN_006666fc(&local_5d0,*(undefined4 *)(local_5cc + 0x1a8),
                         *(undefined4 *)(local_5cc + 0x1ac)), local_5d0 == (undefined1 *)0x80000000)
           ) {
          param_2[0xf] = 0;
          param_2[0x10] = 1;
          param_2[0x11] = 0;
        }
        else {
          param_2[0xf] = local_5d0;
          param_2[0x10] = local_5cc;
          param_2[0x11] = local_5c8;
        }
        *(undefined1 *)(param_2 + 0x17b) = 0;
        local_948 = param_2 + 5;
        uVar8 = param_2[4];
        param_2[0x178] = local_948;
        param_2[0x179] = puVar10;
        param_2[0x17a] = uVar8;
        goto LAB_00a74f14;
      }
      local_8e8 = local_5c4;
      local_8ec = local_5c8;
      local_8f0 = local_5cc;
      local_8e4 = local_5c0;
      FUN_014a5cd0(&local_938,&local_8f0);
      goto LAB_00a75238;
    }
    puVar6 = (undefined4 *)((uint)&local_938 | 4);
    *puVar6 = local_900;
    puVar6[1] = puStack_8fc;
    puVar6[2] = puStack_8f8;
    local_924 = puVar7;
    local_928 = puVar2;
    local_938 = puVar10;
    goto LAB_00a75240;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x17b)) {
    case 0:
      puVar10 = (undefined1 *)param_2[0x179];
      uVar8 = param_2[0x17a];
      local_948 = (undefined4 *)param_2[0x178];
LAB_00a74f14:
      FUN_019cfcf0(&local_5d0);
      local_8e0 = local_5d0;
      puStack_8dc = local_5cc;
      puStack_8d8 = local_5c8;
      puStack_8d4 = local_5c4;
      puStack_8d0 = local_5c0;
      puStack_8cc = local_5bc;
      local_8c8 = local_5b8;
      uStack_8c4 = uStack_5b4;
      uStack_8c0 = uStack_5b0;
      uStack_8bc = uStack_5ac;
      uStack_8b8 = uStack_5a8;
      uStack_8b4 = uStack_5a4;
      param_2[0x28] = "Bosminer.client_try_enable";
      param_2[0x1a] = 0x80000012;
      param_2[0x29] = 0x1a;
      param_2[0x1b] = puVar10;
      param_2[0x1c] = uVar8;
      param_2[0x2a] = local_5d0;
      param_2[0x2b] = local_5cc;
      param_2[0x2c] = local_5c8;
      param_2[0x2d] = local_5c4;
      param_2[0x2e] = local_5c0;
      param_2[0x2f] = local_5bc;
      param_2[0x30] = local_5b8;
      param_2[0x31] = uStack_5b4;
      param_2[0x32] = uStack_5b0;
      param_2[0x33] = uStack_5ac;
      param_2[0x34] = uStack_5a8;
      param_2[0x35] = uStack_5a4;
      *(undefined1 *)(param_2 + 0x176) = 0;
      *(undefined1 *)((int)param_2 + 0xdf) = 0;
      param_2[0x36] = local_948;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0f040);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0f040);
    case 3:
    }
    local_940 = param_2 + 0x17b;
    local_944 = param_2 + 0x12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x176)) {
    case 0:
      FUN_01bed4e2(param_2 + 0xc4,local_944,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00a55b84(&local_5d0,param_2 + 0xc4,param_3);
    puVar4 = local_5bc;
    puVar3 = local_5c0;
    puVar11 = local_5c4;
    puVar7 = local_5c8;
    puVar2 = local_5cc;
    puVar10 = local_5d0;
    if (local_5d0 == (undefined1 *)0x1e && local_5cc == (undefined1 *)0x0) {
      *(undefined1 *)(param_2 + 0x176) = 3;
LAB_00a74ff4:
      *(undefined1 *)local_940 = 3;
LAB_00a75000:
      *param_1 = 3;
      uVar5 = 5;
      goto LAB_00a75258;
    }
    FUN_01bed4e2(&local_2f0,&local_5b8,0x2c8);
    FUN_00df9ef8(param_2 + 0xc4);
    if (puVar10 == (undefined1 *)0x1d && puVar2 == (undefined1 *)0x0) {
      *(undefined1 *)(param_2 + 0x176) = 1;
      if (puVar7 == &DAT_80000004) {
        puVar7 = puVar11;
        puVar11 = puVar3;
        goto LAB_00a7512c;
      }
      if (puVar7 == &DAT_80000005) goto LAB_00a74ff4;
      *(undefined1 *)local_940 = 1;
      if (puVar7 == (undefined1 *)0x80000006) goto LAB_00a75000;
      local_8a4 = puVar4;
      local_8a8 = puVar3;
      local_8ac = puVar11;
      local_8b0 = puVar7;
      FUN_00a98078(&local_5d0,1);
      FUN_00a55a24(&local_8b0);
      puVar7 = local_5cc;
      puVar11 = local_5c8;
      if (local_5d0 == (undefined1 *)0x2) goto LAB_00a75134;
      local_92c = local_5c4;
      local_928 = local_5c0;
      local_938 = local_5d0;
      puStack_934 = local_5cc;
      puStack_930 = local_5c8;
      local_924 = local_5bc;
LAB_00a75220:
      FUN_019bb7e0(param_2[0xf],param_2[0x10]);
    }
    else {
      FUN_01bed4e2(auStack_898,&local_2f0,0x2c8);
      local_8a0 = puVar3;
      local_89c = puVar4;
      local_8ac = puVar2;
      local_8b0 = puVar10;
      local_8a4 = puVar11;
      local_8a8 = puVar7;
      if (puVar10 != (undefined1 *)0x16 || puVar2 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      *(undefined1 *)(param_2 + 0x176) = 1;
LAB_00a7512c:
      *(undefined1 *)local_940 = 1;
LAB_00a75134:
      if (puVar7 != &DAT_80000005) {
        if (puVar7 == &DAT_80000004) {
          puVar10 = (undefined1 *)param_2[4];
          FUN_006666fc(&local_2f0,param_2[0x10],param_2[0x11]);
          local_8a8 = local_2f0;
          local_8a4 = puStack_2ec;
          local_8a0 = puStack_2e8;
          local_8b0 = (undefined1 *)0x0;
          local_8ac = puVar10;
          FUN_014a5b04(&local_5d0);
          local_938 = local_5d0;
          puStack_934 = local_5cc;
          puStack_930 = local_5c8;
          local_92c = local_5c4;
          local_928 = local_5c0;
          local_924 = local_5bc;
        }
        else {
          local_8ac = (undefined1 *)param_2[4];
          local_8a8 = (undefined1 *)(param_2[0xe] + -1);
          local_8b0 = (undefined1 *)0x5;
          FUN_014a5cd0(&local_5d0,&local_8b0);
          local_938 = local_5d0;
          puStack_934 = local_5cc;
          puStack_930 = local_5c8;
          local_92c = local_5c4;
          local_928 = local_5c0;
          local_924 = local_5bc;
          if (-1 < (int)puVar7) {
            FUN_019bb7e0(puVar7,puVar11);
          }
        }
        goto LAB_00a75220;
      }
      local_928 = (undefined1 *)param_2[4];
      uVar8 = param_2[0x10];
      uVar9 = param_2[0x11];
      puVar6 = (undefined4 *)((uint)&local_938 | 4);
      *puVar6 = param_2[0xf];
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      local_938 = (undefined1 *)0x2;
    }
    FUN_0132b958(param_2[0xc],param_2[0xd],4,8);
LAB_00a75238:
    FUN_00a573e8(param_2 + 9);
LAB_00a75240:
    FUN_0084ec48(param_2 + 5);
  }
  uVar5 = 1;
  *param_1 = local_938;
  param_1[1] = puStack_934;
  param_1[2] = puStack_930;
  param_1[3] = local_92c;
  param_1[4] = local_928;
  param_1[5] = local_924;
LAB_00a75258:
  *(undefined1 *)(param_2 + 8) = uVar5;
  return;
}

