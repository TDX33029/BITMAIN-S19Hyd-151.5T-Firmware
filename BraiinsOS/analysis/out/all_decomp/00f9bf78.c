// FUN_00f9bf78 @ 00f9bf78 size=524 calls_out=4 calls_in=1
// strings: 

void FUN_00f9bf78(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  iVar10 = param_2[1];
  iVar11 = param_2[2];
  iVar9 = iVar11 << 3;
  uVar7 = 0;
  while( true ) {
    if (iVar9 == 0) {
      if (iVar11 == *param_2) {
        FUN_00f98f0c(param_2);
        iVar10 = param_2[1];
      }
      iVar9 = param_2[3];
      puVar2 = (undefined4 *)(iVar10 + iVar11 * 8);
      *puVar2 = param_3;
      iVar10 = param_2[5];
      puVar2[1] = param_4;
      param_2[2] = iVar11 + 1;
      if (iVar10 == iVar9) {
        FUN_00f98d88();
      }
      puVar2 = (undefined4 *)(param_2[4] + iVar10 * 0x3c);
      uVar3 = param_5[1];
      uVar4 = param_5[2];
      uVar5 = param_5[3];
      uVar6 = param_5[4];
      *puVar2 = *param_5;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2[4] = uVar6;
      uVar3 = param_5[6];
      uVar4 = param_5[7];
      uVar5 = param_5[8];
      uVar6 = param_5[9];
      puVar2[5] = param_5[5];
      puVar2[6] = uVar3;
      puVar2[7] = uVar4;
      puVar2[8] = uVar5;
      puVar2[9] = uVar6;
      uVar3 = param_5[0xb];
      uVar4 = param_5[0xc];
      uVar5 = param_5[0xd];
      uVar6 = param_5[0xe];
      puVar2[10] = param_5[10];
      puVar2[0xb] = uVar3;
      puVar2[0xc] = uVar4;
      puVar2[0xd] = uVar5;
      puVar2[0xe] = uVar6;
      *param_1 = 2;
      param_2[5] = iVar10 + 1;
      return;
    }
    if ((*(int *)(iVar10 + uVar7 * 8 + 4) == param_4) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + uVar7 * 8),param_3,param_4), iVar1 == 0)
       ) break;
    iVar9 = iVar9 + -8;
    uVar7 = uVar7 + 1;
  }
  if ((uint)param_2[5] <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,param_2[5],&DAT_01880834);
  }
  uVar4 = *param_5;
  uVar5 = param_5[1];
  uVar8 = param_5[2];
  uVar12 = param_5[3];
  puVar2 = (undefined4 *)(param_2[4] + uVar7 * 0x3c);
  *param_5 = *puVar2;
  uVar3 = puVar2[3];
  *puVar2 = uVar4;
  param_5[1] = puVar2[1];
  param_5[3] = uVar3;
  uVar3 = puVar2[5];
  puVar2[5] = param_5[5];
  param_5[5] = uVar3;
  uVar3 = puVar2[6];
  puVar2[6] = param_5[6];
  param_5[6] = uVar3;
  uVar3 = puVar2[7];
  puVar2[7] = param_5[7];
  param_5[7] = uVar3;
  uVar3 = puVar2[8];
  puVar2[8] = param_5[8];
  param_5[8] = uVar3;
  uVar3 = puVar2[9];
  puVar2[9] = param_5[9];
  param_5[9] = uVar3;
  uVar3 = puVar2[10];
  puVar2[10] = param_5[10];
  param_5[10] = uVar3;
  uVar3 = puVar2[0xb];
  puVar2[0xb] = param_5[0xb];
  param_5[0xb] = uVar3;
  uVar3 = puVar2[0xc];
  puVar2[0xc] = param_5[0xc];
  param_5[0xc] = uVar3;
  uVar3 = puVar2[0xd];
  uVar4 = param_5[0xd];
  uVar6 = puVar2[2];
  puVar2[1] = uVar5;
  puVar2[0xd] = uVar4;
  param_5[0xd] = uVar3;
  uVar5 = param_5[4];
  uVar3 = puVar2[0xe];
  uVar4 = param_5[0xe];
  param_5[4] = puVar2[4];
  puVar2[2] = uVar8;
  param_5[2] = uVar6;
  puVar2[3] = uVar12;
  puVar2[4] = uVar5;
  puVar2[0xe] = uVar4;
  param_5[0xe] = uVar3;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar6 = param_5[4];
  *param_1 = *param_5;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  uVar3 = param_5[6];
  uVar4 = param_5[7];
  uVar5 = param_5[8];
  uVar6 = param_5[9];
  param_1[5] = param_5[5];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  uVar3 = param_5[0xb];
  uVar4 = param_5[0xc];
  uVar5 = param_5[0xd];
  uVar6 = param_5[0xe];
  param_1[10] = param_5[10];
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  return;
}

