// FUN_0088946c @ 0088946c size=376 calls_out=4 calls_in=2
// strings: 

void FUN_0088946c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == '\0') {
    FUN_00b336f8(param_1);
    goto LAB_008895d8;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 100) == '\x03') {
      iVar3 = param_1 + 0x54;
    }
    else {
      if (*(char *)(param_1 + 100) != '\0') goto LAB_008895cc;
      iVar3 = param_1 + 0x48;
    }
    FUN_00b336f8(iVar3);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00889674(param_1 + 0x4c);
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 != 0) {
      piVar6 = (int *)(iVar3 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
          puVar5 = (uint *)(iVar3 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar3 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x1c));
          }
        }
      }
      piVar6 = *(int **)(param_1 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x48));
      }
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
LAB_008895cc:
  if (*(char *)(param_1 + 0x45) == '\0') {
    return;
  }
LAB_008895d8:
  FUN_007be6b0(param_1 + 0xc);
  return;
}

