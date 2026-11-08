// FUN_017554e8 @ 017554e8 size=416 calls_out=12 calls_in=2
// strings: 

void FUN_017554e8(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  switch(*(undefined1 *)(param_1 + 0x2c8)) {
  case 0:
    FUN_0173a3e0(param_1 + 0xa0);
    FUN_01435814(param_1 + 600);
    FUN_0182ff70(param_1);
    return;
  default:
    goto switchD_01755504_caseD_1;
  case 3:
    FUN_017ce5f0(*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2dc));
    break;
  case 4:
    FUN_0175030c(param_1 + 0x2e8);
    piVar1 = *(int **)(param_1 + 0x2e4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_1 + 0x2e4));
    }
    *(undefined1 *)(param_1 + 0x2cc) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2dc));
    break;
  case 5:
    FUN_016fb87c(param_1 + 0x2d8);
    if (*(char *)(param_1 + 0x2c0) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x10))
                (param_1 + 700,*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8));
    }
    goto LAB_017555d8;
  }
  *(undefined1 *)(param_1 + 0x2c9) = 0;
  FUN_017558f4(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x2cd) = 0;
LAB_017555d8:
  *(undefined2 *)(param_1 + 0x2ce) = 0;
  FUN_0182ff70(param_1 + 0x130);
  FUN_01435814(param_1 + 0x284);
  if ((*(char *)(param_1 + 0x2ca) != '\0') &&
     (FUN_0182a8d4(param_1 + 0x114), *(char *)(param_1 + 0x2ca) != '\0')) {
    piVar1 = *(int **)(param_1 + 0x128);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703e40(*(undefined4 *)(param_1 + 0x128));
    }
  }
  *(undefined1 *)(param_1 + 0x2cb) = 0;
  bVar3 = *(char *)(param_1 + 0x2ca) != '\0';
  piVar1 = (int *)0x0;
  if (bVar3) {
    piVar1 = *(int **)(param_1 + 0xf8);
  }
  if (bVar3 && piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    }
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2ca) = 0;
switchD_01755504_caseD_1:
  return;
}

