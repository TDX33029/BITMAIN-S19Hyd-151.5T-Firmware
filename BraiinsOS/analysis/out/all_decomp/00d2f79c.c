// FUN_00d2f79c @ 00d2f79c size=308 calls_out=3 calls_in=4
// strings: 

int FUN_00d2f79c(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_r6;
  uint *puVar6;
  undefined4 uVar7;
  bool bVar8;
  uint local_40;
  int iStack_3c;
  int *local_28;
  
  uVar7 = *param_1;
  uVar5 = param_1[1];
  puVar6 = (uint *)param_1[2];
  do {
    do {
      do {
        FUN_00c73c28(&local_40,uVar7,uVar5);
        iVar3 = iStack_3c - (uint)(local_40 < 7);
        bVar8 = local_40 - 7 < 2;
        if ((uint)-iVar3 < (uint)bVar8) {
          return -(iVar3 + (uint)!bVar8);
        }
        DataMemoryBarrier(0xb);
        do {
          uVar1 = *puVar6;
          bVar8 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar8);
        *puVar6 = uVar1 - 2;
        if (uVar1 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_015bef44();
        }
      } while (local_40 == 8 && iStack_3c == 0);
      bVar8 = local_40 == 7 && iStack_3c == 0;
      if (local_40 != 7 || iStack_3c != 0) {
        bVar8 = local_28 == (int *)0x0;
        unaff_r6 = local_28;
      }
    } while (bVar8);
    puVar2 = (uint *)(unaff_r6 + 8);
    uVar1 = unaff_r6[8];
    do {
      while( true ) {
        uVar4 = uVar1;
        if ((uVar4 & 4) != 0) goto LAB_00d2f878;
        uVar1 = *puVar2;
        if (uVar1 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar8 = (bool)hasExclusiveAccess(puVar2);
      if (bVar8) {
        *puVar2 = uVar4 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar8);
LAB_00d2f878:
    if ((uVar4 & 5) == 1) {
      (**(code **)(unaff_r6[6] + 8))(unaff_r6[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *unaff_r6;
      bVar8 = (bool)hasExclusiveAccess(unaff_r6);
    } while (!bVar8);
    *unaff_r6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4380(local_28);
    }
  } while( true );
}

