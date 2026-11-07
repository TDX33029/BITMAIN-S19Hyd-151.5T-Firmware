// FUN_00d0aea8 @ 00d0aea8 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_00d0aea8(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar3 + 0x10) < 0) {
      puVar4 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
    }
    if (iVar3 != 0) {
      do {
        while (bVar2 = FUN_00cefe20(param_1), bVar2 == 2) {
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) goto LAB_00d0af4c;
          FUN_016da3a8();
        }
      } while ((bVar2 & 1) != 0);
LAB_00d0af4c:
      piVar5 = (int *)*param_1;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*param_1);
          return;
        }
        return;
      }
    }
  }
  return;
}

