// FUN_01743af8 @ 01743af8 size=136 calls_out=3 calls_in=1
// strings: 

int FUN_01743af8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  bool bVar6;
  uint local_d8;
  uint uStack_d4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  while( true ) {
    FUN_017075e4(&local_d8,uVar3,uVar4);
    iVar2 = uStack_d4 - (local_d8 < 3);
    bVar6 = local_d8 - 3 < 2;
    if ((uint)-iVar2 < (uint)bVar6) {
      return -(iVar2 + (uint)!bVar6);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar5;
      bVar6 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar6);
    *puVar5 = uVar1 - 2;
    if (uVar1 < 2) break;
    if (uStack_d4 != local_d8 < 3 || uStack_d4 - (local_d8 < 3) < (uint)(1 < local_d8 - 3)) {
      FUN_01743b80(&local_d8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

