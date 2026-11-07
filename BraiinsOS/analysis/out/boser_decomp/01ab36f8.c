// FUN_01ab36f8 @ 01ab36f8 size=204 calls_out=1 calls_in=1
// strings: 

undefined1 FUN_01ab36f8(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 local_14;
  undefined4 *local_10;
  code *local_c;
  
  puVar4 = (uint *)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  uVar3 = *(uint *)(param_1 + 0x38);
  do {
    uVar2 = uVar3;
    if (param_2 != uVar2 >> 0x1e) {
      return 2;
    }
    switch(uVar2 & 3) {
    case 1:
      goto switchD_01ab372c_caseD_1;
    case 2:
      local_14 = 2;
      local_c = FUN_012fd72c;
      local_10 = &local_14;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005315bb,&local_10,&DAT_01d2ecb0);
    case 3:
      return 2;
    }
    uVar3 = *puVar4;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar2 & 0xfffffffc | 1;
          bVar1 = true;
          goto LAB_01ab3780;
        }
        uVar3 = *puVar4;
      } while (uVar3 == uVar2);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01ab3780:
    DataMemoryBarrier(0xb);
  } while (!bVar1);
switchD_01ab372c_caseD_1:
  return (uVar2 & 0x3ffffffc) == 0;
}

