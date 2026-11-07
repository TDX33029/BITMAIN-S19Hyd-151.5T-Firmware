// FUN_0062a504 @ 0062a504 size=420 calls_out=9 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1 | waker missing

void FUN_0062a504(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 local_30 [10];
  
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
          goto LAB_0062a560;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar2);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_0062a560:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar2 & 3) == 0) {
        FUN_00d41a4c(param_1 + 6);
        uVar3 = FUN_019d8b4c();
        if ((uVar3 & 8) == 0) {
          local_30[0] = 2;
          FUN_00f318b4(param_1 + 6,local_30);
        }
        else if ((uVar3 & 0x10) != 0) {
          if (param_1[0x16] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
          }
          (**(code **)(param_1[0x16] + 8))(param_1[0x17]);
          uVar3 = FUN_019d8c50(param_1);
          if ((uVar3 & 8) == 0) {
            if (param_1[0x16] != 0) {
              (**(code **)(param_1[0x16] + 0xc))(param_1[0x17]);
            }
            param_1[0x16] = 0;
          }
        }
        iVar1 = FUN_019dc584(param_1[6],param_1);
        uVar4 = 2;
        if (iVar1 == 0) {
          uVar4 = 1;
        }
        iVar1 = FUN_019d8bc0(param_1,uVar4);
        if (iVar1 != 0) {
          FUN_00d3919c(param_1);
        }
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
      if ((uVar3 & 0xffffffc0) == 0x40) {
        FUN_00d3919c(param_1);
        return;
      }
      return;
    }
  } while( true );
}

