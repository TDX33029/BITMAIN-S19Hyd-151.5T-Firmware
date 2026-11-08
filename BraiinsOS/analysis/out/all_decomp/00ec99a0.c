// FUN_00ec99a0 @ 00ec99a0 size=432 calls_out=6 calls_in=1
// strings: 

void FUN_00ec99a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined1 auStack_1d0 [8];
  undefined1 *local_1c8;
  undefined1 auStack_f8 [8];
  undefined1 *local_f0;
  
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
      do {
        FUN_005bc2a8(auStack_f8,iVar2 + 8);
        piVar4 = (int *)(iVar2 + 0x10);
        if (local_f0 == &DAT_3b9aca00) {
          DataMemoryBarrier(0xb);
          if (*piVar4 == 0) {
            piVar4 = (int *)*param_1;
            if (piVar4 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar2 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar2 + -1;
              if (iVar2 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078459c(*param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_1c8 = (undefined1 *)0x3b9aca01;
LAB_00ec9ab8:
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) {
            if ((undefined1 *)((uint)local_1c8 & 0xfffffffe) != &DAT_3b9aca00) {
              FUN_005c33e4(auStack_1d0);
            }
            return;
          }
          FUN_016da3a8();
        }
        else {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = *piVar4 + -1;
          DataMemoryBarrier(0xb);
          FUN_016dd1aa(auStack_1d0,auStack_f8,0xd8);
          if (local_1c8 == (undefined1 *)0x3b9aca01) goto LAB_00ec9ab8;
          if (local_1c8 == &DAT_3b9aca00) {
            return;
          }
        }
        if ((undefined1 *)((uint)local_1c8 & 0xfffffffe) != &DAT_3b9aca00) {
          FUN_005c33e4(auStack_1d0);
        }
        iVar2 = *param_1;
      } while (iVar2 != 0);
    }
  }
  return;
}

