// FUN_01805ca4 @ 01805ca4 size=376 calls_out=7 calls_in=0
// strings: 

void FUN_01805ca4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar7 = param_1[2];
  iVar8 = 1;
  if ((uint)(uVar7 < 6) <= (uint)-param_1[3]) {
    iVar8 = uVar7 - 6;
  }
  if (iVar8 == 0) {
    if (*param_1 == 0) {
      FUN_01797ad0(param_1 + 1);
      return;
    }
  }
  else if (iVar8 == 1) {
    if (uVar7 == 5 && param_1[3] == 0) {
      return;
    }
    if (param_1[2] == 4 && param_1[3] == 0) {
      FUN_0142e6dc();
      FUN_0178e884(param_1[0x14]);
      if (param_1[0x16] == 0) {
        if (param_1[0x17] != 0) {
          (**(code **)(param_1[0x17] + 0x10))(param_1 + 0x1a,param_1[0x18],param_1[0x19]);
        }
      }
      else if (param_1[0x16] == 1) {
        iVar8 = param_1[0x18];
        DataMemoryBarrier(0xb);
        piVar3 = (int *)(iVar8 + 8);
        do {
          iVar6 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = 0;
        DataMemoryBarrier(0xb);
        if (iVar6 != 0) {
          puVar4 = (uint *)(iVar8 + 0x14);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar4;
            bVar1 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar1);
          *puVar4 = uVar7 | 2;
          DataMemoryBarrier(0xb);
          if (uVar7 == 0) {
            iVar6 = *(int *)(iVar8 + 0xc);
            *(undefined4 *)(iVar8 + 0xc) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *puVar4 = *puVar4 & 0xfffffffd;
            if (iVar6 != 0) {
              (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar8 + 0x10));
            }
          }
        }
        piVar3 = (int *)param_1[0x18];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014212ac(param_1[0x18]);
        }
        FUN_01785454(param_1 + 0x17);
        FUN_017854e8(param_1 + 0x19);
      }
      else {
        piVar3 = (int *)param_1[0x17];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01436864(param_1[0x17]);
          }
        }
        FUN_01785568(param_1 + 0x18);
      }
      piVar3 = (int *)param_1[0x1e];
      if (piVar3 == (int *)0x0) {
        return;
      }
      if (*piVar3 != 2) {
        FUN_01437430(piVar3[1]);
        piVar2 = (int *)piVar3[1];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a75d8c(piVar3[1]);
        }
      }
      thunk_FUN_01be4678(piVar3);
      return;
    }
    FUN_017cca78(*param_1);
    if (param_1[2] == 3 && param_1[3] == 0) {
      return;
    }
    if ((9 < *(byte *)(param_1 + 0x1d)) && (param_1[0x1f] != 0)) {
      thunk_FUN_01be4678(param_1[0x1e]);
    }
    FUN_01a8c248(param_1 + 0x12);
    FUN_0142e6dc(param_1 + 2);
    FUN_0178e884(param_1[0x22]);
    if (param_1[0x24] != 0) {
                    /* WARNING: Could not recover jumptable at 0x01805e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x24] + 0x10))(param_1 + 0x27,param_1[0x25],param_1[0x26]);
      return;
    }
    iVar8 = param_1[0x25];
    puVar9 = (undefined4 *)param_1[0x26];
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar8);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_01be4678(iVar8);
    }
    FUN_00b7ae3c(param_1[0x27]);
    return;
  }
  return;
}

