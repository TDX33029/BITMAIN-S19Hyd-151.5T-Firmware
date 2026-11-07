// FUN_00a4a718 @ 00a4a718 size=636 calls_out=4 calls_in=1
// strings: 

void FUN_00a4a718(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int local_94;
  undefined4 *local_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *local_38;
  int local_34;
  undefined4 uStack_30;
  
  FUN_01299464(&local_88,param_2[0x19],param_2[0x1a]);
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar10 = param_2[6];
  uVar14 = param_2[7];
  if (param_2[1] == 0) {
    uVar19 = 0;
    iVar16 = 0;
    local_8c = &DAT_0056d238;
    local_94 = 0;
  }
  else {
    FUN_0125e7e8(&local_38,0x14,4,param_2[1] + 1);
    iVar16 = local_34;
    puVar2 = local_38;
    puVar17 = (uint *)*param_2;
    local_8c = local_38;
    FUN_01bed4e2(local_38,puVar17,local_34 + 5);
    local_94 = param_2[3];
    if (local_94 != 0) {
      puVar4 = puVar17 + 1;
      uVar11 = ~*puVar17 & 0x80808080;
      puVar15 = puVar17;
      iVar20 = local_94;
      do {
        puVar3 = puVar4;
        if (uVar11 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar11 = *puVar3;
            puVar15 = puVar15 + -0x14;
            puVar3 = puVar4;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                        | uVar11 >> 0x18);
        iVar20 = iVar20 + -1;
        iVar9 = (uVar8 >> 3) * -4 - (uVar8 >> 3);
        iVar1 = iVar9 * 4 - (int)puVar17;
        uVar8 = puVar15[iVar9 + -5];
        uVar13 = puVar15[iVar9 + -4];
        uVar12 = puVar15[iVar9 + -3];
        uVar18 = puVar15[iVar9 + -2];
        *(char *)((int)puVar15 + (int)puVar2 + iVar1 + -4) = (char)puVar15[iVar9 + -1];
        uVar11 = uVar11 - 1 & uVar11;
        *(uint *)((int)puVar15 + (int)puVar2 + iVar1 + -0x10) = uVar13;
        *(uint *)((int)puVar15 + (int)puVar2 + iVar1 + -0xc) = uVar12;
        *(uint *)((int)puVar15 + (int)puVar2 + iVar1 + -8) = uVar18;
        *(char *)((int)puVar15 + (int)puVar2 + iVar1 + -0x14) = (char)uVar8;
      } while (iVar20 != 0);
    }
    uVar19 = param_2[2];
  }
  FUN_006666fc(&local_78,param_2[10],param_2[0xb]);
  FUN_006666fc(&local_68,param_2[0xd],param_2[0xe]);
  uVar5 = param_2[8];
  FUN_006666fc(&local_58,param_2[0x10],param_2[0x11]);
  FUN_006666fc(&local_48,param_2[0x13],param_2[0x14]);
  FUN_006666fc(&local_38,param_2[0x16],param_2[0x17]);
  *param_1 = local_8c;
  param_1[1] = iVar16;
  param_1[2] = uVar19;
  param_1[3] = local_94;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar10;
  param_1[7] = uVar14;
  param_1[9] = local_78;
  param_1[10] = uStack_74;
  param_1[0xb] = uStack_70;
  param_1[0xc] = local_68;
  param_1[0xd] = uStack_64;
  param_1[0xe] = uStack_60;
  param_1[0xf] = local_58;
  param_1[0x10] = uStack_54;
  param_1[0x11] = uStack_50;
  param_1[0x12] = local_48;
  param_1[0x13] = uStack_44;
  param_1[0x14] = uStack_40;
  param_1[0x15] = local_38;
  param_1[0x16] = local_34;
  param_1[0x17] = uStack_30;
  param_1[0x18] = local_88;
  param_1[0x19] = uStack_84;
  param_1[0x1a] = uStack_80;
  param_1[8] = uVar5;
  return;
}

