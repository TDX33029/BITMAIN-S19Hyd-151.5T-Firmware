// FUN_0140147c @ 0140147c size=448 calls_out=3 calls_in=1
// strings: 

void FUN_0140147c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    piVar7 = *(int **)(param_1 + 4);
    piVar6 = piVar7;
    do {
      piVar8 = piVar6 + 3;
      piVar4 = (int *)(*piVar6 + 0x14);
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
LAB_014014c4:
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) goto code_r0x014014d0;
        *piVar4 = 2;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar6 = (int *)(*(int *)(*piVar6 + 0x10) + 0x18);
        do {
          iVar3 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = 1;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar6,0x81,1);
        }
        goto LAB_014014e4;
      }
LAB_014014dc:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_014014e4:
      piVar6 = piVar8;
    } while (piVar8 != piVar7 + iVar2 * 3);
  }
  local_2c = *(undefined4 **)(param_1 + 0x10);
  local_20 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1c = 0;
  local_24 = param_1 + 0xc;
  local_28 = local_2c + local_20 * 3;
  puVar5 = local_2c;
  if (local_20 != 0) {
    do {
      puVar5 = local_2c + 3;
      piVar6 = (int *)*local_2c;
      if (piVar6 == (int *)0x0) break;
      piVar7 = piVar6 + 5;
      if (*piVar7 == 0) {
        DataMemoryBarrier(0xb);
LAB_01401594:
        bVar1 = (bool)hasExclusiveAccess(piVar7);
        if (!bVar1) goto code_r0x014015a0;
        *piVar7 = local_2c[1];
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar7 = (int *)(piVar6[4] + 0x18);
        do {
          iVar2 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = 1;
        local_2c = puVar5;
        if (iVar2 == -1) {
          FUN_01be6c3c(0xf0,piVar7,0x81,1);
        }
        goto LAB_014015b4;
      }
LAB_014015ac:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      local_2c = puVar5;
LAB_014015b4:
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01319d44(piVar6);
      }
      puVar5 = local_2c;
    } while (local_2c != local_28);
  }
  local_2c = puVar5;
  FUN_01409afc(&local_2c);
  return;
code_r0x014014d0:
  if (*piVar4 != 0) goto LAB_014014dc;
  goto LAB_014014c4;
code_r0x014015a0:
  if (*piVar7 != 0) goto LAB_014015ac;
  goto LAB_01401594;
}

