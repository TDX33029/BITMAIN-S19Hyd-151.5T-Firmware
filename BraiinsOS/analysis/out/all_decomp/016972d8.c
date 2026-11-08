// FUN_016972d8 @ 016972d8 size=188 calls_out=2 calls_in=0
// strings: 

void FUN_016972d8(uint *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_00000000;
  
  if (*param_1 == 0x80000001) {
    return;
  }
  if ((*param_1 & 0x7fffffff) == 0) {
    piVar4 = (int *)param_1[3];
    cVar1 = (char)param_1[4];
  }
  else {
    thunk_FUN_016d3fb4(param_1[1]);
    piVar4 = (int *)param_1[3];
    cVar1 = (char)param_1[4];
  }
  if (((cVar1 == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar4,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

