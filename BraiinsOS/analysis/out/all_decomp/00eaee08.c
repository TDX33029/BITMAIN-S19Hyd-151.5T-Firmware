// FUN_00eaee08 @ 00eaee08 size=368 calls_out=4 calls_in=2
// strings: 

void FUN_00eaee08(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined4 in_stack_00000000;
  int *local_20;
  undefined4 local_1c;
  
  puVar4 = (uint *)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar4;
    bVar7 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar7);
  *puVar4 = uVar2 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 1) == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    do {
      if (*piVar6 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar6);
        goto LAB_00eaee60;
      }
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = 1;
    DataMemoryBarrier(0xb);
LAB_00eaee60:
    uVar2 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(param_1 + 0x44);
    }
    else {
      uVar2 = FUN_015bf3f8();
      uVar2 = uVar2 ^ 1;
      cVar1 = *(char *)(param_1 + 0x44);
    }
    if (cVar1 != '\0') {
      uVar3 = (uint)local_1c >> 8;
      local_1c = CONCAT31((int3)uVar3,(char)uVar2);
      local_20 = piVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_0187bbc8,&DAT_01883de0);
    }
    FUN_00eaefb8(param_1 + 0x48);
    uVar3 = 0;
    bVar7 = *(int *)(param_1 + 0x50) == 0;
    if (bVar7) {
      uVar3 = *(uint *)(param_1 + 0x5c);
    }
    DataMemoryBarrier(0xb);
    if (bVar7) {
      uVar3 = (uint)(uVar3 == 0);
    }
    *(char *)(param_1 + 0x60) = (char)uVar3;
    DataMemoryBarrier(0xb);
    if (((uVar2 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)
       ) {
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = 0;
    if (iVar5 == 2) {
      software_interrupt(0);
      FUN_016d3496(piVar6,0x81,1,in_stack_00000000);
      return;
    }
  }
  return;
}

