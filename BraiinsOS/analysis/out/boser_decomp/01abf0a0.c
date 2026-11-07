// FUN_01abf0a0 @ 01abf0a0 size=148 calls_out=1 calls_in=0
// strings: 

void FUN_01abf0a0(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int **ppiVar4;
  code *pcVar5;
  int *local_10;
  int *local_c;
  
  if (*param_1 == 3) {
    local_10 = param_1 + 1;
    ppiVar4 = &local_10;
    puVar1 = &DAT_0056cf5c;
    puVar3 = &DAT_0056d2bc;
    uVar2 = 4;
    pcVar5 = FUN_018a010c;
  }
  else {
    ppiVar4 = &local_c;
    puVar1 = &DAT_00531a4a;
    puVar3 = &DAT_0056d358;
    pcVar5 = FUN_016ccf6c;
    uVar2 = 0x13;
    local_c = param_1;
  }
  FUN_01303cdc(param_2,puVar1,uVar2,puVar3,4,ppiVar4,pcVar5);
  return;
}

