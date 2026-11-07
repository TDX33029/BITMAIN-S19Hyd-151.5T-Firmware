// FUN_012b1a4c @ 012b1a4c size=352 calls_out=4 calls_in=2
// strings: 

void FUN_012b1a4c(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar1 = param_2[2];
  iVar9 = 0;
  puVar10 = (undefined4 *)param_2[1];
  uVar7 = 0;
  puVar3 = puVar10;
  while( true ) {
    if (puVar3 == puVar10 + iVar1 * 2) {
      if (iVar1 == *param_2) {
        FUN_015f5ab8(param_2);
        puVar10 = (undefined4 *)param_2[1];
      }
      iVar9 = param_2[3];
      puVar10[iVar1 * 2] = param_3;
      iVar2 = param_2[5];
      (puVar10 + iVar1 * 2)[1] = param_4;
      param_2[2] = iVar1 + 1;
      if (iVar2 == iVar9) {
        FUN_018faa34();
      }
      puVar3 = (undefined4 *)(param_2[4] + iVar2 * 0x3c);
      uVar5 = param_5[1];
      uVar4 = param_5[2];
      uVar6 = param_5[3];
      uVar8 = param_5[4];
      *puVar3 = *param_5;
      puVar3[1] = uVar5;
      puVar3[2] = uVar4;
      puVar3[3] = uVar6;
      puVar3[4] = uVar8;
      uVar5 = param_5[6];
      uVar4 = param_5[7];
      uVar6 = param_5[8];
      uVar8 = param_5[9];
      puVar3[5] = param_5[5];
      puVar3[6] = uVar5;
      puVar3[7] = uVar4;
      puVar3[8] = uVar6;
      puVar3[9] = uVar8;
      uVar5 = param_5[0xb];
      uVar4 = param_5[0xc];
      uVar6 = param_5[0xd];
      uVar8 = param_5[0xe];
      puVar3[10] = param_5[10];
      puVar3[0xb] = uVar5;
      puVar3[0xc] = uVar4;
      puVar3[0xd] = uVar6;
      puVar3[0xe] = uVar8;
      *param_1 = 2;
      param_2[5] = iVar2 + 1;
      return;
    }
    if ((puVar3[1] == param_4) && (iVar2 = thunk_FUN_01bed842(*puVar3,param_3,param_4), iVar2 == 0))
    break;
    iVar9 = iVar9 + 0x3c;
    puVar3 = puVar3 + 2;
    uVar7 = uVar7 + 1;
  }
  if ((uint)param_2[5] <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,param_2[5],&DAT_01ce2524);
  }
  iVar1 = param_2[4];
  iVar2 = 0;
  do {
    uVar5 = *(undefined4 *)(iVar1 + iVar9 + iVar2 * 4);
    *(undefined4 *)(iVar1 + iVar9 + iVar2 * 4) = param_5[iVar2];
    param_5[iVar2] = uVar5;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  uVar5 = param_5[1];
  uVar4 = param_5[2];
  uVar6 = param_5[3];
  uVar8 = param_5[4];
  *param_1 = *param_5;
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  uVar5 = param_5[6];
  uVar4 = param_5[7];
  uVar6 = param_5[8];
  uVar8 = param_5[9];
  param_1[5] = param_5[5];
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar8;
  uVar5 = param_5[0xb];
  uVar4 = param_5[0xc];
  uVar6 = param_5[0xd];
  uVar8 = param_5[0xe];
  param_1[10] = param_5[10];
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar8;
  return;
}

