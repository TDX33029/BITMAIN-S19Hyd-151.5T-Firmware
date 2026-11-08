// FUN_01233360 @ 01233360 size=176 calls_out=6 calls_in=1
// strings: 

void FUN_01233360(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = 0x15;
  if ((int)uVar3 < 0) {
    uVar1 = uVar3 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x12:
    return;
  case 0xc:
  case 0xe:
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  case 0x11:
  case 0x13:
    uVar1 = param_1[1];
    FUN_01233360(uVar1);
    thunk_FUN_01be4678(uVar1);
    return;
  case 0x14:
    uVar1 = param_1[2];
    FUN_01962b14(uVar1,param_1[3]);
    uVar3 = param_1[1];
    uVar2 = 0x10;
    break;
  default:
    uVar1 = param_1[1];
    FUN_01962b64(uVar1,param_1[2]);
    uVar2 = 0x20;
  }
  FUN_0134aee0(uVar3,uVar1,8,uVar2);
  return;
}

