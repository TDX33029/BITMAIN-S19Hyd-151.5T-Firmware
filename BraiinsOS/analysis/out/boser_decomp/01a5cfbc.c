// FUN_01a5cfbc @ 01a5cfbc size=120 calls_out=3 calls_in=2
// strings: 

void FUN_01a5cfbc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  FUN_012d40d0(0);
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = puVar1;
  param_1[4] = &DAT_01d2c4d4;
  return;
}

