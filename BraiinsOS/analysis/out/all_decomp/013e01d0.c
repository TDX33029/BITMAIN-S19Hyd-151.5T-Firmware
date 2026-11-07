// FUN_013e01d0 @ 013e01d0 size=344 calls_out=2 calls_in=0
// strings: 

void FUN_013e01d0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar8 = 0;
  uVar6 = 0;
  piVar3 = *(int **)(param_1[2] + 0x18);
  if (*piVar3 == 1) {
    uVar6 = 1;
    local_34 = (undefined4)((ulonglong)param_1[3] * (ulonglong)(uint)piVar3[1]);
    if ((int)((ulonglong)param_1[3] * (ulonglong)(uint)piVar3[1] >> 0x20) != 0) {
      local_34 = 0xffffffff;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      goto joined_r0x013e0218;
    }
  }
  uVar4 = *param_1;
  uVar5 = param_1[1];
joined_r0x013e0218:
  if ((uVar4 != 0) && (piVar3[2] != 0)) {
    local_38 = (undefined4)((ulonglong)uVar5 * (ulonglong)(uint)piVar3[3]);
    uVar8 = (int)((ulonglong)uVar5 * (ulonglong)(uint)piVar3[3] >> 0x20) != 0 ^ 1;
  }
  iVar9 = piVar3[6];
  uVar14 = piVar3[4];
  iVar7 = piVar3[5];
  iVar15 = piVar3[9];
  iVar1 = piVar3[0xc];
  iVar10 = piVar3[10];
  iVar11 = piVar3[0xb];
  if (param_1[3] == 0) {
    iVar13 = 0;
    if ((uVar14 != 0 && iVar7 != 0) && (uVar14 = uVar4 & uVar5 == 0, uVar14 != 0)) {
      iVar7 = 0;
    }
    iVar12 = 0;
  }
  else {
    iVar13 = piVar3[7];
    iVar12 = piVar3[8];
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *(char *)(puVar2 + 0xc) = (char)iVar1;
  *(undefined2 *)((int)puVar2 + 0x31) = 0;
  puVar2[10] = iVar10;
  puVar2[0xb] = iVar11;
  puVar2[8] = iVar12;
  puVar2[1] = local_34;
  puVar2[2] = uVar8;
  puVar2[3] = local_38;
  puVar2[9] = iVar15;
  *puVar2 = uVar6;
  puVar2[4] = uVar14;
  puVar2[5] = iVar7;
  puVar2[6] = iVar9;
  puVar2[7] = iVar13;
  return;
}

