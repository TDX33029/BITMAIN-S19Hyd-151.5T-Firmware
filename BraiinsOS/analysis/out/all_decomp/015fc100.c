// FUN_015fc100 @ 015fc100 size=200 calls_out=1 calls_in=4
// strings: 

void FUN_015fc100(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  piVar5 = (int *)*param_1;
  *param_1 = 0;
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 != 1) break;
    DataMemoryBarrier(0xb);
    iVar2 = piVar5[2];
    puVar7 = (undefined4 *)piVar5[3];
    piVar6 = (int *)piVar5[4];
    if (piVar5 != (int *)0xffffffff) {
      piVar5 = piVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
    if (iVar2 == 0) {
      return;
    }
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar2);
    }
    piVar5 = piVar6;
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  return;
}

