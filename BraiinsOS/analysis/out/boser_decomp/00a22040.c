// FUN_00a22040 @ 00a22040 size=156 calls_out=1 calls_in=1
// strings: config | restart | start

undefined4 FUN_00a22040(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  if (param_2 - 4U < 4) {
    piVar1 = (int *)(param_1 + 8);
    switch(param_2) {
    case 4:
      uVar3 = 2;
      if (*piVar1 != 0x706f7473) {
        uVar3 = 4;
      }
      break;
    case 5:
      iVar2 = thunk_FUN_01bed842(piVar1,"start",5);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      break;
    case 6:
      iVar2 = thunk_FUN_01bed842(piVar1,"config",6);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      break;
    case 7:
      iVar2 = thunk_FUN_01bed842(piVar1,"restart",7);
      uVar3 = 4;
      if (iVar2 == 0) {
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}

