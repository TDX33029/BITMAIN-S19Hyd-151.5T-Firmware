// FUN_01646064 @ 01646064 size=400 calls_out=1 calls_in=1
// strings: 

void FUN_01646064(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
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
    puVar1 = &UNK_004c1200;
    break;
  case 1:
    puVar1 = &UNK_004c1202;
    goto LAB_01646178;
  case 2:
    puVar1 = &UNK_004c1205;
    break;
  case 3:
    puVar1 = &UNK_004c1207;
    goto LAB_01646178;
  case 4:
    puVar1 = &UNK_004c120a;
    break;
  case 5:
    puVar1 = &UNK_004c120c;
    goto LAB_01646178;
  case 6:
    puVar1 = &UNK_004c120f;
    break;
  case 7:
    puVar1 = &UNK_004c1211;
    goto LAB_01646178;
  case 8:
    puVar1 = &UNK_004c1214;
    break;
  case 9:
    puVar1 = &UNK_004c1216;
    goto LAB_01646178;
  default:
    puVar1 = &UNK_004c1219;
    break;
  case 0xb:
  case 0xd:
    puVar1 = &UNK_004c121b;
    goto LAB_01646178;
  case 0xe:
    puVar1 = &UNK_004c121e;
    break;
  case 0xf:
    puVar1 = &UNK_004c1220;
    goto LAB_01646178;
  case 0x10:
    puVar1 = &UNK_004c1223;
    break;
  case 0x11:
    puVar1 = &UNK_004c1225;
LAB_01646178:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar2 = 3;
    goto LAB_016461b4;
  case 0x12:
    local_24 = param_1 + 1;
    local_20 = &local_24;
    puVar1 = &DAT_005a7464;
    goto LAB_01646224;
  case 0x13:
    local_2c = param_1 + 1;
    local_28 = param_1 + 2;
    local_24 = param_1 + 3;
    local_10 = &local_24;
    local_18 = &local_28;
    puVar1 = &DAT_0057dfac;
    local_20 = &local_2c;
    local_c = &DAT_013e5738;
    local_14 = &DAT_013e5738;
LAB_01646224:
    local_1c = &DAT_013e5738;
    FUN_012fa178(param_2,param_3,puVar1,&local_20);
    return;
  case 0x14:
    puVar1 = &UNK_004c1228;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
  uVar2 = 2;
LAB_016461b4:
                    /* WARNING: Could not recover jumptable at 0x016461bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,puVar1,uVar2);
  return;
}

