// FUN_01a2a6ec @ 01a2a6ec size=428 calls_out=8 calls_in=0
// strings: waker missing | assertion failed: prev.ref_count() >= 1

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a2a6ec(uint *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_28 [5];
  
  DataMemoryBarrier(0xb);
  uVar5 = *param_1;
  do {
    uVar4 = uVar5;
    uVar7 = uVar4;
    if ((uVar4 & 3) == 0) {
      uVar7 = uVar4 | 1;
    }
    uVar5 = *param_1;
    if (uVar5 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar6 = (bool)hasExclusiveAccess(param_1);
        if (bVar6) {
          *param_1 = uVar7 | 0x20;
          bVar6 = true;
          goto LAB_01a2a748;
        }
        uVar5 = *param_1;
      } while (uVar5 == uVar4);
    }
    bVar6 = false;
    ClearExclusiveLocal();
LAB_01a2a748:
    DataMemoryBarrier(0xb);
    if (bVar6) {
      if ((uVar4 & 3) == 0) {
        FUN_019fac20(param_1 + 6);
        uVar5 = FUN_019d8b4c();
        if ((uVar5 & 8) == 0) {
          local_28[0] = 2;
          FUN_01a0238c(param_1 + 6,local_28);
        }
        else if ((uVar5 & 0x10) != 0) {
          if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
          }
          (**(code **)(param_1[0x14] + 8))(param_1[0x15]);
          uVar5 = FUN_019d8c50(param_1);
          if ((uVar5 & 8) == 0) {
            if (param_1[0x14] != 0) {
              (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
            }
            param_1[0x14] = 0;
          }
        }
        iVar2 = FUN_019dc584(param_1[6],param_1);
        uVar3 = 2;
        if (iVar2 == 0) {
          uVar3 = 1;
        }
        iVar2 = FUN_019d8bc0(param_1,uVar3);
        if (iVar2 == 0) {
          return;
        }
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *param_1;
          bVar6 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar6);
        *param_1 = uVar5 - 0x40;
        DataMemoryBarrier(0xb);
        if (uVar5 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
        }
        if ((uVar5 & 0xffffffc0) != 0x40) {
          return;
        }
      }
      piVar1 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar6 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar6);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da640(param_1[6]);
      }
      FUN_019fb974(param_1 + 10);
      FUN_014b1410(param_1 + 0x12);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

