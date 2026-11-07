// FUN_01273150 @ 01273150 size=388 calls_out=1 calls_in=1
// strings: 

void FUN_01273150(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 **local_20;
  code *local_1c;
  undefined1 **local_18;
  code *local_14;
  undefined1 **local_10;
  code *local_c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar1 = &UNK_003b6515;
    break;
  case 1:
    puVar1 = &UNK_003b6517;
    break;
  case 2:
    puVar1 = &UNK_003b6519;
    break;
  case 3:
    puVar1 = &UNK_003b651b;
    break;
  case 4:
    puVar1 = &UNK_003b651d;
    break;
  case 5:
    puVar1 = &UNK_003b651f;
    break;
  case 6:
    puVar1 = &UNK_003b6521;
    break;
  case 7:
    puVar1 = &UNK_003b6523;
    break;
  case 8:
    puVar1 = &UNK_003b6525;
    break;
  case 9:
    puVar1 = &UNK_003b6527;
    break;
  default:
    puVar1 = &UNK_003b6529;
    break;
  case 0xb:
  case 0xd:
    puVar1 = &UNK_003b652b;
    break;
  case 0xe:
    puVar1 = &UNK_003b652d;
    break;
  case 0xf:
    puVar1 = &UNK_003b652f;
    break;
  case 0x10:
    puVar1 = &UNK_003b6531;
    break;
  case 0x11:
    puVar1 = &UNK_003b6533;
    break;
  case 0x12:
    local_24 = param_1 + 1;
    local_20 = &local_24;
    puVar1 = &DAT_00582203;
    goto LAB_01273304;
  case 0x13:
    local_2c = param_1 + 1;
    local_28 = param_1 + 2;
    local_24 = param_1 + 3;
    local_10 = &local_24;
    local_18 = &local_28;
    puVar1 = &DAT_0059498c;
    local_20 = &local_2c;
    local_c = FUN_0127337c;
    local_14 = FUN_0127337c;
LAB_01273304:
    local_1c = FUN_0127337c;
    FUN_00fa948c(param_2,param_3,puVar1,&local_20);
    return;
  case 0x14:
    puVar1 = &UNK_003b6535;
  }
                    /* WARNING: Could not recover jumptable at 0x0127329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))(param_2,puVar1,2);
  return;
}

