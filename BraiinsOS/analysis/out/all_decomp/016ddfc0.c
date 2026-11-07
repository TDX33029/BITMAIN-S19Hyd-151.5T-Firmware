// FUN_016ddfc0 @ 016ddfc0 size=152 calls_out=0 calls_in=5
// strings: 

void FUN_016ddfc0(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 100;
  do {
    if ((param_2 != (int *)0x0) && (*param_2 != 0)) goto LAB_016ddfea;
    if (*param_1 != param_3) {
      return;
    }
    DataMemoryBarrier(0x1b);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_2 != (int *)0x0) {
LAB_016ddfea:
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_2);
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = *param_2 + 1;
    DataMemoryBarrier(0x1b);
  }
  while (*param_1 == param_3) {
    software_interrupt(0);
    if (param_1 == (int *)0xffffffda) {
      software_interrupt(0);
    }
  }
  if (param_2 != (int *)0x0) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_2);
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = *param_2 + -1;
    DataMemoryBarrier(0x1b);
  }
  return;
}

