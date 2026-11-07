// FUN_00a215e0 @ 00a215e0 size=184 calls_out=1 calls_in=2
// strings: events | storage

undefined4 FUN_00a215e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if (param_2 - 3U < 6) {
    piVar1 = (int *)(param_1 + 8);
    switch(param_2) {
    case 3:
      iVar2 = thunk_FUN_01bed842(piVar1,"bos",3);
      uVar3 = 5;
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      break;
    case 4:
      if (*piVar1 == 0x68747561) {
        uVar3 = 0;
      }
      break;
    case 6:
      iVar2 = thunk_FUN_01bed842(piVar1,"events",6);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      break;
    case 7:
      iVar2 = thunk_FUN_01bed842(piVar1,"storage",7);
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      break;
    case 8:
      iVar2 = thunk_FUN_01bed842(piVar1,&DAT_00570fa0,8);
      uVar3 = 5;
      if (iVar2 == 0) {
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}

