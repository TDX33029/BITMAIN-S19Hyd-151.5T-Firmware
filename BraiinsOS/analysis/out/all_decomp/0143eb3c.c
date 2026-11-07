// FUN_0143eb3c @ 0143eb3c size=476 calls_out=5 calls_in=4
// strings: 

void FUN_0143eb3c(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_r6;
  
  if ((*param_1 & 6) == 4) {
    return;
  }
  FUN_0141cb18(param_1);
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_0142bf80(param_1);
  FUN_0141c93c();
  if (param_1[0x26] == 0) {
    if (param_1[0x27] != 0) {
      unaff_r6 = (int *)param_1[0x28];
    }
    if (param_1[0x27] != 0 && unaff_r6 != (int *)0x0) {
      puVar2 = (uint *)(unaff_r6 + 0x2e);
      uVar4 = unaff_r6[0x2e];
      do {
        while( true ) {
          uVar5 = uVar4;
          if ((uVar5 & 4) != 0) goto LAB_0143ed3c;
          uVar4 = *puVar2;
          if (uVar4 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0143ed3c:
      if ((uVar5 & 5) == 1) {
        (**(code **)(unaff_r6[0x2c] + 8))(unaff_r6[0x2d]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *unaff_r6;
        bVar1 = (bool)hasExclusiveAccess(unaff_r6);
      } while (!bVar1);
      *unaff_r6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143e860(param_1[0x28]);
        return;
      }
    }
  }
  else {
    if (param_1[0x27] != 0) {
      unaff_r6 = (int *)param_1[0x28];
    }
    if (param_1[0x27] != 0 && unaff_r6 != (int *)0x0) {
      puVar2 = (uint *)(unaff_r6 + 0x20);
      uVar4 = unaff_r6[0x20];
      do {
        while( true ) {
          uVar5 = uVar4;
          if ((uVar5 & 4) != 0) goto LAB_0143ec7c;
          uVar4 = *puVar2;
          if (uVar4 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0143ec7c:
      if ((uVar5 & 5) == 1) {
        (**(code **)(unaff_r6[0x1e] + 8))(unaff_r6[0x1f]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *unaff_r6;
        bVar1 = (bool)hasExclusiveAccess(unaff_r6);
      } while (!bVar1);
      *unaff_r6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143ee24(param_1[0x28]);
        return;
      }
      return;
    }
  }
  return;
}

