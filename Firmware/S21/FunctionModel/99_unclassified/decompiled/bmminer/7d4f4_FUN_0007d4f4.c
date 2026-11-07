// FUN_0007d4f4 @ 0007d4f4  size=76  callers=0
// program: bmminer


uint FUN_0007d4f4(int *param_1)

{
  ssize_t sVar1;
  uint uVar2;
  byte local_9;
  
  sVar1 = read(*param_1,&local_9,1);
  if (sVar1 == 1) {
    uVar2 = (uint)local_9;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

