// FUN_01678e20 @ 01678e20 size=248 calls_out=3 calls_in=1
// strings: 

void FUN_01678e20(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_2c;
  int local_28 [2];
  
  local_2c = (int *)*param_1;
  *param_1 = 0;
  if (local_2c != (int *)0x0) {
    do {
      do {
        if (*local_2c != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *local_2c;
            bVar1 = (bool)hasExclusiveAccess(local_2c);
          } while (!bVar1);
          *local_2c = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670ebc(&local_2c);
            return;
          }
          return;
        }
        bVar1 = (bool)hasExclusiveAccess(local_2c);
      } while (!bVar1);
      *local_2c = 0;
      DataMemoryBarrier(0xb);
      iVar5 = local_2c[2];
      piVar4 = (int *)local_2c[3];
      piVar2 = piVar4;
      if (local_2c != (int *)&DAT_ffffffff) {
        local_2c = local_2c + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_2c;
          bVar1 = (bool)hasExclusiveAccess(local_2c);
        } while (!bVar1);
        *local_2c = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          local_2c = piVar4;
          thunk_FUN_01be4678();
          piVar2 = local_2c;
        }
      }
      local_2c = piVar2;
      local_28[1] = 0;
      local_28[0] = iVar5;
      FUN_0167817c(local_28);
      local_2c = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return;
}

