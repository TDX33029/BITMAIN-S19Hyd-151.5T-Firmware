// FUN_0003b6dc @ 0003b6dc  size=100  callers=2
// program: bmminer


void FUN_0003b6dc(int param_1,int param_2)

{
  undefined1 auStack_20 [20];
  
  FUN_0003b328(auStack_20,0x400,*(int *)(param_1 + 0x6c) + 8);
  FUN_0003b5d0(param_1,param_2,auStack_20);
  if (*(int *)(param_2 + 4) != 0) {
    FUN_0003b394(auStack_20,*(int *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  FUN_0003b668(param_1,param_2,auStack_20);
  return;
}

