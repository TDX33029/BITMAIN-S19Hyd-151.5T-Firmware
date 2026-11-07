// FUN_01ac50b0 @ 01ac50b0 size=984 calls_out=3 calls_in=0
// strings: ExpectedFragment

undefined4 FUN_01ac50b0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  undefined1 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar1 = *param_2;
    uVar4 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_00531efe;
    break;
  case 1:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_0056a4f8;
    goto LAB_01ac53b8;
  case 2:
    uVar1 = *param_2;
    uVar4 = 0x1e;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_00531f0d;
    break;
  case 3:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531f2b;
    goto LAB_01ac5320;
  case 4:
    uVar1 = *param_2;
    uVar4 = 0x20;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_0056af68;
    break;
  case 5:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531f48;
    goto LAB_01ac5338;
  case 6:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531f5e;
LAB_01ac5320:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x1d;
    break;
  case 7:
    UNRECOVERED_JUMPTABLE = FUN_01ac4718;
    pcVar2 = &DAT_00531f7b;
    uVar1 = 0x1c;
    goto LAB_01ac541c;
  case 8:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00568358;
    goto LAB_01ac53b8;
  case 9:
    uVar1 = *param_2;
    uVar4 = 0x18;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_00531f97;
    break;
  case 10:
    uVar1 = *param_2;
    iVar6 = param_2[1];
    local_3c = param_1 + 4;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
    iVar5 = (*UNRECOVERED_JUMPTABLE)(uVar1,&DAT_00531faf,0xd);
    if (iVar5 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (*UNRECOVERED_JUMPTABLE)(uVar1,"(",1);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_0141322c(&local_3c,param_2);
    }
    else {
      iVar5 = (*UNRECOVERED_JUMPTABLE)(uVar1,"(\n",2);
      if (iVar5 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_24 = &DAT_01ce45f8;
      local_28 = &local_38;
      local_29 = 1;
      local_38 = uVar1;
      local_34 = iVar6;
      iVar5 = FUN_0141322c(&local_3c,&local_28);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_01302620(&local_38,&DAT_005312e2,2);
    }
    if (iVar5 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
      return uVar1;
    }
    return 1;
  case 0xb:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531fbc;
    goto LAB_01ac522c;
  case 0xc:
    UNRECOVERED_JUMPTABLE = FUN_01ac4758;
    pcVar2 = &UNK_00531fcf;
    goto LAB_01ac51d4;
  case 0xd:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_0056aad8;
LAB_01ac53b8:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x10;
    break;
  case 0xe:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531fdc;
    goto LAB_01ac543c;
  case 0xf:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00531ff0;
LAB_01ac522c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x13;
    break;
  case 0x10:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00532003;
    goto LAB_01ac53d0;
  case 0x11:
    uVar1 = *param_2;
    uVar4 = 0x15;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_0053201a;
    break;
  case 0x12:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_0053202f;
LAB_01ac5338:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x16;
    break;
  case 0x13:
    uVar1 = *param_2;
    uVar4 = 0x12;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_00532045;
    break;
  case 0x14:
    UNRECOVERED_JUMPTABLE = FUN_018a010c;
    pcVar2 = &DAT_00532057;
    uVar1 = 0x17;
    goto LAB_01ac541c;
  case 0x15:
    UNRECOVERED_JUMPTABLE = FUN_018a010c;
    pcVar2 = &DAT_0053206e;
    uVar1 = 0x14;
    goto LAB_01ac541c;
  case 0x16:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_00532082;
LAB_01ac53d0:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x17;
    break;
  case 0x17:
    UNRECOVERED_JUMPTABLE = (code *)&LAB_01ac59e8;
    pcVar2 = "ExpectedFragment";
    uVar1 = 0x10;
    goto LAB_01ac541c;
  case 0x18:
    uVar1 = *param_2;
    uVar4 = 0x1c;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_00532099;
    break;
  case 0x19:
    UNRECOVERED_JUMPTABLE = FUN_018a010c;
    pcVar2 = &DAT_005320b5;
LAB_01ac51d4:
    uVar1 = 0xd;
LAB_01ac541c:
    local_28 = (undefined4 *)(param_1 + 1);
    uVar1 = FUN_013032f4(param_2,pcVar2,uVar1,&local_28,UNRECOVERED_JUMPTABLE);
    return uVar1;
  case 0x1a:
    uVar1 = *param_2;
    iVar5 = param_2[1];
    puVar3 = &UNK_005320c2;
LAB_01ac543c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
    uVar4 = 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x01ac544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,puVar3,uVar4);
  return uVar1;
}

