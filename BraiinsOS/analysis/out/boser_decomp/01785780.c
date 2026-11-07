// FUN_01785780 @ 01785780 size=168 calls_out=1 calls_in=11
// strings: 

int * FUN_01785780(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *local_10;
  undefined2 *local_c;
  
  piVar3 = (int *)0x0;
  if (param_1 != (int *)&DAT_ffffffff) {
    iVar4 = *param_1;
    do {
      if (iVar4 == 0) {
        return (int *)0x0;
      }
      if (iVar4 < 0) {
        local_c = &DAT_0132b6a0;
        local_10 = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_10,&DAT_01d2e890);
      }
      iVar5 = *param_1;
      if (iVar5 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = iVar4 + 1;
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
      iVar4 = iVar5;
    } while (!bVar2);
    piVar3 = param_1;
  }
  return piVar3;
}

