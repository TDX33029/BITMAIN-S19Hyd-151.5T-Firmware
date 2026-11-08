// FUN_0002bbc8 @ 0002bbc8  size=76  callers=0
// program: cgminer


bool FUN_0002bbc8(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  FUN_00028c90();
  bVar1 = *(int *)(param_1 + 0xdc) == 0;
  if (bVar1) {
    FUN_0002b8ec(param_1);
  }
  return bVar1;
}

