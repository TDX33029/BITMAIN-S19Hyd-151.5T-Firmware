// FUN_019d72c4 @ 019d72c4 size=376 calls_out=3 calls_in=116
// strings: assertion failed: snapshot.is_complete()signal sender went away | assertion failed: curr.is_join_interested() | assertion failed: curr.is_join_waker_set()

bool FUN_019d72c4(uint *param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar3 = *param_1;
  bVar4 = true;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 0x10) == 0) {
      uVar5 = (*(code *)*param_3)(param_4);
    }
    else {
      if (*(undefined4 **)(param_2 + 8) == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d29c30);
      }
      bVar4 = *(int *)(param_2 + 0xc) == param_4;
      if (bVar4 && *(undefined4 **)(param_2 + 8) == param_3) {
        return !bVar4;
      }
      DataMemoryBarrier(0xb);
      uVar2 = *param_1;
      do {
        if ((uVar2 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: curr.is_join_interested()",0x2b,&DAT_01d28d04);
        }
        if ((uVar2 & 2) != 0) {
          uVar6 = CONCAT44(uVar2,1);
          goto LAB_019d7314;
        }
        if ((uVar2 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: curr.is_join_waker_set()",0x2a,&DAT_01d28d14);
        }
        uVar1 = *param_1;
        uVar3 = uVar2 & 0xffffffed;
        if (uVar1 == uVar2) {
          DataMemoryBarrier(0xb);
          do {
            bVar4 = (bool)hasExclusiveAccess(param_1);
            if (bVar4) {
              *param_1 = uVar3;
              bVar4 = true;
              goto LAB_019d73c0;
            }
            uVar1 = *param_1;
          } while (uVar1 == uVar2);
        }
        bVar4 = false;
        ClearExclusiveLocal();
LAB_019d73c0:
        DataMemoryBarrier(0xb);
        uVar2 = uVar1;
      } while (!bVar4);
      uVar5 = (*(code *)*param_3)(param_4);
    }
    uVar6 = FUN_019d7458(param_1,param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3);
LAB_019d7314:
    bVar4 = false;
    if (((uVar6 & 1) != 0) && (bVar4 = true, (uVar6 & 0x200000000) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: snapshot.is_complete()signal sender went away",0x28,
                   &DAT_01d28c94);
    }
  }
  return bVar4;
}

