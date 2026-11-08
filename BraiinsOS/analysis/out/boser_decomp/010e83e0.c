// FUN_010e83e0 @ 010e83e0 size=684 calls_out=9 calls_in=1
// strings: 

void FUN_010e83e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x90)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x8c);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(*(undefined4 *)(param_1 + 0x8c));
      }
    }
    if (*(char *)(param_1 + 0x88) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x78) + 0x10))
                (param_1 + 0x84,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    }
    goto LAB_010e8698;
  default:
    return;
  case 3:
    piVar2 = *(int **)(param_1 + 0x98);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421350(*(undefined4 *)(param_1 + 0x98));
      }
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x14d) == '\0') {
      puVar4 = (undefined4 *)(param_1 + 0xb8);
LAB_010e8630:
      if (puVar4[2] != 0) {
        (**(code **)(puVar4[2] + 0x10))(puVar4 + 5,puVar4[3],puVar4[4]);
      }
      FUN_00f80320(*puVar4,puVar4[1]);
    }
    else if (*(char *)(param_1 + 0x14d) == '\x03') {
      if (*(char *)(param_1 + 0x148) == '\x03') {
        iVar3 = 0x60;
        if (*(int *)(param_1 + 0x10c) != 3) goto LAB_010e8628;
      }
      else {
        iVar3 = 0x24;
        if (*(char *)(param_1 + 0x148) == '\0') {
LAB_010e8628:
          puVar4 = (undefined4 *)(param_1 + 0xd0 + iVar3);
          goto LAB_010e8630;
        }
      }
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x2ec);
    if (cVar1 == '\x04') {
      if ((*(uint *)(param_1 + 0x2f8) != 5) &&
         ((*(uint *)(param_1 + 0x2f8) < 4 || (*(int *)(param_1 + 0x2fc) != 0)))) {
        (**(code **)(*(int *)(param_1 + 0x2fc) + 0x10))
                  (param_1 + 0x308,*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304)
                  );
      }
    }
    else if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00d33f88(param_1 + 0x98);
        piVar2 = *(int **)(param_1 + 0x104);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01181c68(*(undefined4 *)(param_1 + 0x104));
        }
        piVar2 = *(int **)(param_1 + 0x108);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01182bec(*(undefined4 *)(param_1 + 0x108));
        }
        FUN_01aae24c(param_1 + 0x10c);
        FUN_00d34048(param_1 + 0xb4);
      }
      break;
    }
    FUN_00d33f88(param_1 + 0x2cc);
    FUN_010e8880(param_1 + 0x1a8);
    piVar2 = *(int **)(param_1 + 400);
    *(undefined2 *)(param_1 + 0x2ed) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182bec(*(undefined4 *)(param_1 + 400));
    }
    *(undefined2 *)(param_1 + 0x2ef) = 0;
    *(undefined1 *)(param_1 + 0x2f1) = 0;
  }
  *(undefined1 *)(param_1 + 0x93) = 0;
  bVar5 = *(char *)(param_1 + 0x92) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x88);
  }
  if (bVar5 && cVar1 != '\x02') {
    (**(code **)(*(int *)(param_1 + 0x78) + 0x10))
              (param_1 + 0x84,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    return;
  }
LAB_010e8698:
  FUN_00d33eb4(param_1 + 0x20);
  return;
}

