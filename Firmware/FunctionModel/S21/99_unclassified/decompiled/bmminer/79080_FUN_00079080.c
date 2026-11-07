// FUN_00079080 @ 00079080  size=156  callers=2
// program: bmminer


undefined4 FUN_00079080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = FUN_0007da78(auStack_18);
  if (iVar1 == 0) {
    iVar1 = FUN_0007928c(param_1,FUN_00078044,auStack_18,param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_0007db90(auStack_18);
      local_c = FUN_0007d928(uVar2);
    }
    else {
      local_c = 0;
    }
    FUN_0007daf4(auStack_18);
  }
  else {
    local_c = 0;
  }
  return local_c;
}

