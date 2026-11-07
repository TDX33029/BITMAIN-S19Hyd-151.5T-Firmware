// FUN_015a82dc @ 015a82dc size=864 calls_out=4 calls_in=0
// strings: PredicateBrowse | IndexV4 | IndexV6

undefined4 FUN_015a82dc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 **ppuVar8;
  undefined *puVar9;
  undefined4 **local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int **local_30;
  undefined *local_2c;
  int **local_28;
  int local_24;
  
  puVar6 = (undefined1 *)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar6) {
  case 0:
    iVar1 = *param_2;
    uVar3 = 3;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = &DAT_004cfc88;
    goto LAB_015a84cc;
  case 1:
    iVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = &DAT_0056dd2c;
    goto LAB_015a849c;
  case 2:
    iVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = "IPv6\\x1bP\x05";
LAB_015a849c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar3 = 4;
LAB_015a84cc:
                    /* WARNING: Could not recover jumptable at 0x015a84d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(iVar1,pcVar4,uVar3);
    return uVar3;
  case 3:
    ppiVar7 = (int **)*param_2;
    puVar9 = (undefined *)param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0xc);
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,&DAT_0056d23c,4);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb170(*(undefined4 *)(puVar6 + 8),*(undefined4 *)(puVar6 + 0xc),*param_2,
                           param_2[1]);
    }
    else {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = (int **)&local_40;
      local_40 = (undefined4 **)CONCAT31(local_40._1_3_,1);
      local_30 = ppiVar7;
      local_2c = puVar9;
      iVar1 = FUN_012fb170(*(undefined4 *)(puVar6 + 8),*(undefined4 *)(puVar6 + 0xc),&local_30,
                           &DAT_01ce45f8);
LAB_015a8624:
      if (iVar1 != 0) {
        return 1;
      }
      pppuVar2 = &local_30;
LAB_015a8638:
      iVar1 = FUN_01302620(pppuVar2,&DAT_005312e2,2);
    }
    break;
  case 4:
    ppuVar8 = (undefined4 **)*param_2;
    iVar5 = param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ppuVar8,&DAT_0056e4a0,4);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ppuVar8,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (int **)&local_40;
      local_28 = (int **)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = ppuVar8;
      local_3c = iVar5;
      iVar1 = FUN_01308e14(puVar6 + 1,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      pppuVar2 = &local_40;
      goto LAB_015a8638;
    }
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ppuVar8,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01308e14(puVar6 + 1,param_2);
    break;
  case 5:
    iVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = "LoopbackV4LoopbackV6";
    goto LAB_015a84c4;
  case 6:
    iVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = "LoopbackV6";
LAB_015a84c4:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar3 = 10;
    goto LAB_015a84cc;
  case 7:
    pcVar4 = "IndexV4";
    goto LAB_015a84e8;
  case 8:
    pcVar4 = "IndexV6";
LAB_015a84e8:
    local_30 = (int **)(puVar6 + 4);
    uVar3 = FUN_013032f4(param_2,pcVar4,7,&local_30,FUN_015fc038);
    goto LAB_015a8508;
  case 9:
    ppiVar7 = (int **)*param_2;
    puVar9 = (undefined *)param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0xc);
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,"PredicateBrowse",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = (int **)&local_40;
      local_40 = (undefined4 **)CONCAT31(local_40._1_3_,1);
      local_30 = ppiVar7;
      local_2c = puVar9;
      iVar1 = FUN_01302620(&local_30,&DAT_00567ef8,0x10);
      goto LAB_015a8624;
    }
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ppiVar7,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00567ef8,0x10);
  }
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
LAB_015a8508:
  return uVar3;
}

