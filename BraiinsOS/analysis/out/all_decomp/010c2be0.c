// FUN_010c2be0 @ 010c2be0 size=496 calls_out=6 calls_in=1
// strings: 

undefined4 * FUN_010c2be0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *local_20;
  undefined1 local_1c;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  piVar5 = (int *)(param_1 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_010c2c14;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_010c2c14:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_1c = (undefined1)uVar6;
    local_20 = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_01884cb0,&DAT_01884d20);
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 0;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar3 = 1;
    *(undefined1 *)(puVar3 + 2) = 0xb;
    puVar3[1] = &DAT_018848dc;
    if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 0;
  }
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
    return puVar3;
  }
  return puVar3;
}

