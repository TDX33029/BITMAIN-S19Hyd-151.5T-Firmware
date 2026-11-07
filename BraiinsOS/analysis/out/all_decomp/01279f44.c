// FUN_01279f44 @ 01279f44 size=480 calls_out=6 calls_in=2
// strings: attempt to divide by zero | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01279f44(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("attempt to divide by zero",0x33,&DAT_0188b7d4);
  }
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  if (param_3 < 0x10000) {
    if (uVar10 != 0) {
      uVar4 = 0;
      iVar6 = uVar10 * -4;
      do {
        uVar7 = *(uint *)((uVar9 - 4) - iVar6);
        iVar3 = FUN_018462e8(uVar4 << 0x10 | uVar7 >> 0x10,param_3);
        iVar8 = (uVar7 & 0xffff) + ((uVar7 >> 0x10) - iVar3 * param_3) * 0x10000;
        uVar7 = FUN_018462e8(iVar8,param_3);
        uVar4 = iVar8 - uVar7 * param_3;
        *(uint *)((uVar9 - 4) - iVar6) = uVar7 | iVar3 << 0x10;
        iVar6 = iVar6 + 4;
      } while (iVar6 != 0);
      goto LAB_0127a008;
    }
LAB_0127a0a8:
    uVar7 = *param_2;
    uVar4 = 0;
LAB_0127a0b0:
    uVar10 = 0;
    if (uVar7 >> 2 == 0) goto LAB_0127a0e4;
  }
  else {
    if (uVar10 == 0) goto LAB_0127a0a8;
    uVar4 = 0;
    iVar6 = uVar10 * -4;
    do {
      iVar8 = *(int *)((uVar9 - 4) - iVar6);
      iVar3 = FUN_01846088(iVar8,uVar4,param_3,0);
      uVar4 = iVar8 - iVar3 * param_3;
      *(int *)((uVar9 - 4) - iVar6) = iVar3;
      iVar6 = iVar6 + 4;
    } while (iVar6 != 0);
LAB_0127a008:
    uVar7 = *param_2;
    if (*(int *)(uVar9 + uVar10 * 4 + -4) == 0) {
      iVar6 = uVar10 << 2;
      uVar2 = uVar10 & 0x3fffffff;
      do {
        uVar5 = uVar2;
        if (iVar6 == 0) goto LAB_0127a0b0;
        piVar1 = (int *)((uVar9 - 4) + iVar6);
        iVar6 = iVar6 + -4;
        uVar2 = uVar5 - 1;
      } while (*piVar1 == 0);
      if (uVar5 < uVar10) {
        uVar10 = uVar5;
      }
    }
    if (uVar7 >> 2 <= uVar10) goto LAB_0127a0e4;
  }
  if (uVar7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar10;
    if (uVar10 == 0) {
      thunk_FUN_016d3fb4(uVar9);
      uVar9 = 4;
    }
    else {
      uVar9 = thunk_FUN_016d4ea4(uVar9,uVar10 << 2);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar10 << 2);
      }
    }
  }
LAB_0127a0e4:
  *param_1 = uVar7;
  param_1[1] = uVar9;
  param_1[2] = uVar10;
  param_1[3] = uVar4;
  return;
}

