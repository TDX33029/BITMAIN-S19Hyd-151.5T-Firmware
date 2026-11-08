// FUN_0148f704 @ 0148f704 size=136 calls_out=3 calls_in=0
// strings: 

int FUN_0148f704(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  bool bVar5;
  uint local_d8;
  uint uStack_d4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar4 = (uint *)param_1[2];
  while( true ) {
    FUN_014efd24(&local_d8,uVar2,uVar3);
    uVar1 = uStack_d4 - (local_d8 < 3);
    bVar5 = 1 < local_d8 - 3;
    if (uVar1 == 0 && bVar5 <= uVar1) {
      return uVar1 - !bVar5;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar4;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar1 - 2;
    if (uVar1 < 2) break;
    if (uStack_d4 != local_d8 < 3 || uStack_d4 - (local_d8 < 3) < (uint)(1 < local_d8 - 3)) {
      FUN_0148da18(&local_d8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

