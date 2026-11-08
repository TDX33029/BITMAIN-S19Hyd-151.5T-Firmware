// FUN_00b31650 @ 00b31650 size=376 calls_out=4 calls_in=5
// strings: BUG: poisoned

undefined4 FUN_00b31650(int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *local_20;
  undefined1 local_1c;
  
  piVar7 = (int *)(param_1 + 0x4f0);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_00b3167c;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_00b3167c:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_1 + 0x4f4);
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    cVar2 = *(char *)(param_1 + 0x4f4);
  }
  if (cVar2 != '\0') {
    local_1c = (undefined1)uVar4;
    local_20 = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned",0xd,&local_20,&DAT_01870388,&DAT_0186fbe0);
  }
  piVar5 = *(int **)(param_1 + 0x4f8);
  if (piVar5 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    do {
      iVar6 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb3178c);
      (*pcVar1)();
    }
    uVar8 = *(undefined4 *)(param_1 + 0x4f8);
  }
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(param_1 + 0x4f4) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
    return uVar8;
  }
  return uVar8;
}

