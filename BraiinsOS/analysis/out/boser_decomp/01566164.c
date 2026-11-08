// FUN_01566164 @ 01566164 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_01566164(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -0x80000000) {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    FUN_019bb7e0(iVar1,param_1[1]);
  }
  FUN_00e0febc(param_1 + 4);
  return;
}

