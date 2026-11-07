// FUN_01b6de24 @ 01b6de24 size=144 calls_out=1 calls_in=5
// strings: 

bool FUN_01b6de24(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  while( true ) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    if (iVar2 == -1) break;
    iVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    iVar1 = *param_1;
    bVar4 = false;
    if ((iVar1 == iVar2) && (bVar4 = (bool)hasExclusiveAccess(param_1), bVar4)) {
      *param_1 = iVar3;
    }
    DataMemoryBarrier(0xb);
    iVar2 = iVar1;
    if (bVar4) {
      return iVar3 == 0;
    }
  }
  return false;
}

