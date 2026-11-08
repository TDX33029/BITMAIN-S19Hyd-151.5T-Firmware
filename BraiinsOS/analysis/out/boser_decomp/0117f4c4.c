// FUN_0117f4c4 @ 0117f4c4 size=160 calls_out=1 calls_in=14
// strings: 

void FUN_0117f4c4(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *local_10;
  undefined2 *local_c;
  
  piVar5 = (int *)(param_1 + 4);
  do {
    iVar3 = *piVar5;
    while (iVar3 != -1) {
      if (iVar3 < 0) {
        local_c = &DAT_0132b6a0;
        local_10 = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_10,&DAT_01d2e880);
      }
      iVar4 = *piVar5;
      if (iVar4 == iVar3) {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *piVar5 = iVar3 + 1;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      iVar3 = iVar4;
      if (bVar2) {
        return;
      }
    }
    HintYield();
  } while( true );
}

