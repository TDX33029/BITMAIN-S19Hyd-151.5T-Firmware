// FUN_00772c10 @ 00772c10 size=376 calls_out=7 calls_in=1
// strings: 

void FUN_00772c10(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *param_1;
  if (uVar1 == 0x1b) {
    return;
  }
  sVar5 = 0x10;
  if (1 < uVar1) {
    sVar5 = uVar1 - 2;
  }
  switch(sVar5) {
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    puVar2 = param_1 + 2;
    break;
  case 3:
    if (-0x7ffffffe < *(int *)(param_1 + 0x36)) {
      FUN_019bb7e0(*(int *)(param_1 + 0x36),*(undefined4 *)(param_1 + 0x38));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    FUN_0074dc80(param_1 + 0xe);
    iVar3 = *(int *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 10);
    goto LAB_00772cb4;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    iVar3 = *(int *)(param_1 + 2);
    uVar6 = *(undefined4 *)(param_1 + 4);
    goto LAB_00772cb4;
  case 6:
    FUN_01340398(param_1 + 8);
    iVar3 = *(int *)(param_1 + 2);
    if (iVar3 == -0x80000000) {
      return;
    }
    uVar6 = *(undefined4 *)(param_1 + 4);
LAB_00772cb4:
    FUN_019bb7e0(iVar3,uVar6);
    return;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 6);
    goto LAB_00772db8;
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
    puVar2 = param_1 + 2;
    if (*(int *)(param_1 + 0x2e) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x2c));
    }
    break;
  case 0xe:
    FUN_013d1214(param_1 + 2);
    return;
  case 0x10:
    FUN_0079217c(param_1);
    puVar2 = param_1 + 0x22;
    break;
  case 0x15:
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 2);
    iVar8 = 0;
    do {
      puVar4 = (undefined4 *)(iVar7 + iVar8 * 8);
      if (puVar4[1] != 0) {
        thunk_FUN_01be4678(*puVar4);
      }
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
LAB_00772db8:
    thunk_FUN_01be4678(iVar7);
    return;
  default:
    return;
  }
  FUN_0079217c(puVar2);
  return;
}

