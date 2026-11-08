// FUN_0162a6f0 @ 0162a6f0 size=392 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0162a6f0(byte param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x1c;
  uVar2 = uVar1;
  if (param_1 < 0x5c) {
    if (param_1 < 0x1d) {
      uVar2 = 0x1c;
      switch(param_1) {
      case 0:
        return 0;
      case 1:
        return 1;
      case 2:
        return 2;
      case 3:
      case 5:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        break;
      case 4:
        return 3;
      case 6:
        return 4;
      case 8:
        return 5;
      case 0xc:
        return 6;
      case 0x11:
        return 7;
      default:
        uVar2 = uVar1;
        if (param_1 == 0x16) {
          return 8;
        }
      }
    }
    else {
      uVar2 = 0x1c;
      switch(param_1) {
      case 0x29:
        return 0xb;
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x30:
      case 0x31:
        break;
      case 0x2e:
        return 0xc;
      case 0x2f:
        return 0xd;
      case 0x32:
        return 0xe;
      case 0x33:
        return 0xf;
      default:
        if (param_1 == 0x1d) {
          return 9;
        }
        uVar2 = uVar1;
        if (param_1 == 0x21) {
          return 10;
        }
      }
    }
  }
  else if (param_1 < 0x73) {
    if (param_1 < 0x62) {
      if (param_1 == 0x5c) {
        return 0x10;
      }
      if (param_1 == 0x5e) {
        return 0x11;
      }
    }
    else {
      if (param_1 == 0x62) {
        return 0x12;
      }
      if (param_1 == 0x67) {
        return 0x13;
      }
      if (param_1 == 0x6c) {
        return 0x14;
      }
    }
  }
  else if (param_1 < 0x89) {
    if (param_1 == 0x73) {
      return 0x15;
    }
    if (param_1 == 0x84) {
      return 0x16;
    }
    if (param_1 == 0x88) {
      return 0x17;
    }
  }
  else {
    if (param_1 == 0x89) {
      return 0x18;
    }
    if (param_1 == 0x8f) {
      uVar2 = 0x19;
    }
    else if (param_1 == 0xff) {
      return 0x1a;
    }
  }
  return uVar2;
}

