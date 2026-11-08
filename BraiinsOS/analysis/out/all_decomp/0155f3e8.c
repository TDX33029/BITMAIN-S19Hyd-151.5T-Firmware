// FUN_0155f3e8 @ 0155f3e8 size=208 calls_out=1 calls_in=4
// strings: 

void FUN_0155f3e8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_00000000;
  
  piVar3 = (int *)param_1[1];
  if (*param_1 == 0) {
    if ((((char)param_1[2] == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
  }
  else {
    if ((((char)param_1[2] == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
  }
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar3,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

