// FUN_006fe37c @ 006fe37c size=160 calls_out=3 calls_in=1
// strings: 

undefined1 FUN_006fe37c(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_007143c8();
  piVar3 = (int *)uVar5;
  iVar2 = piVar3[0x15];
  if ((((uVar5 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
    return (char)iVar2;
  }
  return (char)iVar2;
}

