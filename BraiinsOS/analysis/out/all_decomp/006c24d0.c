// FUN_006c24d0 @ 006c24d0 size=272 calls_out=4 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x006c25c4) */

void FUN_006c24d0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  
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
LAB_006c254c:
      while( true ) {
        FUN_006b29e8(auStack_f0,param_1);
        if (local_e8 == (undefined1 *)0x3b9aca01) goto LAB_006c257c;
        if (local_e8 == &DAT_3b9aca00) break;
        if ((undefined1 *)((uint)local_e8 & 0xfffffffe) != &DAT_3b9aca00) goto LAB_006c25ac;
      }
    }
  }
  return;
LAB_006c257c:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0187bde8);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x10) == 0) {
    return;
  }
  FUN_016da3a8();
  if ((undefined1 *)((uint)local_e8 & 0xfffffffe) != &DAT_3b9aca00) {
LAB_006c25ac:
    FUN_006b2c3c(auStack_f0);
  }
  goto LAB_006c254c;
}

