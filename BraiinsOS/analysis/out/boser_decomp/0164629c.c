// FUN_0164629c @ 0164629c size=388 calls_out=1 calls_in=1
// strings: 

void FUN_0164629c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 **local_20;
  undefined *local_1c;
  undefined1 **local_18;
  undefined *local_14;
  undefined1 **local_10;
  undefined *local_c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar1 = &UNK_004c122a;
    break;
  case 1:
    puVar1 = &UNK_004c122c;
    break;
  case 2:
    puVar1 = &UNK_004c122e;
    break;
  case 3:
    puVar1 = &UNK_004c1230;
    break;
  case 4:
    puVar1 = &UNK_004c1232;
    break;
  case 5:
    puVar1 = &UNK_004c1234;
    break;
  case 6:
    puVar1 = &UNK_004c1236;
    break;
  case 7:
    puVar1 = &UNK_004c1238;
    break;
  case 8:
    puVar1 = &UNK_004c123a;
    break;
  case 9:
    puVar1 = &UNK_004c123c;
    break;
  default:
    puVar1 = &UNK_004c123e;
    break;
  case 0xb:
  case 0xd:
    puVar1 = &UNK_004c1240;
    break;
  case 0xe:
    puVar1 = &UNK_004c1242;
    break;
  case 0xf:
    puVar1 = &UNK_004c1244;
    break;
  case 0x10:
    puVar1 = &UNK_004c1246;
    break;
  case 0x11:
    puVar1 = &UNK_004c1248;
    break;
  case 0x12:
    local_24 = param_1 + 1;
    local_20 = &local_24;
    puVar1 = &DAT_005841c2;
    goto LAB_01646450;
  case 0x13:
    local_2c = param_1 + 1;
    local_28 = param_1 + 2;
    local_24 = param_1 + 3;
    local_10 = &local_24;
    local_18 = &local_28;
    puVar1 = &DAT_00593cfc;
    local_20 = &local_2c;
    local_c = &DAT_013e5738;
    local_14 = &DAT_013e5738;
LAB_01646450:
    local_1c = &DAT_013e5738;
    FUN_012fa178(param_2,param_3,puVar1,&local_20);
    return;
  case 0x14:
    puVar1 = &UNK_004c124a;
  }
                    /* WARNING: Could not recover jumptable at 0x016463e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))(param_2,puVar1,2);
  return;
}

