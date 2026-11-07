// FUN_0166bed8 @ 0166bed8 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_0166bed8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_3;
  uVar2 = param_3[1];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  puVar1[3] = uVar2;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar4;
  uVar2 = param_3[3];
  uVar4 = param_3[4];
  uVar3 = param_3[5];
  puVar1[4] = param_3[2];
  puVar1[5] = uVar2;
  puVar1[6] = uVar4;
  puVar1[7] = uVar3;
  uVar2 = param_3[7];
  uVar4 = param_3[8];
  uVar3 = param_3[9];
  puVar1[8] = param_3[6];
  puVar1[9] = uVar2;
  puVar1[10] = uVar4;
  puVar1[0xb] = uVar3;
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  return;
}

