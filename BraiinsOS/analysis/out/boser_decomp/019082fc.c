// FUN_019082fc @ 019082fc size=424 calls_out=1 calls_in=0
// strings: 

void FUN_019082fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined1 local_11;
  undefined1 *local_10;
  undefined1 *local_c;
  
  iVar3 = param_2[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)*param_1) {
  case 0:
    uVar2 = 0xc;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00522ada;
    break;
  case 1:
    puVar1 = &DAT_00522ae6;
    goto LAB_019084e4;
  case 2:
    puVar1 = &UNK_00522af1;
    goto LAB_019084e4;
  case 3:
    puVar1 = &UNK_00522afc;
    goto LAB_019084c4;
  case 4:
    uVar2 = 0x10;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00569a58;
    break;
  case 5:
    puVar1 = &UNK_00522b0e;
    goto LAB_0190847c;
  case 6:
    puVar1 = &DAT_00522b1c;
    goto LAB_0190849c;
  case 7:
    uVar2 = 0x13;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00522b2d;
    break;
  case 8:
    puVar1 = &DAT_005338a4;
    goto LAB_019084e4;
  case 9:
    puVar1 = &UNK_00522b40;
    goto LAB_0190849c;
  case 10:
    puVar1 = &UNK_00522b51;
LAB_019084c4:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar2 = 0x12;
    break;
  case 0xb:
    uVar2 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00522b63;
    break;
  case 0xc:
    puVar1 = &UNK_00522b72;
    goto LAB_0190849c;
  case 0xd:
    puVar1 = &UNK_00522b83;
    goto LAB_0190849c;
  case 0xe:
    uVar2 = 8;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_0056fe98;
    break;
  case 0xf:
    puVar1 = &UNK_00522b94;
LAB_0190847c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar2 = 0xe;
    break;
  case 0x10:
    puVar1 = &DAT_00522ba2;
LAB_0190849c:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar2 = 0x11;
    break;
  case 0x11:
    uVar2 = 9;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00522bb3;
    break;
  case 0x12:
    uVar2 = 0x15;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    puVar1 = &UNK_00522bbc;
    break;
  case 0x13:
    puVar1 = &DAT_00522bd1;
LAB_019084e4:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar2 = 0xb;
    break;
  case 0x14:
    local_11 = ((undefined1 *)*param_1)[1];
    local_10 = &local_11;
    local_c = &LAB_01a7e8b0;
    FUN_012fa178(*param_2,iVar3,&DAT_00522bdc,&local_10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019084f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,puVar1,uVar2);
  return;
}

