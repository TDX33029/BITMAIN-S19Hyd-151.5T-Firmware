// FUN_012bf7a8 @ 012bf7a8 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_012bf7a8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar5;
  puVar1[9] = uVar6;
  piVar4 = (int *)(param_1 + 0x38);
  if (*piVar4 != 0) {
    FUN_012bf844(piVar4);
  }
  *piVar4 = (int)puVar1;
  return;
}

