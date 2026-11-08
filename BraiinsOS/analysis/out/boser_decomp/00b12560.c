// FUN_00b12560 @ 00b12560 size=92 calls_out=2 calls_in=6
// strings: 

void FUN_00b12560(undefined4 *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1[2] = *param_3;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar1[6] = param_3[4];
  puVar1[7] = uVar2;
  puVar1[8] = uVar3;
  puVar1[9] = uVar4;
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = puVar1;
  param_1[1] = &DAT_01c11a58;
  return;
}

