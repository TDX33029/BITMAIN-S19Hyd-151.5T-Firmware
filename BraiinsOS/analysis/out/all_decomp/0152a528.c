// FUN_0152a528 @ 0152a528 size=364 calls_out=1 calls_in=3
// strings: 

void FUN_0152a528(undefined1 *param_1,int *param_2)

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
    *(undefined **)(param_1 + 4) = &DAT_0040bccb;
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
    uVar2 = 0xd;
    uVar1 = *(ushort *)(*param_2 + uVar5) << 8 | *(ushort *)(*param_2 + uVar5) >> 8;
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
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar5,uVar3,uVar4,&DAT_018a78f8);
}

