// FUN_00046b00 @ 00046b00  size=492  callers=2
// program: bmminer


undefined4
FUN_00046b00(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_808 [2052];
  
  switch(param_1) {
  case 0:
    uVar1 = 0x41;
    *param_2 = 0x18;
    uVar3 = 0x45;
    uVar2 = 0x46;
    break;
  case 1:
    uVar1 = 0x41;
    *param_2 = 0x10;
    uVar3 = 0x47;
    uVar2 = 0x48;
    break;
  case 2:
    uVar1 = 0x41;
    *param_2 = 8;
    uVar3 = 0x49;
    uVar2 = 0x4a;
    break;
  case 3:
    *param_2 = 0;
    *param_3 = 0x41;
    *param_4 = 0x4b;
    *param_5 = 0x4c;
    return 0;
  case 4:
    uVar1 = 0x42;
    *param_2 = 0x18;
    uVar3 = 0x4d;
    uVar2 = 0x4e;
    break;
  case 5:
    uVar1 = 0x42;
    *param_2 = 0x10;
    uVar3 = 0x4f;
    uVar2 = 0x50;
    break;
  case 6:
    uVar1 = 0x42;
    *param_2 = 8;
    uVar3 = 0x51;
    uVar2 = 0x52;
    break;
  case 7:
    *param_2 = 0;
    *param_3 = 0x42;
    *param_4 = 0x53;
    *param_5 = 0x54;
    return 0;
  case 8:
    uVar1 = 0x43;
    *param_2 = 0x18;
    uVar3 = 0x55;
    uVar2 = 0x56;
    break;
  case 9:
    uVar1 = 0x43;
    *param_2 = 0x10;
    uVar3 = 0x57;
    uVar2 = 0x58;
    break;
  case 10:
    uVar1 = 0x43;
    *param_2 = 8;
    uVar3 = 0x74;
    uVar2 = 0x75;
    break;
  case 0xb:
    *param_2 = 0;
    *param_3 = 0x43;
    *param_4 = 0x76;
    *param_5 = 0x77;
    return 0;
  case 0xc:
    uVar1 = 0x44;
    *param_2 = 0x18;
    uVar3 = 0x78;
    uVar2 = 0x79;
    break;
  case 0xd:
    uVar1 = 0x44;
    *param_2 = 0x10;
    uVar3 = 0x7a;
    uVar2 = 0x7b;
    break;
  default:
    snprintf(acStack_808,0x800,"%s: The uart %d is not supported!!!\n","get_send_address_info",
             param_1);
    FUN_00032218(0,acStack_808);
    return 0xffffffff;
  }
  *param_3 = uVar1;
  *param_4 = uVar3;
  *param_5 = uVar2;
  return 0;
}

