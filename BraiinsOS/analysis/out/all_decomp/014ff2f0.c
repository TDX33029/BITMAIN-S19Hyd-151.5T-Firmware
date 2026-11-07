// FUN_014ff2f0 @ 014ff2f0 size=156 calls_out=1 calls_in=4
// strings: 

void FUN_014ff2f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_28;
  undefined1 local_27;
  uint local_20;
  uint local_1c;
  
  iVar3 = param_2[2];
  FUN_014fd58c(&local_28);
  if (local_28 == '\x01') {
    *param_1 = 0;
  }
  else if (local_1c == 0 && (iVar3 - 1U <= local_20) <= local_1c) {
    iVar3 = param_2[3];
    if (iVar3 + 1U < 0x1f5) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      param_1[2] = local_20;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[3] = iVar3 + 1U;
      return;
    }
    *param_1 = 0;
    local_27 = 1;
  }
  else {
    local_27 = 0;
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = local_27;
  return;
}

