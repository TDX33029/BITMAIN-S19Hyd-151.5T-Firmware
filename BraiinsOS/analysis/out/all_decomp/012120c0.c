// FUN_012120c0 @ 012120c0 size=216 calls_out=2 calls_in=3
// strings: 

void FUN_012120c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_2 + 0xf) == '\0') {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x40);
    }
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1[4] = uVar5;
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    puVar1[5] = param_2[5];
    puVar1[6] = uVar2;
    puVar1[7] = uVar3;
    puVar1[8] = uVar4;
    puVar1[9] = uVar5;
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar6 = param_2[0xf];
    puVar1[10] = param_2[10];
    puVar1[0xb] = uVar2;
    puVar1[0xc] = uVar3;
    puVar1[0xd] = uVar4;
    puVar1[0xe] = uVar5;
    puVar1[0xf] = uVar6;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = puVar1;
    param_1[5] = 1;
    param_1[6] = 0;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  puVar1[9] = uVar5;
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  puVar1[10] = param_2[10];
  puVar1[0xb] = uVar2;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  puVar1[0xe] = uVar5;
  puVar1[0xf] = uVar6;
  *param_1 = 0x80000000;
  param_1[1] = 1;
  param_1[2] = puVar1;
  param_1[3] = 1;
  param_1[4] = 0;
  return;
}

