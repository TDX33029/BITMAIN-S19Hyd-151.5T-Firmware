// FUN_0093e630 @ 0093e630 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_0093e630(undefined4 *param_1)

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
    FUN_01854aa0(local_c0,uVar3,uVar4);
    if ((local_c0[0] & 6) == 4) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    if ((local_c0[0] & 6) != 4) {
      FUN_0093e6a8(local_c0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

