// FUN_0007d410 @ 0007d410  size=228  callers=1
// program: bmminer


undefined4 FUN_0007d410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_58 [72];
  undefined4 local_10;
  char *local_c;
  
  if (param_1 == stdin) {
    local_c = "<stdin>";
  }
  else {
    local_c = "<stream>";
  }
  FUN_00080fa8(param_3,local_c);
  if (param_1 == 0) {
    FUN_0007b2bc(param_3,0,4,"wrong arguments");
    local_10 = 0;
  }
  else {
    iVar1 = FUN_0007c9ac(auStack_58,fgetc,param_2,param_1);
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

