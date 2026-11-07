// FUN_00bea8f8 @ 00bea8f8 size=352 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bea8f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_stack_00000000;
  int *local_28;
  undefined1 local_24;
  
  piVar4 = (int *)(param_3 + 8);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_00bea928;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_00bea928:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_3 + 0xc) != '\0') {
      uVar3 = 0;
LAB_00beaa10:
      local_24 = (undefined1)uVar3;
      local_28 = piVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0035005e,0x1a,&local_28,&DAT_0187264c,&DAT_01871408);
    }
    *(undefined4 *)(param_3 + 0x44) = param_2;
    *(undefined4 *)(param_3 + 0x48) = param_1;
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if (*(char *)(param_3 + 0xc) != '\0') goto LAB_00beaa10;
    *(undefined4 *)(param_3 + 0x44) = param_2;
    *(undefined4 *)(param_3 + 0x48) = param_1;
    if (uVar3 != 0) goto LAB_00bea964;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    *(undefined1 *)(param_3 + 0xc) = 1;
  }
LAB_00bea964:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar4,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

