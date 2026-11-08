// FUN_01349710 @ 01349710 size=324 calls_out=6 calls_in=1
// strings: 

void FUN_01349710(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  if ((param_1 != 0) &&
     (piVar2 = (int *)FUN_01349278(*(undefined4 *)(param_1 + 0x40)), piVar2 != (int *)0x0)) {
    FUN_01933ff0(&local_24,param_1 + 0x18);
    if (local_24 == 1) {
      local_14 = local_1c;
      local_18 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01ce6cd0,&DAT_01ce6ce0);
    }
    *(undefined1 **)(local_20 + 0x10) = &DAT_3b9aca00;
    FUN_00a97e8c(local_20,local_1c);
    iVar3 = FUN_01349330(piVar2 + 2,param_1);
    if (iVar3 == 0) {
      puVar4 = (uint *)(piVar2 + 5);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar3 = piVar2[3];
        piVar2[3] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(piVar2[4]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01348fc8(piVar2);
      return;
    }
  }
  return;
}

