// FUN_0182cad4 @ 0182cad4 size=344 calls_out=2 calls_in=2
// strings: 

void FUN_0182cad4(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  
  if (*(uint *)(param_1 + 0x28) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 0x28),&DAT_01d1e484);
  }
  piVar9 = (int *)(*(int *)(param_1 + 0x24) + param_2 * 0x34);
  if (*piVar9 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    if (iVar2 == *(int *)(param_1 + 0x2c)) {
      FUN_01aa8fa8(param_1 + 0x2c);
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 0x24);
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    puVar1[3] = param_2;
    puVar1[4] = uVar3;
    puVar1[5] = uVar4;
    puVar1[6] = uVar5;
    puVar1[7] = uVar6;
    puVar1[8] = uVar7;
    *(int *)(param_1 + 0x34) = iVar2 + 1;
    *piVar9 = 1;
    piVar9[1] = iVar2;
    piVar9[2] = iVar2;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x34);
    uVar10 = piVar9[2];
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    if (uVar8 == *(uint *)(param_1 + 0x2c)) {
      FUN_01aa8fa8(param_1 + 0x2c);
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + uVar8 * 0x24);
    *puVar1 = 1;
    puVar1[1] = uVar10;
    puVar1[2] = 0;
    puVar1[3] = param_2;
    puVar1[4] = uVar3;
    puVar1[5] = uVar4;
    puVar1[6] = uVar5;
    puVar1[7] = uVar6;
    puVar1[8] = uVar7;
    *(uint *)(param_1 + 0x34) = uVar8 + 1;
    if (uVar8 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar8 + 1,&DAT_01d2f39c);
    }
    piVar9[2] = uVar8;
    *piVar9 = 1;
    iVar2 = *(int *)(param_1 + 0x30) + uVar10 * 0x24;
    *(undefined4 *)(iVar2 + 8) = 1;
    *(uint *)(iVar2 + 0xc) = uVar8;
  }
  return;
}

