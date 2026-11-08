// FUN_006b15ac @ 006b15ac size=108 calls_out=1 calls_in=0
// strings: 

void FUN_006b15ac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  int *local_14;
  int **local_10;
  undefined1 *local_c;
  
  local_14 = (int *)*param_1 + 1;
  iVar1 = *(int *)*param_1;
  if (iVar1 == 0) {
    puVar2 = &DAT_005bd5dc;
  }
  else if (iVar1 == 1) {
    puVar2 = &DAT_0057a667;
  }
  else {
    puVar2 = &DAT_00590e5f;
  }
  local_10 = &local_14;
  local_c = &LAB_01963050;
  FUN_012fa178(*param_2,param_2[1],puVar2,&local_10);
  return;
}

