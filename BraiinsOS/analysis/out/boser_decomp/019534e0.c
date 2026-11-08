// FUN_019534e0 @ 019534e0 size=216 calls_out=3 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_019534e0(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  DataMemoryBarrier(0xb);
  uVar4 = *param_1;
  do {
    uVar3 = uVar4;
    uVar6 = uVar3;
    if ((uVar3 & 3) == 0) {
      uVar6 = uVar3 | 1;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar5 = (bool)hasExclusiveAccess(param_1);
        if (bVar5) {
          *param_1 = uVar6 | 0x20;
          bVar5 = true;
          goto LAB_0195353c;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar3);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_0195353c:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar3 & 3) == 0) {
        FUN_0193c018(param_1 + 6);
        FUN_0193e9f0(param_1);
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = uVar4 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar4 & 0xffffffc0) != 0x40) {
        return;
      }
      piVar1 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar5 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar5);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da640(param_1[6]);
      }
      FUN_0193dba8(param_1 + 10);
      FUN_014b1410(param_1 + 0x12);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

