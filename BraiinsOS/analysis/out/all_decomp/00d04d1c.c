// FUN_00d04d1c @ 00d04d1c size=304 calls_out=3 calls_in=1
// strings: 

void FUN_00d04d1c(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  uint uStack_34;
  int *local_20;
  
  do {
    do {
      FUN_00c73c28(&local_38,param_1 + 0x50,param_1);
      piVar2 = local_20;
      if (uStack_34 == local_38 < 7 && (uint)(1 < local_38 - 7) <= uStack_34 - (local_38 < 7)) {
        iVar4 = *(int *)(param_1 + 0x54);
        do {
          iVar4 = *(int *)(iVar4 + 0x204);
          thunk_FUN_016d3fb4();
        } while (iVar4 != 0);
        if (*(int *)(param_1 + 0x20) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00d04e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(*(undefined4 *)(param_1 + 0x24));
        return;
      }
    } while (local_20 == (int *)0x0);
    puVar3 = (uint *)(local_20 + 8);
    uVar6 = local_20[8];
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00d04dc0;
        uVar6 = *puVar3;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00d04dc0:
    if ((uVar5 & 5) == 1) {
      (**(code **)(local_20[6] + 8))(local_20[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4380(local_20);
    }
  } while( true );
}

