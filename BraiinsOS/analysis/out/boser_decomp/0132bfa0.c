// FUN_0132bfa0 @ 0132bfa0 size=116 calls_out=3 calls_in=7
// strings: 

void FUN_0132bfa0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 9;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
    return;
  default:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    break;
  case 4:
  case 5:
    FUN_0132c2ac(param_1 + 1);
    return;
  case 6:
  case 7:
  case 8:
  case 0xc:
    param_1 = param_1 + 1;
    goto LAB_0132c01c;
  case 9:
    uVar2 = param_1[1];
    break;
  case 0x10:
    FUN_0132c2e8(param_1 + 1);
    FUN_0132c2e8(param_1 + 2);
    param_1 = param_1 + 3;
LAB_0132c01c:
    FUN_0132c2e8(param_1);
    return;
  }
  FUN_0134bd64(uVar1,uVar2);
  return;
}

