// FUN_00b3760c @ 00b3760c size=240 calls_out=1 calls_in=3
// strings: summary | modelName | poolGro | workSolver

undefined4 FUN_00b3760c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 6;
  if (param_2 - 4U < 7) {
    piVar3 = (int *)(param_1 + 8);
    switch(param_2) {
    case 4:
      uVar2 = 4;
      if (*piVar3 != 0x736e6166) {
        uVar2 = 6;
      }
      break;
    case 7:
      iVar1 = thunk_FUN_01bed842(piVar3,"summary",7);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      break;
    case 8:
      iVar1 = thunk_FUN_01bed842(piVar3,&DAT_00570330,8);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 5;
      }
      break;
    case 9:
      iVar1 = thunk_FUN_01bed842(piVar3,"modelName",9);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      break;
    case 10:
      iVar1 = thunk_FUN_01bed842(piVar3,0x3ffff8,10);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        iVar1 = thunk_FUN_01bed842(piVar3,"workSolver",10);
        uVar2 = 6;
        if (iVar1 == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}

