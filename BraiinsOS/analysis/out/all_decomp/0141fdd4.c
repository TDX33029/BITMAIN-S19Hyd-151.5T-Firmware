// FUN_0141fdd4 @ 0141fdd4 size=516 calls_out=4 calls_in=4
// strings: 

void FUN_0141fdd4(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  iVar3 = param_1[1];
  DataMemoryBarrier(0xb);
  puVar5 = (uint *)(iVar3 + 8);
  do {
    local_1c = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = 3;
  DataMemoryBarrier(0xb);
  if (1 < local_1c) {
    if (local_1c == 2) {
      pcVar4 = (char *)(iVar3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar4;
          bVar2 = (bool)hasExclusiveAccess(pcVar4);
        } while (!bVar2);
        *pcVar4 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar1 != '\0');
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x10));
      }
    }
    else if (local_1c != 3) {
      local_18 = &local_1c;
      local_14 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00570d95,&local_18,&DAT_018af288);
    }
  }
  piVar7 = (int *)*param_1;
  FUN_01441048(piVar7);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143ea24(*param_1);
  }
  iVar3 = param_1[1];
  DataMemoryBarrier(0xb);
  puVar5 = (uint *)(iVar3 + 8);
  do {
    local_1c = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = 3;
  DataMemoryBarrier(0xb);
  if (1 < local_1c) {
    if (local_1c == 2) {
      pcVar4 = (char *)(iVar3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar4;
          bVar2 = (bool)hasExclusiveAccess(pcVar4);
        } while (!bVar2);
        *pcVar4 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar1 != '\0');
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x10));
      }
    }
    else if (local_1c != 3) {
      local_18 = &local_1c;
      local_14 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00570d95,&local_18,&DAT_018af288);
    }
  }
  piVar7 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(param_1[1]);
    return;
  }
  return;
}

