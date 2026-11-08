// FUN_01908ba8 @ 01908ba8 size=576 calls_out=2 calls_in=0
// strings: 

void FUN_01908ba8(undefined2 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined1 *local_14;
  
  switch(*param_1) {
  case 0:
    uVar1 = *param_2;
    uVar3 = 0x17;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052277c;
    break;
  case 1:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522793;
    goto LAB_01908d00;
  case 2:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005227b2;
LAB_01908d00:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x1f;
    break;
  case 3:
    uVar1 = *param_2;
    uVar3 = 0x21;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_005227d1;
    break;
  case 4:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005227f2;
    goto LAB_01908d38;
  case 5:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0052280a;
    goto LAB_01908d38;
  case 6:
    uVar1 = *param_2;
    uVar3 = 0x1e;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00522822;
    break;
  case 7:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522840;
LAB_01908d38:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x18;
    break;
  case 8:
    uVar1 = *param_2;
    uVar3 = 0x1a;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00522858;
    break;
  case 9:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522872;
    goto LAB_01908da8;
  case 10:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522896;
LAB_01908da8:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x24;
    break;
  case 0xb:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005228ba;
    goto LAB_01908c90;
  case 0xc:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005228dc;
LAB_01908c90:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x22;
    break;
  case 0xd:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005228fe;
    goto LAB_01908d90;
  case 0xe:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522925;
    goto LAB_01908d90;
  case 0xf:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0052294c;
    goto LAB_01908df0;
  case 0x10:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522971;
    goto LAB_01908df0;
  case 0x11:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522996;
    goto LAB_01908d90;
  case 0x12:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005229bd;
LAB_01908d90:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x27;
    break;
  case 0x13:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005229e4;
    goto LAB_01908df0;
  case 0x14:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_00522a09;
LAB_01908df0:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x25;
    break;
  case 0x15:
    uVar1 = *param_2;
    uVar3 = 0x2b;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00522a2e;
    break;
  case 0x16:
    uVar1 = *param_2;
    uVar3 = 0x2d;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00522a59;
    break;
  default:
    local_1a = FUN_01908ea8(*param_1,param_1[1]);
    local_14 = &LAB_013cb7d4;
    local_18 = &local_1a;
    FUN_012fa178(*param_2,param_2[1],&DAT_00522a86,&local_18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01908e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,puVar2,uVar3);
  return;
}

