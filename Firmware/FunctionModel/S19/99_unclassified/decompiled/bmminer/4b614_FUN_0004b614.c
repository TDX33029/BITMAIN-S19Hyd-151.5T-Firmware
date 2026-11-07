// FUN_0004b614 @ 0004b614  size=116  callers=1
// program: bmminer


undefined4 FUN_0004b614(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_14;
  
  uVar1 = FUN_00049df8(param_2);
  local_14 = 0;
  FUN_00045bc4(0xf);
  if (param_1 == 0) {
    local_14 = uVar1 & 0x3f;
  }
  else if (param_1 == 1) {
    local_14 = (uVar1 & 0x3f) << 8;
  }
  else if (param_1 == 2) {
    local_14 = (uVar1 & 0x3f) << 0x10;
  }
  else if (param_1 == 3) {
    local_14 = (uVar1 & 0x3f) << 0x18;
  }
  FUN_00045c40(0xf,local_14);
  return 0;
}

