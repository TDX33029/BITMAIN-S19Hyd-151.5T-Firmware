// FUN_011c0388 @ 011c0388 size=484 calls_out=4 calls_in=1
// strings: 

void FUN_011c0388(undefined4 *param_1,int param_2,short *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [16];
  undefined1 *local_d8;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_38;
  undefined4 *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x10);
  if (iVar4 != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    iVar4 = iVar4 * 0x48;
    do {
      if ((*(int *)(iVar1 + 0xc) == 2) && (*(short *)(*(int *)(iVar1 + 8) + 8) == *param_3)) {
        iVar3 = iVar1;
        break;
      }
      iVar1 = iVar1 + 0x48;
      iVar4 = iVar4 + -0x48;
    } while (iVar4 != 0);
  }
  if (iVar3 != 0) {
    iVar3 = iVar3 + 0x10;
  }
  FUN_00ad9f18(&local_f0,iVar3);
  if (local_d8 == &DAT_80000008) {
    local_68 = -0x7ffffff9;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    local_34 = &local_2c;
    local_28 = local_ec;
    local_2c = local_f0;
    local_38 = param_2;
    FUN_00ab0d6c(&local_78,auStack_e8,&local_38);
    if (local_78 != 0) {
      puVar2 = (undefined4 *)((uint)&local_78 | 4);
      uVar7 = puVar2[1];
      uVar10 = puVar2[2];
      uVar13 = puVar2[3];
      uVar16 = puVar2[4];
      uVar5 = puVar2[5];
      uVar8 = puVar2[6];
      uVar11 = puVar2[7];
      uVar14 = puVar2[8];
      uVar17 = puVar2[9];
      uVar6 = puVar2[10];
      uVar9 = puVar2[0xb];
      uVar12 = puVar2[0xc];
      uVar15 = puVar2[0xd];
      uVar18 = puVar2[0xe];
      *param_1 = *puVar2;
      param_1[1] = uVar7;
      param_1[2] = uVar10;
      param_1[3] = uVar13;
      param_1[4] = uVar16;
      param_1[5] = uVar5;
      param_1[6] = uVar8;
      param_1[7] = uVar11;
      param_1[8] = uVar14;
      param_1[9] = uVar17;
      param_1[10] = uVar6;
      param_1[0xb] = uVar9;
      param_1[0xc] = uVar12;
      param_1[0xd] = uVar15;
      param_1[0xe] = uVar18;
      return;
    }
    piVar19 = (int *)((uint)&local_b8 | 4);
    *piVar19 = local_70;
    piVar19[1] = iStack_6c;
    piVar19[2] = local_68;
    piVar19[3] = iStack_64;
    piVar19[4] = local_60;
    piVar19[5] = iStack_5c;
    piVar19[6] = local_58;
    piVar19[7] = iStack_54;
    piVar19[8] = iStack_50;
    piVar19[9] = iStack_4c;
    piVar19[10] = iStack_48;
    piVar19[0xb] = iStack_44;
    local_78 = *piVar19;
    iStack_74 = piVar19[1];
    local_70 = piVar19[2];
    iStack_6c = piVar19[3];
    local_68 = piVar19[4];
    iStack_64 = piVar19[5];
    local_60 = piVar19[6];
    iStack_5c = piVar19[7];
    local_58 = piVar19[8];
    iStack_54 = piVar19[9];
    iStack_50 = piVar19[10];
    iStack_4c = piVar19[0xb];
    uVar5 = local_f0;
    uVar6 = local_ec;
  }
  FUN_006c92d4(&local_b8,&local_78);
  if (local_b8 == 2) {
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = local_b4;
    param_1[4] = local_b0;
    param_1[5] = local_ac;
    *param_1 = 2;
  }
  else {
    local_38 = local_ac;
    local_34 = (undefined4 *)uStack_a8;
    uStack_30 = local_a4;
    FUN_00ddb4b4(param_1,&local_b8,uVar5,uVar6);
  }
  return;
}

