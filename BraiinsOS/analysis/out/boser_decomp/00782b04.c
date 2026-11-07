// FUN_00782b04 @ 00782b04 size=532 calls_out=3 calls_in=2
// strings: 

void FUN_00782b04(uint *param_1,short *param_2,uint param_3)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  int *piVar15;
  uint local_b8;
  uint local_b4;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar10 = 0;
  iVar1 = param_3 * 0x44;
  if (0x1e1e1e1 < param_3) {
LAB_00782b34:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar10,iVar1);
  }
  if (iVar1 == 0) {
    local_b4 = 4;
    local_b8 = 0;
  }
  else {
    uVar10 = 4;
    local_b4 = FUN_01298504(iVar1,4);
    if (local_b4 == 0) goto LAB_00782b34;
    local_b8 = param_3;
    if (param_3 != 0) {
      iVar12 = 0;
      puVar5 = (undefined4 *)((uint)&local_40 | 4);
      uVar13 = 0;
      puVar6 = (undefined4 *)((uint)&local_68 | 4);
      psVar14 = param_2;
      do {
        if (iVar1 == iVar12) break;
        sVar2 = *psVar14;
        sVar4 = psVar14[0x20];
        if (sVar2 != 1) {
          uVar10 = *(undefined4 *)((int)param_2 + iVar12 + 8);
          uVar7 = *(undefined4 *)((int)param_2 + iVar12 + 0xc);
          uVar8 = *(undefined4 *)((int)param_2 + iVar12 + 0x10);
          *puVar6 = *(undefined4 *)((int)param_2 + iVar12 + 4);
          puVar6[1] = uVar10;
          puVar6[2] = uVar7;
          puVar6[3] = uVar8;
          uVar10 = *(undefined4 *)((int)param_2 + iVar12 + 0x18);
          uVar7 = *(undefined4 *)((int)param_2 + iVar12 + 0x1c);
          uVar8 = *(undefined4 *)((int)param_2 + iVar12 + 0x20);
          puVar6[4] = *(undefined4 *)((int)param_2 + iVar12 + 0x14);
          puVar6[5] = uVar10;
          puVar6[6] = uVar7;
          puVar6[7] = uVar8;
          local_68 = (uint)*(ushort *)((int)param_2 + iVar12 + 2) << 0x10;
        }
        else {
          FUN_015e8ad4(puVar6,*(undefined4 *)((int)param_2 + iVar12 + 8),
                       *(undefined4 *)((int)param_2 + iVar12 + 0xc));
        }
        sVar3 = psVar14[0x12];
        local_68 = CONCAT22(local_68._2_2_,(ushort)(sVar2 == 1));
        if (sVar3 != 1) {
          uVar10 = *(undefined4 *)((int)param_2 + iVar12 + 0x2c);
          uVar7 = *(undefined4 *)((int)param_2 + iVar12 + 0x30);
          uVar8 = *(undefined4 *)((int)param_2 + iVar12 + 0x34);
          uVar9 = *(undefined4 *)((int)param_2 + iVar12 + 0x38);
          uVar11 = *(undefined4 *)((int)param_2 + iVar12 + 0x3c);
          *puVar5 = *(undefined4 *)((int)param_2 + iVar12 + 0x28);
          puVar5[1] = uVar10;
          puVar5[2] = uVar7;
          puVar5[3] = uVar8;
          puVar5[4] = uVar9;
          puVar5[5] = uVar11;
          local_40 = (uint)*(ushort *)((int)param_2 + iVar12 + 0x26) << 0x10;
        }
        else {
          FUN_015e8ad4(puVar5,*(undefined4 *)((int)param_2 + iVar12 + 0x2c),
                       *(undefined4 *)((int)param_2 + iVar12 + 0x30));
        }
        local_40 = CONCAT22(local_40._2_2_,(ushort)(sVar3 == 1));
        uVar13 = uVar13 + 1;
        psVar14 = psVar14 + 0x22;
        piVar15 = (int *)(local_b4 + iVar12);
        iVar12 = iVar12 + 0x44;
        *piVar15 = local_68;
        piVar15[1] = iStack_64;
        piVar15[2] = iStack_60;
        piVar15[3] = iStack_5c;
        piVar15[4] = local_58;
        piVar15[5] = iStack_54;
        piVar15[6] = iStack_50;
        piVar15[7] = iStack_4c;
        piVar15[8] = iStack_48;
        piVar15[9] = local_40;
        piVar15[10] = iStack_3c;
        piVar15[0xb] = iStack_38;
        piVar15[0xc] = local_34;
        piVar15[0xd] = iStack_30;
        piVar15[0xe] = iStack_2c;
        piVar15[0xf] = iStack_28;
        *(char *)(piVar15 + 0x10) = (char)sVar4;
      } while (param_3 != uVar13);
    }
  }
  *param_1 = local_b8;
  param_1[1] = local_b4;
  param_1[2] = param_3;
  return;
}

