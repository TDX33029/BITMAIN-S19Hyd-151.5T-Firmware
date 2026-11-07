// FUN_018ed678 @ 018ed678 size=60 calls_out=1 calls_in=6
// strings: 

void FUN_018ed678(int *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_1 != -0x80000000) {
    FUN_0134bd64(*param_1,param_1[1]);
    FUN_0134bd64(param_1[3],param_1[4]);
    iVar1 = 0x18;
  }
  FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar1),((undefined4 *)((int)param_1 + iVar1))[1]);
  return;
}

