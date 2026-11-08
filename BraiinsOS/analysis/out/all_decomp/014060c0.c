// FUN_014060c0 @ 014060c0 size=420 calls_out=3 calls_in=6
// strings: 

void FUN_014060c0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r12;
  
  FUN_0141c93c();
  iVar2 = *param_1;
  iVar4 = param_1[1];
  if (iVar2 == 0) {
    iVar2 = extraout_r12;
    if (iVar4 != 0) {
      iVar2 = param_1[2];
    }
    if (iVar4 != 0 && iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0xb8);
      uVar6 = *(uint *)(iVar2 + 0xb8);
      do {
        while( true ) {
          uVar7 = uVar6;
          if ((uVar7 & 4) != 0) goto LAB_0140620c;
          uVar6 = *puVar5;
          if (uVar6 == uVar7) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar7 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0140620c:
      if ((uVar7 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0xb0) + 8))(*(undefined4 *)(iVar2 + 0xb4));
      }
      piVar3 = (int *)param_1[2];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143e860(param_1[2]);
          return;
        }
      }
    }
  }
  else {
    if (iVar4 != 0) {
      iVar2 = param_1[2];
    }
    if (iVar4 != 0 && iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x80);
      uVar6 = *(uint *)(iVar2 + 0x80);
      do {
        while( true ) {
          uVar7 = uVar6;
          if ((uVar7 & 4) != 0) goto LAB_01406144;
          uVar6 = *puVar5;
          if (uVar6 == uVar7) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar7 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_01406144:
      if ((uVar7 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x78) + 8))(*(undefined4 *)(iVar2 + 0x7c));
      }
      piVar3 = (int *)param_1[2];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143ee24(param_1[2]);
          return;
        }
        return;
      }
    }
  }
  return;
}

