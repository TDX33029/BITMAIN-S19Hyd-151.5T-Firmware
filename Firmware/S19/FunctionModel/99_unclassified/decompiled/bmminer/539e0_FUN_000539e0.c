// FUN_000539e0 @ 000539e0  size=44  callers=0
// program: bmminer


uint FUN_000539e0(int *param_1)

{
  ssize_t sVar1;
  uint uVar2;
  byte local_9 [5];
  
  sVar1 = read(*param_1,local_9,1);
  if (sVar1 == 1) {
    uVar2 = (uint)local_9[0];
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

