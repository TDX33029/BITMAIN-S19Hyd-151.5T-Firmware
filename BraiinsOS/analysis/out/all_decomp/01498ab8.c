// FUN_01498ab8 @ 01498ab8 size=224 calls_out=1 calls_in=2
// strings: 

void FUN_01498ab8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar5 = 0;
  do {
    if (iVar5 == param_2) {
      return;
    }
    piVar6 = (int *)(param_1 + iVar5 * 0x18);
    if ((piVar6[3] & 0x7fffffffU) == 0) {
      iVar8 = piVar6[2];
      piVar3 = (int *)piVar6[1];
    }
    else {
      thunk_FUN_016d3fb4(piVar6[4]);
      iVar8 = piVar6[2];
      piVar3 = (int *)piVar6[1];
    }
    if (iVar8 != 0) {
      iVar4 = 0;
      piVar7 = piVar3;
      do {
        iVar1 = *piVar7;
        if (iVar1 != -0x80000000) {
          piVar2 = piVar7;
          if (iVar1 == -0x7fffffff) {
            iVar1 = piVar7[1];
            if (iVar1 == -0x80000000) goto LAB_01498b24;
            piVar2 = piVar3 + iVar4 * 4 + 1;
          }
          if (iVar1 != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
        }
LAB_01498b24:
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar5 = iVar5 + 1;
    if (*piVar6 != 0) {
      thunk_FUN_016d3fb4(piVar3);
    }
  } while( true );
}

