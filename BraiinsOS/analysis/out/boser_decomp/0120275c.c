// FUN_0120275c @ 0120275c size=428 calls_out=9 calls_in=0
// strings: waker missing | assertion failed: prev.ref_count() >= 1

void FUN_0120275c(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 local_20 [6];
  
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
          goto LAB_012027b8;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar3);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_012027b8:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar3 & 3) != 0) {
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
        if ((uVar4 & 0xffffffc0) == 0x40) {
          FUN_011e7ee4(param_1);
          return;
        }
        return;
      }
      FUN_011e7298(param_1 + 6);
      uVar4 = FUN_019d8b4c();
      if ((uVar4 & 8) == 0) {
        local_20[0] = 2;
        FUN_00b92048(param_1 + 6,local_20);
      }
      else if ((uVar4 & 0x10) != 0) {
        if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
        }
        (**(code **)(param_1[0x12] + 8))(param_1[0x13]);
        uVar4 = FUN_019d8c50(param_1);
        if ((uVar4 & 8) == 0) {
          if (param_1[0x12] != 0) {
            (**(code **)(param_1[0x12] + 0xc))(param_1[0x13]);
          }
          param_1[0x12] = 0;
        }
      }
      iVar1 = FUN_019dc744(param_1[6],param_1);
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      iVar1 = FUN_019d8bc0(param_1,uVar2);
      if (iVar1 == 0) {
        return;
      }
      FUN_011e7ee4(param_1);
      return;
    }
  } while( true );
}

