// FUN_019f79e0 @ 019f79e0 size=336 calls_out=1 calls_in=14
// strings: 

/* WARNING: Removing unreachable block (ram,0x019f7b1c) */

void FUN_019f79e0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  piVar4 = param_1 + 2;
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      goto LAB_019f7a14;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
LAB_019f7a14:
  DataMemoryBarrier(0xb);
  if (iVar2 == 2) {
    (**(code **)(*param_2 + 8))(param_2[1]);
    HintYield();
  }
  else if (iVar2 == 0) {
    uVar6 = (**(code **)*param_2)(param_2[1]);
    iVar2 = *param_1;
    *(undefined8 *)param_1 = uVar6;
    if (*piVar4 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *piVar4 = 0;
          DataMemoryBarrier(0xb);
          if (iVar2 == 0) {
            return;
          }
          (**(code **)(iVar2 + 0xc))(param_1[1]);
          return;
        }
      } while (*piVar4 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar3 = *param_1;
    iVar5 = param_1[1];
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(param_1[1]);
    }
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(iVar5);
    }
  }
  return;
}

