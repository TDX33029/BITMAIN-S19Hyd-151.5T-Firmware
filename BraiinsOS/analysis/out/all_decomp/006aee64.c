// FUN_006aee64 @ 006aee64 size=852 calls_out=10 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006aee64(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int *local_2c;
  undefined1 local_28;
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    *param_1 = -0x80000000;
    return;
  }
  while( true ) {
    puVar3 = *(uint **)(iVar7 + 0xc);
    piVar4 = (int *)puVar3[0xb];
    DataMemoryBarrier(0xb);
    if (piVar4 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(uint **)(iVar7 + 8) == puVar3) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x1c) != 0) {
        *param_1 = -0x7fffffff;
        return;
      }
      piVar4 = (int *)*param_2;
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0105ad6c(*param_2);
        }
      }
      *param_1 = -0x80000000;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar7 + 0xc) = piVar4;
  if (*puVar3 != 0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  iVar7 = *piVar4;
  if (iVar7 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  iVar5 = piVar4[1];
  iVar8 = piVar4[2];
  iVar10 = piVar4[3];
  iVar12 = piVar4[4];
  iVar14 = piVar4[5];
  iVar6 = piVar4[6];
  iVar9 = piVar4[7];
  iVar11 = piVar4[8];
  iVar13 = piVar4[9];
  iVar15 = piVar4[10];
  *piVar4 = -0x80000000;
  if ((*puVar3 & 0x7fffffff) == 0) {
    thunk_FUN_016d3fb4();
    iVar16 = *param_2;
  }
  else {
    thunk_FUN_016d3fb4(puVar3[1]);
    thunk_FUN_016d3fb4(puVar3);
    iVar16 = *param_2;
  }
  if (iVar16 != 0) {
    piVar4 = (int *)FUN_00d3f614(iVar16 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar17 = piVar4 + 2;
      do {
        if (*piVar17 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar17);
          goto LAB_006aef88;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar2);
      *piVar17 = 1;
      DataMemoryBarrier(0xb);
LAB_006aef88:
      uVar18 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar4[3];
      }
      else {
        uVar18 = FUN_015bf3f8();
        uVar18 = uVar18 ^ 1;
        cVar1 = (char)piVar4[3];
      }
      if (cVar1 != '\0') {
        local_28 = (undefined1)uVar18;
        local_2c = piVar17;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b10);
      }
      iVar16 = piVar4[4];
      *(undefined1 *)(piVar4 + 6) = 0;
      piVar4[4] = 0;
      if (iVar16 != 0) {
        (**(code **)(iVar16 + 4))(piVar4[5]);
      }
      if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar17;
        bVar2 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar2);
      *piVar17 = 0;
      if (iVar16 == 2) {
        FUN_016d6968(0xf0,piVar17,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4);
      }
      iVar16 = *param_2;
      if (iVar16 == 0) goto LAB_006af068;
    }
    piVar4 = (int *)(iVar16 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = *piVar4 + -1;
    DataMemoryBarrier(0xb);
  }
LAB_006af068:
  *param_1 = iVar7;
  param_1[1] = iVar5;
  param_1[2] = iVar8;
  param_1[3] = iVar10;
  param_1[4] = iVar12;
  param_1[5] = iVar14;
  param_1[6] = iVar6;
  param_1[7] = iVar9;
  param_1[8] = iVar11;
  param_1[9] = iVar13;
  param_1[10] = iVar15;
  return;
}

