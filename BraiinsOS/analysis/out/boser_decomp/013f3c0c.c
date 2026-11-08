// FUN_013f3c0c @ 013f3c0c size=204 calls_out=5 calls_in=1
// strings: 

void FUN_013f3c0c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar4 = param_1[1];
    FUN_01408000(iVar3,iVar4);
    if (iVar4 != 0) {
      thunk_FUN_01be4678(iVar3);
    }
    piVar2 = (int *)param_1[8];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      iVar3 = param_1[8];
      FUN_01408fec(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),0,0,unaff_r4,unaff_r5
                   ,unaff_r11,unaff_lr);
      FUN_01af7af8(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),8,0x20);
      if (iVar3 == -1) {
        return;
      }
      piVar2 = (int *)(iVar3 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678(iVar3);
        return;
      }
      return;
    }
  }
  return;
}

