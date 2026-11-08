// FUN_01a368f8 @ 01a368f8 size=168 calls_out=3 calls_in=6
// strings: 

char FUN_01a368f8(int *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  iVar2 = FUN_014295d0(param_1 + 2);
  if (iVar2 == 0) {
    cVar3 = (char)param_1[7];
    *(undefined1 *)(param_1 + 7) = 2;
    if (cVar3 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2 + -1;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2 + -1;
    cVar3 = '\x02';
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38e68(param_1);
  }
  return cVar3;
}

