// FUN_00048214 @ 00048214  size=228  callers=0
// program: cgminer


undefined4 FUN_00048214(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_470;
  undefined1 *local_46c;
  undefined1 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_44c;
  undefined1 auStack_448 [12];
  undefined4 local_43c;
  undefined4 local_434;
  undefined1 auStack_428 [1032];
  int local_20;
  undefined4 local_1c;
  
  memset(auStack_428,0,0x410);
  local_20 = param_1;
  local_1c = param_2;
  FUN_0004a384(param_4,"<callback>");
  if (param_1 == 0) {
    FUN_00046b44(param_4,0,4,"wrong arguments");
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_46c = auStack_428;
    local_470 = &LAB_00046ae8;
    local_468 = 0;
    local_460 = 0;
    local_45c = 0;
    local_454 = 0;
    local_44c = 0;
    local_458 = 1;
    iVar1 = FUN_000483cc(auStack_448);
    if (iVar1 == 0) {
      local_434 = 0xffffffff;
      local_43c = param_3;
      uVar2 = FUN_00047d00(&local_470,param_3,param_4);
      FUN_00046c74(&local_470);
    }
  }
  return uVar2;
}

