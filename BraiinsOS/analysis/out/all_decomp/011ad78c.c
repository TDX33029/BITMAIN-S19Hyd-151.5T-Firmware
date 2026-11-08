// FUN_011ad78c @ 011ad78c size=628 calls_out=3 calls_in=0
// strings: 

void FUN_011ad78c(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar13 = *(int *)(param_2 + 4);
  iVar11 = 0;
  iVar18 = 4;
  local_6c = 0;
  local_70 = 4;
  local_74 = 0;
  iVar4 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    iVar4 = iVar13 + *(int *)(param_2 + 8) * 0x20;
    iVar15 = *(int *)(param_3 + 4);
    iVar5 = *(int *)(param_3 + 8);
    do {
      if (iVar15 != 0) {
        uVar7 = *(undefined4 *)(iVar13 + 4);
        uVar17 = *(uint *)(iVar13 + 8);
        iVar16 = iVar15;
        local_78 = iVar5;
        while( true ) {
          iVar9 = iVar16 + 0x10c;
          uVar12 = (uint)*(ushort *)(iVar16 + 0x192);
          uVar14 = 0xffffffff;
          iVar10 = uVar12 * 0xc;
          do {
            if (iVar10 == 0) {
              if (local_78 != 0) goto LAB_011ad8f8;
              goto LAB_011ad95c;
            }
            uVar8 = *(uint *)(iVar9 + 8);
            uVar6 = uVar8;
            if (uVar17 < uVar8) {
              uVar6 = uVar17;
            }
            iVar3 = FUN_016dd50a(uVar7,*(undefined4 *)(iVar9 + 4),uVar6);
            if (iVar3 == 0) {
              iVar3 = uVar17 - uVar8;
            }
            iVar10 = iVar10 + -0xc;
            uVar14 = uVar14 + 1;
            iVar9 = iVar9 + 0xc;
          } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
          if (0 < iVar3 == iVar3 < 0) {
            FUN_011c9534(&local_68,iVar13 + 0xc,param_3,param_4,param_5,param_6);
            if (iVar11 == local_74) {
              FUN_011ca644(&local_74);
              iVar18 = local_70;
            }
            puVar2 = (undefined4 *)(iVar18 + iVar11 * 0x40);
            iVar11 = iVar11 + 1;
            *puVar2 = local_68;
            puVar2[1] = uStack_64;
            puVar2[2] = uStack_60;
            puVar2[3] = uStack_5c;
            puVar2[4] = uStack_58;
            puVar2[5] = local_54;
            puVar2[6] = uStack_50;
            puVar2[7] = uStack_4c;
            puVar2[8] = uStack_48;
            puVar2[9] = uStack_44;
            puVar2[10] = local_40;
            puVar2[0xb] = uStack_3c;
            puVar2[0xc] = uStack_38;
            puVar2[0xd] = uStack_34;
            puVar2[0xe] = uStack_30;
            puVar2[0xf] = uStack_2c;
            local_6c = iVar11;
            goto LAB_011ad820;
          }
          uVar12 = uVar14;
          if (local_78 == 0) break;
LAB_011ad8f8:
          local_78 = local_78 + -1;
          iVar16 = *(int *)(iVar16 + uVar12 * 4 + 0x198);
        }
LAB_011ad95c:
      }
LAB_011ad820:
      iVar13 = iVar13 + 0x20;
    } while (iVar13 != iVar4);
    iVar4 = local_74;
  }
  iVar13 = iVar11 << 6;
  iVar5 = iVar18;
  do {
    if (iVar13 == 0) {
      *param_1 = 0x80000000;
      param_1[1] = iVar4;
      param_1[2] = iVar18;
      param_1[3] = iVar11;
      param_1[4] = 0;
      return;
    }
    pcVar1 = (char *)(iVar5 + 0x3c);
    iVar13 = iVar13 + -0x40;
    iVar5 = iVar5 + 0x40;
  } while (*pcVar1 != '\0');
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = iVar4;
  param_1[4] = iVar18;
  param_1[5] = iVar11;
  param_1[6] = 0;
  return;
}

