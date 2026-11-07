// FUN_007dbb50 @ 007dbb50 size=408 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_007dbb50(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *local_20;
  undefined1 local_1c;
  
  if (*(char *)((int)param_1 + 0xc) != '\0') {
    if (*(char *)((int)param_1 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e4ec);
  }
  piVar4 = *(int **)(param_1 + 1);
  uVar5 = *param_1;
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_007dbb90;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_007dbb90:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)piVar4[1] != '\0') {
      uVar2 = 0;
LAB_007dbc80:
      local_1c = (undefined1)uVar2;
      local_20 = piVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00342b23,9,&local_20,&DAT_0185eb28,&DAT_0185e4dc);
    }
    *(undefined8 *)(piVar4 + 2) = uVar5;
  }
  else {
    uVar2 = FUN_015bf3f8();
    uVar2 = uVar2 ^ 1;
    if ((char)piVar4[1] != '\0') goto LAB_007dbc80;
    *(undefined8 *)(piVar4 + 2) = uVar5;
    if (uVar2 != 0) goto LAB_007dbbcc;
  }
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    iVar3 = FUN_015bf3f8();
    if (iVar3 == 0) {
      *(undefined1 *)(piVar4 + 1) = 1;
    }
  }
LAB_007dbbcc:
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar4,0x81,1);
  }
  *(undefined1 *)((int)param_1 + 0xc) = 1;
  return 0;
}

