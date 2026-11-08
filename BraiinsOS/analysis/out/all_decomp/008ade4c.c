// FUN_008ade4c @ 008ade4c size=764 calls_out=4 calls_in=7
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ade4c(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_stack_00000000;
  int *local_28;
  undefined1 local_24;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_008ade7c;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_008ade7c:
  uVar12 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar12 = FUN_015bf3f8();
    uVar12 = uVar12 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_24 = (undefined1)uVar12;
    local_28 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01863b6c,&DAT_01886a4c);
  }
  FUN_008ac8bc(param_1 + 2,0);
  uVar3 = param_1[0xb];
  uVar4 = extraout_r2;
  if (uVar3 != 0x80000000) {
    uVar4 = param_1[0xe];
  }
  if (uVar3 != 0x80000000 && uVar4 != 0) {
    uVar5 = param_1[0xd];
    iVar11 = param_1[0xc];
    uVar6 = uVar3;
    if (uVar5 < uVar3) {
      uVar6 = 0;
    }
    uVar9 = uVar5 - uVar6;
    iVar7 = uVar4 - (uVar3 - uVar9);
    uVar8 = 0;
    if (uVar4 < uVar3 - uVar9 || iVar7 == 0) {
      uVar3 = uVar9 + uVar4;
    }
    else {
      uVar8 = iVar7 * 8;
    }
    if (uVar3 != uVar9) {
      iVar7 = uVar3 - uVar9;
      piVar10 = (int *)(iVar11 + uVar5 * 8 + uVar6 * -8 + 4);
      do {
        uVar4 = *(uint *)(*piVar10 + 8);
        uVar3 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar10 + 0xc))
                  (piVar10[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar3 & 0xffffffb8) + 0x50);
        piVar10 = piVar10 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (uVar8 != 0) {
      piVar10 = (int *)(iVar11 + 4);
      uVar8 = uVar8 >> 3;
      do {
        uVar4 = *(uint *)(*piVar10 + 8);
        uVar3 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar10 + 0xc))
                  (piVar10[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar3 & 0xffffffb8) + 0x50);
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  uVar4 = param_1[9];
  if (uVar4 != 0) {
    uVar3 = param_1[6];
    uVar5 = param_1[8];
    iVar11 = param_1[7];
    uVar6 = uVar3;
    if (uVar5 < uVar3) {
      uVar6 = 0;
    }
    uVar9 = uVar5 - uVar6;
    iVar7 = uVar4 - (uVar3 - uVar9);
    uVar8 = 0;
    if (uVar4 < uVar3 - uVar9 || iVar7 == 0) {
      uVar3 = uVar9 + uVar4;
    }
    else {
      uVar8 = iVar7 * 8;
    }
    if (uVar3 != uVar9) {
      iVar7 = uVar3 - uVar9;
      piVar10 = (int *)(iVar11 + uVar5 * 8 + uVar6 * -8 + 4);
      do {
        uVar4 = *(uint *)(*piVar10 + 8);
        uVar3 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar10 + 0xc))
                  (piVar10[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar3 & 0xffffffb8) + 0x50);
        piVar10 = piVar10 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (uVar8 != 0) {
      piVar10 = (int *)(iVar11 + 4);
      uVar8 = uVar8 >> 3;
      do {
        uVar4 = *(uint *)(*piVar10 + 8);
        uVar3 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar10 + 0xc))
                  (piVar10[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar3 & 0xffffffb8) + 0x50);
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar11 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

