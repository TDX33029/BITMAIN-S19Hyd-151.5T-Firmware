// FUN_01405500 @ 01405500 size=368 calls_out=7 calls_in=1
// strings: 

void FUN_01405500(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  sVar4 = 0x10;
  if (1 < *param_1) {
    sVar4 = *param_1 - 2;
  }
  switch(sVar4) {
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    puVar1 = param_1 + 2;
    break;
  case 3:
    if (-0x7ffffffe < *(int *)(param_1 + 0x36)) {
      FUN_019bb7e0(*(int *)(param_1 + 0x36),*(undefined4 *)(param_1 + 0x38));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    FUN_0074dc80(param_1 + 0xe);
    iVar2 = *(int *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 10);
    goto LAB_01405598;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    iVar2 = *(int *)(param_1 + 2);
    uVar5 = *(undefined4 *)(param_1 + 4);
    goto LAB_01405598;
  case 6:
    FUN_01340398(param_1 + 8);
    iVar2 = *(int *)(param_1 + 2);
    if (iVar2 == -0x80000000) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 4);
LAB_01405598:
    FUN_019bb7e0(iVar2,uVar5);
    return;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 6);
    goto LAB_0140569c;
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
    puVar1 = param_1 + 2;
    if (*(int *)(param_1 + 0x2e) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x2c));
    }
    break;
  case 0xe:
    FUN_013d1214(param_1 + 2);
    return;
  case 0x10:
    FUN_0079217c(param_1);
    puVar1 = param_1 + 0x22;
    break;
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
LAB_0140569c:
    thunk_FUN_01be4678(iVar6);
    return;
  default:
    return;
  }
  FUN_0079217c(puVar1);
  return;
}

