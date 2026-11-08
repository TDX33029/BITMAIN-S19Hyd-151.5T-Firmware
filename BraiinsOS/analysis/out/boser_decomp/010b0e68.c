// FUN_010b0e68 @ 010b0e68 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_010b0e68(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = (**(code **)(param_1[3] + 0x14))(param_1[2]);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(puVar1 + 2) = uVar4;
  return;
}

