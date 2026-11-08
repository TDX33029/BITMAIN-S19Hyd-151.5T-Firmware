// FUN_016343a0 @ 016343a0 size=776 calls_out=2 calls_in=80
// strings: assertion failed: curr.is_join_interested() | assertion failed: !curr.is_join_waker_set() | assertion failed: curr.is_join_interested() | assertion failed: curr.is_join_waker_set() | assertion failed: snapshot.is_join_interested()

undefined4 FUN_016343a0(uint *param_1,int param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 2) != 0) {
    return 1;
  }
  if ((uVar3 & 0x10) == 0) {
    uVar4 = (*(code *)*param_3)(param_4);
    if ((uVar3 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: snapshot.is_join_interested()",0x2f,&DAT_018ac3b0);
    }
    if (*(int *)(param_2 + 8) != 0) {
      (**(code **)(*(int *)(param_2 + 8) + 0xc))(*(undefined4 *)(param_2 + 0xc));
    }
    *(undefined8 *)(param_2 + 8) = uVar4;
    DataMemoryBarrier(0xb);
    uVar3 = *param_1;
    while ((uVar3 & 8) != 0) {
      if ((uVar3 & 0x10) != 0) goto LAB_01634624;
      if ((uVar3 & 2) != 0) goto LAB_016345dc;
      uVar2 = *param_1;
      if (uVar2 == uVar3) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(param_1);
          if (bVar1) {
            *param_1 = uVar3 | 0x10;
            bVar1 = true;
            goto LAB_0163441c;
          }
          uVar2 = *param_1;
        } while (uVar2 == uVar3);
      }
      bVar1 = false;
      ClearExclusiveLocal();
LAB_0163441c:
      DataMemoryBarrier(0xb);
      uVar3 = uVar2;
      if (bVar1) {
        return 0;
      }
    }
LAB_0163460c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: curr.is_join_interested()",0x2b,&DAT_018ad20c);
  }
  if (*(undefined4 **)(param_2 + 8) == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018aceb4);
  }
  if (*(int *)(param_2 + 0xc) == param_4 && *(undefined4 **)(param_2 + 8) == param_3) {
    return 0;
  }
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  while( true ) {
    if ((uVar3 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: curr.is_join_interested()",0x2b,&DAT_018ad1dc);
    }
    if ((uVar3 & 2) != 0) break;
    if ((uVar3 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: curr.is_join_waker_set()",0x2a,&DAT_018ad1ec);
    }
    uVar2 = *param_1;
    if (uVar2 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar3 & 0xffffffed;
          DataMemoryBarrier(0xb);
          uVar4 = (*(code *)*param_3)(param_4);
          if (*(int *)(param_2 + 8) != 0) {
            (**(code **)(*(int *)(param_2 + 8) + 0xc))(*(undefined4 *)(param_2 + 0xc));
          }
          *(undefined8 *)(param_2 + 8) = uVar4;
          DataMemoryBarrier(0xb);
          uVar3 = *param_1;
          goto LAB_01634574;
        }
        uVar2 = *param_1;
      } while (uVar2 == uVar3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar3 = uVar2;
  }
LAB_016345fc:
  if ((uVar3 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00413095,0x28,&DAT_018ac3c0);
  }
  return 1;
LAB_01634574:
  if ((uVar3 & 8) == 0) goto LAB_0163460c;
  if ((uVar3 & 0x10) != 0) {
LAB_01634624:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !curr.is_join_waker_set()",0x2b,&DAT_018ad21c);
  }
  if ((uVar3 & 2) != 0) goto LAB_016345dc;
  uVar2 = *param_1;
  if (uVar2 == uVar3) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar3 | 0x10;
        DataMemoryBarrier(0xb);
        return 0;
      }
      uVar2 = *param_1;
    } while (uVar2 == uVar3);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar3 = uVar2;
  goto LAB_01634574;
LAB_016345dc:
  if (*(int *)(param_2 + 8) != 0) {
    (**(code **)(*(int *)(param_2 + 8) + 0xc))(*(undefined4 *)(param_2 + 0xc));
  }
  *(undefined4 *)(param_2 + 8) = 0;
  goto LAB_016345fc;
}

