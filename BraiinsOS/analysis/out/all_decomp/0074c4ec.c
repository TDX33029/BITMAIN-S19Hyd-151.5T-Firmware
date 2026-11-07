// FUN_0074c4ec @ 0074c4ec size=396 calls_out=3 calls_in=8
// strings: 

void FUN_0074c4ec(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  
  uVar20 = *(uint *)(param_2 + 8);
  uVar5 = 2;
  iVar22 = 8;
  if (uVar20 == 0) {
LAB_0074c630:
    *(undefined4 *)((int)param_1 + iVar22) = uVar5;
    return;
  }
  iVar9 = *(int *)(param_2 + 4);
  iVar22 = uVar20 << 3;
  uVar13 = 0;
  while ((puVar1 = (undefined4 *)(iVar9 + uVar13 * 8), puVar1[1] != param_4 ||
         (iVar2 = thunk_FUN_016dd50a(*puVar1,param_3,param_4), iVar2 != 0))) {
    uVar13 = uVar13 + 1;
    iVar22 = iVar22 + -8;
    if (iVar22 == 0) {
      param_1[2] = 2;
      return;
    }
  }
  if (uVar20 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00602938(uVar13,uVar20,&DAT_01880804);
  }
  puVar1 = (undefined4 *)(iVar9 + uVar13 * 8);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  FUN_016dd52c(puVar1,puVar1 + 2,(uVar20 + ~uVar13) * 8);
  uVar23 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_2 + 8) = uVar20 - 1;
  if (uVar13 < uVar23) {
    piVar4 = (int *)(*(int *)(param_2 + 0x10) + uVar13 * 0x3c);
    iVar21 = *piVar4;
    iVar6 = piVar4[1];
    iVar10 = piVar4[2];
    iVar14 = piVar4[3];
    iVar17 = piVar4[4];
    iVar9 = piVar4[5];
    iVar7 = piVar4[6];
    iVar11 = piVar4[7];
    iVar15 = piVar4[8];
    iVar18 = piVar4[9];
    iVar2 = piVar4[10];
    iVar8 = piVar4[0xb];
    iVar12 = piVar4[0xc];
    iVar16 = piVar4[0xd];
    iVar19 = piVar4[0xe];
    FUN_016dd52c(piVar4,piVar4 + 0xf,(uVar23 + ~uVar13) * 0x3c);
    uVar23 = uVar23 - 1;
    *(uint *)(param_2 + 0x14) = uVar23;
    if (iVar21 != 2) {
      iVar22 = 4;
      param_1[2] = iVar21;
      param_1[3] = iVar6;
      param_1[4] = iVar10;
      param_1[5] = iVar14;
      param_1[6] = iVar17;
      param_1[7] = iVar9;
      param_1[8] = iVar7;
      param_1[9] = iVar11;
      param_1[10] = iVar15;
      param_1[0xb] = iVar18;
      param_1[0xc] = iVar2;
      param_1[0xd] = iVar8;
      param_1[0xe] = iVar12;
      param_1[0xf] = iVar16;
      param_1[0x10] = iVar19;
      *param_1 = uVar3;
      goto LAB_0074c630;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(uVar13,uVar23,&DAT_01880814);
}

