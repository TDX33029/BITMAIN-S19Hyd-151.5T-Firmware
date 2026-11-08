// FUN_013d5da0 @ 013d5da0 size=416 calls_out=9 calls_in=1
// strings: 

void FUN_013d5da0(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  FUN_0079217c();
  uVar1 = *(ushort *)(param_1 + 0x48);
  sVar4 = 0x10;
  if (1 < uVar1) {
    sVar4 = uVar1 - 2;
  }
  switch(sVar4) {
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    goto LAB_013d5e44;
  case 3:
    if (-0x7ffffffe < *(int *)(param_1 + 0xb4)) {
      FUN_019bb7e0(*(int *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    FUN_0074dc80(param_1 + 100);
    iVar2 = *(int *)(param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    iVar2 = *(int *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    break;
  case 6:
    FUN_01340398(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == -0x80000000) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    break;
  case 7:
    if (*(int *)(param_1 + 0x50) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x54);
    goto LAB_013d5f54;
  case 8:
  case 0x13:
    FUN_0079217c(param_1 + 0x58);
    FUN_0074dce4(param_1 + 0x4c);
    return;
  case 10:
    if (*(int *)(param_1 + 0x94) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x90));
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x98));
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xa0));
    }
LAB_013d5e44:
    FUN_0079217c(param_1 + 0x4c);
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    FUN_013ddb0c(uVar5,*(undefined4 *)(param_1 + 0x54));
    FUN_01af7af8(*(undefined4 *)(param_1 + 0x4c),uVar5,4,0x18);
    return;
  case 0x10:
    FUN_00794c00((ushort *)(param_1 + 0x48));
    return;
  case 0x15:
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x4c);
    iVar7 = 0;
    do {
      puVar3 = (undefined4 *)(iVar6 + iVar7 * 8);
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(*puVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
LAB_013d5f54:
    thunk_FUN_01be4678(iVar6);
    return;
  default:
    return;
  }
  FUN_019bb7e0(iVar2,uVar5);
  return;
}

