// FUN_01631f10 @ 01631f10 size=216 calls_out=5 calls_in=2
// strings: 

void FUN_01631f10(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  
  switch(*param_1) {
  case 0:
    uVar3 = *(undefined4 *)(param_1 + 8);
    FUN_01632078(uVar3,*(undefined4 *)(param_1 + 0xc));
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar4 = 4;
    uVar5 = 0x10;
    break;
  case 1:
  case 3:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    return;
  case 2:
    FUN_016320b0(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = 4;
    uVar5 = 0x14;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    if (param_1[4] != '\x03') {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    goto LAB_0163203c;
  case 8:
    pbVar6 = param_1 + 4;
    if (*pbVar6 < 2) {
      return;
    }
    iVar1 = 4;
    if (*pbVar6 != 2) {
      iVar1 = 8;
    }
    uVar2 = *(undefined4 *)(pbVar6 + iVar1);
    uVar3 = *(undefined4 *)(pbVar6 + iVar1 + 4);
    goto LAB_0163203c;
  case 9:
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = 4;
    uVar5 = 8;
    break;
  case 0xc:
    uVar3 = *(undefined4 *)(param_1 + 8);
    FUN_01632104(uVar3,*(undefined4 *)(param_1 + 0xc));
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar4 = 8;
    uVar5 = 0x18;
    break;
  default:
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
LAB_0163203c:
    FUN_0134bd64(uVar2,uVar3);
    return;
  }
  FUN_0134aee0(uVar2,uVar3,uVar4,uVar5);
  return;
}

