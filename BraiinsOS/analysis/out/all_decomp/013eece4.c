// FUN_013eece4 @ 013eece4 size=152 calls_out=2 calls_in=2
// strings: 

void FUN_013eece4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0189dba0);
  }
  *param_1 = -1;
  iVar5 = param_1[3];
  if (iVar5 == param_1[1]) {
    FUN_01401574();
  }
  puVar1 = (undefined4 *)(param_1[2] + iVar5 * 0x1c);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  puVar1[3] = param_2[3];
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  param_1[3] = iVar5 + 1;
  *param_1 = *param_1 + 1;
  return;
}

