// FUN_01a69b90 @ 01a69b90 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_01a69b90(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar8 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar8;
  uVar2 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar8 = param_2[0xb];
  puVar1[6] = param_2[6];
  puVar1[7] = uVar2;
  puVar1[8] = uVar4;
  puVar1[9] = uVar5;
  puVar1[10] = uVar6;
  puVar1[0xb] = uVar8;
  iVar3 = param_3[1];
  iVar7 = param_3[2];
  iVar9 = param_3[3];
  param_1[2] = *param_3;
  param_1[3] = iVar3;
  param_1[4] = iVar7;
  param_1[5] = iVar9;
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_01d2cec4;
  return;
}

