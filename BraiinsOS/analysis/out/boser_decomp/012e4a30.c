// FUN_012e4a30 @ 012e4a30 size=144 calls_out=1 calls_in=0
// strings: 

void FUN_012e4a30(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piStack_28;
  undefined1 *puStack_24;
  int *local_20;
  code *local_1c;
  
  piStack_28 = param_1 + 1;
  local_20 = param_1 + 4;
  if (*param_1 == 1) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar1 = &DAT_005b12b2;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar1 = &DAT_00576abb;
  }
  local_1c = FUN_012fd02c;
  puStack_24 = &LAB_00632348;
  FUN_012fa178(uVar2,uVar3,puVar1,&piStack_28);
  return;
}

