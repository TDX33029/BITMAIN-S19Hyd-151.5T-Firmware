// FUN_0004ab28 @ 0004ab28  size=68  callers=0
// program: bmminer


undefined4 FUN_0004ab28(int param_1)

{
  uint local_10;
  undefined1 auStack_c [4];
  
  FUN_00045bc4(0x24,&local_10);
  FUN_00045c40(0x24,local_10 & 0xffff00ff | param_1 << 8);
  FUN_00045bc4(0x24,auStack_c);
  return 0;
}

