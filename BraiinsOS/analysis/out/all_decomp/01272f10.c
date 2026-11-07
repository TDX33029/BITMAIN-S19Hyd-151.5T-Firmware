// FUN_01272f10 @ 01272f10 size=408 calls_out=1 calls_in=1
// strings: 

void FUN_01272f10(undefined1 *param_1,undefined4 param_2,int param_3)

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
    puVar1 = &UNK_003b64eb;
    break;
  case 1:
    puVar1 = &UNK_003b64ed;
    goto LAB_01273024;
  case 2:
    puVar1 = &UNK_003b64f0;
    break;
  case 3:
    puVar1 = &UNK_003b64f2;
    goto LAB_01273024;
  case 4:
    puVar1 = &UNK_003b64f5;
    break;
  case 5:
    puVar1 = &UNK_003b64f7;
    goto LAB_01273024;
  case 6:
    puVar1 = &UNK_003b64fa;
    break;
  case 7:
    puVar1 = &UNK_003b64fc;
    goto LAB_01273024;
  case 8:
    puVar1 = &UNK_003b64ff;
    break;
  case 9:
    puVar1 = &UNK_003b6501;
    goto LAB_01273024;
  default:
    puVar1 = &UNK_003b6504;
    break;
  case 0xb:
  case 0xd:
    puVar1 = &UNK_003b6506;
    goto LAB_01273024;
  case 0xe:
    puVar1 = &UNK_003b6509;
    break;
  case 0xf:
    puVar1 = &UNK_003b650b;
    goto LAB_01273024;
  case 0x10:
    puVar1 = &UNK_003b650e;
    break;
  case 0x11:
    puVar1 = &UNK_003b6510;
LAB_01273024:
                    /* WARNING: Could not recover jumptable at 0x01273038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0xc))(param_2,puVar1,3);
    return;
  case 0x12:
    local_24 = param_1 + 1;
    local_20 = &local_24;
    puVar1 = &DAT_0057d4fb;
    goto LAB_012730d8;
  case 0x13:
    local_2c = param_1 + 1;
    local_28 = param_1 + 2;
    local_24 = param_1 + 3;
    local_10 = &local_24;
    local_18 = &local_28;
    puVar1 = &DAT_0057b5b4;
    local_20 = &local_2c;
    local_c = FUN_0127337c;
    local_14 = FUN_0127337c;
LAB_012730d8:
    local_1c = FUN_0127337c;
    FUN_00fa948c(param_2,param_3,puVar1,&local_20);
    return;
  case 0x14:
    puVar1 = &UNK_003b6513;
  }
                    /* WARNING: Could not recover jumptable at 0x01273070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))(param_2,puVar1,2);
  return;
}

