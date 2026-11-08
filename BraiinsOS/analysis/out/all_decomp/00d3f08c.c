// FUN_00d3f08c @ 00d3f08c size=1168 calls_out=11 calls_in=0
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_00d3f08c(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *local_2c;
  undefined1 local_28;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (0x7fffffff < *(uint *)(iVar7 + 0x1c)) {
    puVar6 = (uint *)(iVar7 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = *puVar6 & 0x7fffffff;
    DataMemoryBarrier(0xb);
  }
  while (piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10), piVar3 != (int *)0x0) {
    piVar8 = piVar3 + 2;
    do {
      if (*piVar8 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar8);
        goto joined_r0x00d3f1d4;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = 1;
    DataMemoryBarrier(0xb);
joined_r0x00d3f1d4:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      uVar5 = 0;
      cVar1 = (char)piVar3[3];
    }
    else {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
      cVar1 = (char)piVar3[3];
    }
    if (cVar1 != '\0') {
      local_28 = (undefined1)uVar5;
      local_2c = piVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01877584,&DAT_018a4b20);
    }
    iVar4 = piVar3[4];
    *(undefined1 *)(piVar3 + 6) = 0;
    piVar3[4] = 0;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(piVar3[5]);
    }
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(piVar3 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = 0;
    if (iVar4 == 2) {
      FUN_016d6968(0xf0,piVar8,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(piVar3);
    }
  }
  iVar7 = *param_1;
joined_r0x00d3f224:
  if (iVar7 == 0) {
    return;
  }
  do {
    while( true ) {
      piVar3 = *(int **)(iVar7 + 0xc);
      iVar4 = *piVar3;
      DataMemoryBarrier(0xb);
      if (iVar4 == 0) break;
      *(int *)(iVar7 + 0xc) = iVar4;
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
      iVar7 = *param_1;
      if (iVar7 == 0) {
        return;
      }
      piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10);
      if (piVar3 != (int *)0x0) {
        piVar8 = piVar3 + 2;
        do {
          if (*piVar8 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar8);
            goto joined_r0x00d3f3f4;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = 1;
        DataMemoryBarrier(0xb);
joined_r0x00d3f3f4:
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          uVar5 = 0;
          cVar1 = (char)piVar3[3];
        }
        else {
          uVar5 = FUN_015bf3f8();
          uVar5 = uVar5 ^ 1;
          cVar1 = (char)piVar3[3];
        }
        if (cVar1 != '\0') {
          local_28 = (undefined1)uVar5;
          local_2c = piVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01877584,&DAT_018a4b10);
        }
        iVar7 = piVar3[4];
        *(undefined1 *)(piVar3 + 6) = 0;
        piVar3[4] = 0;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(piVar3[5]);
        }
        if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = 0;
        if (iVar7 == 2) {
          FUN_016d6968(0xf0,piVar8,0x81,1);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010b4e7c(piVar3);
        }
        iVar7 = *param_1;
        if (iVar7 == 0) {
          return;
        }
      }
      piVar3 = (int *)(iVar7 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = *piVar3 + -1;
      DataMemoryBarrier(0xb);
      iVar7 = *param_1;
      if (iVar7 == 0) {
        return;
      }
    }
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar7 + 8) == piVar3) break;
    FUN_016da3a8();
  } while( true );
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007824b0(*param_1);
      }
    }
    *param_1 = 0;
    return;
  }
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a4cc8);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    return;
  }
  FUN_016da3a8();
  iVar7 = *param_1;
  goto joined_r0x00d3f224;
}

