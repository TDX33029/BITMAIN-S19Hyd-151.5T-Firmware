// FUN_01427160 @ 01427160 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_01427160(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  uVar5 = param_1[3];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x18);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  puVar1[4] = 0;
  return;
}

