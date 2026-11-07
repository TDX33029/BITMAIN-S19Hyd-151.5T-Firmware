// FUN_011cc910 @ 011cc910 size=516 calls_out=6 calls_in=0
// strings: 

void FUN_011cc910(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 auStack_168 [16];
  undefined1 *local_158;
  undefined1 local_138 [64];
  int local_f8;
  undefined4 *local_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar7 = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 0x10) + 0x10);
  if (iVar3 != 0) {
    iVar11 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    iVar3 = iVar3 * 0x48;
    do {
      if ((*(int *)(iVar11 + 0xc) == 5) &&
         (iVar1 = thunk_FUN_01bed842(*(int *)(iVar11 + 8) + 8,param_3,5), iVar1 == 0)) {
        iVar7 = iVar11;
        break;
      }
      iVar11 = iVar11 + 0x48;
      iVar3 = iVar3 + -0x48;
    } while (iVar3 != 0);
  }
  if (iVar7 != 0) {
    iVar7 = iVar7 + 0x10;
  }
  FUN_00ad9f18(&local_170,iVar7);
  if (local_158 == &DAT_80000008) {
    local_e8 = -0x7ffffff9;
    local_174 = 0;
    uVar5 = 0;
  }
  else {
    local_f4 = &local_2c;
    local_28 = local_16c;
    local_2c = local_170;
    local_f8 = param_2;
    FUN_00ab0d6c(&local_a8,auStack_168,&local_f8);
    if (local_a8 != 0) {
      puVar2 = (undefined4 *)((uint)&local_a8 | 4);
      uVar8 = puVar2[1];
      uVar12 = puVar2[2];
      uVar15 = puVar2[3];
      uVar18 = puVar2[4];
      uVar5 = puVar2[5];
      uVar9 = puVar2[6];
      uVar13 = puVar2[7];
      uVar16 = puVar2[8];
      uVar19 = puVar2[9];
      uVar6 = puVar2[10];
      uVar10 = puVar2[0xb];
      uVar14 = puVar2[0xc];
      uVar17 = puVar2[0xd];
      uVar20 = puVar2[0xe];
      param_1[4] = *puVar2;
      param_1[5] = uVar8;
      param_1[6] = uVar12;
      param_1[7] = uVar15;
      param_1[8] = uVar18;
      param_1[9] = uVar5;
      param_1[10] = uVar9;
      param_1[0xb] = uVar13;
      param_1[0xc] = uVar16;
      param_1[0xd] = uVar19;
      param_1[0xe] = uVar6;
      param_1[0xf] = uVar10;
      param_1[0x10] = uVar14;
      param_1[0x11] = uVar17;
      param_1[0x12] = uVar20;
      goto LAB_011ccac8;
    }
    local_174 = local_170;
    piVar4 = (int *)((uint)local_138 | 4);
    *piVar4 = local_a0;
    piVar4[1] = iStack_9c;
    piVar4[2] = iStack_98;
    piVar4[3] = local_94;
    piVar4[4] = iStack_90;
    piVar4[5] = iStack_8c;
    piVar4[6] = local_88;
    piVar4[7] = iStack_84;
    piVar4[8] = iStack_80;
    piVar4[9] = iStack_7c;
    piVar4[10] = iStack_78;
    piVar4[0xb] = iStack_74;
    local_f8 = *piVar4;
    local_f4 = (undefined4 *)piVar4[1];
    iStack_f0 = piVar4[2];
    iStack_ec = piVar4[3];
    local_e8 = piVar4[4];
    iStack_e4 = piVar4[5];
    local_e0 = piVar4[6];
    iStack_dc = piVar4[7];
    iStack_d8 = piVar4[8];
    iStack_d4 = piVar4[9];
    iStack_d0 = piVar4[10];
    iStack_cc = piVar4[0xb];
    uVar5 = local_16c;
  }
  FUN_00a89f5c(&local_a8,&local_f8);
  local_c8 = local_a0;
  iStack_c4 = iStack_9c;
  iStack_c0 = iStack_98;
  local_bc = local_94;
  iStack_b8 = iStack_90;
  iStack_b4 = iStack_8c;
  iStack_b0 = local_88;
  if (local_a8 != 3 || local_a4 != 0) {
    FUN_01bed4e2(param_1 + 0xb,&iStack_84,0x54);
    param_1[2] = local_a8;
    *param_1 = local_174;
    param_1[1] = uVar5;
    param_1[3] = local_a4;
    param_1[4] = local_c8;
    param_1[5] = iStack_c4;
    param_1[6] = iStack_c0;
    param_1[7] = local_bc;
    param_1[8] = iStack_b8;
    param_1[9] = iStack_b4;
    param_1[10] = iStack_b0;
    return;
  }
  FUN_00ddb4b4(param_1 + 4,&local_c8,local_174,uVar5);
LAB_011ccac8:
  param_1[2] = 3;
  param_1[3] = 0;
  return;
}

