// FUN_010e8e9c @ 010e8e9c size=312 calls_out=10 calls_in=1
// strings: 

void FUN_010e8e9c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x388)) {
  case 0:
    FUN_010e8c70(param_1);
    piVar2 = *(int **)(param_1 + 0x378);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711acc(*(undefined4 *)(param_1 + 0x378));
    }
    FUN_00b76614(param_1 + 200);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_005f3030(param_1 + 0x10c);
      return;
    }
  default:
    return;
  case 3:
    break;
  case 4:
    FUN_010e9144(param_1 + 0x398);
    FUN_00b76614(param_1 + 0x3b4);
    *(undefined1 *)(param_1 + 0x38c) = 0;
    break;
  case 5:
    FUN_005efd2c(param_1 + 0x398);
  }
  FUN_00b76614(param_1 + 0x328);
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_005f3030(param_1 + 0x314);
  }
  piVar2 = *(int **)(param_1 + 0x37c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fef4(*(undefined4 *)(param_1 + 0x37c));
  }
  if (*(char *)(param_1 + 0x38b) != '\0') {
    FUN_019d8724(param_1 + 0x308);
  }
  *(undefined1 *)(param_1 + 0x38d) = 0;
  *(undefined1 *)(param_1 + 0x38b) = 0;
  FUN_005f0424(param_1 + 0x268);
  FUN_010e9164(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x38e) = 0;
  *(undefined2 *)(param_1 + 0x392) = 0;
  FUN_010e8c70(param_1 + 0x120);
  return;
}

