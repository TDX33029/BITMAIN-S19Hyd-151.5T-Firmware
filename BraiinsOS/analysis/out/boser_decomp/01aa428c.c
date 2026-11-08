// FUN_01aa428c @ 01aa428c size=84 calls_out=2 calls_in=35
// strings: 

void FUN_01aa428c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  return;
}

