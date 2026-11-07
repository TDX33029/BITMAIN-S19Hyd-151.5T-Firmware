// FUN_006bd898 @ 006bd898 size=156 calls_out=2 calls_in=12
// strings: 

void FUN_006bd898(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_2[7];
  uVar3 = param_2[8];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar2 = param_2[5];
  uVar4 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar4;
  param_1[8] = puVar1;
  param_1[7] = 1;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 4;
  param_1[0xc] = 0;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar3;
  return;
}

