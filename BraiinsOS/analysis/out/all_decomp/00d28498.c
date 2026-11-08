// FUN_00d28498 @ 00d28498 size=500 calls_out=8 calls_in=4
// strings: 

void FUN_00d28498(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
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
      FUN_00cefb4c(param_1 + 9);
      if (param_1[4] != 0) {
        piVar7 = (int *)param_1[5];
        piVar4 = piVar7 + 0x47;
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          FUN_0163b708(piVar7 + 0x42);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d04b1c(param_1[5]);
        }
        piVar7 = (int *)param_1[7];
        DataMemoryBarrier(0xb);
        piVar4 = piVar7 + 0x21;
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + -1;
        DataMemoryBarrier(0xb);
        if (iVar5 == 1) {
          FUN_00c74f48(piVar7 + 8);
          puVar3 = (uint *)(piVar7 + 0x12);
          DataMemoryBarrier(0xb);
          do {
            uVar6 = *puVar3;
            bVar2 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar2);
          *puVar3 = uVar6 | 2;
          DataMemoryBarrier(0xb);
          if (uVar6 == 0) {
            iVar5 = piVar7[0x10];
            piVar7[0x10] = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar3);
            } while (!bVar2);
            *puVar3 = 0;
            if (iVar5 != 0) {
              (**(code **)(iVar5 + 4))(piVar7[0x11]);
            }
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d04c88(param_1[7]);
        }
      }
      FUN_00c822ec(param_1[3]);
    }
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      piVar4 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[9]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    return;
  }
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*param_1);
    return;
  }
  return;
}

