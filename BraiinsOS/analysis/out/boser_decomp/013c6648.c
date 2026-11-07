// FUN_013c6648 @ 013c6648 size=412 calls_out=10 calls_in=1
// strings: 

void FUN_013c6648(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *param_1;
  if (uVar1 == 0x1b) {
    FUN_013f476c(param_1 + 2);
    return;
  }
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
    goto LAB_013c66e8;
  case 3:
    if (-0x7ffffffe < *(int *)(param_1 + 0x36)) {
      FUN_019bb7e0(*(int *)(param_1 + 0x36),*(undefined4 *)(param_1 + 0x38));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    FUN_0074dc80(param_1 + 0xe);
    iVar2 = *(int *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 10);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    iVar2 = *(int *)(param_1 + 2);
    uVar5 = *(undefined4 *)(param_1 + 4);
    break;
  case 6:
    FUN_01340398(param_1 + 8);
    iVar2 = *(int *)(param_1 + 2);
    if (iVar2 == -0x80000000) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 4);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 6);
    goto LAB_013c67f8;
  case 8:
  case 0x13:
    FUN_0079217c(param_1 + 8);
    FUN_0074dce4(param_1 + 2);
    return;
  case 10:
    if (*(int *)(param_1 + 0x26) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2a) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x2e) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x2c));
    }
LAB_013c66e8:
    FUN_0079217c(param_1 + 2);
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_1 + 4);
    FUN_013ddb0c(uVar5,*(undefined4 *)(param_1 + 6));
    FUN_01af7af8(*(undefined4 *)(param_1 + 2),uVar5,4,0x18);
    return;
  case 0x10:
    FUN_00794c00(param_1);
    return;
  case 0x15:
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 2);
    iVar7 = 0;
    do {
      puVar3 = (undefined4 *)(iVar6 + iVar7 * 8);
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(*puVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
LAB_013c67f8:
    thunk_FUN_01be4678(iVar6);
    return;
  default:
    return;
  }
  FUN_019bb7e0(iVar2,uVar5);
  return;
}

