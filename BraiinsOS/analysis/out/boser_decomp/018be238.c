// FUN_018be238 @ 018be238 size=228 calls_out=1 calls_in=4
// strings: NamedGroup | NamedGroup

void FUN_018be238(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar4 == (ushort *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 2)) {
    *param_1 = 0xb;
    *(char **)(param_1 + 4) = "NamedGroup";
    *(undefined4 *)(param_1 + 8) = 10;
    return;
  }
  uVar1 = *(ushort *)uVar4;
  uVar2 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
  uVar3 = 10;
  switch(uVar2 >> 0x10) {
  case 0x17:
    uVar3 = 0;
    break;
  case 0x18:
    uVar3 = 1;
    break;
  case 0x19:
    uVar3 = 2;
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:
    break;
  case 0x1d:
    uVar3 = 3;
    break;
  case 0x1e:
    uVar3 = 4;
    break;
  default:
    switch(uVar2 >> 0x10) {
    case 0x100:
      uVar3 = 5;
      break;
    case 0x101:
      uVar3 = 6;
      break;
    case 0x102:
      uVar3 = 7;
      break;
    case 0x103:
      uVar3 = 8;
      break;
    case 0x104:
      uVar3 = 9;
    }
  }
  *(short *)(param_1 + 4) = (short)(uVar2 >> 0x10);
  *(undefined2 *)(param_1 + 2) = uVar3;
  *param_1 = 0x14;
  return;
}

