// FUN_01485cb4 @ 01485cb4 size=256 calls_out=2 calls_in=0
// strings: 

void FUN_01485cb4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  puVar4 = (uint *)(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    local_1c = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = 3;
  DataMemoryBarrier(0xb);
  if (1 < local_1c) {
    if (local_1c == 2) {
      piVar2 = param_1 + 5;
      do {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *(char *)piVar2 = '\x01';
        DataMemoryBarrier(0xb);
      } while ((char)iVar3 != '\0');
      iVar3 = param_1[3];
      param_1[3] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 5) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(param_1[4]);
      }
    }
    else if (local_1c != 3) {
      local_18 = &local_1c;
      local_14 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00570d95,&local_18,&DAT_018af288);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(param_1);
    return;
  }
  return;
}

