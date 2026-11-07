// FUN_014b0c2c @ 014b0c2c size=668 calls_out=9 calls_in=2
// strings: 

void FUN_014b0c2c(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  uint local_24;
  
  piVar7 = *(int **)(param_1 + 0x18);
  if ((int)piVar7 + 1U < 2) {
    return;
  }
  iVar5 = *piVar7;
  do {
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 < 0) {
      local_2c = &DAT_0157d360;
      local_30 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_30,&DAT_018ae288);
    }
    iVar4 = *piVar7;
    if (iVar4 == iVar5) {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
      if (bVar1) {
        *piVar7 = iVar5 + 1;
      }
      bVar2 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    iVar5 = iVar4;
  } while (!bVar2);
  piVar8 = piVar7 + 2;
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      goto LAB_014b0cc8;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_014b0cc8:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)piVar7[3] == '\0') {
      uVar9 = 0;
LAB_014b0d20:
      FUN_0149295c(piVar7 + 8,param_1);
      FUN_01492b74(&local_30,piVar7 + 0x18,param_1);
      if (local_30 != (undefined *)0x80000000) {
        iVar5 = 0;
        if (local_24 == 0) {
          puVar3 = (undefined *)0x0;
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar3 = local_28 + -(int)local_30;
          if (local_28 < local_30) {
            puVar3 = local_28;
          }
          if ((uint)((int)local_30 - (int)puVar3) < local_24) {
            iVar5 = local_24 - ((int)local_30 - (int)puVar3);
            puVar6 = local_30;
          }
          else {
            puVar6 = puVar3 + local_24;
          }
        }
        FUN_014ef91c((int)local_2c + (int)puVar3 * 4,(int)puVar6 - (int)puVar3);
        FUN_014ef91c(local_2c,iVar5);
        if (local_30 != (undefined *)0x0) {
          thunk_FUN_016d3fb4(local_2c);
        }
      }
      if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar7 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 0;
      goto LAB_014b0de0;
    }
LAB_014b0cec:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar7 + 3) = 1;
    }
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    if ((char)piVar7[3] == '\0') goto LAB_014b0d20;
    if (uVar9 == 0) goto LAB_014b0cec;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = 0;
LAB_014b0de0:
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar8,0x81,1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149f9e0(piVar7);
    return;
  }
  return;
}

