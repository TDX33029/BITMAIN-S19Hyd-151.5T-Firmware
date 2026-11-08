// FUN_006550a4 @ 006550a4 size=316 calls_out=5 calls_in=2
// strings: 

void FUN_006550a4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x48) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x44);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x20);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x24);
        if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006551dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
          return;
        }
      }
    }
    return;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x18) == '\x03') {
      piVar2 = *(int **)(param_1 + 0x14);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar5 = (bool)hasExclusiveAccess(piVar2);
        if (bVar5) {
          *piVar2 = 0x84;
          goto LAB_0065516c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
    else if (*(char *)(param_1 + 0x18) == '\0') {
      piVar2 = *(int **)(param_1 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016592f4(*(undefined4 *)(param_1 + 0x10));
      }
    }
  }
LAB_0065516c:
  pcVar4 = *(char **)(param_1 + 8);
  if (*pcVar4 == '\0') {
    bVar5 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar5) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00655190;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_00655190:
  FUN_0128236c(pcVar4);
  FUN_0163af68(pcVar4,1,pcVar4);
  return;
}

