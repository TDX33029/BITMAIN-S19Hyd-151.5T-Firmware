// FUN_017be584 @ 017be584 size=972 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_017be584(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar7 = &DAT_018a80dc;
    puVar2 = &DAT_0052261c;
    puVar5 = &LAB_018d2cc4;
    uVar1 = 0x14;
    goto LAB_017be7d0;
  case 1:
    puVar7 = &DAT_018a7f4c;
    puVar5 = &LAB_018d577c;
    puVar2 = &DAT_0052263c;
    uVar1 = 0x1d;
LAB_017be7d0:
    local_30 = param_1 + 1;
    uVar1 = FUN_01303d90(param_2,puVar2,uVar1,&DAT_00522630,0xc,param_1 + 4,puVar7,&DAT_0056fd50,8,
                         &local_30,puVar5);
    return uVar1;
  case 2:
    local_30 = param_1 + 4;
    UNRECOVERED_JUMPTABLE = (code *)&LAB_018cca04;
    puVar2 = &DAT_00522674;
    goto LAB_017be8d0;
  case 3:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522682;
    goto LAB_017be7e4;
  case 4:
    uVar1 = *param_2;
    uVar3 = 0x13;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_005337d3;
    break;
  case 5:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522699;
    goto LAB_017be86c;
  case 6:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005226a5;
LAB_017be86c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0xc;
    break;
  case 7:
    local_30 = param_1 + 1;
    UNRECOVERED_JUMPTABLE = FUN_018cd0a4;
    puVar2 = &DAT_00568328;
    uVar1 = 0x10;
    goto LAB_017be8e4;
  case 8:
    local_30 = param_1 + 1;
    UNRECOVERED_JUMPTABLE = FUN_018cd058;
    puVar2 = &DAT_005226b1;
LAB_017be8d0:
    uVar1 = 0xe;
    goto LAB_017be8e4;
  case 9:
    local_30 = param_1 + 1;
    UNRECOVERED_JUMPTABLE = (code *)&LAB_018d2dbc;
    puVar2 = &DAT_005226bf;
    uVar1 = 0xd;
    goto LAB_017be8e4;
  case 10:
    local_30 = param_1 + 4;
    UNRECOVERED_JUMPTABLE = (code *)&LAB_018ccd90;
    puVar2 = &DAT_005226cc;
    uVar1 = 0x12;
    goto LAB_017be8e4;
  case 0xb:
    local_30 = param_1 + 1;
    UNRECOVERED_JUMPTABLE = FUN_018cd374;
    puVar2 = &DAT_0051ddbe;
    uVar1 = 10;
    goto LAB_017be8e4;
  case 0xc:
    local_30 = param_1 + 4;
    UNRECOVERED_JUMPTABLE = (code *)&LAB_018cc734;
    puVar2 = &DAT_005226de;
    uVar1 = 0x19;
LAB_017be8e4:
    uVar1 = FUN_013032f4(param_2,puVar2,uVar1,&local_30,UNRECOVERED_JUMPTABLE);
    return uVar1;
  case 0xd:
    puVar5 = (undefined1 *)*param_2;
    iVar6 = param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
    iVar4 = (*UNRECOVERED_JUMPTABLE)(puVar5,&DAT_005226f7,7);
    if (iVar4 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*UNRECOVERED_JUMPTABLE)(puVar5,"(",1);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = FUN_012fb170(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),*param_2,
                           param_2[1]);
    }
    else {
      iVar4 = (*UNRECOVERED_JUMPTABLE)(puVar5,"(\n",2);
      if (iVar4 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = puVar5;
      local_2c = iVar6;
      iVar4 = FUN_012fb170(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_30,
                           &DAT_01ce45f8);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar4 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
      return uVar1;
    }
    return 1;
  case 0xe:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005226fe;
    goto LAB_017be734;
  case 0xf:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522714;
LAB_017be734:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x16;
    break;
  case 0x10:
    uVar1 = *param_2;
    uVar3 = 0x14;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052272a;
    break;
  case 0x11:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0052273e;
LAB_017be7e4:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x17;
    break;
  case 0x12:
    uVar1 = *param_2;
    uVar3 = 0x15;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00522755;
    break;
  case 0x13:
    uVar1 = *param_2;
    uVar3 = 0x12;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052276a;
  }
                    /* WARNING: Could not recover jumptable at 0x017be914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,puVar2,uVar3);
  return uVar1;
}

