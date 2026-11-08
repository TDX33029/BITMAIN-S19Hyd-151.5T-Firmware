// FUN_006fe420 @ 006fe420 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_006fe420(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 in_stack_00000000;
  
  uVar4 = FUN_007143c8();
  piVar2 = (int *)uVar4;
  *(undefined1 *)(piVar2 + 0x15) = 1;
  if ((((uVar4 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar2,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

