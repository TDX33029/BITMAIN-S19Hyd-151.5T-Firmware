// FUN_0071d258 @ 0071d258 size=204 calls_out=1 calls_in=2
// strings: 

void FUN_0071d258(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *in_stack_00000004;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  
  puVar3 = param_1 + 2;
  if ((*in_stack_00000004 & 0x3f) == 0) {
    uVar2 = in_stack_00000004[3];
    uVar1 = in_stack_00000004[2];
    *param_1 = 0;
    param_1[1] = 0;
    *puVar3 = 1;
    param_1[3] = 0;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else if (*in_stack_00000004 == 0xc) {
    FUN_00719574(&local_28);
    if ((char)local_28 != 'O') {
      *puVar3 = local_28;
      param_1[3] = uStack_24;
      param_1[4] = local_20;
      param_1[5] = local_1c;
    }
    else {
      param_1[3] = 0;
      param_1[4] = local_20;
      param_1[5] = local_1c;
      *puVar3 = 1;
    }
    *param_1 = (uint)((char)local_28 != 'O');
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

