// FUN_0004ab6c @ 0004ab6c  size=64  callers=0
// program: bmminer


undefined4 FUN_0004ab6c(int param_1)

{
  ushort local_10 [2];
  undefined1 auStack_c [4];
  
  FUN_00045bc4(0x24,local_10);
  FUN_00045c40(0x24,(uint)local_10[0] | param_1 << 0x10);
  FUN_00045bc4(0x24,auStack_c);
  return 0;
}

