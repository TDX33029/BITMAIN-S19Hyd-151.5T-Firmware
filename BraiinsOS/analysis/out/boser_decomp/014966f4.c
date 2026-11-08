// FUN_014966f4 @ 014966f4 size=108 calls_out=3 calls_in=41
// strings: 

void FUN_014966f4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_190 [376];
  
  FUN_01adbaa4(auStack_190,param_3);
  iVar1 = *(int *)(param_2 + 0xb4);
  if (iVar1 == *(int *)(param_2 + 0xac)) {
    FUN_0149e53c();
  }
  FUN_01bed4e2(iVar1 * 0x178 + *(int *)(param_2 + 0xb0),auStack_190,0x178);
  *(int *)(param_2 + 0xb4) = iVar1 + 1;
  FUN_01bed4e2(param_1,param_2,200);
  return;
}

