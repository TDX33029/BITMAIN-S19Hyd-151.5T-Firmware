// FUN_017ca028 @ 017ca028 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_017ca028(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[4] == '\x03') {
    return;
  }
  if (*param_1 != 0) {
    FUN_017c305c();
  }
  FUN_017720fc(param_1 + 2);
  piVar2 = (int *)param_1[1];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01436864(param_1[1]);
    return;
  }
  return;
}

