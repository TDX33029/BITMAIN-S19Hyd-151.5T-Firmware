// FUN_00c709f8 @ 00c709f8 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_00c709f8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar7 = *(int *)(param_2 + 0x2e8);
  if (iVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  iVar6 = *(int *)(param_2 + 0x2e4);
  iVar1 = thunk_FUN_016d4a50(iVar7 * 0x24);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar7 * 0x24);
  }
  iVar9 = *(int *)(param_2 + 0x204);
  puVar4 = (undefined4 *)(iVar6 + 0x20);
  iVar6 = iVar7;
  puVar8 = (undefined4 *)(iVar1 + 0x20);
  do {
    uVar10 = *(undefined4 *)(iVar9 + 0xb8);
    uVar2 = puVar4[1];
    uVar3 = puVar4[2];
    uVar5 = puVar4[3];
    iVar6 = iVar6 + -1;
    puVar8[-8] = *puVar4;
    puVar8[-7] = uVar2;
    puVar8[-6] = uVar3;
    puVar8[-5] = uVar5;
    uVar2 = puVar4[5];
    uVar3 = puVar4[6];
    uVar5 = puVar4[7];
    puVar8[-4] = puVar4[4];
    puVar8[-3] = uVar2;
    puVar8[-2] = uVar3;
    puVar8[-1] = uVar5;
    *puVar8 = uVar10;
    puVar4 = puVar4 + 0x14;
    puVar8 = puVar8 + 9;
  } while (iVar6 != 0);
  *param_1 = iVar7;
  param_1[1] = iVar1;
  param_1[2] = iVar7;
  return;
}

