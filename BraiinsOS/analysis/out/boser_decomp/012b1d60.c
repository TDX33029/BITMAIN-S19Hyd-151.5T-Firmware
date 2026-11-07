// FUN_012b1d60 @ 012b1d60 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_012b1d60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *param_2;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  puVar1[4] = uVar4;
  *param_1 = puVar1;
  param_1[1] = &DAT_01ce2544;
  param_1[2] = 0x50f052f7;
  param_1[3] = 0x9909b2a5;
  param_1[4] = 0xdf97b325;
  param_1[5] = 0xb55cb20e;
  return;
}

