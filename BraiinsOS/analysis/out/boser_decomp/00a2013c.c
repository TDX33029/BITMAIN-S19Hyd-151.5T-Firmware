// FUN_00a2013c @ 00a2013c size=572 calls_out=6 calls_in=1
// strings: 

void FUN_00a2013c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [16];
  undefined1 *local_100;
  undefined4 local_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int local_60;
  undefined4 *local_5c;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar8 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x10);
  if (iVar4 != 0) {
    iVar14 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
    iVar4 = iVar4 * 0x48;
    do {
      if ((*(int *)(iVar14 + 0xc) == 5) &&
         (iVar1 = thunk_FUN_01bed842(*(int *)(iVar14 + 8) + 8,param_3,5), iVar1 == 0)) {
        iVar8 = iVar14;
        break;
      }
      iVar14 = iVar14 + 0x48;
      iVar4 = iVar4 + -0x48;
    } while (iVar4 != 0);
  }
  if (iVar8 != 0) {
    iVar8 = iVar8 + 0x10;
  }
  FUN_00ad9f18(&local_118,iVar8);
  if (local_100 == &DAT_80000008) {
    local_50 = -0x7ffffff9;
    uVar6 = 0;
    uVar7 = 0;
LAB_00a20298:
    FUN_006bde48(&local_a0,&local_60);
    if (local_a0 == 0) {
      uVar3 = 0;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_94,local_98);
      goto LAB_00a2036c;
    }
    local_cc = local_88;
    local_dc = local_98;
    iStack_d8 = iStack_94;
    iStack_d4 = local_90;
    local_c8 = local_84;
    local_e0 = local_9c;
    local_d0 = iStack_8c;
    local_30 = 1;
    local_2c = uVar6;
    local_28 = uVar7;
    FUN_006bd784(&local_a0,&local_d0,&local_30);
    if (local_a0 != 0) {
      FUN_006c1148((uint)&local_a0 | 4);
    }
    param_1[1] = local_e0;
    param_1[2] = local_dc;
    param_1[3] = iStack_d8;
    param_1[4] = iStack_d4;
    param_1[5] = local_90;
    param_1[6] = iStack_8c;
    param_1[7] = local_88;
    param_1[8] = local_84;
    param_1[9] = local_80;
    param_1[10] = iStack_7c;
    param_1[0xb] = local_78;
    param_1[0xc] = iStack_74;
    param_1[0xd] = iStack_70;
    param_1[0xe] = iStack_6c;
    param_1[0xf] = uStack_68;
  }
  else {
    local_5c = &local_30;
    local_2c = local_114;
    local_30 = local_118;
    local_60 = param_2;
    FUN_00ab0d6c(&local_a0,auStack_110,&local_60);
    if (local_a0 == 0) {
      piVar5 = (int *)((uint)&local_e0 | 4);
      *piVar5 = local_98;
      piVar5[1] = iStack_94;
      piVar5[2] = local_90;
      piVar5[3] = iStack_8c;
      piVar5[4] = local_88;
      piVar5[5] = local_84;
      piVar5[6] = local_80;
      piVar5[7] = iStack_7c;
      piVar5[8] = local_78;
      piVar5[9] = iStack_74;
      piVar5[10] = iStack_70;
      piVar5[0xb] = iStack_6c;
      local_60 = *piVar5;
      local_5c = (undefined4 *)piVar5[1];
      iStack_58 = piVar5[2];
      iStack_54 = piVar5[3];
      local_50 = piVar5[4];
      iStack_4c = piVar5[5];
      local_48 = piVar5[6];
      iStack_44 = piVar5[7];
      iStack_40 = piVar5[8];
      iStack_3c = piVar5[9];
      iStack_38 = piVar5[10];
      iStack_34 = piVar5[0xb];
      uVar6 = local_118;
      uVar7 = local_114;
      goto LAB_00a20298;
    }
    puVar2 = (undefined4 *)((uint)&local_a0 | 4);
    uVar3 = puVar2[1];
    uVar11 = puVar2[2];
    uVar15 = puVar2[3];
    uVar18 = puVar2[4];
    uVar6 = puVar2[5];
    uVar9 = puVar2[6];
    uVar12 = puVar2[7];
    uVar16 = puVar2[8];
    uVar19 = puVar2[9];
    uVar7 = puVar2[10];
    uVar10 = puVar2[0xb];
    uVar13 = puVar2[0xc];
    uVar17 = puVar2[0xd];
    uVar20 = puVar2[0xe];
    param_1[1] = *puVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar11;
    param_1[4] = uVar15;
    param_1[5] = uVar18;
    param_1[6] = uVar6;
    param_1[7] = uVar9;
    param_1[8] = uVar12;
    param_1[9] = uVar16;
    param_1[10] = uVar19;
    param_1[0xb] = uVar7;
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar17;
    param_1[0xf] = uVar20;
  }
  uVar3 = 1;
LAB_00a2036c:
  *param_1 = uVar3;
  return;
}

