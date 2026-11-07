// FUN_011a40e0 @ 011a40e0 size=592 calls_out=7 calls_in=5
// strings: 

void FUN_011a40e0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,code *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int *piVar21;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 auStack_db [51];
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_2c;
  undefined4 *local_28;
  
  iVar20 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x10);
  if (iVar4 != 0) {
    iVar10 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    iVar4 = iVar4 * 0x48;
    do {
      if ((*(int *)(iVar10 + 0xc) == param_4) &&
         (iVar2 = thunk_FUN_01bed842(*(int *)(iVar10 + 8) + 8,param_3,param_4), iVar2 == 0)) {
        iVar20 = iVar10;
        break;
      }
      iVar10 = iVar10 + 0x48;
      iVar4 = iVar4 + -0x48;
    } while (iVar4 != 0);
  }
  if (iVar20 != 0) {
    iVar20 = iVar20 + 0x10;
  }
  FUN_00ad9f18(&local_120,iVar20);
  if ((param_5 == (code *)0x0) || (local_108 != &DAT_80000008)) {
    if (local_108 == &DAT_80000008) {
      uVar5 = 0;
      uVar6 = 0;
      local_98 = -0x7ffffff9;
    }
    else {
      local_60 = local_118;
      local_5c = uStack_114;
      local_58 = uStack_110;
      local_54 = uStack_10c;
      puStack_50 = local_108;
      uStack_4c = uStack_104;
      local_48 = local_100;
      uStack_44 = uStack_fc;
      uStack_40 = uStack_f8;
      uStack_3c = uStack_f4;
      uStack_38 = uStack_f0;
      uStack_34 = uStack_ec;
      local_28 = &local_68;
      local_64 = local_11c;
      local_68 = local_120;
      local_2c = param_2;
      FUN_00ab0d6c(&local_a8,&local_60,&local_2c);
      if (local_a8 != 0) {
        puVar3 = (undefined4 *)((uint)&local_a8 | 4);
        uVar7 = puVar3[1];
        uVar11 = puVar3[2];
        uVar14 = puVar3[3];
        uVar17 = puVar3[4];
        uVar5 = puVar3[5];
        uVar8 = puVar3[6];
        uVar12 = puVar3[7];
        uVar15 = puVar3[8];
        uVar18 = puVar3[9];
        uVar6 = puVar3[10];
        uVar9 = puVar3[0xb];
        uVar13 = puVar3[0xc];
        uVar16 = puVar3[0xd];
        uVar19 = puVar3[0xe];
        *param_1 = *puVar3;
        param_1[1] = uVar7;
        param_1[2] = uVar11;
        param_1[3] = uVar14;
        param_1[4] = uVar17;
        param_1[5] = uVar5;
        param_1[6] = uVar8;
        param_1[7] = uVar12;
        param_1[8] = uVar15;
        param_1[9] = uVar18;
        param_1[10] = uVar6;
        param_1[0xb] = uVar9;
        param_1[0xc] = uVar13;
        param_1[0xd] = uVar16;
        param_1[0xe] = uVar19;
        return;
      }
      piVar21 = (int *)((uint)&local_e8 | 4);
      *piVar21 = local_a0;
      piVar21[1] = iStack_9c;
      piVar21[2] = local_98;
      piVar21[3] = iStack_94;
      piVar21[4] = local_90;
      piVar21[5] = iStack_8c;
      piVar21[6] = local_88;
      piVar21[7] = iStack_84;
      piVar21[8] = iStack_80;
      piVar21[9] = iStack_7c;
      piVar21[10] = iStack_78;
      piVar21[0xb] = iStack_74;
      local_a8 = *piVar21;
      iStack_a4 = piVar21[1];
      local_a0 = piVar21[2];
      iStack_9c = piVar21[3];
      local_98 = piVar21[4];
      iStack_94 = piVar21[5];
      local_90 = piVar21[6];
      iStack_8c = piVar21[7];
      local_88 = piVar21[8];
      iStack_84 = piVar21[9];
      iStack_80 = piVar21[10];
      iStack_7c = piVar21[0xb];
      uVar5 = local_120;
      uVar6 = local_11c;
    }
    FUN_006dec3c(&local_60,&local_a8);
    local_e0 = local_58;
    local_e4 = local_5c;
    local_e8 = local_60;
    if (local_60 == 2) {
      *(undefined1 *)(param_1 + 3) = (undefined1)local_5c;
      *param_1 = 2;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
    }
    else {
      uVar1 = (undefined1)local_54;
      FUN_01bed4e2(auStack_db,(int)&local_54 + 1,0xf);
      _local_dc = CONCAT31(auStack_db._0_3_,uVar1);
      FUN_00ddb4b4(param_1,&local_e8,uVar5,uVar6);
    }
  }
  else {
    uVar1 = (*param_5)();
    *(undefined1 *)(param_1 + 3) = uVar1;
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    if (local_108 != &DAT_80000008) {
      FUN_011a4b94(&local_120);
    }
  }
  return;
}

