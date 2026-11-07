// FUN_014fe334 @ 014fe334 size=988 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014fe334(uint *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_f0;
  int *local_ec;
  uint local_e0;
  uint local_dc;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  
  uVar17 = CONCAT44(local_114,local_118);
  iVar8 = param_3 * 100;
  uVar9 = 0;
  if (0x147ae14 < param_3) {
LAB_014fe360:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,iVar8);
  }
  if (iVar8 == 0) {
    local_dc = 4;
    local_e0 = 0;
  }
  else {
    uVar9 = 4;
    local_dc = FUN_01298504(iVar8,4);
    if (local_dc == 0) goto LAB_014fe360;
    local_e0 = param_3;
    if (param_3 != 0) {
      uVar13 = param_3;
      iVar8 = 0;
      piVar15 = param_2;
      do {
        if (piVar15 == param_2 + param_3 * 0x19) break;
        iVar10 = *piVar15;
        if (iVar10 == 2) {
          local_ec = (int *)piVar15[0xe];
          do {
            iVar3 = *local_ec;
            bVar2 = (bool)hasExclusiveAccess(local_ec);
          } while (!bVar2);
          *local_ec = iVar3 + 1;
          if (iVar3 < 0) goto LAB_014fe70c;
          local_f0 = piVar15[0xf];
          FUN_006666fc(&iStack_48,piVar15[6],piVar15[7]);
          iStack_84 = piVar15[8];
          iStack_80 = piVar15[9];
          iStack_7c = piVar15[10];
          iStack_78 = piVar15[0xb];
          local_a0 = piVar15[1];
          iStack_9c = piVar15[2];
          iStack_98 = piVar15[3];
          iStack_74 = piVar15[0xc];
          iStack_94 = piVar15[4];
          local_28 = CONCAT31(local_28._1_3_,(char)piVar15[0xd]);
          iStack_90 = iStack_48;
          iStack_8c = iStack_44;
          local_88 = local_40;
          iVar3 = local_28;
          local_58 = local_a0;
          local_54 = iStack_9c;
          iStack_50 = iStack_98;
          local_4c = iStack_94;
          local_2c = iStack_74;
        }
        else {
          uVar17 = FUN_016c0ca4(piVar15[0x10]);
          FUN_006666fc(&iStack_48,piVar15[5],piVar15[6]);
          local_3c = piVar15[7];
          iStack_38 = piVar15[8];
          iStack_34 = piVar15[9];
          iStack_30 = piVar15[10];
          local_54 = piVar15[1];
          iStack_50 = piVar15[2];
          local_4c = piVar15[3];
          local_2c = piVar15[0xb];
          local_11c = (undefined1)piVar15[0x12];
          local_28 = CONCAT31(local_28._1_3_,(char)piVar15[0xc]);
          local_58 = iVar10;
          FUN_006666fc(&local_64,piVar15[0xe],piVar15[0xf]);
          local_a0 = local_54;
          iStack_9c = iStack_50;
          iStack_98 = local_4c;
          iStack_94 = iStack_48;
          iStack_90 = iStack_44;
          iStack_8c = local_40;
          local_88 = local_3c;
          iStack_84 = iStack_38;
          iStack_80 = iStack_34;
          iStack_7c = iStack_30;
          iStack_78 = local_2c;
          iStack_74 = local_28;
          local_ec = local_60;
          local_f0 = local_5c;
          iVar3 = local_64;
        }
        piVar11 = (int *)piVar15[0x13];
        uVar13 = uVar13 - 1;
        do {
          iVar4 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar4 + 1;
        if (iVar4 < 0) {
LAB_014fe70c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x14fe70c);
          (*pcVar1)();
        }
        piVar7 = (int *)piVar15[0x14];
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_014fe70c;
        piVar14 = (int *)piVar15[0x15];
        do {
          iVar4 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_014fe70c;
        piVar5 = (int *)piVar15[0x18];
        iVar4 = piVar15[0x16];
        if (piVar5 != (int *)0x0) {
          do {
            iVar16 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar16 + 1;
          if (iVar16 < 0) goto LAB_014fe70c;
        }
        piVar12 = (int *)piVar15[0x17];
        do {
          iVar16 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar16 + 1;
        if (iVar16 < 0) goto LAB_014fe70c;
        piVar6 = (int *)(local_dc + iVar8 * 100);
        *piVar6 = iVar10;
        piVar6[1] = local_a0;
        piVar6[2] = iStack_9c;
        piVar6[3] = iStack_98;
        piVar6[4] = iStack_94;
        piVar6[5] = iStack_90;
        piVar6[6] = iStack_8c;
        piVar6[7] = local_88;
        piVar6[8] = iStack_84;
        piVar6[9] = iStack_80;
        piVar6[10] = iStack_7c;
        piVar6[0xb] = iStack_78;
        piVar6[0xc] = iStack_74;
        piVar6[0x13] = (int)piVar11;
        piVar6[0x14] = (int)piVar7;
        piVar6[0x16] = iVar4;
        piVar6[0x18] = (int)piVar5;
        *(undefined1 *)(piVar6 + 0x12) = local_11c;
        piVar6[0xd] = iVar3;
        piVar6[0x15] = (int)piVar14;
        piVar6[0xe] = (int)local_ec;
        piVar6[0x17] = (int)piVar12;
        piVar6[0xf] = local_f0;
        *(undefined8 *)(piVar6 + 0x10) = uVar17;
        iVar8 = iVar8 + 1;
        piVar15 = piVar15 + 0x19;
      } while (uVar13 != 0);
    }
  }
  *param_1 = local_e0;
  param_1[1] = local_dc;
  param_1[2] = param_3;
  return;
}

