// FUN_0007a6e0 @ 0007a6e0  size=116  callers=2
// program: bmminer


void FUN_0007a6e0(int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x10);
  while (local_c != param_1 + 0xc) {
    iVar1 = *(int *)(local_c + 4);
    FUN_00079360(*(undefined4 *)(local_c + 0x14));
    FUN_0007d8e8(local_c);
    local_c = iVar1;
  }
  return;
}

