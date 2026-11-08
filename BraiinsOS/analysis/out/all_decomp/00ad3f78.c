// FUN_00ad3f78 @ 00ad3f78 size=516 calls_out=4 calls_in=1
// strings: 

void FUN_00ad3f78(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x6a) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    if (*(int *)(param_1 + 0x30) == -0x80000000) {
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 == 0) goto LAB_00ad4124;
      iVar3 = *(int *)(param_1 + 8);
      iVar4 = 0;
      do {
        if (*(int *)(iVar3 + iVar4) == 1) {
          puVar2 = *(undefined4 **)(iVar3 + iVar4 + 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)();
          }
        }
        else if ((*(int *)(iVar3 + iVar4) == 0) && (*(char *)(iVar3 + iVar4 + 0x174) == '\x03')) {
          FUN_00ad4acc(iVar3 + iVar4 + 8);
        }
        iVar4 = iVar4 + 0x178;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x18);
      FUN_00ceb3d8(puVar2);
      piVar5 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00ceb564(*puVar2);
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      if (iVar3 != 0) {
        iVar6 = *(int *)(param_1 + 0x28) + 0x18;
        do {
          iVar3 = iVar3 + -1;
          if (*(undefined4 **)(iVar6 + -0x10) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar6 + -0x10))();
          }
          iVar6 = iVar6 + 0x10;
        } while (iVar3 != 0);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
      }
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 != 0) {
        piVar5 = *(int **)(param_1 + 0x34);
        do {
          iVar3 = iVar3 + -1;
          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar5)();
          }
          piVar5 = piVar5 + 1;
        } while (iVar3 != 0);
      }
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_00ad4124;
      iVar3 = *(int *)(param_1 + 0x34);
    }
    thunk_FUN_016d3fb4(iVar3);
  }
LAB_00ad4124:
  piVar5 = (int *)(*(int *)(param_1 + 0x5c) + 4);
  for (iVar3 = *(int *)(param_1 + 0x60); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*piVar5 != 0) {
      thunk_FUN_016d3fb4(piVar5[1]);
    }
    piVar5 = piVar5 + 4;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  *(undefined2 *)(param_1 + 0x68) = 0;
  return;
}

