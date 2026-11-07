// FUN_0161a8a0 @ 0161a8a0 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_0161a8a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = 0x1f;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    return;
  case 7:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = 1;
    uVar4 = 4;
    goto LAB_0161a994;
  case 0x16:
    uVar2 = param_1[2];
    FUN_01631a4c(uVar2,param_1[3]);
    uVar1 = param_1[1];
    uVar3 = 4;
    break;
  case 0x1e:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = 1;
    break;
  default:
    FUN_0134bd64(uVar1,param_1[1]);
    return;
  }
  uVar4 = 0x10;
LAB_0161a994:
  FUN_0134aee0(uVar1,uVar2,uVar3,uVar4);
  return;
}

