// FUN_0181c530 @ 0181c530 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_0181c530(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = (**(code **)(param_1[4] + 0xc))(param_1[3]);
  if (*param_1 == -0x80000000) {
    local_28 = 0x80000000;
  }
  else {
    FUN_015e8ad4(&local_28,param_1[1],param_1[2]);
  }
  uVar1 = local_28;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar2 = uVar1;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  *(undefined8 *)(puVar2 + 3) = uVar3;
  return;
}

