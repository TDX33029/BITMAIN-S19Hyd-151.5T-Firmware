// FUN_019f9154 @ 019f9154 size=424 calls_out=3 calls_in=1
// strings: 

void FUN_019f9154(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  if (param_4 == (undefined1 *)0x0) {
    FUN_019e1fd8(param_2,param_3,0,0,0);
    return;
  }
  if (param_4 == &DAT_3b9aca00) {
    puVar4 = (uint *)(param_1 + 4);
    local_14 = *puVar4;
    if (local_14 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = 2;
          bVar1 = true;
          goto LAB_019f91ac;
        }
        local_14 = *puVar4;
      } while (local_14 == 0);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019f91ac:
    DataMemoryBarrier(0xb);
    if (!bVar1) {
LAB_019f9290:
      if (local_14 == 3) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 4));
        } while (!bVar1);
        *(undefined4 *)(param_1 + 4) = 0;
        DataMemoryBarrier(0xb);
        return;
      }
      puVar2 = &DAT_0058138c;
      puVar3 = &DAT_01d29aa8;
      goto LAB_019f92ec;
    }
    FUN_019e2378(param_2,param_3);
  }
  else {
    puVar4 = (uint *)(param_1 + 4);
    local_14 = *puVar4;
    if (local_14 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = 2;
          bVar1 = true;
          goto LAB_019f9220;
        }
        local_14 = *puVar4;
      } while (local_14 == 0);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019f9220:
    DataMemoryBarrier(0xb);
    if (!bVar1) goto LAB_019f9290;
    FUN_019e1fd8(param_2,param_3,0,0,param_4);
  }
  puVar4 = (uint *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    local_14 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = 0;
  DataMemoryBarrier(0xb);
  if ((local_14 & 0xfffffffe) == 2) {
    return;
  }
  puVar2 = &DAT_005806a3;
  puVar3 = &DAT_01d29a98;
LAB_019f92ec:
  local_c = FUN_012fd02c;
  local_10 = &local_14;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar2,&local_10,puVar3);
}

