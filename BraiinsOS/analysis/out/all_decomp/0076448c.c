// FUN_0076448c @ 0076448c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0076448c(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1[4] = uVar8;
  puVar1[5] = uVar9;
  uVar4 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  puVar1[6] = param_2[6];
  puVar1[7] = uVar4;
  puVar1[8] = uVar6;
  puVar1[9] = uVar7;
  puVar1[10] = uVar8;
  puVar1[0xb] = uVar9;
  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar5 = param_3[2];
  iVar10 = param_3[3];
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_0185bb38;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  param_1[4] = iVar5;
  param_1[5] = iVar10;
  return;
}

