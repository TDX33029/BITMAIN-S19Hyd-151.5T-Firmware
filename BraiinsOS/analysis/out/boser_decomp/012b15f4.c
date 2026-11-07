// FUN_012b15f4 @ 012b15f4 size=220 calls_out=5 calls_in=1
// strings: 

int FUN_012b15f4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  
  piVar6 = (int *)*param_1;
  iVar7 = param_1[1];
  uVar10 = param_1[2];
  if (piVar6 == (int *)0x0) {
    if (*(uint *)(iVar7 + 0x14) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,*(uint *)(iVar7 + 0x14),&DAT_01ce24e4);
    }
    iVar7 = *(int *)(iVar7 + 0x10);
    FUN_012b1708(param_2);
    return iVar7 + uVar10 * 0x3c;
  }
  iVar8 = piVar6[2];
  if (iVar8 == *piVar6) {
    FUN_015f5ab8(piVar6);
  }
  piVar1 = (int *)(piVar6[1] + iVar8 * 8);
  *piVar1 = iVar7;
  piVar1[1] = uVar10;
  iVar7 = piVar6[5];
  piVar6[2] = iVar8 + 1;
  if (iVar7 == piVar6[3]) {
    FUN_018faa34();
  }
  puVar2 = (undefined4 *)(piVar6[4] + iVar7 * 0x3c);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar9 = param_2[4];
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar9;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar9 = param_2[9];
  puVar2[5] = param_2[5];
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  puVar2[8] = uVar5;
  puVar2[9] = uVar9;
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar9 = param_2[0xe];
  puVar2[10] = param_2[10];
  puVar2[0xb] = uVar3;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar5;
  puVar2[0xe] = uVar9;
  piVar6[5] = iVar7 + 1;
  if (iVar7 != -1) {
    iVar7 = piVar6[4] + (iVar7 + 1) * 0x3c + -0x3c;
    if (iVar7 != 0) {
      return iVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01ce24d4);
}

