// FUN_00c00c94 @ 00c00c94 size=344 calls_out=10 calls_in=1
// strings: 

void FUN_00c00c94(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0xd0)) {
  case 0:
    FUN_00c00f20(param_1);
    return;
  default:
    goto switchD_00c00cb0_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x10c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x108);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x104);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xe4);
      }
    }
    goto LAB_00c00d84;
  case 4:
    if (*(char *)(param_1 + 0x118) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x114);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x110);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xf0);
      }
    }
    break;
  case 5:
    FUN_00c01014(param_1 + 0x13c);
    FUN_00b9c308(param_1 + 0x104);
    *(undefined1 *)(param_1 + 0xd1) = 0;
    FUN_00b59ba4(param_1 + 300);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  }
  FUN_00c0104c(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xd5) != '\0') {
    FUN_00b1641c(param_1 + 0xd8);
  }
  *(undefined1 *)(param_1 + 0xd5) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
LAB_00c00d84:
  piVar2 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5ef20(*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x60) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x6c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  }
  uVar4 = *(uint *)(param_1 + 0x78);
  bVar5 = uVar4 != 0x80000000;
  if (bVar5) {
    uVar4 = (uint)*(byte *)(param_1 + 0xd4);
  }
  if (bVar5 && uVar4 != 0) {
    FUN_00b1641c();
  }
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
switchD_00c00cb0_caseD_1:
  return;
}

