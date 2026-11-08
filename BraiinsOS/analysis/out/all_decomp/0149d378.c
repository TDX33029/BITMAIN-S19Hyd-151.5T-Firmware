// FUN_0149d378 @ 0149d378 size=508 calls_out=4 calls_in=3
// strings: 

void FUN_0149d378(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  iVar3 = param_1[1];
  DataMemoryBarrier(0xb);
  puVar6 = (uint *)(iVar3 + 8);
  do {
    local_1c = *puVar6;
    bVar2 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar2);
  *puVar6 = 3;
  DataMemoryBarrier(0xb);
  if (1 < local_1c) {
    if (local_1c == 2) {
      pcVar5 = (char *)(iVar3 + 0x14);
      do {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar5;
          bVar2 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar2);
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
      } while (cVar1 != '\0');
      iVar7 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar3 + 0x10));
      }
    }
    else if (local_1c != 3) {
      local_18 = &local_1c;
      local_14 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00570d95,&local_18,&DAT_018af288);
    }
  }
  piVar8 = (int *)*param_1;
  FUN_0148f78c(piVar8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d6a4(*param_1);
  }
  piVar8 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  puVar6 = (uint *)(piVar8 + 2);
  do {
    local_1c = *puVar6;
    bVar2 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar2);
  *puVar6 = 3;
  DataMemoryBarrier(0xb);
  if (1 < local_1c) {
    if (local_1c == 2) {
      piVar4 = piVar8 + 5;
      do {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *(char *)piVar4 = '\x01';
        DataMemoryBarrier(0xb);
      } while ((char)iVar3 != '\0');
      iVar3 = piVar8[3];
      piVar8[3] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar8 + 5) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(piVar8[4]);
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
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(param_1[1]);
    return;
  }
  return;
}

