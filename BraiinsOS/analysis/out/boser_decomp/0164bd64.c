// FUN_0164bd64 @ 0164bd64 size=248 calls_out=4 calls_in=1
// strings: 

void FUN_0164bd64(uint *param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint local_1c;
  
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  local_1c = uVar5 & 3;
  DataMemoryBarrier(0xb);
  if (local_1c != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_1c,&DAT_0056ed00,0);
  }
  puVar2 = (undefined4 *)(uVar5 - 1);
  if (puVar2 != (undefined4 *)0x0) {
    local_1c = 1;
    do {
      piVar6 = (int *)*puVar2;
      puVar7 = (undefined4 *)puVar2[1];
      *puVar2 = 0;
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d067cc);
      }
      piVar4 = piVar6 + 6;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(puVar2 + 2) = 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 1;
      if (iVar3 == -1) {
        FUN_01be6c3c(0xf0,piVar4,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019a2ffc(piVar6);
      }
      puVar2 = puVar7;
    } while (puVar7 != (undefined4 *)0x0);
  }
  return;
}

