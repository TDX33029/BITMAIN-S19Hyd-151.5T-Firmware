// FUN_00ecd7c4 @ 00ecd7c4 size=272 calls_out=6 calls_in=0
// strings: 

void FUN_00ecd7c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 200)) {
  case 0:
    FUN_00ebabdc(param_1);
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x98));
    }
    goto LAB_00ecd8dc;
  default:
    return;
  case 3:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    break;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    break;
  case 5:
    FUN_00ebaa80(param_1 + 0xd0);
  }
  if (*(char *)(param_1 + 0xc4) != '\x02') {
    (**(code **)(*(int *)(param_1 + 0xb4) + 0x10))
              (param_1 + 0xc0,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  }
  *(undefined1 *)(param_1 + 0xca) = 0;
  FUN_00df0e34(param_1 + 0xa8);
  if (*(int *)(param_1 + 0x9c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(char *)(param_1 + 0xc9) != '\0') {
    FUN_00ebabdc(param_1);
  }
  piVar2 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(*(undefined4 *)(param_1 + 0x98));
  }
LAB_00ecd8dc:
  FUN_01139b38(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  return;
}

