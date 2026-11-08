// FUN_00b217e8 @ 00b217e8 size=448 calls_out=4 calls_in=1
// strings: 

void FUN_00b217e8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x6a) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    if (*(int *)(param_1 + 0x30) == -0x80000000) {
      iVar6 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      iVar2 = iVar7 + 1;
      iVar3 = iVar6;
      while (iVar2 = iVar2 + -1, iVar2 != 0) {
        FUN_00b22f80(iVar3);
        iVar3 = iVar3 + 0x178;
      }
      if (iVar7 == 0) goto LAB_00b21950;
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 0x18);
      FUN_00ceb3d8(puVar5);
      piVar4 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00ceb564(*puVar5);
      }
      iVar6 = *(int *)(param_1 + 0x2c);
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x28) + 0x18;
        do {
          iVar6 = iVar6 + -1;
          if (*(undefined4 **)(iVar3 + -0x10) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar3 + -0x10))();
          }
          iVar3 = iVar3 + 0x10;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
      }
      iVar6 = *(int *)(param_1 + 0x38);
      if (iVar6 != 0) {
        piVar4 = *(int **)(param_1 + 0x34);
        do {
          iVar6 = iVar6 + -1;
          if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar4)();
          }
          piVar4 = piVar4 + 1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_00b21950;
      iVar6 = *(int *)(param_1 + 0x34);
    }
    thunk_FUN_016d3fb4(iVar6);
  }
LAB_00b21950:
  piVar4 = (int *)(*(int *)(param_1 + 0x5c) + 4);
  for (iVar6 = *(int *)(param_1 + 0x60); iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
    piVar4 = piVar4 + 4;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  *(undefined2 *)(param_1 + 0x68) = 0;
  return;
}

