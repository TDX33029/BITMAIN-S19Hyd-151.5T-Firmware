// FUN_006b49a8 @ 006b49a8 size=1648 calls_out=15 calls_in=0
// strings: received truncated response

void FUN_006b49a8(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  byte bVar8;
  bool bVar9;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 local_520;
  undefined1 auStack_518 [96];
  undefined1 auStack_4b8 [128];
  undefined1 auStack_438 [192];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368;
  undefined1 auStack_360 [320];
  uint local_220;
  short *local_21c;
  undefined1 auStack_218 [90];
  byte local_1be;
  undefined1 auStack_1bd [5];
  int local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1a0 [192];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  undefined1 auStack_c8 [96];
  undefined2 local_68 [2];
  char *local_64;
  undefined4 local_60;
  
  if ((*param_2 & 1) == 0) {
    *param_1 = 0x80000001;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x88]) {
  case '\0':
    *(undefined1 *)((int)param_2 + 0x225) = 1;
    *(undefined4 *)((int)param_2 + 0x221) = 0x1010101;
    FUN_006b3c20(&local_220,param_2 + 2);
    *(undefined2 *)(param_2 + 0x89) = 0;
    uVar5 = param_2[0x82];
    uVar6 = param_2[0x83];
    FUN_016dd1aa(auStack_438,param_2 + 0x22,0xc0);
    FUN_016dd1aa(auStack_4b8,&local_220,0x80);
    FUN_016dd1aa(param_2 + 0x8a,auStack_4b8,0x140);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
    param_2[0x2e4] = (uint)(param_2 + 0x86);
    param_2[0xda] = uVar5;
    param_2[0xdb] = uVar6;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01858908);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01858908);
  case '\x03':
    break;
  case '\x04':
    goto switchD_006b49dc_caseD_4;
  }
  FUN_006b529c(&local_220,param_2 + 0x8a);
  psVar7 = local_21c;
  uVar5 = local_220;
  if (local_220 == 0x80000001) {
    uVar2 = 3;
LAB_006b4cbc:
    *(undefined1 *)(param_2 + 0x88) = uVar2;
    goto LAB_006b4f94;
  }
  FUN_016dd1aa(auStack_360,auStack_218,0x5a);
  bVar8 = local_1be;
  FUN_016dd1aa(&local_378,auStack_1bd,0x11);
  FUN_006b83b0(param_2 + 0x8a);
  if (uVar5 == 0x80000000) {
    sVar1 = *psVar7;
    if ((((char)param_2[0x1f] != '\0') && (sVar1 == 0x1f)) || (sVar1 == 0x12 || sVar1 == 0x28)) {
      param_2[0x8a] = 0x80000000;
      param_2[0x8b] = (uint)psVar7;
      goto LAB_006b4c14;
    }
LAB_006b4d18:
    FUN_016dd1aa(auStack_c8,auStack_360,0x5a);
    local_e0 = local_378;
    uStack_dc = uStack_374;
    uStack_d8 = uStack_370;
    uStack_d4 = uStack_36c;
    local_d0 = local_368;
LAB_006b4e30:
    piVar3 = (int *)param_2[0x19];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01089b40(param_2[0x19]);
    }
    if ((param_2[0x16] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_2[0x17]);
    }
    piVar3 = (int *)param_2[0x86];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_2[0x86]);
    }
    piVar3 = (int *)param_2[0x84];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0063c510(param_2[0x84],param_2[0x85]);
    }
    FUN_006a7ac0(param_2 + 0x52);
    sVar1 = (short)param_2[0x6c];
    if (sVar1 != 2) {
      uVar6 = 0;
      if (sVar1 != 0) {
        uVar6 = param_2[0x6d];
      }
      if (sVar1 != 0 && uVar6 != 0) {
        thunk_FUN_016d3fb4(param_2[0x6e]);
      }
      bVar9 = (short)param_2[0x75] != 0;
      uVar6 = 0;
      if (bVar9) {
        uVar6 = param_2[0x76];
      }
      if (bVar9 && uVar6 != 0) {
        thunk_FUN_016d3fb4(param_2[0x77]);
      }
    }
    piVar3 = (int *)param_2[0x87];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) goto LAB_006b4f4c;
  }
  else {
    if ((bVar8 & 1) == 0) goto LAB_006b4d18;
    local_220 = uVar5;
    local_21c = psVar7;
    FUN_016dd1aa(auStack_218,auStack_360,0x5a);
    local_1be = 1;
    FUN_016dd1aa(auStack_1bd,&local_378,0x11);
    local_60 = 0x1b;
    local_64 = "received truncated response";
    local_68[0] = 0x10;
    uVar5 = thunk_FUN_016d4a50(0x44);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(uVar5,local_68,0x44);
    param_2[0x8b] = uVar5;
    param_2[0x8a] = 0x80000000;
    FUN_006a7ac0(&local_220);
    if (local_1b8 != 0) {
      thunk_FUN_016d3fb4(local_1b4);
    }
LAB_006b4c14:
    uVar5 = param_2[0x85];
    if (uVar5 == 0) {
      uVar5 = param_2[0x8a];
      psVar7 = (short *)param_2[0x8b];
      FUN_016dd1aa(auStack_c8,param_2 + 0x8c,0x5a);
      bVar8 = *(byte *)((int)param_2 + 0x28a);
      FUN_016dd1aa(&local_e0,(int)param_2 + 0x28b,0x11);
      goto LAB_006b4e30;
    }
    uVar6 = param_2[0x84];
    *(undefined1 *)((int)param_2 + 0x223) = 0;
    FUN_016dd1aa(&local_220,param_2 + 2,0x80);
    *(undefined2 *)((int)param_2 + 0x221) = 0;
    FUN_016dd1aa(auStack_1a0,param_2 + 0x52,0xc0);
    FUN_016dd1aa(auStack_360,&local_220,0x140);
    FUN_016dd1aa(param_2 + 0xa8,auStack_360,0x140);
    *(undefined1 *)(param_2 + 0x306) = 0;
    param_2[0x302] = (uint)(param_2 + 0x87);
    param_2[0xf8] = uVar6;
    param_2[0xf9] = uVar5;
switchD_006b49dc_caseD_4:
    FUN_006b529c(&local_220,param_2 + 0xa8,param_3);
    if (local_220 == 0x80000001) {
      uVar2 = 4;
      goto LAB_006b4cbc;
    }
    FUN_016dd1aa(auStack_c8,auStack_218,0x5a);
    bVar8 = local_1be;
    FUN_016dd1aa(&local_e0,auStack_1bd,0x11);
    FUN_006b83b0(param_2 + 0xa8);
    if (param_2[0x8a] == 0x80000000) {
      FUN_006a6e14(param_2 + 0x8b);
    }
    else {
      FUN_006a7ac0();
      if (param_2[0xa4] != 0) {
        thunk_FUN_016d3fb4(param_2[0xa5]);
      }
    }
    piVar3 = (int *)param_2[0x86];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_2[0x86]);
    }
    piVar3 = (int *)param_2[0x87];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    psVar7 = local_21c;
    uVar5 = local_220;
    if (iVar4 != 1) {
      FUN_016dd1aa(auStack_518,auStack_c8,0x5a);
      *(undefined1 *)(param_2 + 0x88) = 1;
      goto LAB_006b4fa8;
    }
LAB_006b4f4c:
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(param_2[0x87]);
  }
  FUN_016dd1aa(auStack_518,auStack_c8,0x5a);
  *(undefined1 *)(param_2 + 0x88) = 1;
  if (uVar5 != 0x80000001) {
LAB_006b4fa8:
    local_530 = local_e0;
    uStack_52c = uStack_dc;
    uStack_528 = uStack_d8;
    uStack_524 = uStack_d4;
    local_520 = local_d0;
    FUN_016dd1aa(auStack_218,auStack_518,0x5a);
    FUN_016dd1aa(auStack_1bd,&local_530,0x11);
    local_220 = uVar5;
    local_21c = psVar7;
    local_1be = bVar8;
    FUN_006b43e8(param_2);
    *param_2 = 0;
    param_2[1] = 0;
    FUN_016dd1aa(param_1,&local_220,0x74);
    return;
  }
LAB_006b4f94:
  *param_1 = 0x80000002;
  return;
}

