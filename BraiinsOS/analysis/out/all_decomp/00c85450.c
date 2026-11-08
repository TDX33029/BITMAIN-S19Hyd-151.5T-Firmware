// FUN_00c85450 @ 00c85450 size=860 calls_out=13 calls_in=3
// strings: 

void FUN_00c85450(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = *(char *)((int)param_1 + 0x2e);
  if (cVar1 == '\x03') {
    if (param_1[0xc] != 0) {
      FUN_00c81a4c(param_1[0xc],param_1[0xd],1);
      return;
    }
  }
  else {
    if (cVar1 == '\x04') {
      if (param_1[0x12] != 0) {
        FUN_00c8204c(param_1[0x12],param_1[0x13],1);
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      if ((char)param_1[0x1b1] == '\x03') {
        FUN_00c865f8(param_1 + 0x1a2);
        *(undefined1 *)((int)param_1 + 0x6c5) = 0;
      }
      else if (((char)param_1[0x1b1] == '\0') && (param_1[0x19e] != 0)) {
        thunk_FUN_016d3fb4(param_1[0x19f]);
      }
      piVar3 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[0xe]);
      }
      piVar3 = (int *)param_1[0xd];
      *(undefined1 *)(param_1 + 8) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[0xd]);
      }
      piVar3 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[0xc]);
      }
      *(undefined1 *)((int)param_1 + 0x21) = 0;
      FUN_00acd2b8(param_1 + 0x10);
      iVar6 = param_1[6];
      *(undefined2 *)((int)param_1 + 0x22) = 0;
      piVar3 = (int *)(iVar6 + 0x84);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        FUN_00c747ec(iVar6 + 0x20);
        puVar5 = (uint *)(iVar6 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar6 + 0x40);
          *(undefined4 *)(iVar6 + 0x40) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = 0;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x44));
          }
        }
      }
      piVar3 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d064cc(param_1[6]);
      }
      iVar6 = param_1[5];
      *(undefined2 *)(param_1 + 9) = 0;
      piVar3 = (int *)(iVar6 + 0x84);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        FUN_00c74f48(iVar6 + 0x20);
        puVar5 = (uint *)(iVar6 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar6 + 0x40);
          *(undefined4 *)(iVar6 + 0x40) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = 0;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x44));
          }
        }
      }
      piVar3 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d04c88(param_1[5]);
      }
      iVar6 = *param_1;
      *(undefined1 *)((int)param_1 + 0x26) = 0;
      piVar3 = (int *)(iVar6 + 0x11c);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        FUN_0163b708(iVar6 + 0x108);
      }
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d04b1c(*param_1);
      }
      *(undefined2 *)((int)param_1 + 0x2b) = 0;
      *(undefined4 *)((int)param_1 + 0x27) = 0;
      FUN_00c822ec(param_1[3]);
    }
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
  }
  return;
}

