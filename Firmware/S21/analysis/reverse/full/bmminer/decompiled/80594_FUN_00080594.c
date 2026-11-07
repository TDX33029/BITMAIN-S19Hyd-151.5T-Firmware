// FUN_00080594 @ 00080594  size=128  callers=1
// program: bmminer


undefined4 FUN_00080594(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
     (iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0xc)),
     iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

