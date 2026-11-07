// FUN_016deb00 @ 016deb00 size=364 calls_out=2 calls_in=0
// strings: 

void FUN_016deb00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar6 = 0;
  uVar4 = 0;
  piVar3 = *(int **)(param_1[2] + 0x18);
  if (*piVar3 == 1) {
    local_34 = (undefined4)((ulonglong)(uint)param_1[3] * (ulonglong)(uint)piVar3[1]);
    if ((int)((ulonglong)(uint)param_1[3] * (ulonglong)(uint)piVar3[1] >> 0x20) != 0) {
      local_34 = 0xffffffff;
    }
    uVar4 = 1;
  }
  uVar5 = param_1[1];
  if ((*param_1 == 1) && (piVar3[2] == 1)) {
    local_38 = (undefined4)((ulonglong)uVar5 * (ulonglong)(uint)piVar3[3]);
    uVar6 = (int)((ulonglong)uVar5 * (ulonglong)(uint)piVar3[3] >> 0x20) != 0 ^ 1;
  }
  uVar13 = piVar3[4];
  iVar11 = piVar3[5];
  iVar14 = piVar3[9];
  iVar12 = piVar3[0xb];
  iVar1 = piVar3[0xc];
  iVar9 = piVar3[6];
  iVar10 = piVar3[10];
  if (param_1[3] == 0) {
    iVar8 = 0;
    if (!(uVar13 == 0 || iVar11 == 0)) {
      if (*param_1 == 0) {
        iVar7 = 0;
        uVar13 = 0;
        goto LAB_016dec00;
      }
      if (uVar5 == 0) {
        iVar11 = 0;
      }
      uVar13 = (uint)(uVar5 == 0);
    }
    iVar7 = 0;
  }
  else {
    iVar7 = piVar3[7];
    iVar8 = piVar3[8];
  }
LAB_016dec00:
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *(char *)(puVar2 + 0xc) = (char)iVar1;
  *(undefined2 *)((int)puVar2 + 0x31) = 0;
  puVar2[10] = iVar10;
  *puVar2 = uVar4;
  puVar2[8] = iVar8;
  puVar2[1] = local_34;
  puVar2[2] = uVar6;
  puVar2[3] = local_38;
  puVar2[9] = iVar14;
  puVar2[0xb] = iVar12;
  puVar2[4] = uVar13;
  puVar2[5] = iVar11;
  puVar2[6] = iVar9;
  puVar2[7] = iVar7;
  return;
}

