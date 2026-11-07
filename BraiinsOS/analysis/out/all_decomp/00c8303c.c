// FUN_00c8303c @ 00c8303c size=184 calls_out=4 calls_in=2
// strings: 

void FUN_00c8303c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00c830f0;
  default:
    return;
  case 3:
    if (*(char *)((int)param_1 + 0x89) == '\x03') {
      FUN_00c8315c(param_1 + 7);
    }
    break;
  case 4:
    if (*(char *)((int)param_1 + 0x51) == '\x03') {
      FUN_00654988(param_1 + 9);
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    break;
  case 5:
    FUN_00c83270(param_1 + 8);
  }
  param_1 = param_1 + 4;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00c830f0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*param_1);
    return;
  }
  return;
}

