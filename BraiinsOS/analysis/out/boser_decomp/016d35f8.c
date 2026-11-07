// FUN_016d35f8 @ 016d35f8 size=608 calls_out=6 calls_in=2
// strings: 

void FUN_016d35f8(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r2;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar17 = param_4[2];
  iVar18 = param_4[1];
  uVar16 = *(uint *)(param_3 + 8);
  iVar8 = -0x340d631c;
  uVar6 = 0x84222325;
  if (iVar17 != 0) {
    pbVar11 = (byte *)(iVar18 + 4);
    iVar10 = iVar17 << 3;
    do {
      iVar10 = iVar10 + -8;
      uVar7 = uVar6 ^ *pbVar11;
      lVar3 = (ulonglong)uVar7 * 0x1b3;
      uVar9 = (uint)lVar3 ^ (uint)pbVar11[1];
      lVar4 = (ulonglong)uVar9 * 0x1b3;
      puVar1 = (uint *)(pbVar11 + -4);
      pbVar11 = pbVar11 + 8;
      uVar14 = (uint)lVar4 ^ *puVar1;
      lVar5 = (ulonglong)uVar14 * 0x1b3;
      uVar6 = (uint)lVar5;
      iVar8 = ((iVar8 * 0x1b3 + uVar7 * 0x100 + (int)((ulonglong)lVar3 >> 0x20)) * 0x1b3 +
              uVar9 * 0x100 + (int)((ulonglong)lVar4 >> 0x20)) * 0x1b3 +
              uVar14 * 0x100 + (int)((ulonglong)lVar5 >> 0x20);
    } while (iVar10 != 0);
  }
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d092d0,iVar8);
  }
  FUN_01bf0ff0(uVar6,iVar8,uVar16,0);
  if (uVar16 <= extraout_r2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(extraout_r2,uVar16,&DAT_01d092b0);
  }
  iVar8 = *(int *)(param_3 + 4);
  iVar10 = iVar8 + extraout_r2 * 0x14;
  bVar19 = *(short *)(iVar10 + 0x10) == *(short *)(param_3 + 0x10);
  if (bVar19) {
    iVar8 = *(int *)(iVar10 + 8);
  }
  if (bVar19 && iVar8 == iVar17) {
    if (iVar17 != 0) {
      iVar8 = 0;
      do {
        uVar6 = iVar18 + iVar8 * -8;
        iVar12 = *(int *)(iVar10 + 4) + iVar8 * -8;
        uVar16 = (uint)*(byte *)(iVar12 + 4);
        bVar19 = uVar16 != *(byte *)(uVar6 + 4);
        if (!bVar19) {
          uVar16 = (uint)*(byte *)(uVar6 + 5);
          uVar6 = (uint)*(byte *)(iVar12 + 5);
        }
        if ((bVar19 || uVar6 != uVar16) ||
           (*(int *)(*(int *)(iVar10 + 4) + iVar8 * -8) != *(int *)(iVar18 + iVar8 * -8)))
        goto LAB_016d36d4;
        iVar8 = iVar8 + -1;
      } while (-iVar8 != iVar17);
    }
    iVar8 = *(int *)(iVar10 + 0xc);
    *param_1 = 0x2a;
    param_1[1] = iVar8;
  }
  else {
LAB_016d36d4:
    FUN_016c0ed4(&local_40,iVar18,iVar17);
    local_30 = local_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    local_34 = 2;
    FUN_01691d3c(&local_80,param_2);
    if (local_80 == 0x2a) {
      uVar15 = *param_4;
      if (*(uint *)(param_3 + 8) <= extraout_r2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(extraout_r2,*(uint *)(param_3 + 8),&DAT_01d092c0);
      }
      uVar2 = *(undefined2 *)(param_3 + 0x10);
      puVar13 = (undefined4 *)(*(int *)(param_3 + 4) + extraout_r2 * 0x14);
      FUN_0134aee0(*puVar13,puVar13[1],4,8);
      *(undefined2 *)(puVar13 + 4) = uVar2;
      puVar13[1] = iVar18;
      puVar13[2] = iVar17;
      *puVar13 = uVar15;
      puVar13[3] = local_7c;
      *param_1 = 0x2a;
      param_1[1] = local_7c;
      return;
    }
    param_1[2] = local_78;
    param_1[3] = iStack_74;
    param_1[4] = iStack_70;
    param_1[5] = iStack_6c;
    param_1[6] = local_68;
    param_1[7] = iStack_64;
    param_1[8] = iStack_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = local_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    param_1[0xe] = iStack_48;
    param_1[0xf] = iStack_44;
    *param_1 = local_80;
    param_1[1] = local_7c;
  }
  FUN_0134aee0(*param_4,iVar18,4,8);
  return;
}

