// FUN_0006508c @ 0006508c  size=256  callers=4
// program: bmminer


undefined4 FUN_0006508c(uint param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 == 2) {
    iVar1 = FUN_00067ce4();
    if (iVar1 < 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_00067ce4();
    }
  }
  else if (param_1 < 3) {
    if (param_1 == 1) {
      iVar1 = FUN_00067ca4();
      if (iVar1 < 0) {
        local_c = 0;
      }
      else {
        local_c = FUN_00067ca4();
      }
    }
  }
  else if (param_1 == 0x100) {
    iVar1 = FUN_00067d24();
    if (iVar1 < 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_00067d24();
    }
  }
  else if (param_1 == 0x101) {
    iVar1 = FUN_00067d64();
    if (iVar1 < 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_00067d64();
    }
  }
  return local_c;
}

