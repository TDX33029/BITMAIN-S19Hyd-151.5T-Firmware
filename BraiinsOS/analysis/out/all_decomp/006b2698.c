// FUN_006b2698 @ 006b2698 size=704 calls_out=10 calls_in=3
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

undefined4 FUN_006b2698(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *local_20;
  undefined1 local_1c;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 0;
  }
  while( true ) {
    piVar3 = *(int **)(iVar5 + 0xc);
    iVar4 = *piVar3;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar5 + 8) == piVar3) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_1 + 0x1c) != 0) {
        return 2;
      }
      piVar3 = (int *)*param_1;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007824b0(*param_1);
        }
      }
      *param_1 = 0;
      return 0;
    }
    FUN_016da3a8();
  }
  *(int *)(iVar5 + 0xc) = iVar4;
  if ((char)piVar3[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  if (*(char *)(iVar4 + 4) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  *(undefined1 *)(iVar4 + 4) = 0;
  thunk_FUN_016d3fb4();
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 1;
  }
  piVar3 = (int *)FUN_00d3f614(iVar5 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar6 = piVar3 + 2;
    do {
      if (*piVar6 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar6);
        goto LAB_006b274c;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = 1;
    DataMemoryBarrier(0xb);
LAB_006b274c:
    uVar7 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)piVar3[3];
    }
    else {
      uVar7 = FUN_015bf3f8();
      uVar7 = uVar7 ^ 1;
      cVar1 = (char)piVar3[3];
    }
    if (cVar1 != '\0') {
      local_1c = (undefined1)uVar7;
      local_20 = piVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_01858988,&DAT_018a4b10);
    }
    iVar5 = piVar3[4];
    *(undefined1 *)(piVar3 + 6) = 0;
    piVar3[4] = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(piVar3[5]);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)
       ) {
      *(undefined1 *)(piVar3 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar6,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(piVar3);
    }
    iVar5 = *param_1;
    if (iVar5 == 0) {
      return 1;
    }
  }
  piVar3 = (int *)(iVar5 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = *piVar3 + -1;
  DataMemoryBarrier(0xb);
  return 1;
}

