// FUN_009d5d40 @ 009d5d40 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_009d5d40(int *param_1)

{
  undefined4 uVar1;
  int local_158;
  int iStack_154;
  undefined1 auStack_150 [144];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_b0 [152];
  undefined4 local_18;
  
  local_158 = *param_1;
  iStack_154 = param_1[1];
  *param_1 = 3;
  param_1[1] = 0;
  if (local_158 != 3 || iStack_154 != 0) {
    FUN_01bed4e2(auStack_150,param_1 + 2,0x90);
    local_c0 = param_1[0x26];
    iStack_bc = param_1[0x27];
    iStack_b8 = param_1[0x28];
    uVar1 = FUN_01427b74(4);
    FUN_01427c64(uVar1,&DAT_0050d988,0x11);
    FUN_01bed4e2(auStack_b0,&local_158,0x98);
    local_18 = uVar1;
    FUN_009d5e40(&local_c0,auStack_b0);
  }
  return;
}

