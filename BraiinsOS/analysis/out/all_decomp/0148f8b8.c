// FUN_0148f8b8 @ 0148f8b8 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_0148f8b8(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_c0 [42];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_014efabc(local_c0,uVar3,uVar4);
    if ((local_c0[0] & 6) == 4) {
      FUN_0148ea0c(local_c0);
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    FUN_0148ea0c(local_c0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

