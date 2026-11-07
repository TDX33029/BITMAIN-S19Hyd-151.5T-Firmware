// FUN_0008e39c @ 0008e39c  size=424  callers=2
// program: bmminer


int FUN_0008e39c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_c;
  
  local_c = 0;
  if (param_2 == 0) {
    FUN_00095b4c(2,"src/rotater.c",0x218,"base_path is null or 0");
    local_c = -1;
  }
  else {
    iVar1 = FUN_0008e0fc(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_00099154(param_2,auStack_68);
      if (iVar1 == 0) {
        if (param_5 < (uint)(local_3c + param_3)) {
          local_c = FUN_0008df8c(param_1,param_2,param_4,param_6);
          if (local_c != 0) {
            FUN_00095b4c(2,"src/rotater.c",0x230,"zlog_rotater_lsmv [%s] fail, return",param_2);
            local_c = -1;
          }
        }
        else {
          local_c = 0;
        }
      }
      else {
        local_c = -1;
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x221,"stat [%s] fail, errno[%d]",param_2,*piVar2);
      }
      iVar1 = FUN_0008e2a4(param_1);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/rotater.c",0x239,"zlog_rotater_unlock fail");
      }
    }
    else {
      FUN_00095b4c(1,"src/rotater.c",0x21b,
                   "zlog_rotater_trylock fail, maybe lock by other process or threads");
      local_c = 0;
    }
  }
  return local_c;
}

