// FUN_01703ed4 @ 01703ed4 size=720 calls_out=9 calls_in=2
// strings: 

void FUN_01703ed4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  piVar2 = *(int **)(param_1 + 0xfc);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01853218(*(undefined4 *)(param_1 + 0xfc));
    }
  }
  if (1 < *(uint *)(param_1 + 0xf0)) {
    piVar2 = *(int **)(param_1 + 0xf4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    }
  }
  piVar2 = *(int **)(param_1 + 0x108);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
    }
  }
  if (*(int *)(param_1 + 0x78) == 0x3b9aca01) {
    uVar5 = *(undefined4 *)(param_1 + 0x70);
    puVar6 = *(undefined4 **)(param_1 + 0x74);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x9c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143c7bc(*(undefined4 *)(param_1 + 0x9c));
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0,0,unaff_r4,
                   unaff_r5);
    }
    piVar2 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_1 + 0xa8));
    }
    piVar2 = *(int **)(param_1 + 0xac);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_1 + 0xac));
    }
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703e40(*(undefined4 *)(param_1 + 0xb0));
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x88) + 0x10))
                (param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    }
    piVar2 = *(int **)(param_1 + 0x80);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0,0,unaff_r4,
                 unaff_r5);
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017045b0(*(undefined4 *)(param_1 + 0xe4));
      return;
    }
  }
  return;
}

