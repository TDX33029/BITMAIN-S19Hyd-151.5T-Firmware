// FUN_0159ca14 @ 0159ca14 size=124 calls_out=1 calls_in=0
// strings: 

void FUN_0159ca14(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  
  if ((((param_1 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    DAT_018d8a9c = 1;
  }
  iVar2 = DAT_018d8a98;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d8a98);
  } while (!bVar1);
  DAT_018d8a98 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(&DAT_018d8a98,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

