// FUN_01347614 @ 01347614 size=68 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01347614(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(*param_1 + 0x18);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 1;
  if (iVar3 == -1) {
    FUN_01be6c3c(0xf0,piVar2,0x81,1);
  }
  return 0;
}

