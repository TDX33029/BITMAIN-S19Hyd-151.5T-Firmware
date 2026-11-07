// FUN_0163e1c0 @ 0163e1c0 size=344 calls_out=1 calls_in=12
// strings: 

/* WARNING: Removing unreachable block (ram,0x0163e304) */

int FUN_0163e1c0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  piVar3 = param_1 + 2;
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar2 == 2) {
        iVar2 = (**(code **)(*param_2 + 8))(param_2[1]);
        HintYield();
        return iVar2;
      }
      goto LAB_0163e1f8;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_0163e1f8:
  if (iVar2 == 0) {
    uVar6 = (**(code **)*param_2)(param_2[1]);
    iVar2 = *param_1;
    *(undefined8 *)param_1 = uVar6;
    if (*piVar3 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = 0;
          DataMemoryBarrier(0xb);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = (**(code **)(iVar2 + 0xc))(param_1[1]);
          return iVar2;
        }
      } while (*piVar3 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar4 = *param_1;
    iVar5 = param_1[1];
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(param_1[1]);
    }
    iVar2 = LZCOUNT(iVar2);
    if (iVar4 != 0) {
      iVar2 = (**(code **)(iVar4 + 4))(iVar5);
    }
  }
  return iVar2;
}

