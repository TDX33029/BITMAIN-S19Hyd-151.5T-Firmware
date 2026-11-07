// FUN_0074d990 @ 0074d990 size=420 calls_out=10 calls_in=5
// strings: 

void FUN_0074d990(ushort *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  sVar3 = 0x10;
  if (1 < *param_1) {
    sVar3 = *param_1 - 2;
  }
  switch(sVar3) {
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    goto LAB_0074da1c;
  case 3:
    if (-0x7ffffffe < *(int *)(param_1 + 0x36)) {
      FUN_019bb7e0(*(int *)(param_1 + 0x36),*(undefined4 *)(param_1 + 0x38));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    FUN_0074dc80(param_1 + 0xe);
    iVar1 = *(int *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 10);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    iVar1 = *(int *)(param_1 + 2);
    uVar4 = *(undefined4 *)(param_1 + 4);
    break;
  case 6:
    FUN_01340398(param_1 + 8);
    iVar1 = *(int *)(param_1 + 2);
    if (iVar1 == -0x80000000) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 4);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 6);
    goto LAB_0074db2c;
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
LAB_0074da1c:
    FUN_0079217c(param_1 + 2);
    return;
  case 0xe:
    uVar4 = *(undefined4 *)(param_1 + 4);
    FUN_013ddb0c(uVar4,*(undefined4 *)(param_1 + 6));
    FUN_01af7af8(*(undefined4 *)(param_1 + 2),uVar4,4,0x18);
    return;
  case 0x10:
    FUN_00794c00(param_1);
    return;
  case 0x15:
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 2);
    iVar6 = 0;
    do {
      puVar2 = (undefined4 *)(iVar5 + iVar6 * 8);
      if (puVar2[1] != 0) {
        thunk_FUN_01be4678(*puVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
LAB_0074db2c:
    thunk_FUN_01be4678(iVar5);
    return;
  default:
    return;
  }
  FUN_019bb7e0(iVar1,uVar4);
  return;
}

