// FUN_00047044 @ 00047044  size=520  callers=2
// program: bmminer


uint FUN_00047044(int param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_824;
  char acStack_820 [2052];
  
  local_824 = 0;
  switch(param_1) {
  case 0:
    uVar7 = 0x61;
    uVar3 = 0x60;
    break;
  case 1:
    uVar7 = 99;
    uVar3 = 0x62;
    break;
  case 2:
    uVar7 = 0x65;
    uVar3 = 100;
    break;
  case 3:
    uVar7 = 0x67;
    uVar3 = 0x66;
    break;
  case 4:
    uVar7 = 0x69;
    uVar3 = 0x68;
    break;
  case 5:
    uVar7 = 0x6b;
    uVar3 = 0x6a;
    break;
  case 6:
    uVar7 = 0x6d;
    uVar3 = 0x6c;
    break;
  case 7:
    uVar7 = 0x6f;
    uVar3 = 0x6e;
    break;
  case 8:
    uVar7 = 0x71;
    uVar3 = 0x70;
    break;
  case 9:
    uVar7 = 0x73;
    uVar3 = 0x72;
    break;
  case 10:
    uVar7 = 0x7d;
    uVar3 = 0x7c;
    break;
  case 0xb:
    uVar7 = 0x7f;
    uVar3 = 0x7e;
    break;
  case 0xc:
    uVar7 = 0x81;
    uVar3 = 0x80;
    break;
  case 0xd:
    uVar7 = 0x83;
    uVar3 = 0x82;
    break;
  default:
    snprintf(acStack_820,0x800,"%s: The uart%d is not supported!!!\n","get_read_address_info",
             param_1);
    FUN_00032218(0,acStack_820,0);
    snprintf(acStack_820,0x800,"get_read_address_info error, chain_id = %d\n",param_1);
    FUN_00032218(0,acStack_820,0);
    return 0;
  }
  FUN_00045c40(uVar3,param_3 & 0x3ff | 0x80000000);
  uVar1 = param_3 >> 2;
  if (uVar1 != 0) {
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 4;
      FUN_00045bc4(uVar7,&local_824);
      puVar4[3] = (char)local_824;
      *puVar4 = (char)((uint)local_824 >> 0x18);
      puVar4[1] = (char)((uint)local_824 >> 0x10);
      puVar4[2] = (char)((uint)local_824 >> 8);
      puVar4 = puVar5;
    } while (param_2 + uVar1 * 4 != puVar5);
  }
  uVar6 = param_3 & 3;
  param_3 = param_3 & 0xfffffffc;
  if (uVar6 != 0) {
    FUN_00045bc4(uVar7,&local_824);
    uVar2 = (undefined1)((uint)local_824 >> 0x10);
    if (uVar6 == 2) {
      param_3 = param_3 + 2;
      param_2[uVar1 * 4] = local_824._3_1_;
      param_2[uVar1 * 4 + 1] = uVar2;
    }
    else if (uVar6 == 3) {
      param_3 = param_3 + 3;
      param_2[uVar1 * 4] = local_824._3_1_;
      param_2[uVar1 * 4 + 1] = uVar2;
      param_2[uVar1 * 4 + 2] = (char)((uint)local_824 >> 8);
    }
    else {
      param_3 = param_3 + 1;
      param_2[uVar1 * 4] = local_824._3_1_;
    }
  }
  return param_3;
}

