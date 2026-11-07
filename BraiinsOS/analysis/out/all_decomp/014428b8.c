// FUN_014428b8 @ 014428b8 size=540 calls_out=3 calls_in=9
// strings: 

void FUN_014428b8(int *param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  
  uVar17 = *(uint *)(param_2 + 0x1c);
  if (uVar17 <= param_3) {
LAB_01442a98:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar17,&DAT_018a6364);
  }
  iVar24 = *(int *)(param_2 + 0x18);
  uVar5 = *(uint *)(param_2 + 0x28);
  *(undefined4 *)(iVar24 + param_3 * 4) = 0xffff;
  if (uVar5 <= param_4) {
    FUN_006028e8(param_4);
    goto LAB_01442a98;
  }
  piVar25 = (int *)(param_4 * 0x34 + *(int *)(param_2 + 0x24));
  uVar5 = uVar5 - 1;
  iVar9 = *piVar25;
  iVar13 = piVar25[1];
  iVar18 = piVar25[2];
  iVar21 = piVar25[3];
  iVar10 = piVar25[4];
  iVar14 = piVar25[5];
  iVar19 = piVar25[6];
  iVar22 = piVar25[7];
  iVar3 = piVar25[8];
  iVar11 = piVar25[9];
  iVar15 = piVar25[10];
  iVar20 = piVar25[0xb];
  iVar23 = piVar25[0xc];
  FUN_016dd52c(piVar25,uVar5 * 0x34 + *(int *)(param_2 + 0x24),0x34);
  *(uint *)(param_2 + 0x28) = uVar5;
  if (param_4 < uVar5) {
    uVar4 = (uint)(*(ushort *)(piVar25 + 0xc) & *(ushort *)(param_2 + 0x38));
    while( true ) {
      do {
        uVar6 = uVar4;
        uVar4 = 0;
      } while (uVar17 <= uVar6);
      puVar7 = (ushort *)(iVar24 + uVar6 * 4);
      if ((*puVar7 != 0xffff) && (uVar5 <= *puVar7)) break;
      uVar4 = uVar6 + 1;
    }
    puVar7[1] = *(ushort *)(piVar25 + 0xc);
    *puVar7 = (ushort)param_4;
    if (*piVar25 == 1) {
      uVar4 = piVar25[1];
      uVar6 = *(uint *)(param_2 + 0x34);
      if (uVar6 <= uVar4) {
        puVar8 = &DAT_018a6374;
        goto LAB_01442ad0;
      }
      uVar12 = piVar25[2];
      piVar25 = *(int **)(param_2 + 0x30);
      piVar25[uVar4 * 9] = 0;
      (piVar25 + uVar4 * 9)[1] = param_4;
      if (uVar6 <= uVar12) {
        puVar8 = &DAT_018a6384;
        uVar4 = uVar12;
        goto LAB_01442ad0;
      }
      piVar25[uVar12 * 9 + 2] = 0;
      piVar25[uVar12 * 9 + 3] = param_4;
    }
  }
  if (uVar5 == 0) {
LAB_01442a68:
    *param_1 = iVar9;
    param_1[1] = iVar13;
    param_1[2] = iVar18;
    param_1[3] = iVar21;
    param_1[4] = iVar10;
    param_1[5] = iVar14;
    param_1[6] = iVar19;
    param_1[7] = iVar22;
    param_1[8] = iVar3;
    param_1[9] = iVar11;
    param_1[10] = iVar15;
    param_1[0xb] = iVar20;
    param_1[0xc] = iVar23;
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x38);
  puVar8 = &DAT_018a6394;
  uVar5 = param_3 + 1;
  while( true ) {
    do {
      uVar4 = uVar5;
      uVar5 = 0;
    } while (uVar17 <= uVar4);
    psVar16 = (short *)(iVar24 + uVar4 * 4);
    sVar2 = *psVar16;
    if (sVar2 != -1) {
      param_4 = (uint)(ushort)psVar16[1];
      piVar25 = (int *)(uVar4 - (uVar1 & psVar16[1]));
    }
    if (sVar2 == -1 || ((uint)piVar25 & (uint)uVar1) == 0) goto LAB_01442a68;
    if (uVar17 <= param_3) break;
    piVar25 = (int *)(param_3 * 4);
    *(short *)(iVar24 + (int)piVar25) = sVar2;
    *psVar16 = -1;
    ((short *)(iVar24 + (int)piVar25))[1] = (short)param_4;
    psVar16[1] = 0;
    uVar5 = uVar4 + 1;
    param_3 = uVar4;
  }
  uVar4 = param_3;
  uVar6 = uVar17;
LAB_01442ad0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar4,uVar6,puVar8);
}

