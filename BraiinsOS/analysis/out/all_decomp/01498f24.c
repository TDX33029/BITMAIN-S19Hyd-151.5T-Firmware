// FUN_01498f24 @ 01498f24 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_01498f24(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  piVar4 = (int *)(param_1 + 4);
  iVar5 = 0;
  do {
    uVar2 = piVar4[-1];
    iVar3 = 4;
    piVar1 = (int *)(param_1 + iVar5 * 0x10);
    if (0x80000000 < uVar2) {
      iVar3 = uVar2 + 0x7fffffff;
    }
    switch(iVar3) {
    case 0:
    case 2:
      break;
    case 1:
      piVar1 = piVar1 + 1;
      goto LAB_01498fa4;
    case 3:
      piVar1 = piVar4;
LAB_01498fa4:
      if (*piVar1 != 0) {
        thunk_FUN_016d3fb4(piVar1[1]);
      }
      break;
    default:
      if (uVar2 != 0x80000000) goto LAB_01498fa4;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 4;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

