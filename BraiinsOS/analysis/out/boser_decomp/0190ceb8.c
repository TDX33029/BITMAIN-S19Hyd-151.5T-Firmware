// FUN_0190ceb8 @ 0190ceb8 size=236 calls_out=1 calls_in=5
// strings: 

void FUN_0190ceb8(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_00522e84;
    *(undefined4 *)(param_1 + 8) = 0xf;
    return;
  }
  uVar1 = *(ushort *)uVar3;
  uVar2 = 9;
  uVar1 = uVar1 << 8 | uVar1 >> 8;
  if (uVar1 < 0xfefc) {
    switch(uVar1) {
    case 0x300:
      uVar2 = 1;
      break;
    case 0x301:
      uVar2 = 2;
      break;
    case 0x302:
      uVar2 = 3;
      break;
    case 0x303:
      uVar2 = 4;
      break;
    case 0x304:
      uVar2 = 5;
      break;
    default:
      if (uVar1 == 2) {
        uVar2 = 0;
      }
    }
  }
  else if (uVar1 == 0xfefc) {
    uVar2 = 8;
  }
  else if (uVar1 == 0xfefd) {
    uVar2 = 7;
  }
  else if (uVar1 == 0xfeff) {
    uVar2 = 6;
  }
  *(ushort *)(param_1 + 4) = uVar1;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *param_1 = 0x18;
  return;
}

