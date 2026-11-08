// FUN_0109f5d4 @ 0109f5d4 size=164 calls_out=1 calls_in=0
// strings: 

void FUN_0109f5d4(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  do {
    iVar4 = param_1[1];
    if (iVar4 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar4 + 4);
    piVar5 = (int *)(iVar4 + -8);
    param_1[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    piVar3 = *(int **)(iVar4 + 0xc);
    if (iVar2 == 0) {
      *param_1 = 0;
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (!bVar1) goto LAB_0109f638;
      *piVar3 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0109f638:
      (**(code **)(piVar3[2] + 0x10))();
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105b210(piVar5);
    }
  } while( true );
}

