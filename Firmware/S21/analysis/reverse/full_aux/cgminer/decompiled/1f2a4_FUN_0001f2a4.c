// FUN_0001f2a4 @ 0001f2a4  size=40  callers=1
// program: cgminer


void FUN_0001f2a4(int param_1)

{
  uint uVar1;
  
  uVar1 = fcntl(param_1,3,0);
  fcntl(param_1,4,uVar1 & 0xfffff7ff);
  return;
}

