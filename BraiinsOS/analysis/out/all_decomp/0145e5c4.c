// FUN_0145e5c4 @ 0145e5c4 size=192 calls_out=1 calls_in=0
// strings: 

void FUN_0145e5c4(int param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_r4;
  
  if (param_1 != 0) {
    unaff_r4 = param_2;
  }
  if (param_1 == 0 || param_2 == (int *)0x0) {
    return;
  }
  puVar2 = (uint *)(unaff_r4 + 6);
  uVar5 = unaff_r4[6];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_0145e638;
      uVar5 = *puVar2;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_0145e638:
  if ((uVar4 & 5) == 1) {
    (**(code **)(unaff_r4[4] + 8))(unaff_r4[5]);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *unaff_r4;
    bVar1 = (bool)hasExclusiveAccess(unaff_r4);
  } while (!bVar1);
  *unaff_r4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b50b8(unaff_r4);
    return;
  }
  return;
}

