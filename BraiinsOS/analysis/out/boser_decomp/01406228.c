// FUN_01406228 @ 01406228 size=380 calls_out=8 calls_in=5
// strings: 

void FUN_01406228(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  
  if (param_1 == 0) {
    piVar4 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 1) {
      FUN_0140363c(param_2);
      piVar4 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar2 != '\0') {
        FUN_01403248(param_2);
        goto LAB_01406394;
      }
    }
  }
  else if (param_1 == 1) {
    piVar4 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 1) {
      puVar5 = (uint *)(param_2 + 8);
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar3 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar3 & 1) == 0) {
        FUN_0140739c(param_2 + 0x10);
      }
      piVar4 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar2 != '\0') {
        FUN_01407890(param_2);
        FUN_014031c8(param_2 + 0x12);
        goto LAB_01406394;
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 != 1) {
      return;
    }
    FUN_014013ac(param_2 + 2);
    piVar4 = param_2 + 0x11;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar2 != '\0') {
      FUN_01403194(param_2 + 2);
LAB_01406394:
      thunk_FUN_01be4678(param_2);
      return;
    }
  }
  return;
}

