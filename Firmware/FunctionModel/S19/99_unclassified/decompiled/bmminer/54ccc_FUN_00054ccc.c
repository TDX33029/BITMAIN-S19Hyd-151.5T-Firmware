// FUN_00054ccc @ 00054ccc  size=224  callers=1
// program: bmminer


undefined4 FUN_00054ccc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *local_60;
  int local_5c;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_24;
  
  if (stdin == param_1) {
    pcVar2 = "<stdin>";
  }
  else {
    pcVar2 = "<stream>";
  }
  FUN_000570ac(param_3,pcVar2);
  if (param_1 == 0) {
    FUN_00053870(param_3,0,4,"wrong arguments");
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    local_60 = fgetc;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_48 = 1;
    local_5c = param_1;
    iVar1 = FUN_000550f8(auStack_38);
    if (iVar1 == 0) {
      local_24 = 0xffffffff;
      local_2c = param_2;
      uVar3 = FUN_00054a2c(&local_60,param_2,param_3);
      FUN_000539a0(&local_60);
    }
  }
  return uVar3;
}

