// FUN_00629c44 @ 00629c44 size=520 calls_out=12 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1 | waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00629c44(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_28 [5];
  
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    uVar7 = uVar2;
    if ((uVar2 & 3) == 0) {
      uVar7 = uVar2 | 1;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar6 = (bool)hasExclusiveAccess(param_1);
        if (bVar6) {
          *param_1 = uVar7 | 0x20;
          bVar6 = true;
          goto LAB_00629ca0;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar2);
    }
    bVar6 = false;
    ClearExclusiveLocal();
LAB_00629ca0:
    DataMemoryBarrier(0xb);
    if (bVar6) {
      if ((uVar2 & 3) == 0) {
        FUN_00d41324(param_1 + 6);
        uVar3 = FUN_019d8b4c();
        if ((uVar3 & 8) == 0) {
          local_28[0] = 2;
          FUN_00f31ef4(param_1 + 6,local_28);
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
        iVar4 = FUN_019dc584(param_1[6],param_1);
        uVar5 = 2;
        if (iVar4 == 0) {
          uVar5 = 1;
        }
        iVar4 = FUN_019d8bc0(param_1,uVar5);
        if (iVar4 == 0) {
          return;
        }
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *param_1;
          bVar6 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar6);
        *param_1 = uVar3 - 0x40;
        DataMemoryBarrier(0xb);
        if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
        }
        if ((uVar3 & 0xffffffc0) != 0x40) {
          return;
        }
      }
      piVar1 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar1;
        bVar6 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar6);
      *piVar1 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da640(param_1[6]);
      }
      FUN_00d3a82c(param_1 + 10);
      FUN_014b1410(param_1 + 0x12);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

