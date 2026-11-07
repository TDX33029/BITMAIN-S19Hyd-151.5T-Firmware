// FUN_00b1c8e0 @ 00b1c8e0 size=200 calls_out=1 calls_in=3
// strings: 

void FUN_00b1c8e0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  bool bVar25;
  
  uVar22 = 0;
  puVar24 = (undefined4 *)(param_1 + param_3 * 0x48);
  uVar2 = *puVar24;
  uVar5 = puVar24[1];
  uVar11 = puVar24[2];
  uVar15 = puVar24[3];
  uVar18 = puVar24[4];
  uVar3 = puVar24[5];
  uVar6 = puVar24[6];
  uVar12 = puVar24[7];
  uVar16 = puVar24[8];
  uVar19 = puVar24[9];
  uVar4 = puVar24[10];
  uVar7 = puVar24[0xb];
  uVar10 = puVar24[0xc];
  uVar13 = puVar24[0xd];
  uVar17 = puVar24[0xe];
  uVar20 = puVar24[0xf];
  uVar23 = puVar24[0x10];
  iVar21 = puVar24[0x11];
  if (param_3 != 0) {
    do {
      uVar14 = param_3 - 1;
      uVar1 = uVar14 >> 1;
      iVar8 = param_1 + uVar1 * 0x48;
      iVar9 = *(int *)(iVar8 + 0x44);
      bVar25 = uVar23 < *(uint *)(iVar8 + 0x40);
      if ((int)(iVar21 - (iVar9 + (uint)bVar25)) < 0 ==
          (SBORROW4(iVar21,iVar9) != SBORROW4(iVar21 - iVar9,(uint)bVar25))) {
        uVar22 = param_3;
        break;
      }
      FUN_01bed4e2(param_1 + param_3 * 0x48,iVar8,0x48);
      param_3 = uVar1;
    } while (1 < uVar14);
  }
  puVar24 = (undefined4 *)(param_1 + uVar22 * 0x48);
  *puVar24 = uVar2;
  puVar24[1] = uVar5;
  puVar24[2] = uVar11;
  puVar24[3] = uVar15;
  puVar24[4] = uVar18;
  puVar24[5] = uVar3;
  puVar24[6] = uVar6;
  puVar24[7] = uVar12;
  puVar24[8] = uVar16;
  puVar24[9] = uVar19;
  puVar24[10] = uVar4;
  puVar24[0xb] = uVar7;
  puVar24[0xc] = uVar10;
  puVar24[0xd] = uVar13;
  puVar24[0xe] = uVar17;
  puVar24[0xf] = uVar20;
  puVar24[0x10] = uVar23;
  puVar24[0x11] = iVar21;
  return;
}

