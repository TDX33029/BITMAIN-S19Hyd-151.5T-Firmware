// FUN_0152a3fc @ 0152a3fc size=272 calls_out=1 calls_in=6
// strings: 

void FUN_0152a3fc(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  if (uVar4 - uVar5 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_0040b831;
    *(undefined4 *)(param_1 + 8) = 0xf;
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
  if (!(bVar7 && !bVar6)) {
    uVar2 = 9;
    uVar1 = *(ushort *)(*param_2 + uVar5) << 8 | *(ushort *)(*param_2 + uVar5) >> 8;
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
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar5,uVar3,uVar4,&DAT_018a78f8);
}

