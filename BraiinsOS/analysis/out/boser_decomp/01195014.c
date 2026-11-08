// FUN_01195014 @ 01195014 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_01195014(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  byte local_40 [40];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_01195084(local_40,uVar3,uVar4);
    if (local_40[0] - 5 < 2) {
      FUN_01195230(local_40);
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    FUN_01195230(local_40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

