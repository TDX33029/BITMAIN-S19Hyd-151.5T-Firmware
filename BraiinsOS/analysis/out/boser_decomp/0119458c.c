// FUN_0119458c @ 0119458c size=132 calls_out=3 calls_in=1
// strings: 

void FUN_0119458c(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_01194610(&local_30,uVar3,uVar4);
    if (local_30 - 3 < 2) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    if ((4 < local_30) || ((1 << (local_30 & 0xff) & 0x19U) == 0)) {
      FUN_019bb7e0(uStack_2c,uStack_28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

