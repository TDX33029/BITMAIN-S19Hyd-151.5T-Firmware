// FUN_00ab6e10 @ 00ab6e10 size=524 calls_out=7 calls_in=1
// strings: 

void FUN_00ab6e10(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  pcVar17 = (char *)(param_2 + 0x10);
  if (*pcVar17 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar17);
    if (!bVar1) goto LAB_00ab6e4c;
    *pcVar17 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00ab6e4c:
    FUN_0164fba8(pcVar17);
  }
  FUN_0165098c(pcVar17);
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    iVar19 = *param_3;
    iVar21 = param_3[1];
    iVar12 = param_3[2];
    iVar6 = param_3[3];
    iVar15 = param_3[4];
    iVar9 = param_3[5];
    iVar13 = param_3[6];
    iVar20 = param_3[7];
    iVar11 = param_3[8];
    iVar7 = param_3[9];
    iVar10 = param_3[10];
    iVar14 = param_3[0xb];
    FUN_01650a90(pcVar17);
    if (*pcVar17 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar17);
        if (bVar1) {
          *pcVar17 = '\0';
          goto LAB_00ab6f14;
        }
      } while (*pcVar17 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar17);
LAB_00ab6f14:
    iVar5 = 4;
    if (iVar19 != 3) {
      param_1[1] = iVar21;
      param_1[2] = iVar12;
      param_1[3] = iVar6;
      param_1[4] = iVar15;
      param_1[5] = iVar9;
      param_1[6] = iVar13;
      param_1[7] = iVar20;
      param_1[8] = iVar11;
      param_1[9] = iVar7;
      param_1[10] = iVar10;
      param_1[0xb] = iVar14;
      iVar5 = iVar19;
    }
    goto LAB_00ab6ff4;
  }
  uVar18 = *(uint *)(param_2 + 0x18);
  iVar20 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x40) & uVar18;
  *(uint *)(param_2 + 0x18) = uVar18 + 1;
  *(uint *)(param_2 + 0x1c) = iVar20 + (uint)(0xfffffffe < uVar18);
  if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0xc),&DAT_01d2a530);
  }
  pcVar16 = (char *)(*(int *)(param_2 + 8) + uVar2 * 0x48);
  if (*pcVar16 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar16);
    if (!bVar1) goto LAB_00ab6f50;
    *pcVar16 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00ab6f50:
    FUN_0164fba8(pcVar16);
  }
  FUN_0165098c(pcVar16);
  piVar8 = (int *)(pcVar16 + 8);
  piVar3 = (int *)*piVar8;
  *(uint *)(pcVar16 + 0x38) = uVar18;
  piVar4 = piVar3;
  if (piVar3 != (int *)&DAT_00000003) {
    piVar4 = piVar8;
  }
  *(int *)(pcVar16 + 0x3c) = iVar20;
  *(int *)(pcVar16 + 0x40) = iVar12;
  if (piVar3 != (int *)&DAT_00000003) {
    FUN_00e7c3bc(piVar4);
  }
  iVar12 = param_3[1];
  iVar20 = param_3[2];
  iVar6 = param_3[3];
  iVar11 = param_3[4];
  iVar15 = param_3[5];
  *piVar8 = *param_3;
  *(int *)(pcVar16 + 0xc) = iVar12;
  *(int *)(pcVar16 + 0x10) = iVar20;
  *(int *)(pcVar16 + 0x14) = iVar6;
  *(int *)(pcVar16 + 0x18) = iVar11;
  *(int *)(pcVar16 + 0x1c) = iVar15;
  iVar12 = param_3[7];
  iVar20 = param_3[8];
  iVar6 = param_3[9];
  iVar11 = param_3[10];
  iVar15 = param_3[0xb];
  *(int *)(pcVar16 + 0x20) = param_3[6];
  *(int *)(pcVar16 + 0x24) = iVar12;
  *(int *)(pcVar16 + 0x28) = iVar20;
  *(int *)(pcVar16 + 0x2c) = iVar6;
  *(int *)(pcVar16 + 0x30) = iVar11;
  *(int *)(pcVar16 + 0x34) = iVar15;
  FUN_01650a90(pcVar16);
  if (*pcVar16 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar16);
      if (bVar1) {
        *pcVar16 = '\0';
        goto LAB_00ab6fe4;
      }
    } while (*pcVar16 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar16);
LAB_00ab6fe4:
  FUN_01a14524((int *)(param_2 + 8),pcVar17);
  iVar5 = 4;
LAB_00ab6ff4:
  *param_1 = iVar5;
  return;
}

