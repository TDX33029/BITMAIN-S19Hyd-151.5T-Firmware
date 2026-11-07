// FUN_012813a0 @ 012813a0 size=444 calls_out=3 calls_in=2
// strings: 

void FUN_012813a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    piVar6 = *(int **)(param_1 + 4);
    piVar5 = piVar6;
    do {
      piVar7 = piVar5 + 3;
      piVar4 = (int *)(*piVar5 + 0xc);
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
LAB_012813fc:
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) goto code_r0x01281408;
        *piVar4 = 2;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(*(int *)(*piVar5 + 8) + 0x18);
        do {
          iVar3 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = 1;
        if (iVar3 == -1) {
          FUN_016d6968(0xf0,piVar5,0x81,1);
        }
        goto LAB_012813d8;
      }
LAB_012813d0:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012813d8:
      piVar5 = piVar7;
    } while (piVar7 != piVar6 + iVar2 * 3);
  }
  local_2c = *(undefined4 **)(param_1 + 0x10);
  local_20 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1c = 0;
  local_24 = param_1 + 0xc;
  local_28 = local_2c + local_20 * 3;
  if (local_20 != 0) {
    do {
      piVar4 = (int *)*local_2c;
      piVar5 = local_2c + 1;
      local_2c = local_2c + 3;
      piVar6 = piVar4 + 3;
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
LAB_012814c0:
        bVar1 = (bool)hasExclusiveAccess(piVar6);
        if (!bVar1) goto code_r0x012814cc;
        *piVar6 = *piVar5;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(piVar4[2] + 0x18);
        do {
          iVar2 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = 1;
        if (iVar2 == -1) {
          FUN_016d6968(0xf0,piVar5,0x81,1);
        }
        goto LAB_012814e0;
      }
LAB_012814d8:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012814e0:
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01284dec(piVar4);
      }
    } while (local_2c != local_28);
  }
  FUN_01286b68(&local_2c);
  return;
code_r0x01281408:
  if (*piVar4 != 0) goto LAB_012813d0;
  goto LAB_012813fc;
code_r0x012814cc:
  if (*piVar6 != 0) goto LAB_012814d8;
  goto LAB_012814c0;
}

