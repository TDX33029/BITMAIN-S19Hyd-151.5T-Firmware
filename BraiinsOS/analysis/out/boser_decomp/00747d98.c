// FUN_00747d98 @ 00747d98 size=408 calls_out=7 calls_in=0
// strings: waker missing | assertion failed: prev.ref_count() >= 1

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00747d98(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 local_28 [5];
  
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
          goto LAB_00747df4;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar3);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_00747df4:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar3 & 3) == 0) {
        FUN_00737030(param_1 + 6);
        uVar4 = FUN_019d8b4c();
        if ((uVar4 & 8) == 0) {
          local_28[0] = 2;
          FUN_00742234(param_1 + 6,local_28);
        }
        else if ((uVar4 & 0x10) != 0) {
          if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
          }
          (**(code **)(param_1[0x14] + 8))(param_1[0x15]);
          uVar4 = FUN_019d8c50(param_1);
          if ((uVar4 & 8) == 0) {
            if (param_1[0x14] != 0) {
              (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
            }
            param_1[0x14] = 0;
          }
        }
        iVar2 = FUN_019d8bc0(param_1,1);
        if (iVar2 == 0) {
          return;
        }
      }
      else {
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
      }
      piVar1 = (int *)param_1[6];
      if (piVar1 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar1;
          bVar5 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar5);
        *piVar1 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(param_1[6],param_1[7]);
        }
      }
      FUN_00737b50(param_1 + 10);
      FUN_014b1410(param_1 + 0x12);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

