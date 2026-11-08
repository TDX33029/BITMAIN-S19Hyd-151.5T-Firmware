// FUN_00fd6750 @ 00fd6750 size=312 calls_out=9 calls_in=1
// strings: 

void FUN_00fd6750(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x310)) {
  case 0:
    FUN_00fd69f8(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc));
    return;
  default:
    return;
  case 3:
    goto switchD_00fd676c_caseD_3;
  case 4:
    FUN_00fd6ac8(param_1 + 0x318);
    break;
  case 5:
    FUN_00fd6b30(param_1 + 0x328);
    (**(code **)(*(int *)(param_1 + 0x318) + 0x10))
              (param_1 + 0x324,*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
    break;
  case 6:
    FUN_00fd6ac8(param_1 + 0x318);
    break;
  case 7:
    FUN_00fd6ac8(param_1 + 0x358);
    if (*(int *)(param_1 + 0x348) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x34c));
    }
    *(undefined1 *)(param_1 + 0x315) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x33c),*(undefined4 *)(param_1 + 0x340));
    *(undefined1 *)(param_1 + 0x316) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x324),*(undefined4 *)(param_1 + 0x328));
    *(undefined1 *)(param_1 + 0x311) = 0;
  }
  FUN_017cc7b0(param_1 + 0x2e4);
  *(undefined1 *)(param_1 + 0x312) = 0;
switchD_00fd676c_caseD_3:
  FUN_00fd6b6c(param_1 + 0x2d8);
  *(undefined1 *)(param_1 + 0x313) = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_0118c490();
  }
  if (*(int *)(param_1 + 0xe4) != -0x7fffffff) {
    FUN_00fd6bbc(param_1 + 0x38);
  }
  piVar2 = *(int **)(param_1 + 0x2d4);
  *(undefined1 *)(param_1 + 0x314) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(*(undefined4 *)(param_1 + 0x2d4));
  }
  *(undefined1 *)(param_1 + 0x317) = 0;
  return;
}

