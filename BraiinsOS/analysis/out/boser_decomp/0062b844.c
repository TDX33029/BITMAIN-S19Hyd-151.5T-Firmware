// FUN_0062b844 @ 0062b844 size=308 calls_out=7 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0062b844(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    uVar6 = uVar2;
    if ((uVar2 & 3) == 0) {
      uVar6 = uVar2 | 1;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar5 = (bool)hasExclusiveAccess(param_1);
        if (bVar5) {
          *param_1 = uVar6 | 0x20;
          bVar5 = true;
          goto LAB_0062b8a0;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar2);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_0062b8a0:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar2 & 3) == 0) {
        FUN_00d3e234(param_1 + 6);
        FUN_00d3e290(param_1);
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = uVar3 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar3 & 0xffffffc0) != 0x40) {
        return;
      }
      piVar1 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar1;
        bVar5 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar5);
      *piVar1 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da640(param_1[6]);
      }
      FUN_00d3bbc4(param_1 + 10);
      FUN_014b1410(param_1 + 0x1e);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

