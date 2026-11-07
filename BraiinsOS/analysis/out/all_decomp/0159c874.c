// FUN_0159c874 @ 0159c874 size=372 calls_out=5 calls_in=0
// strings: 

void FUN_0159c874(uint param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_24;
  undefined4 **local_20;
  undefined4 **local_1c;
  
  if ((param_1 & 1) != 0) {
    local_24 = &DAT_018d8a98;
    DataMemoryBarrier(0xb);
    if (DAT_018d8ab4 != 0) {
      local_20 = &local_24;
      local_1c = &local_20;
      FUN_015eedc4(&DAT_018d8ab4,0,&local_1c,&DAT_018a9f9c,&DAT_018a9fb0);
    }
    do {
      if (DAT_018d8a98 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(&DAT_018d8a98);
        goto LAB_0159c8c4;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18d8a98);
    } while (!bVar1);
    DAT_018d8a98 = 1;
    DataMemoryBarrier(0xb);
LAB_0159c8c4:
    uVar5 = 0;
    if ((DAT_018dd988 & 0x7fffffff) != 0) {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
    }
    if (DAT_018d8aac == DAT_018d8aa0) {
      FUN_0159c6c0();
    }
    uVar4 = DAT_018d8aa8 + DAT_018d8aac;
    DAT_018d8aac = DAT_018d8aac + 1;
    uVar3 = uVar4 - DAT_018d8aa0;
    if (uVar4 < DAT_018d8aa0) {
      uVar3 = uVar4;
    }
    *(undefined4 *)(DAT_018d8aa4 + uVar3 * 4) = param_2;
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)
       ) {
      DAT_018d8a9c = 1;
    }
    iVar2 = DAT_018d8a98;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18d8a98);
    } while (!bVar1);
    DAT_018d8a98 = 0;
    if (iVar2 == 2) {
      FUN_016d6968(0xf0,&DAT_018d8a98,0x81,1);
      return;
    }
  }
  return;
}

