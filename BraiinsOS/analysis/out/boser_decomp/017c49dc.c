// FUN_017c49dc @ 017c49dc size=172 calls_out=4 calls_in=2
// strings: 

void FUN_017c49dc(int *param_1)

{
  undefined4 uVar1;
  int local_1f8;
  int iStack_1f4;
  undefined1 auStack_1f0 [144];
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 local_150 [40];
  undefined1 auStack_b0 [160];
  
  local_1f8 = *param_1;
  iStack_1f4 = param_1[1];
  *param_1 = 3;
  param_1[1] = 0;
  if (local_1f8 != 3 || iStack_1f4 != 0) {
    FUN_01bed4e2(auStack_1f0,param_1 + 2,0x90);
    local_160 = param_1[0x26];
    iStack_15c = param_1[0x27];
    iStack_158 = param_1[0x28];
    uVar1 = FUN_0143b8e8(4);
    FUN_0143baec(uVar1,&DAT_0050d988,0x11);
    FUN_01bed4e2((uint)auStack_b0 | 4,&local_1f8,0x98);
    local_150[0] = uVar1;
    FUN_01bed4e2((uint)local_150 | 4,auStack_b0,0x9c);
    FUN_017c4af0(&local_160,local_150);
  }
  return;
}

