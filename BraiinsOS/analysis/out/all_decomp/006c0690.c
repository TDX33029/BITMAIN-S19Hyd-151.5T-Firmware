// FUN_006c0690 @ 006c0690 size=840 calls_out=10 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006c0690(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *local_2c;
  undefined1 local_28;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  while( true ) {
    piVar4 = *(int **)(iVar6 + 0xc);
    piVar3 = (int *)piVar4[4];
    DataMemoryBarrier(0xb);
    if (piVar3 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar6 + 8) == piVar4) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x1c) != 0) {
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      piVar3 = (int *)*param_2;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a582c(*param_2);
        }
      }
      param_1[2] = 0;
      *param_2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar6 + 0xc) = piVar3;
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  iVar6 = *piVar3;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  iVar9 = piVar3[3];
  *piVar3 = 0;
  iVar7 = piVar3[1];
  iVar10 = piVar3[2];
  if (*piVar4 != 0) {
    piVar3 = (int *)piVar4[1];
  }
  if (*piVar4 != 0 && piVar3 != (int *)0x0) {
    thunk_FUN_016d3fb4();
  }
  thunk_FUN_016d3fb4(piVar4);
  iVar5 = *param_2;
  if (iVar5 != 0) {
    piVar3 = (int *)FUN_00d3f614(iVar5 + 0x10);
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3 + 2;
      do {
        if (*piVar4 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar4);
          goto LAB_006c076c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = 1;
      DataMemoryBarrier(0xb);
LAB_006c076c:
      uVar8 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar3[3];
      }
      else {
        uVar8 = FUN_015bf3f8();
        uVar8 = uVar8 ^ 1;
        cVar1 = (char)piVar3[3];
      }
      if (cVar1 != '\0') {
        local_28 = (undefined1)uVar8;
        local_2c = piVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b10);
      }
      iVar5 = piVar3[4];
      *(undefined1 *)(piVar3 + 6) = 0;
      piVar3[4] = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(piVar3[5]);
      }
      if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar3 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar4,0x81,1);
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
      iVar5 = *param_2;
      if (iVar5 == 0) goto LAB_006c0868;
    }
    piVar3 = (int *)(iVar5 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = *piVar3 + -1;
    DataMemoryBarrier(0xb);
  }
LAB_006c0868:
  param_1[5] = iVar9;
  param_1[2] = iVar6;
  param_1[3] = iVar7;
  param_1[4] = iVar10;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

