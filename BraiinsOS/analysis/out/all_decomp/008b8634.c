// FUN_008b8634 @ 008b8634 size=264 calls_out=4 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x008b8714) */
/* WARNING: Removing unreachable block (ram,0x008b8720) */

void FUN_008b8634(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint local_28 [2];
  int local_20;
  undefined4 local_1c;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar3 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
LAB_008b86a0:
      FUN_008b51ac(local_28,param_1);
      if (local_28[0] == 3) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187bde8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x10) != 0) goto code_r0x008b86e0;
      }
      else if (local_28[0] != 2) goto LAB_008b86f0;
    }
  }
  return;
code_r0x008b86e0:
  FUN_016da3a8();
  if (local_28[0] < 2) {
LAB_008b86f0:
    if (local_20 != 0) {
      thunk_FUN_016d3fb4(local_1c);
    }
  }
  goto LAB_008b86a0;
}

