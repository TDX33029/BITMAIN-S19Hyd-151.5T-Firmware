// FUN_007db840 @ 007db840 size=320 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007db840(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_20;
  undefined1 local_1c;
  
  piVar4 = (int *)(param_1 + 0x30);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_007db86c;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_007db86c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 0x34) != '\0') {
      uVar3 = 0;
LAB_007db938:
      local_1c = (undefined1)uVar3;
      local_20 = piVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00342b23,9,&local_20,&DAT_0185eb78,&DAT_0185e964);
    }
    *(undefined1 *)(param_1 + 0x35) = param_2;
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if (*(char *)(param_1 + 0x34) != '\0') goto LAB_007db938;
    *(undefined1 *)(param_1 + 0x35) = param_2;
    if (uVar3 != 0) goto LAB_007db8a4;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
LAB_007db8a4:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar4,0x81,1,param_5);
    return;
  }
  return;
}

