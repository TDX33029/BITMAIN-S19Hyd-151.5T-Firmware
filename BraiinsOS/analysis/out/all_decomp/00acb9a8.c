// FUN_00acb9a8 @ 00acb9a8 size=508 calls_out=8 calls_in=7
// strings: 

void FUN_00acb9a8(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if (param_1[0xb] != 0) {
        FUN_00c8204c(param_1[0xb],param_1[0xc],1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00654988(param_1 + 9);
      if (param_1[4] != 0) {
        iVar3 = param_1[5];
        piVar5 = (int *)(iVar3 + 0x11c);
        do {
          iVar7 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          FUN_0163b708(iVar3 + 0x108);
        }
        piVar5 = (int *)param_1[5];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d04b1c(param_1[5]);
        }
        iVar3 = param_1[7];
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(iVar3 + 0x84);
        do {
          iVar7 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar7 + -1;
        DataMemoryBarrier(0xb);
        if (iVar7 == 1) {
          FUN_00c74f48(iVar3 + 0x20);
          puVar4 = (uint *)(iVar3 + 0x48);
          DataMemoryBarrier(0xb);
          do {
            uVar6 = *puVar4;
            bVar2 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar2);
          *puVar4 = uVar6 | 2;
          DataMemoryBarrier(0xb);
          if (uVar6 == 0) {
            iVar7 = *(int *)(iVar3 + 0x40);
            *(undefined4 *)(iVar3 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar2);
            *puVar4 = 0;
            if (iVar7 != 0) {
              (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar3 + 0x44));
            }
          }
        }
        piVar5 = (int *)param_1[7];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d04c88(param_1[7]);
        }
      }
      FUN_00c822ec(param_1[3]);
    }
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      piVar5 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[9]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    return;
  }
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*param_1);
    return;
  }
  return;
}

