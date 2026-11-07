// FUN_012b1f38 @ 012b1f38 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_012b1f38(undefined4 *param_1,undefined4 *param_2)

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
  param_1[1] = &DAT_01ce2584;
  param_1[2] = 0x56e16461;
  param_1[3] = 0x2215d2c8;
  param_1[4] = 0xffbf8770;
  param_1[5] = 0xc81b5277;
  return;
}

