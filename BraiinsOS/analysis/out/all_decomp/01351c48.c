// FUN_01351c48 @ 01351c48 size=252 calls_out=3 calls_in=9
// strings: 

void FUN_01351c48(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_1c;
  
  local_1c = (int *)*param_1;
  *param_1 = 0;
  if (local_1c != (int *)0x0) {
    do {
      do {
        if (*local_1c != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *local_1c;
            bVar1 = (bool)hasExclusiveAccess(local_1c);
          } while (!bVar1);
          *local_1c = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01353090(&local_1c);
            return;
          }
          return;
        }
        bVar1 = (bool)hasExclusiveAccess(local_1c);
      } while (!bVar1);
      *local_1c = 0;
      DataMemoryBarrier(0xb);
      piVar4 = (int *)local_1c[2];
      piVar5 = (int *)local_1c[3];
      piVar2 = piVar5;
      if (local_1c != (int *)0xffffffff) {
        local_1c = local_1c + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_1c;
          bVar1 = (bool)hasExclusiveAccess(local_1c);
        } while (!bVar1);
        *local_1c = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          local_1c = piVar5;
          thunk_FUN_016d3fb4();
          piVar2 = local_1c;
        }
      }
      local_1c = piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(piVar4);
      }
      local_1c = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  return;
}

