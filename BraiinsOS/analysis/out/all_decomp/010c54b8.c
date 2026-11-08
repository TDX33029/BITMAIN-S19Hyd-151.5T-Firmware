// FUN_010c54b8 @ 010c54b8 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_010c54b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40);
  }
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  uVar4 = param_1[8];
  uVar5 = param_1[9];
  puVar1[5] = param_1[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  puVar1[9] = uVar5;
  uVar2 = param_1[0xb];
  uVar3 = param_1[0xc];
  uVar4 = param_1[0xd];
  uVar5 = param_1[0xe];
  uVar6 = param_1[0xf];
  puVar1[10] = param_1[10];
  puVar1[0xb] = uVar2;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  puVar1[0xe] = uVar5;
  puVar1[0xf] = uVar6;
  return;
}

