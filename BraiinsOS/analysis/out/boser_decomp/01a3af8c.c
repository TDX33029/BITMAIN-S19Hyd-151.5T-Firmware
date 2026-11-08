// FUN_01a3af8c @ 01a3af8c size=64 calls_out=2 calls_in=2
// strings: 

void FUN_01a3af8c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  puVar1[4] = param_1[4];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  uVar4 = param_1[0xb];
  uVar5 = param_1[0xc];
  puVar1[8] = param_1[8];
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar5;
  return;
}

