// FUN_017f0564 @ 017f0564 size=248 calls_out=4 calls_in=3
// strings: 

void FUN_017f0564(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (199 < (ushort)(*(short *)(param_2 + 0x44) - 400U)) {
    FUN_01bed4e2(param_1,param_2,0x68);
    return;
  }
  piVar1 = *(int **)(param_2 + 0x60);
  iVar8 = *piVar1;
  iVar11 = piVar1[1];
  iVar14 = piVar1[2];
  iVar17 = piVar1[3];
  iVar3 = piVar1[4];
  iVar2 = piVar1[5];
  iVar4 = piVar1[6];
  iVar6 = piVar1[7];
  iVar9 = piVar1[8];
  iVar12 = piVar1[9];
  iVar15 = piVar1[10];
  iVar18 = piVar1[0xb];
  iVar5 = piVar1[0xc];
  iVar7 = piVar1[0xd];
  iVar10 = piVar1[0xe];
  iVar13 = piVar1[0xf];
  iVar16 = piVar1[0x10];
  iVar19 = piVar1[0x11];
  piVar1 = (int *)FUN_017e2d0c(3,*(short *)(param_2 + 0x44),0);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  *piVar1 = iVar8;
  piVar1[1] = iVar11;
  piVar1[2] = iVar14;
  piVar1[3] = iVar17;
  piVar1[4] = iVar3;
  piVar1[5] = iVar2;
  piVar1[6] = iVar4;
  piVar1[7] = iVar6;
  piVar1[8] = iVar9;
  piVar1[9] = iVar12;
  piVar1[10] = iVar15;
  piVar1[0xb] = iVar18;
  piVar1[0xc] = iVar5;
  piVar1[0xd] = iVar7;
  piVar1[0xe] = iVar10;
  piVar1[0xf] = iVar13;
  piVar1[0x10] = iVar16;
  piVar1[0x11] = iVar19;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = piVar1;
  FUN_017f068c(param_2);
  thunk_FUN_01be4678(*(undefined4 *)(param_2 + 0x60));
  return;
}

