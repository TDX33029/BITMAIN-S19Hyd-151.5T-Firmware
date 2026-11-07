// FUN_008ea1e0 @ 008ea1e0 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_008ea1e0(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_28 [4];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_008e6e04(local_28,uVar3,uVar4);
    if ((local_28[0] & 0xfffffffe) == 0x80000002) {
      FUN_008e89ac(local_28);
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    FUN_008e89ac(local_28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

