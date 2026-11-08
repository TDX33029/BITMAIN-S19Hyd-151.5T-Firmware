// FUN_01ac6990 @ 01ac6990 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_01ac6990(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 auStack_28 [8];
  undefined2 local_20;
  undefined1 local_19;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < 2) {
    FUN_01283c9c(param_1,2);
  }
  local_20 = param_2;
  iVar1 = 8;
  do {
    local_19 = auStack_28[iVar1];
    FUN_01284394(param_1,&local_19,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  return;
}

