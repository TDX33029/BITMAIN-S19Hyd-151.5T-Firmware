// FUN_0147dc08 @ 0147dc08 size=176 calls_out=5 calls_in=1
// strings: 

void FUN_0147dc08(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_150 [160];
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
      FUN_0146b4f0(auStack_150,iVar2,&local_b0);
      FUN_0147d960(auStack_150);
      return;
    }
  }
  else if (iVar1 != 0) {
    local_18 = FUN_010b3cfc();
    local_ac = 0;
    local_b0 = 3;
    FUN_0146bc0c(auStack_150,iVar2,&local_b0);
    FUN_0147ded8(auStack_150);
    return;
  }
  return;
}

