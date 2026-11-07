// FUN_00a208a8 @ 00a208a8 size=536 calls_out=6 calls_in=1
// strings: 

void FUN_00a208a8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
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
  int local_118;
  int local_114;
  undefined1 auStack_110 [16];
  undefined1 *local_100;
  int local_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int local_c8;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60;
  int *local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar15 = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 0x10) + 0x10);
  if (iVar3 != 0) {
    iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    iVar3 = iVar3 * 0x48;
    do {
      if ((*(int *)(iVar8 + 0xc) == param_4) &&
         (iVar1 = thunk_FUN_01bed842(*(int *)(iVar8 + 8) + 8,param_3,param_4), iVar1 == 0)) {
        iVar15 = iVar8;
        break;
      }
      iVar8 = iVar8 + 0x48;
      iVar3 = iVar3 + -0x48;
    } while (iVar3 != 0);
  }
  if (iVar15 != 0) {
    iVar15 = iVar15 + 0x10;
  }
  FUN_00ad9f18(&local_118,iVar15);
  if (local_100 == &DAT_80000008) {
    local_50 = -0x7ffffff9;
    iVar3 = 0;
    iVar15 = 0;
  }
  else {
    local_5c = &local_30;
    local_2c = local_114;
    local_30 = local_118;
    local_60 = param_2;
    FUN_00ab0d6c(&local_a0,auStack_110,&local_60);
    if (local_a0 != 0) {
      piVar2 = (int *)((uint)&local_a0 | 4);
      iVar8 = piVar2[1];
      iVar5 = piVar2[2];
      iVar9 = piVar2[3];
      iVar12 = piVar2[4];
      iVar3 = piVar2[5];
      iVar1 = piVar2[6];
      iVar6 = piVar2[7];
      iVar10 = piVar2[8];
      iVar13 = piVar2[9];
      iVar15 = piVar2[10];
      iVar4 = piVar2[0xb];
      iVar7 = piVar2[0xc];
      iVar11 = piVar2[0xd];
      iVar14 = piVar2[0xe];
      *param_1 = *piVar2;
      param_1[1] = iVar8;
      param_1[2] = iVar5;
      param_1[3] = iVar9;
      param_1[4] = iVar12;
      param_1[5] = iVar3;
      param_1[6] = iVar1;
      param_1[7] = iVar6;
      param_1[8] = iVar10;
      param_1[9] = iVar13;
      param_1[10] = iVar15;
      param_1[0xb] = iVar4;
      param_1[0xc] = iVar7;
      param_1[0xd] = iVar11;
      param_1[0xe] = iVar14;
      return;
    }
    piVar2 = (int *)((uint)&local_e0 | 4);
    *piVar2 = local_98;
    piVar2[1] = iStack_94;
    piVar2[2] = local_90;
    piVar2[3] = local_8c;
    piVar2[4] = local_88;
    piVar2[5] = iStack_84;
    piVar2[6] = local_80;
    piVar2[7] = iStack_7c;
    piVar2[8] = local_78;
    piVar2[9] = iStack_74;
    piVar2[10] = iStack_70;
    piVar2[0xb] = iStack_6c;
    local_60 = *piVar2;
    local_5c = (int *)piVar2[1];
    iStack_58 = piVar2[2];
    iStack_54 = piVar2[3];
    local_50 = piVar2[4];
    iStack_4c = piVar2[5];
    local_48 = piVar2[6];
    iStack_44 = piVar2[7];
    iStack_40 = piVar2[8];
    iStack_3c = piVar2[9];
    iStack_38 = piVar2[10];
    iStack_34 = piVar2[0xb];
    iVar3 = local_118;
    iVar15 = local_114;
  }
  FUN_006c92d4(&local_a0,&local_60);
  if (local_a0 == 2) {
    *param_1 = 2;
    param_1[1] = iVar3;
    param_1[2] = iVar15;
    param_1[3] = local_9c;
    param_1[4] = local_98;
    param_1[5] = iStack_94;
  }
  else {
    local_dc = local_9c;
    iStack_d8 = local_98;
    iStack_d4 = iStack_94;
    iStack_d0 = local_90;
    local_cc = local_8c;
    local_c8 = local_88;
    local_e0 = local_a0;
    local_30 = 1;
    local_2c = iVar3;
    local_28 = iVar15;
    FUN_006bd784(&local_a0,&iStack_d0,&local_30);
    if (local_a0 != 0) {
      FUN_006c1148((uint)&local_a0 | 4);
    }
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = iStack_d8;
    param_1[3] = iStack_d4;
    param_1[4] = local_90;
    param_1[5] = local_8c;
    param_1[6] = local_88;
    param_1[7] = iStack_84;
    param_1[8] = local_80;
    param_1[9] = iStack_7c;
    param_1[10] = local_78;
    param_1[0xb] = iStack_74;
    param_1[0xc] = iStack_70;
    param_1[0xd] = iStack_6c;
    param_1[0xe] = iStack_68;
  }
  return;
}

