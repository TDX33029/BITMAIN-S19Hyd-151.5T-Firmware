// FUN_0141c93c @ 0141c93c size=188 calls_out=5 calls_in=2
// strings: 

void FUN_0141c93c(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_150;
  int iStack_14c;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_18;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  param_1[1] = 0;
  if (*param_1 == 1) {
    if (iVar1 != 0) {
      local_a8 = FUN_010b3cfc();
      local_ac = 0;
      local_b0 = 3;
      FUN_014404f8(&local_150,iVar2,&local_b0);
      FUN_0141c73c(&local_150);
      return;
    }
  }
  else if (iVar1 != 0) {
    local_18 = FUN_010b3cfc();
    local_ac = 0;
    local_b0 = 3;
    FUN_0144074c(&local_150,iVar2,&local_b0);
    if (local_150 != 5 || iStack_14c != 0) {
      FUN_0141c678(&local_150);
      return;
    }
  }
  return;
}

