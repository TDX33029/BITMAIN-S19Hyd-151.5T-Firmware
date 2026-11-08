// FUN_015181dc @ 015181dc size=260 calls_out=1 calls_in=2
// strings: 

void FUN_015181dc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar8 = param_1[1];
  iVar2 = param_1[3];
  iVar5 = 0;
  *param_1 = 4;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 4;
  do {
    if (iVar5 == ((uint)(iVar2 - iVar8) >> 3) * -0x55555555) {
      return;
    }
    piVar7 = (int *)(iVar8 + iVar5 * 0x18);
    if ((piVar7[3] & 0x7fffffffU) == 0) {
      iVar10 = piVar7[2];
      piVar6 = (int *)piVar7[1];
    }
    else {
      thunk_FUN_016d3fb4(piVar7[4]);
      iVar10 = piVar7[2];
      piVar6 = (int *)piVar7[1];
    }
    if (iVar10 != 0) {
      iVar4 = 0;
      piVar9 = piVar6;
      do {
        iVar1 = *piVar9;
        if (iVar1 != -0x80000000) {
          piVar3 = piVar9;
          if (iVar1 == -0x7fffffff) {
            iVar1 = piVar9[1];
            if (iVar1 == -0x80000000) goto LAB_0151826c;
            piVar3 = piVar6 + iVar4 * 4 + 1;
          }
          if (iVar1 != 0) {
            thunk_FUN_016d3fb4(piVar3[1]);
          }
        }
LAB_0151826c:
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar5 = iVar5 + 1;
    if (*piVar7 != 0) {
      thunk_FUN_016d3fb4(piVar6);
    }
  } while( true );
}

