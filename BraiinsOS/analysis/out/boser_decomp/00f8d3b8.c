// FUN_00f8d3b8 @ 00f8d3b8 size=1216 calls_out=15 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready`

void FUN_00f8d3b8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int local_800;
  int local_7fc;
  int local_7b0;
  int local_7ac;
  undefined4 local_768;
  undefined4 local_764;
  undefined1 auStack_760 [56];
  int local_728;
  int local_724;
  undefined1 auStack_698 [72];
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined2 local_618;
  undefined4 local_610;
  undefined2 local_60c;
  undefined1 local_60a;
  undefined4 local_608;
  int local_604;
  undefined4 local_600;
  int local_5f8;
  int local_5f4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined1 auStack_5a0 [144];
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  
  piVar8 = (int *)(param_2 + 0x90);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1ac)) {
  case 0:
    *(int *)(param_2 + 0x1b8) = param_2;
    *(undefined1 *)(param_2 + 0x1b1) = 1;
    *(undefined4 *)(param_2 + 0x1ad) = 0x1010101;
    *(undefined1 *)(param_2 + 0x1cc) = 0;
    *(int *)(param_2 + 0x1bc) = param_2 + 0x1a8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1ac50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1ac50);
  case 4:
    if (*(char *)(param_2 + 0x1b8) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
    }
    goto LAB_00f8d4dc;
  case 5:
    goto switchD_00f8d3e4_caseD_5;
  case 6:
    goto switchD_00f8d3e4_caseD_6;
  }
  puVar5 = (undefined4 *)(param_2 + 0x1b8);
  FUN_00f8d218(&local_800,puVar5);
  if (local_800 == 4 && local_7fc == 0) {
    uVar2 = 3;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(piVar8,&local_800,0x50);
    if (*piVar8 == 3 && *(int *)(param_2 + 0x94) == 0) {
      piVar3 = *(int **)(param_2 + 0x1a8);
      *(undefined1 *)(param_2 + 0x1ae) = 0;
      *(undefined1 *)(param_2 + 0x1b1) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182b58();
      }
      *puVar5 = 0;
      *(code **)(param_2 + 0x1bc) = FUN_01139fec;
LAB_00f8d4dc:
      if (*(char *)(param_2 + 0x1b9) != '\0') {
        if (*(char *)(param_2 + 0x1b9) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1b5ac);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1b5ac);
      }
      iVar4 = thunk_FUN_01be5118(0x10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(iVar4,&DAT_00568318,0x10);
      *(undefined1 *)(param_2 + 0x1b9) = 1;
      pcVar6 = *(code **)(param_2 + 0x1bc);
      *(undefined4 *)(param_2 + 0x1b8) = 1;
      *(undefined4 *)(param_2 + 0x1bc) = 0;
      local_60c = 200;
      local_64c = 0;
      local_650 = 0;
      local_610 = 0;
      local_618 = 0;
      local_61c = 0;
      local_624 = 0;
      local_628 = 0;
      local_630 = 0;
      local_634 = 0;
      local_60a = 2;
      local_638 = 2;
      local_620 = 4;
      local_62c = 4;
      local_600 = 0x10;
      local_608 = 0x10;
      local_604 = iVar4;
      FUN_01bed4e2(&local_5f8,&local_650,0x58);
      (*pcVar6)(&local_7b0,&local_5f8);
      if (local_7b0 == 3 && local_7ac == 0) {
        *param_1 = 3;
        param_1[1] = 0;
        uVar2 = 4;
        goto LAB_00f8d828;
      }
      FUN_01bed4e2(auStack_698,&local_7b0,0x48);
      if (*piVar8 != 3 || *(int *)(param_2 + 0x94) != 0) {
        FUN_00ebaa50(piVar8);
      }
      FUN_01839f10(param_2);
      FUN_00b19860(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
      local_5b0 = local_768;
      local_5ac = local_764;
    }
    else {
      FUN_00ebaa50(piVar8);
      *(undefined2 *)(param_2 + 0x1af) = 0;
      uVar9 = *(undefined4 *)(param_2 + 0x88);
      uVar7 = *(undefined4 *)(param_2 + 0x8c);
      FUN_01bed4e2(puVar5,param_2,0x88);
      *(undefined1 *)(param_2 + 0x270) = 0;
      *(int *)(param_2 + 0x268) = param_2 + 0x1a8;
      *(undefined4 *)(param_2 + 0x240) = uVar9;
      *(undefined4 *)(param_2 + 0x244) = uVar7;
switchD_00f8d3e4_caseD_5:
      FUN_00f88f94(auStack_760,param_2 + 0x1b8);
      if (local_728 == 4 && local_724 == 0) {
        *param_1 = 3;
        param_1[1] = 0;
        uVar2 = 5;
        goto LAB_00f8d828;
      }
      FUN_01bed4e2((undefined4 *)(param_2 + 0xe0),auStack_760,200);
      FUN_00f895d8(param_2 + 0x1b8);
      if (*(int *)(param_2 + 0x118) == 3 && *(int *)(param_2 + 0x11c) == 0) {
        FUN_01bed4e2(auStack_698,param_2 + 0x120,0x48);
        local_5b0 = *(undefined4 *)(param_2 + 0x168);
        local_5ac = *(undefined4 *)(param_2 + 0x16c);
      }
      else {
        *(undefined2 *)(param_2 + 0x1ad) = 0;
        uVar9 = *(undefined4 *)(param_2 + 0x110);
        piVar8 = *(int **)(param_2 + 0x1a8);
        local_500 = *(undefined4 *)(param_2 + 0xf0);
        uStack_4fc = *(undefined4 *)(param_2 + 0xf4);
        uStack_4f8 = *(undefined4 *)(param_2 + 0xf8);
        uStack_4f4 = *(undefined4 *)(param_2 + 0xfc);
        local_4f0 = *(undefined4 *)(param_2 + 0x100);
        uStack_4ec = *(undefined4 *)(param_2 + 0x104);
        uStack_4e8 = *(undefined4 *)(param_2 + 0x108);
        uStack_4e4 = *(undefined4 *)(param_2 + 0x10c);
        local_510 = *(undefined4 *)(param_2 + 0xe0);
        uStack_50c = *(undefined4 *)(param_2 + 0xe4);
        uStack_508 = *(undefined4 *)(param_2 + 0xe8);
        uStack_504 = *(undefined4 *)(param_2 + 0xec);
        FUN_01bed4e2(auStack_5a0,param_2 + 0x118,0x90);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01182b58(piVar8);
        }
        *(undefined1 **)(param_2 + 0x1bc) = &LAB_007093a0;
        *(undefined4 *)(param_2 + 0x1b8) = 0;
        FUN_01bed4e2(param_2 + 0x1c0,auStack_5a0,0x578);
        *(undefined1 *)(param_2 + 0x74c) = 0;
        *(undefined4 *)(param_2 + 0x738) = uVar9;
switchD_00f8d3e4_caseD_6:
        FUN_0118ef9c(&local_5f8,(int *)(param_2 + 0x1b8),param_3);
        if (local_5f8 == 3 && local_5f4 == 0) {
          *param_1 = 3;
          param_1[1] = 0;
          uVar2 = 6;
          goto LAB_00f8d828;
        }
        FUN_01bed4e2(auStack_698,&local_5f8,0x48);
        if (*(int *)(param_2 + 0x1b8) == 0) {
          FUN_00f84bbc(param_2 + 0x1c0);
        }
      }
      if (*(char *)(param_2 + 0x1ae) != '\0') {
        piVar8 = *(int **)(param_2 + 0x1a8);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01182b58(*(undefined4 *)(param_2 + 0x1a8));
        }
      }
    }
    FUN_01bed4e2(param_1,auStack_698,0x48);
    param_1[0x12] = local_5b0;
    param_1[0x13] = local_5ac;
    uVar2 = 1;
  }
LAB_00f8d828:
  *(undefined1 *)(param_2 + 0x1ac) = uVar2;
  return;
}

