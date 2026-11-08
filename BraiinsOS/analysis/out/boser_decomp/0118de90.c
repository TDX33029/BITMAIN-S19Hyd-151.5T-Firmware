// FUN_0118de90 @ 0118de90 size=416 calls_out=4 calls_in=1
// strings: 

void FUN_0118de90(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x41);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x30);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_0118df14;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x58);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x9c) == '\x03') {
        if (*(char *)(param_1 + 0x98) == '\x03') {
          piVar2 = *(int **)(param_1 + 0x94);
          if (*piVar2 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar5 = (bool)hasExclusiveAccess(piVar2);
            if (bVar5) {
              *piVar2 = 0x84;
              goto LAB_0118e004;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar2[2] + 0x10))();
        }
        else if (*(char *)(param_1 + 0x98) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
        }
LAB_0118e004:
        puVar4 = (undefined4 *)(param_1 + 0x7c);
LAB_0118e008:
        FUN_019bb7e0(*puVar4,puVar4[1]);
      }
      else if (*(char *)(param_1 + 0x9c) == '\0') {
        puVar4 = (undefined4 *)(param_1 + 0x70);
        goto LAB_0118e008;
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
      if (*(int *)(param_1 + 0x4c) == -0x80000000) {
        FUN_00eab9a0(param_1 + 0x4c);
      }
    }
    else {
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x80);
      }
      if (bVar5 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x7c) == '\x03') {
          piVar2 = *(int **)(param_1 + 0x78);
          if (*piVar2 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar5 = (bool)hasExclusiveAccess(piVar2);
            if (bVar5) {
              *piVar2 = 0x84;
              goto LAB_0118ded0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar2[2] + 0x10))();
        }
        else if (*(char *)(param_1 + 0x7c) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
        }
      }
    }
  }
LAB_0118ded0:
  FUN_00668c84(*(undefined4 *)(param_1 + 0x28));
  puVar4 = (undefined4 *)(param_1 + 0x10);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_0118df14:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*puVar4,puVar4[1]);
    return;
  }
  return;
}

