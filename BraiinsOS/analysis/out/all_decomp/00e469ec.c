// FUN_00e469ec @ 00e469ec size=844 calls_out=4 calls_in=9
// strings: 

void FUN_00e469ec(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r3;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_stack_00000000;
  int *local_2c;
  undefined1 local_28;
  
  piVar3 = (int *)(param_1 + 0x48);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    piVar3 = (int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    do {
      if (*piVar3 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar3);
        goto LAB_00e46a40;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = 1;
    DataMemoryBarrier(0xb);
LAB_00e46a40:
    uVar13 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(param_1 + 0xc);
    }
    else {
      uVar13 = FUN_015bf3f8();
      uVar13 = uVar13 ^ 1;
      cVar1 = *(char *)(param_1 + 0xc);
    }
    if (cVar1 != '\0') {
      local_28 = (undefined1)uVar13;
      local_2c = piVar3;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0187a7c0,&DAT_01886a4c);
    }
    FUN_00e4847c(param_1 + 0x10,0);
    uVar4 = *(uint *)(param_1 + 0x34);
    uVar8 = extraout_r3;
    if (uVar4 != 0x80000000) {
      uVar8 = *(uint *)(param_1 + 0x40);
    }
    if (uVar4 != 0x80000000 && uVar8 != 0) {
      uVar7 = *(uint *)(param_1 + 0x3c);
      iVar5 = *(int *)(param_1 + 0x38);
      uVar6 = 0;
      uVar9 = uVar4;
      if (uVar7 < uVar4) {
        uVar9 = 0;
      }
      uVar12 = uVar7 - uVar9;
      iVar10 = uVar8 - (uVar4 - uVar12);
      if (uVar8 < uVar4 - uVar12 || iVar10 == 0) {
        uVar4 = uVar12 + uVar8;
      }
      else {
        uVar6 = iVar10 * 8;
      }
      if (uVar4 != uVar12) {
        iVar10 = uVar4 - uVar12;
        piVar11 = (int *)(iVar5 + uVar7 * 8 + uVar9 * -8 + 4);
        do {
          uVar8 = *(uint *)(*piVar11 + 8);
          uVar4 = uVar8 - 1;
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          (**(code **)(*piVar11 + 0xc))
                    (piVar11[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar4 & 0xfffffed8) + 0x130);
          piVar11 = piVar11 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (uVar6 != 0) {
        piVar11 = (int *)(iVar5 + 4);
        uVar6 = uVar6 >> 3;
        do {
          uVar8 = *(uint *)(*piVar11 + 8);
          uVar4 = uVar8 - 1;
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          (**(code **)(*piVar11 + 0xc))
                    (piVar11[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar4 & 0xfffffed8) + 0x130);
          piVar11 = piVar11 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar8 = *(uint *)(param_1 + 0x2c);
    if (uVar8 != 0) {
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar4 = 0;
      uVar7 = *(uint *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x24);
      uVar9 = uVar6;
      if (uVar7 < uVar6) {
        uVar9 = 0;
      }
      uVar12 = uVar7 - uVar9;
      iVar10 = uVar8 - (uVar6 - uVar12);
      if (uVar8 < uVar6 - uVar12 || iVar10 == 0) {
        uVar6 = uVar12 + uVar8;
      }
      else {
        uVar4 = iVar10 * 8;
      }
      if (uVar6 != uVar12) {
        iVar10 = uVar6 - uVar12;
        piVar11 = (int *)(iVar5 + uVar7 * 8 + uVar9 * -8 + 4);
        do {
          uVar8 = *(uint *)(*piVar11 + 8);
          uVar6 = uVar8 - 1;
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          (**(code **)(*piVar11 + 0xc))
                    (piVar11[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar6 & 0xfffffed8) + 0x130);
          piVar11 = piVar11 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (uVar4 != 0) {
        piVar11 = (int *)(iVar5 + 4);
        uVar4 = uVar4 >> 3;
        do {
          uVar8 = *(uint *)(*piVar11 + 8);
          uVar6 = uVar8 - 1;
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          (**(code **)(*piVar11 + 0xc))
                    (piVar11[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar6 & 0xfffffed8) + 0x130);
          piVar11 = piVar11 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = 0;
    if (iVar5 == 2) {
      software_interrupt(0);
      FUN_016d3496(piVar3,0x81,1,in_stack_00000000);
      return;
    }
  }
  return;
}

