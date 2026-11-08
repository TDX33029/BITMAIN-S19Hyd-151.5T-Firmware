// FUN_00b8fed4 @ 00b8fed4 size=216 calls_out=3 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00b8fed4(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  DataMemoryBarrier(0xb);
  uVar4 = *param_1;
  do {
    uVar3 = uVar4;
    uVar5 = uVar3;
    if ((uVar3 & 3) == 0) {
      uVar5 = uVar3 | 1;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar6 = (bool)hasExclusiveAccess(param_1);
        if (bVar6) {
          *param_1 = uVar5 | 0x20;
          bVar6 = true;
          goto LAB_00b8ff30;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar3);
    }
    bVar6 = false;
    ClearExclusiveLocal();
LAB_00b8ff30:
    DataMemoryBarrier(0xb);
    if (bVar6) {
      if ((uVar3 & 3) == 0) {
        FUN_011e7298(param_1 + 6);
        FUN_00b81724(param_1);
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_1;
        bVar6 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar6);
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
      if (piVar1 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar1;
          bVar6 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar6);
        *piVar1 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(param_1[6],param_1[7]);
        }
      }
      if (param_1[10] == 1) {
        bVar6 = param_1[0xc] != 0 || param_1[0xd] != 0;
        uVar4 = 0;
        if (bVar6) {
          uVar4 = param_1[0xe];
        }
        if (bVar6 && uVar4 != 0) {
          FUN_01443048(uVar4,param_1[0xf]);
        }
      }
      FUN_014b1410(param_1 + 0x10);
      thunk_FUN_01be4678(param_1);
      return;
    }
  } while( true );
}

