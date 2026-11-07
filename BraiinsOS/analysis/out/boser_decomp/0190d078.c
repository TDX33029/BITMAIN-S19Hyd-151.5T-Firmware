// FUN_0190d078 @ 0190d078 size=328 calls_out=1 calls_in=2
// strings: SignatureScheme | SignatureScheme

void FUN_0190d078(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *param_1 = 0xc;
    *(char **)(param_1 + 4) = "SignatureScheme";
    *(undefined4 *)(param_1 + 8) = 0xf;
    return;
  }
  uVar1 = *(ushort *)uVar3;
  uVar2 = 0xd;
  uVar1 = uVar1 << 8 | uVar1 >> 8;
  if (uVar1 < 0x601) {
    if (uVar1 < 0x403) {
      if (uVar1 == 0x201) {
        uVar2 = 0;
      }
      else if (uVar1 == 0x203) {
        uVar2 = 1;
      }
      else if (uVar1 == 0x401) {
        uVar2 = 2;
      }
    }
    else if (uVar1 == 0x403) {
      uVar2 = 3;
    }
    else if (uVar1 == 0x501) {
      uVar2 = 4;
    }
    else if (uVar1 == 0x503) {
      uVar2 = 5;
    }
  }
  else {
    switch(uVar1) {
    case 0x804:
      uVar2 = 8;
      break;
    case 0x805:
      uVar2 = 9;
      break;
    case 0x806:
      uVar2 = 10;
      break;
    case 0x807:
      uVar2 = 0xb;
      break;
    case 0x808:
      uVar2 = 0xc;
      break;
    default:
      if (uVar1 == 0x601) {
        uVar2 = 6;
      }
      else if (uVar1 == 0x603) {
        uVar2 = 7;
      }
    }
  }
  *(ushort *)(param_1 + 4) = uVar1;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *param_1 = 0x18;
  return;
}

