// FUN_0004939c @ 0004939c  size=692  callers=1
// program: bmminer


int * FUN_0004939c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  void *local_1c;
  
  piVar3 = param_1 + 1;
  piVar7 = (int *)*param_1;
  while( true ) {
    if (piVar3 == piVar7) {
      return (int *)0x0;
    }
    FUN_000498b4(piVar7[4],&local_1c);
    iVar1 = (*(code *)param_1[9])(param_2,local_1c);
    free(local_1c);
    piVar4 = (int *)*piVar7;
    if (iVar1 == 0) break;
    piVar7 = (int *)piVar7[1];
    if (iVar1 < 0) {
      piVar7 = piVar4;
    }
  }
  piVar8 = (int *)piVar7[1];
  if (piVar3 != piVar4) {
    piVar9 = piVar8;
    if (piVar3 != piVar8) {
      for (; piVar3 != (int *)*piVar9; piVar9 = (int *)*piVar9) {
      }
      piVar8 = (int *)piVar9[1];
      goto LAB_0004943c;
    }
    piVar8 = piVar4;
  }
  piVar9 = piVar7;
LAB_0004943c:
  piVar8[2] = piVar9[2];
  puVar5 = (undefined4 *)piVar9[2];
  if (puVar5 == (undefined4 *)0x0) {
    *param_1 = (int)piVar8;
  }
  else if (piVar9 == (int *)*puVar5) {
    *puVar5 = piVar8;
  }
  else {
    puVar5[1] = piVar8;
  }
  if (piVar9 != piVar7) {
    iVar1 = piVar7[4];
    iVar6 = piVar7[5];
    iVar2 = piVar9[5];
    piVar7[4] = piVar9[4];
    piVar9[4] = iVar1;
    piVar7[5] = iVar2;
    piVar9[5] = iVar6;
  }
  if (piVar9[3] == 0) {
    piVar7 = (int *)*param_1;
LAB_000494c4:
    piVar3 = piVar8;
    if (piVar8 != piVar7) {
      while( true ) {
        piVar3 = piVar8;
        if (piVar8[3] != 0) goto LAB_00049528;
        piVar3 = (int *)piVar8[2];
        piVar7 = (int *)*piVar3;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar3[1];
          if (piVar7[3] == 1) {
            piVar7[3] = 0;
            piVar3[3] = 1;
            FUN_00048d40(param_1,piVar3);
            piVar3 = (int *)piVar8[2];
            piVar7 = (int *)piVar3[1];
          }
          iVar1 = piVar7[1];
          if (*(int *)(*piVar7 + 0xc) == 0) {
            if (*(int *)(iVar1 + 0xc) == 0) goto LAB_00049518;
          }
          else if (*(int *)(iVar1 + 0xc) == 0) {
            *(undefined4 *)(*piVar7 + 0xc) = 0;
            piVar7[3] = 1;
            FUN_00048d94(param_1,piVar7);
            piVar3 = (int *)piVar8[2];
            piVar7 = (int *)piVar3[1];
            iVar1 = piVar7[1];
          }
          piVar7[3] = piVar3[3];
          piVar3[3] = 0;
          *(undefined4 *)(iVar1 + 0xc) = 0;
          FUN_00048d40(param_1,piVar3);
          piVar7 = (int *)*param_1;
          piVar8 = piVar7;
          goto LAB_000494c4;
        }
        if (piVar7[3] == 1) {
          piVar7[3] = 0;
          piVar3[3] = 1;
          FUN_00048d94(param_1,piVar3);
          piVar3 = (int *)piVar8[2];
          piVar7 = (int *)*piVar3;
        }
        iVar1 = *piVar7;
        if (*(int *)(piVar7[1] + 0xc) != 0) break;
        if (*(int *)(iVar1 + 0xc) != 0) goto LAB_00049560;
LAB_00049518:
        piVar7[3] = 1;
        piVar8 = piVar3;
        if (piVar3 == (int *)*param_1) goto LAB_00049528;
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        *(undefined4 *)(piVar7[1] + 0xc) = 0;
        piVar7[3] = 1;
        FUN_00048d40(param_1,piVar7);
        piVar3 = (int *)piVar8[2];
        piVar7 = (int *)*piVar3;
        iVar1 = *piVar7;
      }
LAB_00049560:
      piVar7[3] = piVar3[3];
      piVar3[3] = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_00048d94(param_1,piVar3);
      piVar7 = (int *)*param_1;
      piVar8 = piVar7;
      goto LAB_000494c4;
    }
LAB_00049528:
    piVar3[3] = 0;
  }
  FUN_00048fe0(param_1);
  return piVar9;
}

