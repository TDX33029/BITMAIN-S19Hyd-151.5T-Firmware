// FUN_0190d660 @ 0190d660 size=404 calls_out=1 calls_in=8
// strings: ExtensionType | ExtensionType

void FUN_0190d660(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *param_1 = 0xc;
    *(char **)(param_1 + 4) = "ExtensionType";
    *(undefined4 *)(param_1 + 8) = 0xd;
    return;
  }
  uVar1 = *(ushort *)uVar3;
  uVar2 = 0x2a;
  uVar1 = uVar1 << 8 | uVar1 >> 8;
  if (uVar1 < 0x3374) {
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
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      uVar2 = uVar1;
      break;
    case 0x12:
      uVar2 = 0x11;
      break;
    case 0x13:
      uVar2 = 0x12;
      break;
    case 0x14:
      uVar2 = 0x13;
      break;
    case 0x15:
      uVar2 = 0x14;
      break;
    case 0x17:
      uVar2 = 0x15;
      break;
    case 0x1b:
      uVar2 = 0x16;
      break;
    case 0x23:
      uVar2 = 0x17;
      break;
    case 0x29:
      uVar2 = 0x18;
      break;
    case 0x2a:
      uVar2 = 0x19;
      break;
    case 0x2b:
      uVar2 = 0x1a;
      break;
    case 0x2c:
      uVar2 = 0x1b;
      break;
    case 0x2d:
      uVar2 = 0x1c;
      break;
    case 0x2e:
      uVar2 = 0x1d;
      break;
    case 0x2f:
      uVar2 = 0x1e;
      break;
    case 0x30:
      uVar2 = 0x1f;
      break;
    case 0x31:
      uVar2 = 0x20;
      break;
    case 0x32:
      uVar2 = 0x21;
      break;
    case 0x33:
      uVar2 = 0x22;
      break;
    case 0x39:
      uVar2 = 0x23;
    }
  }
  else if (uVar1 < 0xfe0d) {
    if (uVar1 == 0x3374) {
      uVar2 = 0x24;
    }
    else if (uVar1 == 0x754f) {
      uVar2 = 0x25;
    }
    else if (uVar1 == 0xfd00) {
      uVar2 = 0x29;
    }
  }
  else if (uVar1 == 0xfe0d) {
    uVar2 = 0x28;
  }
  else if (uVar1 == 0xff01) {
    uVar2 = 0x26;
  }
  else if (uVar1 == 0xffa5) {
    uVar2 = 0x27;
  }
  *(ushort *)(param_1 + 4) = uVar1;
  *(ushort *)(param_1 + 2) = uVar2;
  *param_1 = 0x18;
  return;
}

