// FUN_012663cc @ 012663cc size=96 calls_out=5 calls_in=9
// strings: 

void FUN_012663cc(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0x15;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
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
    FUN_012663cc(uVar1);
    thunk_FUN_01be4678(uVar1);
    return;
  case 0x14:
    FUN_01266494(param_1 + 1);
    return;
  default:
    FUN_01222378();
    return;
  }
}

