// FUN_0190d2b4 @ 0190d2b4 size=332 calls_out=1 calls_in=4
// strings: NamedGroup | NamedGroup

void FUN_0190d2b4(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *param_1 = 0xc;
    *(char **)(param_1 + 4) = "NamedGroup";
    *(undefined4 *)(param_1 + 8) = 10;
    return;
  }
  uVar1 = *(ushort *)uVar3;
  uVar2 = 0xf;
  uVar1 = uVar1 << 8 | uVar1 >> 8;
  if (uVar1 < 0x100) {
    switch(uVar1) {
    case 0x17:
      uVar2 = 0;
      break;
    case 0x18:
      uVar2 = 1;
      break;
    case 0x19:
      uVar2 = 2;
      break;
    case 0x1d:
      uVar2 = 3;
      break;
    case 0x1e:
      uVar2 = 4;
    }
  }
  else if (uVar1 < 0x200) {
    switch(uVar1) {
    case 0x100:
      uVar2 = 5;
      break;
    case 0x101:
      uVar2 = 6;
      break;
    case 0x102:
      uVar2 = 7;
      break;
    case 0x103:
      uVar2 = 8;
      break;
    case 0x104:
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 0xf;
    if (uVar1 < 0x202) {
      if (uVar1 == 0x200) {
        uVar2 = 10;
      }
      else if (uVar1 == 0x201) {
        uVar2 = 0xb;
      }
    }
    else if (uVar1 == 0x202) {
      uVar2 = 0xc;
    }
    else if (uVar1 == 0x11eb) {
      uVar2 = 0xd;
    }
    else if (uVar1 == 0x11ec) {
      uVar2 = 0xe;
    }
  }
  *(ushort *)(param_1 + 4) = uVar1;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *param_1 = 0x18;
  return;
}

