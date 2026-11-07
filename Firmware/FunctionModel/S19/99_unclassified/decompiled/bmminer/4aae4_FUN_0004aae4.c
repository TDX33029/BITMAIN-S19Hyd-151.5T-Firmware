// FUN_0004aae4 @ 0004aae4  size=68  callers=0
// program: bmminer


undefined4 FUN_0004aae4(uint param_1)

{
  uint local_10;
  undefined1 auStack_c [4];
  
  FUN_00045bc4(0x24,&local_10);
  FUN_00045c40(0x24,local_10 & 0xffffff00 | param_1);
  FUN_00045bc4(0x24,auStack_c);
  return 0;
}

