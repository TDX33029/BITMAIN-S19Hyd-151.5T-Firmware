// FUN_008b6f04 @ 008b6f04 size=240 calls_out=4 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x008b6fd8) */

void FUN_008b6f04(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_1c [8];
  byte local_14;
  
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
LAB_008b6f84:
      FUN_00cef7a0(auStack_1c,param_1);
      if (local_14 == 3) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187bde8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x10) != 0) goto code_r0x008b6fb8;
      }
      else if (local_14 != 2) goto LAB_008b6f7c;
    }
  }
  return;
code_r0x008b6fb8:
  FUN_016da3a8();
  if (local_14 < 2) {
LAB_008b6f7c:
    FUN_00cef9a4(auStack_1c);
  }
  goto LAB_008b6f84;
}

