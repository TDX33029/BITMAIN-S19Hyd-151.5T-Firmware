// FUN_0006bd74 @ 0006bd74  size=668  callers=1
// program: bmminer


void FUN_0006bd74(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = FUN_0006bcc8(param_3,&local_14,8);
  if (param_2 == 4) {
    FUN_000612bc(0x2e,param_1);
    FUN_000612bc(0x3a,1 << (sbyte)local_14 | param_1);
    FUN_000612bc(0x3b,1 << local_14._1_1_ | param_1);
    FUN_000612bc(0x3c,1 << (sbyte)local_14 | param_1 | 1 << local_14._1_1_);
  }
  else if (param_2 == 8) {
    FUN_000612bc(0x2e,param_1);
    FUN_000612bc(0x3a,1 << (sbyte)local_14 | param_1);
    FUN_000612bc(0x3b,1 << local_14._1_1_ | param_1);
    FUN_000612bc(0x3c,1 << local_14._2_1_ | param_1);
    FUN_000612bc(0x3d,1 << (sbyte)local_14 | param_1 | 1 << local_14._1_1_);
    FUN_000612bc(0x3e,1 << (sbyte)local_14 | param_1 | 1 << local_14._2_1_);
    FUN_000612bc(0x3f,1 << local_14._1_1_ | param_1 | 1 << local_14._2_1_);
    FUN_000612bc(0x40,1 << (sbyte)local_14 | param_1 | 1 << local_14._1_1_ | 1 << local_14._2_1_);
  }
  else {
    FUN_000612bc(0x2e,param_1);
  }
  return;
}

