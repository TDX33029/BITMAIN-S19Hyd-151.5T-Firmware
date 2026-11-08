// FUN_01194a94 @ 01194a94 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_01194a94(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_48;
  undefined1 auStack_44 [36];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_01194b1c(&local_48,uVar3,uVar4);
    if ((local_48 & 6) == 4) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
    if (uVar2 < 2) break;
    if ((5 < local_48) || ((1 << (local_48 & 0xff) & 0x36U) == 0)) {
      FUN_00f58dd0(auStack_44);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

