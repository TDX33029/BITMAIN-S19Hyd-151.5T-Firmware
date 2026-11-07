// FUN_006e6690 @ 006e6690 size=240 calls_out=5 calls_in=1
// strings: 

void FUN_006e6690(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_1d0 [8];
  undefined1 *local_1c8;
  undefined1 auStack_f8 [8];
  int local_f0;
  
  piVar4 = param_1 + 1;
  if (*param_1 == 1) {
    while (FUN_006b29e8(auStack_f8,piVar4), local_f0 != 0x3b9aca01) {
      FUN_016dd1aa(auStack_1d0,auStack_f8,0xd8);
      if (local_1c8 == &DAT_3b9aca00) {
        if (*param_1 != 0) {
          FUN_006c24d0(piVar4);
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078459c(*piVar4);
            }
          }
        }
        *param_1 = 0;
        if ((undefined1 *)((uint)local_1c8 & 0xfffffffe) == &DAT_3b9aca00) {
          return;
        }
        FUN_00643a80(auStack_1d0);
        return;
      }
      if (local_1c8 == (undefined1 *)0x3b9aca01) {
        return;
      }
      FUN_00643a80(auStack_1d0);
    }
  }
  return;
}

