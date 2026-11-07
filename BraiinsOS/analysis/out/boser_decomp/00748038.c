// FUN_00748038 @ 00748038 size=408 calls_out=8 calls_in=0
// strings: waker missing | assertion failed: prev.ref_count() >= 1

void FUN_00748038(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 local_28 [8];
  
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    uVar5 = uVar2;
    if ((uVar2 & 3) == 0) {
      uVar5 = uVar2 | 1;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar4 = (bool)hasExclusiveAccess(param_1);
        if (bVar4) {
          *param_1 = uVar5 | 0x20;
          bVar4 = true;
          goto LAB_00748094;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar2);
    }
    bVar4 = false;
    ClearExclusiveLocal();
LAB_00748094:
    DataMemoryBarrier(0xb);
    if (bVar4) {
      if ((uVar2 & 3) != 0) {
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *param_1;
          bVar4 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar4);
        *param_1 = uVar3 - 0x40;
        DataMemoryBarrier(0xb);
        if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
        }
        if ((uVar3 & 0xffffffc0) == 0x40) {
          FUN_00737bbc(param_1);
          return;
        }
        return;
      }
      FUN_007370ec(param_1 + 6);
      uVar3 = FUN_019d8b4c();
      if ((uVar3 & 8) == 0) {
        local_28[0] = 2;
        FUN_007423c0(param_1 + 6,local_28);
      }
      else if ((uVar3 & 0x10) != 0) {
        if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
        }
        (**(code **)(param_1[0x14] + 8))(param_1[0x15]);
        uVar3 = FUN_019d8c50(param_1);
        if ((uVar3 & 8) == 0) {
          if (param_1[0x14] != 0) {
            (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
          }
          param_1[0x14] = 0;
        }
      }
      iVar1 = FUN_019d8bc0(param_1,1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00737bbc(param_1);
      return;
    }
  } while( true );
}

