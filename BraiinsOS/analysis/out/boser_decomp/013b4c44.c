// FUN_013b4c44 @ 013b4c44 size=192 calls_out=1 calls_in=2
// strings: 

void FUN_013b4c44(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  bool bVar10;
  
  if (*param_2 == 1) {
    uVar1 = param_2[1];
    if (param_2[4] <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,param_2[4],&DAT_01ceff3c);
    }
    uVar8 = 0;
    iVar2 = param_2[3] + uVar1 * 0x24;
    puVar9 = (uint *)(iVar2 + 0x10);
    bVar10 = *(int *)(iVar2 + 8) != 0;
    uVar1 = 0;
    if (bVar10) {
      uVar1 = *(uint *)(iVar2 + 0xc);
    }
    *param_2 = (uint)bVar10;
    param_2[1] = uVar1;
  }
  else {
    puVar3 = (uint *)param_2[6];
    uVar8 = 2;
    if (puVar3 == (uint *)param_2[8]) goto LAB_013b4ce8;
    uVar1 = *puVar3;
    param_2[6] = (uint)(puVar3 + 0xd);
    if (uVar1 == 2) goto LAB_013b4ce8;
    uVar7 = puVar3[1];
    puVar9 = puVar3 + 3;
    uVar4 = puVar3[9];
    uVar5 = puVar3[10];
    uVar6 = puVar3[0xb];
    uVar8 = 1;
    param_1[1] = puVar3[8];
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    *param_2 = uVar1;
    param_2[1] = uVar7;
  }
  uVar1 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  uVar6 = puVar9[4];
  param_1[5] = *puVar9;
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
LAB_013b4ce8:
  *param_1 = uVar8;
  return;
}

