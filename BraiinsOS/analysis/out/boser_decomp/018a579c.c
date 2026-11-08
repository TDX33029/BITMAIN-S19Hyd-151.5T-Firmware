// FUN_018a579c @ 018a579c size=152 calls_out=1 calls_in=4
// strings: 

void FUN_018a579c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_20;
  undefined1 local_1f;
  uint local_18;
  uint local_14;
  
  iVar3 = param_2[2];
  FUN_018a40c8(&local_20);
  if (local_20 == '\x01') {
    *param_1 = 0;
  }
  else if (local_14 == 0 && (iVar3 - 1U <= local_18) <= local_14) {
    iVar3 = param_2[3];
    if (iVar3 + 1U < 0x1f5) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      param_1[2] = local_18;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[3] = iVar3 + 1U;
      return;
    }
    *param_1 = 0;
    local_1f = 1;
  }
  else {
    local_1f = 0;
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = local_1f;
  return;
}

