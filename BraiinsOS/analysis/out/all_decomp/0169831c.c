// FUN_0169831c @ 0169831c size=1592 calls_out=19 calls_in=2
// strings: 

void FUN_0169831c(undefined2 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 uVar18;
  int *local_6c;
  undefined1 *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((char)param_2[3] == '\0') {
    if (param_4 == (int *)0x0) {
      local_60 = (int *)0x0;
      local_5c = (int *)0x1;
    }
    else {
      local_5c = (int *)thunk_FUN_016d4a50(param_4);
      local_60 = param_4;
      if (local_5c == (int *)0x0) goto LAB_01698384;
    }
    FUN_016dd1aa(local_5c,param_3,param_4);
    local_58 = param_4;
    FUN_01698a1c(&local_6c,*param_2,param_2[1],&local_60);
    if (local_6c != (int *)0x80000001) {
      *param_1 = 0x2801;
      if (((uint)local_6c & 0x7fffffff) == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_68);
      return;
    }
    goto LAB_01698830;
  }
  if (param_4 == (int *)0x0) {
    piVar12 = (int *)0x0;
    piVar3 = (int *)0x1;
  }
  else {
    piVar3 = (int *)thunk_FUN_016d4a50(param_4);
    if (piVar3 == (int *)0x0) {
LAB_01698384:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
    piVar12 = param_4;
  }
  FUN_016dd1aa(piVar3,param_3,param_4);
  iVar14 = param_2[1];
  if (*param_2 == 0) {
    iVar11 = 0;
    local_58 = (int *)&DAT_3b9aca00;
    local_48 = &DAT_3b9aca00;
    local_40 = (undefined4 *)0x0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar9 = FUN_01695d48(iVar14,&local_60);
    if (iVar9 == 0) goto LAB_01698644;
    if (local_40 != (undefined4 *)0x0) {
      local_40[1] = piVar12;
      local_40[2] = piVar3;
      local_40[3] = param_4;
      DataMemoryBarrier(0xb);
      *local_40 = local_3c;
      FUN_01694ecc(iVar14 + 0x70);
      goto LAB_01698830;
    }
  }
  else if (*param_2 == 1) {
    local_6c = piVar12;
    local_68 = (undefined1 *)piVar3;
    local_64 = param_4;
    FUN_016997a8(&local_60,iVar14,&local_6c);
    if (local_60 == (int *)0x2) goto LAB_01698830;
    if (((uint)local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae250);
    }
    iVar11 = 1;
    piVar3 = local_58;
    piVar12 = local_5c;
LAB_01698644:
    if (iVar11 == 2) goto LAB_01698830;
  }
  else {
    piVar13 = (int *)(iVar14 + 8);
    do {
      if (*piVar13 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar13);
        goto LAB_016984f8;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 1;
    DataMemoryBarrier(0xb);
LAB_016984f8:
    uVar7 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar14 + 0xc);
    }
    else {
      uVar7 = FUN_015bf3f8();
      uVar7 = uVar7 ^ 1;
      cVar1 = *(char *)(iVar14 + 0xc);
    }
    if (cVar1 != '\0') {
      uVar10 = (uint)local_5c >> 8;
      local_5c = (int *)CONCAT31((int3)uVar10,(char)uVar7);
      local_60 = piVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_018ae1f0,&DAT_018ae1d0);
    }
    iVar9 = *(int *)(iVar14 + 0x30);
    if (iVar9 != 0) {
      uVar18 = thunk_FUN_016de0ee(0,0x288);
      piVar4 = (int *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
      if ((char)piVar4[2] == '\0') {
        piVar4 = (int *)FUN_009e3710();
      }
      uVar10 = 0;
      piVar15 = *(int **)(iVar14 + 0x2c);
      do {
        piVar8 = piVar15 + 3;
        iVar11 = *piVar15;
        if (*(int *)(iVar11 + 8) != *piVar4 || *(int *)(iVar11 + 0xc) != piVar4[1]) {
          piVar5 = (int *)(iVar11 + 0x14);
          if (*piVar5 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar5);
              if (bVar2) {
                *piVar5 = piVar15[1];
                DataMemoryBarrier(0xb);
                if (piVar15[2] != 0) {
                  DataMemoryBarrier(0xb);
                  *(int *)(iVar11 + 0x18) = piVar15[2];
                }
                DataMemoryBarrier(0xb);
                piVar4 = (int *)(*(int *)(iVar11 + 0x10) + 0x18);
                do {
                  iVar9 = *piVar4;
                  bVar2 = (bool)hasExclusiveAccess(piVar4);
                } while (!bVar2);
                *piVar4 = 1;
                if (iVar9 == -1) {
                  FUN_016d6968(0xf0,piVar4,0x81,1);
                }
                uVar17 = *(uint *)(iVar14 + 0x30);
                if (uVar17 <= uVar10) {
LAB_0169894c:
                    /* WARNING: Subroutine does not return */
                  FUN_00602938(uVar10,uVar17,&DAT_018ae220);
                }
                puVar6 = (undefined4 *)(*(int *)(iVar14 + 0x2c) + uVar10 * 0xc);
                piVar4 = (int *)*puVar6;
                puVar16 = (uint *)puVar6[2];
                FUN_016dd52c(puVar6,puVar6 + 3,(uVar17 + ~uVar10) * 0xc);
                uVar17 = uVar17 - 1;
                *(uint *)(iVar14 + 0x30) = uVar17;
                if (piVar4 == (int *)0x0) goto LAB_0169894c;
                if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                   (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
                  *(undefined1 *)(iVar14 + 0xc) = 1;
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar14 = *piVar13;
                  bVar2 = (bool)hasExclusiveAccess(piVar13);
                } while (!bVar2);
                *piVar13 = 0;
                if (iVar14 == 2) {
                  FUN_016d6968(0xf0,piVar13,0x81,1);
                }
                if (puVar16 == (uint *)0x0) {
                  if (piVar12 != (int *)0x0) {
                    thunk_FUN_016d3fb4(piVar3);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018ae1e0);
                }
                *puVar16 = (uint)piVar12;
                puVar16[1] = (uint)piVar3;
                puVar16[2] = (uint)param_4;
                DataMemoryBarrier(0xb);
                *(undefined1 *)(puVar16 + 3) = 1;
                DataMemoryBarrier(0xb);
                do {
                  iVar14 = *piVar4;
                  bVar2 = (bool)hasExclusiveAccess(piVar4);
                } while (!bVar2);
                *piVar4 = iVar14 + -1;
                if (iVar14 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_00fbaa00(piVar4);
                }
                goto LAB_01698830;
              }
            } while (*piVar5 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        uVar10 = uVar10 + 1;
        piVar15 = piVar8;
      } while (piVar8 != *(int **)(iVar14 + 0x2c) + iVar9 * 3);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)
       ) {
      *(undefined1 *)(iVar14 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar13,0x81,1);
    }
  }
  if (((uint)piVar12 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(piVar3);
  }
  iVar14 = *(int *)(param_2[2] + 8);
  DataMemoryBarrier(0xb);
  if (iVar14 != -1) {
    piVar3 = (int *)(param_2[2] + 8);
    do {
      iVar9 = iVar14 + 1;
      if (iVar14 == -1) {
        iVar9 = -1;
      }
      iVar11 = *piVar3;
      if (*piVar3 == iVar14) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar3);
          if (bVar2) {
            *piVar3 = iVar9;
            DataMemoryBarrier(0xb);
            goto LAB_01698830;
          }
          iVar11 = *piVar3;
        } while (*piVar3 == iVar14);
      }
      iVar14 = iVar11;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
LAB_01698830:
  *(int **)(param_1 + 2) = param_4;
  *(undefined1 *)param_1 = 4;
  return;
}

