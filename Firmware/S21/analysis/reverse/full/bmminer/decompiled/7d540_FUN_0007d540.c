// FUN_0007d540 @ 0007d540  size=216  callers=0
// program: bmminer


undefined4 FUN_0007d540(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_5c;
  undefined1 auStack_58 [72];
  undefined4 local_10;
  char *local_c;
  
  if (param_1 == 0) {
    local_c = "<stdin>";
  }
  else {
    local_c = "<stream>";
  }
  local_5c = param_1;
  FUN_00080fa8(param_3,local_c);
  if (local_5c < 0) {
    FUN_0007b2bc(param_3,0,4,"wrong arguments");
    local_10 = 0;
  }
  else {
    iVar1 = FUN_0007c9ac(auStack_58,FUN_0007d4f4,param_2,&local_5c);
    if (iVar1 == 0) {
      local_10 = FUN_0007d064(auStack_58,param_2,param_3);
      FUN_0007ca28(auStack_58);
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}

