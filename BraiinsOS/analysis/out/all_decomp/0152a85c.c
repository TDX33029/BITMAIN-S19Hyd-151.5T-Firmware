// FUN_0152a85c @ 0152a85c size=440 calls_out=1 calls_in=8
// strings: 

void FUN_0152a85c(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  if (uVar4 - uVar5 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_0040bd0e;
    *(undefined4 *)(param_1 + 8) = 0xd;
    return;
  }
  uVar3 = uVar5 + 2;
  bVar7 = 0xfffffffc < uVar5;
  bVar6 = uVar5 == 0xfffffffd;
  if (uVar5 < 0xfffffffe) {
    bVar7 = uVar4 <= uVar3;
    bVar6 = uVar3 == uVar4;
  }
  param_2[2] = uVar3;
  if (!bVar7 || bVar6) {
    uVar2 = 0x2a;
    uVar1 = *(ushort *)(*param_2 + uVar5) << 8 | *(ushort *)(*param_2 + uVar5) >> 8;
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
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar5,uVar3,uVar4,&DAT_018a78f8);
}

