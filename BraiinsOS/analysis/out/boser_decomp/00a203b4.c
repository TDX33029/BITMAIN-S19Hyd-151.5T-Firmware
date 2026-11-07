// FUN_00a203b4 @ 00a203b4 size=592 calls_out=6 calls_in=6
// strings: 

void FUN_00a203b4(int *param_1,int param_2,undefined4 param_3,int param_4)

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
  int local_128;
  int local_124;
  undefined1 auStack_120 [16];
  undefined1 *local_110;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int iStack_e0;
  int local_dc;
  int local_d8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_70;
  int *local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
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
  FUN_00ad9f18(&local_128,iVar15);
  if (local_110 == &DAT_80000008) {
    local_60 = -0x7ffffff9;
    iVar3 = 0;
    iVar15 = 0;
  }
  else {
    local_6c = &local_30;
    local_2c = local_124;
    local_30 = local_128;
    local_70 = param_2;
    FUN_00ab0d6c(&local_b0,auStack_120,&local_70);
    if (local_b0 != 0) {
      piVar2 = (int *)((uint)&local_b0 | 4);
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
    piVar2 = (int *)((uint)&local_f0 | 4);
    *piVar2 = local_a8;
    piVar2[1] = local_a4;
    piVar2[2] = iStack_a0;
    piVar2[3] = local_9c;
    piVar2[4] = local_98;
    piVar2[5] = iStack_94;
    piVar2[6] = local_90;
    piVar2[7] = iStack_8c;
    piVar2[8] = local_88;
    piVar2[9] = iStack_84;
    piVar2[10] = iStack_80;
    piVar2[0xb] = iStack_7c;
    local_70 = *piVar2;
    local_6c = (int *)piVar2[1];
    iStack_68 = piVar2[2];
    iStack_64 = piVar2[3];
    local_60 = piVar2[4];
    iStack_5c = piVar2[5];
    local_58 = piVar2[6];
    iStack_54 = piVar2[7];
    iStack_50 = piVar2[8];
    iStack_4c = piVar2[9];
    iStack_48 = piVar2[10];
    iStack_44 = piVar2[0xb];
    iVar3 = local_128;
    iVar15 = local_124;
  }
  FUN_006c8594(&local_b0,&local_70);
  if (local_b0 == 2) {
    param_1[1] = iVar3;
    param_1[2] = iVar15;
    param_1[3] = local_ac;
    param_1[4] = local_a8;
    param_1[5] = local_a4;
    *param_1 = 2;
  }
  else {
    local_40 = local_a4;
    iStack_3c = iStack_a0;
    iStack_38 = local_9c;
    local_e8 = local_a8;
    local_ec = local_ac;
    local_f0 = local_b0;
    local_e4 = local_a4;
    iStack_e0 = iStack_a0;
    local_dc = local_9c;
    local_d8 = local_98;
    local_30 = 1;
    local_2c = iVar3;
    local_28 = iVar15;
    FUN_006bd784(&local_b0,&iStack_e0,&local_30);
    if (local_b0 != 0) {
      FUN_006c1148((uint)&local_b0 | 4);
    }
    *param_1 = local_f0;
    param_1[1] = local_ec;
    param_1[2] = local_e8;
    param_1[3] = local_e4;
    param_1[4] = iStack_a0;
    param_1[5] = local_9c;
    param_1[6] = local_98;
    param_1[7] = iStack_94;
    param_1[8] = local_90;
    param_1[9] = iStack_8c;
    param_1[10] = local_88;
    param_1[0xb] = iStack_84;
    param_1[0xc] = iStack_80;
    param_1[0xd] = iStack_7c;
    param_1[0xe] = iStack_78;
  }
  return;
}

