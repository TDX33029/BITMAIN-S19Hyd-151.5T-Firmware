// FUN_014da788 @ 014da788 size=456 calls_out=11 calls_in=0
// strings: 

void FUN_014da788(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x2c8)) {
  case 0:
    FUN_01466814(param_1 + 0xa0);
    FUN_0145d5e0(param_1 + 600);
    FUN_014d9e44(param_1);
    return;
  default:
    goto switchD_014da7a4_caseD_1;
  case 3:
    puVar5 = *(undefined4 **)(param_1 + 0x2dc);
    uVar4 = *(undefined4 *)(param_1 + 0x2d8);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
LAB_014da858:
      thunk_FUN_016d3fb4(uVar4);
    }
    break;
  case 4:
    FUN_014dd298(param_1 + 0x2e8);
    piVar1 = *(int **)(param_1 + 0x2e4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0x2e4));
    }
    *(undefined1 *)(param_1 + 0x2cc) = 0;
    if (*(int *)(param_1 + 0x2d8) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x2dc);
      goto LAB_014da858;
    }
    break;
  case 5:
    FUN_014d9fa8(param_1 + 0x2d8);
    if (*(char *)(param_1 + 0x2c0) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x10))
                (param_1 + 700,*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8));
    }
    goto LAB_014da8a0;
  }
  *(undefined1 *)(param_1 + 0x2c9) = 0;
  FUN_014c2794(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x2cd) = 0;
LAB_014da8a0:
  *(undefined2 *)(param_1 + 0x2ce) = 0;
  FUN_014d9e44(param_1 + 0x130);
  FUN_0145d5e0(param_1 + 0x284);
  if ((*(char *)(param_1 + 0x2ca) != '\0') &&
     (FUN_0145d900(param_1 + 0x114), *(char *)(param_1 + 0x2ca) != '\0')) {
    piVar1 = *(int **)(param_1 + 0x128);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_1 + 0x128));
    }
  }
  *(undefined1 *)(param_1 + 0x2cb) = 0;
  bVar6 = *(char *)(param_1 + 0x2ca) != '\0';
  piVar1 = (int *)0x0;
  if (bVar6) {
    piVar1 = *(int **)(param_1 + 0xf8);
  }
  if (bVar6 && piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    }
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2ca) = 0;
switchD_014da7a4_caseD_1:
  return;
}

