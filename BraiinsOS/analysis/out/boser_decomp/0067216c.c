// FUN_0067216c @ 0067216c size=104 calls_out=2 calls_in=0
// strings: 

void FUN_0067216c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x58);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x58);
  }
  *puVar1 = param_1;
  uVar2 = param_6[1];
  uVar3 = param_6[2];
  uVar4 = param_6[3];
  puVar1[1] = *param_6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[5] = param_2;
  puVar1[6] = param_3;
  puVar1[7] = param_4;
  puVar1[8] = param_5;
  return;
}

