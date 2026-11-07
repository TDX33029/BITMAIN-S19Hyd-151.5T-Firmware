// FUN_00b806e8 @ 00b806e8 size=1608 calls_out=15 calls_in=0
// strings: /var/log/monitor/monitor.log | /var/log/boser/boser.log | /var/log/bosminer/bosminer.log | /var/log/messages | /var/log/monitor/monitor.log | /var/log/boser/boser.log

void FUN_00b806e8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int ***pppiVar9;
  int ***pppiVar10;
  undefined1 *puVar11;
  int ***pppiVar12;
  int ***pppiVar13;
  int ***pppiVar14;
  int ***pppiVar15;
  int ***local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int ***local_78;
  int ***pppiStack_74;
  int ***pppiStack_70;
  int ***local_68;
  int ***local_64;
  int ***local_60;
  int ***local_5c;
  int ***pppiStack_58;
  undefined4 uStack_54;
  int ***local_50;
  int ***local_4c;
  int ***local_48;
  int ***local_44;
  int ***local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  int ***local_30;
  undefined2 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 0:
    uVar7 = 0x11;
    pcVar6 = "/var/log/messages";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 4)) {
    case 0:
      uVar7 = 1000;
      *(undefined4 *)(param_2 + 8) = 1000;
      *(undefined1 *)(param_2 + 0x2e8) = 0;
LAB_00b80798:
      *(undefined4 *)(param_2 + 0xc) = 1;
      *(undefined4 *)(param_2 + 0x10) = uVar7;
      uVar7 = 0;
      *(undefined1 *)(param_2 + 0x2e4) = 0;
      uVar4 = 4;
      uVar8 = 5;
      puVar3 = &DAT_003f35d3;
      *(undefined **)(param_2 + 0x14) = &DAT_003f35d3;
      *(undefined4 *)(param_2 + 0x18) = 5;
      *(undefined4 *)(param_2 + 0x1c) = 4;
      *(undefined4 *)(param_2 + 0x20) = 0;
LAB_00b80844:
      *(undefined **)(param_2 + 0x24) = puVar3;
      *(undefined1 *)(param_2 + 0x2e0) = 0;
      *(undefined4 *)(param_2 + 0x28) = uVar8;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      *(undefined4 *)(param_2 + 0x30) = uVar7;
      goto switchD_00b80820_caseD_3;
    case 2:
      uVar7 = 0x1e;
      pcVar6 = "/var/log/bosminer/bosminer.log";
      break;
    case 3:
      uVar7 = 0x18;
      pcVar6 = "/var/log/boser/boser.log";
      break;
    case 4:
      uVar7 = 0x1c;
      pcVar6 = "/var/log/monitor/monitor.log";
    }
    *(undefined1 *)(param_2 + 0x45) = 0;
    uVar4 = 1000;
    *(char **)(param_2 + 0x38) = pcVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    *(undefined4 *)(param_2 + 0x40) = 1000;
LAB_00b80a08:
    *(undefined1 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x44) = 0;
    *(undefined4 *)(param_2 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(char **)(param_2 + 0x10) = pcVar6;
    *(undefined4 *)(param_2 + 0x14) = uVar7;
LAB_00b80a28:
    *(char **)(param_2 + 0x18) = pcVar6;
    *(undefined4 *)(param_2 + 0x1c) = uVar7;
    FUN_019afae4(&local_88,pcVar6,uVar7);
    *(undefined4 *)(param_2 + 0x20) = local_88;
    *(undefined4 *)(param_2 + 0x24) = uStack_84;
    *(undefined4 *)(param_2 + 0x28) = uStack_80;
    *(undefined1 *)(param_2 + 0x30) = 0;
switchD_00b8099c_caseD_0:
    local_78 = *(int ****)(param_2 + 0x20);
    pppiStack_74 = *(int ****)(param_2 + 0x24);
    pppiStack_70 = *(int ****)(param_2 + 0x28);
    uVar7 = FUN_00b90f98(&local_78,&DAT_01c230d0);
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c137a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c137a0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2e8)) {
    case 0:
      uVar7 = *(undefined4 *)(param_2 + 8);
      goto LAB_00b80798;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1306c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1306c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2e4)) {
    case 0:
      puVar3 = *(undefined **)(param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 0x18);
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 0x20);
      goto LAB_00b80844;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d614);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d614);
    }
switchD_00b80820_caseD_3:
    FUN_00b6ce5c(&local_50,param_2 + 0x24,param_3);
    pppiVar14 = local_40;
    local_94 = local_44;
    pppiVar15 = local_48;
    pppiVar12 = local_4c;
    if (local_50 == (int ***)&DAT_80000004) {
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x2e4) = 3;
      *(undefined1 *)(param_2 + 0x2e8) = 3;
      *param_1 = 0x80000017;
      goto LAB_00b80cdc;
    }
    if (*(char *)(param_2 + 0x2e0) == '\x03') {
      FUN_00b6cd04(param_2 + 0x34);
    }
    *(undefined1 *)(param_2 + 0x2e4) = 1;
    puVar11 = (undefined1 *)0x80000001;
    pppiVar9 = local_50;
    if (local_50 == (int ***)0x80000003) {
      local_38 = 1;
      local_2c = 0;
      local_34 = 0;
      local_44 = (int ***)0x0;
      local_30 = local_94;
      local_3c = 10;
      local_40 = local_94;
      local_50 = (int ***)0xa;
      local_4c = local_48;
      local_48 = local_94;
      FUN_00b931f8(&local_78,&local_50);
      FUN_019bb7e0(pppiVar12,pppiVar15);
      if (*(int *)(param_2 + 0xc) == 0) {
        local_68 = local_78;
        local_64 = pppiStack_74;
        local_60 = pppiStack_70;
      }
      else {
        local_40 = *(int ****)(param_2 + 0x10);
        local_48 = local_78;
        local_4c = pppiStack_74;
        local_44 = pppiStack_74 + (int)pppiStack_70 * 3;
        local_50 = pppiStack_74;
        FUN_00b92f74(&local_68,&local_50);
      }
      puVar11 = &DAT_80000016;
      pppiVar9 = local_68;
      pppiVar12 = local_64;
      pppiVar15 = local_60;
    }
    *(undefined1 *)(param_2 + 0x2e8) = 1;
    goto LAB_00b80ccc;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x45)) {
    case 0:
      pcVar6 = *(char **)(param_2 + 0x38);
      uVar7 = *(undefined4 *)(param_2 + 0x3c);
      uVar4 = *(undefined4 *)(param_2 + 0x40);
      goto LAB_00b80a08;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1309c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1309c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x34)) {
    case 0:
      pcVar6 = *(char **)(param_2 + 0x10);
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      goto LAB_00b80a28;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2047c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2047c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x30)) {
    case 0:
      goto switchD_00b8099c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar7 = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  local_94 = (int ***)(param_2 + 8);
  puVar11 = (undefined1 *)(param_2 + 0x30);
  pppiVar15 = (int ***)(param_2 + 0x45);
  FUN_00798728(&local_50,uVar7,*param_3);
  if (local_50 == (int ***)0x2) {
    *puVar11 = 3;
LAB_00b80abc:
    *(undefined1 *)pppiVar15 = 3;
    *(undefined1 *)(param_2 + 0x34) = 3;
    *param_1 = 0x80000017;
    uVar2 = 4;
  }
  else {
    local_68 = local_50;
    local_64 = local_4c;
    local_60 = local_48;
    local_5c = local_44;
    pppiStack_58 = local_40;
    uStack_54 = local_3c;
    piVar5 = *(int **)(param_2 + 0x2c);
    if (*piVar5 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar1) goto LAB_00b80b20;
      *piVar5 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00b80b20:
      (**(code **)(piVar5[2] + 0x10))();
    }
    if (local_68 == (int ***)&DAT_00000001) {
      FUN_019a18a8(&local_50,0x28,"background task failed",0x16);
      pppiVar12 = local_4c;
      pppiVar13 = local_50;
      FUN_00b6a274(&local_68);
      *puVar11 = 1;
      pppiVar10 = (int ***)&DAT_80000000;
    }
    else {
      *puVar11 = 1;
      pppiVar10 = local_64;
      pppiVar12 = local_5c;
      pppiVar13 = local_60;
      if (local_64 == (int ***)&DAT_80000001) goto LAB_00b80abc;
    }
    FUN_00b71be0(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x34) = 1;
    if (pppiVar10 == (int ***)&DAT_80000000) {
      puVar11 = (undefined1 *)0x80000002;
      pppiVar9 = pppiVar13;
      pppiVar14 = pppiVar13;
    }
    else {
      pppiVar14 = (int ***)&local_68;
      FUN_006643f0(pppiVar14,pppiVar13,pppiVar12);
      pppiVar15 = local_64;
      local_38 = 1;
      local_2c = 0;
      local_30 = local_60;
      local_34 = 0;
      local_3c = 10;
      local_40 = local_60;
      local_44 = (int ***)0x0;
      local_48 = local_60;
      local_4c = local_64;
      local_50 = (int ***)&DAT_0000000a;
      FUN_00b931f8(&local_78,&local_50);
      if (local_68 != (int ***)&DAT_80000000) {
        FUN_019bb7e0(local_68,pppiVar15);
      }
      if (*local_94 == (int **)0x0) {
        local_68 = local_78;
        local_64 = pppiStack_74;
        local_60 = pppiStack_70;
      }
      else {
        local_40 = *(int ****)(param_2 + 0xc);
        local_48 = local_78;
        local_4c = pppiStack_74;
        local_44 = pppiStack_74 + (int)pppiStack_70 * 3;
        local_50 = pppiStack_74;
        FUN_00b92f74(&local_68,&local_50);
      }
      pppiVar15 = local_60;
      pppiVar12 = local_64;
      pppiVar9 = local_68;
      FUN_019bb7e0(pppiVar10,pppiVar13);
      puVar11 = &DAT_80000016;
    }
    *(undefined2 *)(param_2 + 0x44) = 0x100;
    FUN_00b8100c(local_94);
LAB_00b80ccc:
    *param_1 = puVar11;
    uVar2 = 1;
    param_1[1] = pppiVar9;
    param_1[2] = pppiVar12;
    param_1[3] = pppiVar15;
    param_1[4] = local_94;
    param_1[5] = pppiVar14;
  }
LAB_00b80cdc:
  *(undefined1 *)(param_2 + 5) = uVar2;
  return;
}

