// FUN_00b7a96c @ 00b7a96c size=2332 calls_out=7 calls_in=2
// strings: 

void FUN_00b7a96c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  uint *local_8c;
  uint *local_88;
  int local_84;
  undefined1 auStack_78 [84];
  
  if (0x20 < param_2) {
    local_8c = param_6;
    do {
      uVar5 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b7a280(param_1,uVar5,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + (uVar5 >> 3) * 0x8c;
        puVar3 = param_1 + (uVar5 >> 3) * 0x50;
        if (uVar5 < 0x40) {
          uVar10 = *puVar3;
          uVar7 = *param_1;
          puVar2 = puVar4;
          if (uVar7 < uVar10 == uVar10 < *puVar4) {
            puVar2 = puVar3;
          }
          if (uVar7 < uVar10 != uVar7 < *puVar4) {
            puVar2 = param_1;
          }
        }
        else {
          puVar2 = (uint *)FUN_00b84ce0(param_1,puVar3,puVar4);
        }
        param_5 = param_5 + -1;
        FUN_016dd1aa(auStack_78,puVar2,0x50);
        uVar10 = (uint)((int)puVar2 - (int)param_1) >> 4;
        uVar7 = uVar10 * -0x33333333;
        if ((local_8c != (uint *)0x0) && (*puVar2 <= *local_8c)) break;
        if (param_4 < uVar5) goto LAB_00b7b26c;
        puVar12 = param_3 + uVar5 * 0x14;
        puVar4 = param_1 + uVar10 * 4;
        puVar3 = param_1;
        uVar9 = uVar7;
        param_2 = 0;
        if (puVar4 <= param_1) goto LAB_00b7acd0;
LAB_00b7ac94:
        do {
          puVar17 = puVar3 + 0x14;
          puVar12 = puVar12 + -0x14;
          puVar16 = puVar12;
          uVar18 = param_2;
          if (*puVar3 < *puVar2) {
            uVar18 = param_2 + 1;
            puVar16 = param_3;
          }
          FUN_016dd1aa(puVar16 + param_2 * 0x14,puVar3,0x50);
          puVar3 = puVar17;
          param_2 = uVar18;
        } while (puVar17 < puVar4);
LAB_00b7acd0:
        if (uVar9 != uVar5) goto code_r0x00b7acdc;
        FUN_016dd1aa(param_1,param_3,param_2 * 0x50);
        iVar6 = uVar5 - param_2;
        if (iVar6 != 0) {
          puVar3 = param_3 + uVar5 * 0x14 + -0x14;
          puVar4 = param_1 + param_2 * 0x14;
          iVar8 = iVar6;
          do {
            FUN_016dd1aa(puVar4,puVar3,0x50);
            puVar3 = puVar3 + -0x14;
            puVar4 = puVar4 + 0x14;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        if (param_2 == 0) break;
        if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b7a96c(param_1 + param_2 * 0x14,iVar6,param_3,param_4,param_5,auStack_78);
        uVar5 = param_2;
        if (param_2 < 0x21) goto LAB_00b7a98c;
      }
      if (param_4 < uVar5) goto LAB_00b7b26c;
      puVar4 = param_3 + uVar5 * 0x14;
      puVar12 = param_1 + uVar10 * 4;
      puVar3 = param_1;
      uVar10 = 0;
      if (puVar12 <= param_1) goto LAB_00b7ae1c;
LAB_00b7ade0:
      do {
        puVar17 = puVar3 + 0x14;
        puVar4 = puVar4 + -0x14;
        puVar16 = puVar4;
        uVar9 = uVar10;
        if (*puVar3 <= *puVar2) {
          uVar9 = uVar10 + 1;
          puVar16 = param_3;
        }
        FUN_016dd1aa(puVar16 + uVar10 * 0x14,puVar3,0x50);
        puVar3 = puVar17;
        uVar10 = uVar9;
      } while (puVar17 < puVar12);
LAB_00b7ae1c:
      if (uVar7 != uVar5) goto code_r0x00b7ae28;
      FUN_016dd1aa(param_1,param_3,uVar10 * 0x50);
      param_2 = uVar5 - uVar10;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar10 * 0x14;
      puVar4 = param_3 + uVar5 * 0x14 + -0x14;
      uVar7 = param_2;
      puVar3 = param_1;
      do {
        FUN_016dd1aa(puVar3,puVar4,0x50);
        puVar4 = puVar4 + -0x14;
        puVar3 = puVar3 + 0x14;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (uVar5 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar10,uVar5,uVar5,&DAT_018af348);
      }
      local_8c = (uint *)0x0;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_00b7a98c:
  uVar5 = param_2 >> 1;
  if (uVar5 != 0) {
    if (param_2 < 8) {
      FUN_016dd1aa(param_3,param_1,0x50);
      FUN_016dd1aa(param_3 + uVar5 * 0x14,param_1 + uVar5 * 0x14,0x50);
      uVar10 = 1;
    }
    else {
      uVar7 = (uint)(*param_1 <= param_1[0x14]);
      uVar10 = (uint)(*param_1 > param_1[0x14]);
      iVar6 = 0xf0;
      iVar8 = 0xa0;
      if (param_1[0x3c] < param_1[0x28]) {
        iVar6 = 0xa0;
        iVar8 = 0xf0;
      }
      puVar12 = (uint *)((int)param_1 + iVar8);
      puVar4 = param_1 + (uVar7 | uVar7 << 2) * 4;
      uVar9 = *puVar4;
      puVar16 = (uint *)((int)param_1 + iVar6);
      uVar7 = *puVar16;
      puVar2 = param_1 + (uVar10 | uVar10 << 2) * 4;
      puVar3 = puVar4;
      if (uVar7 < uVar9) {
        puVar3 = puVar12;
      }
      puVar13 = puVar12;
      puVar17 = puVar2;
      if (*puVar12 < *puVar2) {
        puVar13 = puVar4;
        puVar17 = puVar12;
        puVar3 = puVar2;
      }
      if (uVar7 < uVar9) {
        puVar13 = puVar16;
      }
      uVar10 = *puVar13;
      uVar18 = *puVar3;
      if (uVar7 >= uVar9) {
        puVar4 = puVar16;
      }
      FUN_016dd1aa(param_3,puVar17,0x50);
      if (uVar10 < uVar18) {
        puVar2 = puVar3;
      }
      else {
        puVar2 = puVar13;
        puVar13 = puVar3;
      }
      FUN_016dd1aa(param_3 + 0x14,puVar13,0x50);
      FUN_016dd1aa(param_3 + 0x28,puVar2,0x50);
      FUN_016dd1aa(param_3 + 0x3c,puVar4,0x50);
      puVar3 = param_1 + uVar5 * 0x14;
      puVar4 = param_3 + uVar5 * 0x14;
      uVar10 = (uint)(*puVar3 <= puVar3[0x14]);
      uVar7 = (uint)(*puVar3 > puVar3[0x14]);
      iVar6 = 0xa0;
      iVar8 = 0xf0;
      if (puVar3[0x3c] < puVar3[0x28]) {
        iVar6 = 0xf0;
        iVar8 = 0xa0;
      }
      puVar16 = (uint *)((int)puVar3 + iVar6);
      puVar12 = puVar3 + (uVar10 | uVar10 << 2) * 4;
      puVar17 = (uint *)((int)puVar3 + iVar8);
      puVar3 = puVar3 + (uVar7 | uVar7 << 2) * 4;
      puVar2 = puVar12;
      if (*puVar17 < *puVar12) {
        puVar2 = puVar16;
      }
      puVar14 = puVar16;
      puVar13 = puVar3;
      if (*puVar16 < *puVar3) {
        puVar14 = puVar12;
        puVar13 = puVar16;
        puVar2 = puVar3;
      }
      if (*puVar17 < *puVar12) {
        puVar14 = puVar17;
      }
      else {
        puVar12 = puVar17;
      }
      uVar7 = *puVar14;
      uVar10 = *puVar2;
      FUN_016dd1aa(puVar4,puVar13,0x50);
      if (uVar7 < uVar10) {
        puVar3 = puVar2;
      }
      else {
        puVar3 = puVar14;
        puVar14 = puVar2;
      }
      FUN_016dd1aa(puVar4 + 0x14,puVar14,0x50);
      FUN_016dd1aa(puVar4 + 0x28,puVar3,0x50);
      FUN_016dd1aa(puVar4 + 0x3c,puVar12,0x50);
      uVar10 = 4;
    }
    if (uVar10 < uVar5) {
      iVar6 = uVar10 * 0x50;
      uVar7 = uVar10;
      do {
        FUN_016dd1aa(param_3 + uVar7 * 0x14,param_1 + uVar7 * 0x14,0x50);
        uVar9 = param_3[uVar7 * 0x14];
        if (uVar9 < (param_3 + uVar7 * 0x14)[-0x14]) {
          FUN_016dd1aa(auStack_78,param_1 + uVar7 * 0x14 + 1,0x4c);
          iVar8 = iVar6;
          do {
            iVar15 = (int)param_3 + iVar8;
            FUN_016dd1aa(iVar15,iVar15 + -0x50,0x50);
            if (iVar8 == 0x50) {
              puVar3 = param_3;
              goto LAB_00b7af58;
            }
            iVar8 = iVar8 + -0x50;
          } while (uVar9 < *(uint *)(iVar15 + -0xa0));
          puVar3 = (uint *)((int)param_3 + iVar8);
LAB_00b7af58:
          *puVar3 = uVar9;
          FUN_016dd1aa(puVar3 + 1,auStack_78,0x4c);
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x50;
      } while (uVar7 != uVar5);
    }
    puVar3 = param_3 + uVar5 * 0x14;
    if (uVar10 < param_2 - uVar5) {
      local_84 = 0x50;
      uVar7 = uVar10;
      local_88 = puVar3;
      do {
        FUN_016dd1aa(puVar3 + uVar7 * 0x14,param_1 + uVar5 * 0x14 + uVar7 * 0x14,0x50);
        uVar9 = puVar3[uVar7 * 0x14];
        if (uVar9 < (puVar3 + uVar7 * 0x14)[-0x14]) {
          FUN_016dd1aa(auStack_78,param_1 + uVar5 * 0x14 + uVar7 * 0x14 + 1,0x4c);
          puVar4 = local_88;
          iVar6 = local_84;
          do {
            puVar2 = puVar4 + uVar10 * 0x14;
            FUN_016dd1aa(puVar2,puVar2 + -0x14,0x50);
            if (uVar10 * 0x50 == iVar6) {
              puVar4 = puVar3;
              goto LAB_00b7b034;
            }
            iVar6 = iVar6 + 0x50;
            puVar4 = puVar4 + -0x14;
          } while (uVar9 < puVar2[-0x28]);
          puVar4 = puVar4 + uVar10 * 0x14;
LAB_00b7b034:
          *puVar4 = uVar9;
          FUN_016dd1aa(puVar4 + 1,auStack_78,0x4c);
        }
        uVar7 = uVar7 + 1;
        local_84 = local_84 + -0x50;
        local_88 = local_88 + 0x14;
      } while (uVar7 != param_2 - uVar5);
    }
    puVar2 = param_3 + param_2 * 0x14 + -0x14;
    iVar6 = 0;
    puVar4 = puVar3 + -0x14;
    do {
      iVar8 = iVar6 + 0x50;
      bVar19 = *param_3 <= *puVar3;
      puVar12 = puVar3;
      if (bVar19) {
        puVar12 = param_3;
      }
      FUN_016dd1aa((int)param_1 + iVar6,puVar12,0x50);
      iVar11 = 0;
      puVar3 = puVar3 + ((uint)!bVar19 | (uint)!bVar19 << 2) * 4;
      bVar20 = *puVar2 < *puVar4;
      iVar15 = 0;
      if (bVar20) {
        iVar15 = -1;
      }
      param_3 = param_3 + ((uint)bVar19 | (uint)bVar19 << 2) * 4;
      puVar12 = puVar4 + iVar15 * 0x14;
      if (!bVar20) {
        puVar4 = puVar2;
      }
      if (!bVar20) {
        iVar11 = -1;
      }
      FUN_016dd1aa((int)param_1 + ((param_2 * 0x50 + -0x50) - iVar6),puVar4,0x50);
      puVar2 = puVar2 + iVar11 * 0x14;
      uVar5 = uVar5 - 1;
      iVar6 = iVar8;
      puVar4 = puVar12;
    } while (uVar5 != 0);
    puVar12 = puVar12 + 0x14;
    if ((param_2 & 1) == 0) {
      puVar16 = (uint *)0x0;
      puVar4 = puVar3;
    }
    else {
      bVar19 = puVar12 <= param_3;
      puVar4 = puVar3 + ((uint)bVar19 | (uint)bVar19 << 2) * 4;
      if (!bVar19) {
        puVar3 = param_3;
      }
      FUN_016dd1aa((int)param_1 + iVar8,puVar3,0x50);
      puVar16 = (uint *)((uint)!bVar19 | (uint)!bVar19 << 2);
      param_3 = param_3 + (int)puVar16 * 4;
    }
    if (param_3 == puVar12) {
      puVar16 = puVar2 + 0x14;
    }
    if (param_3 != puVar12 || puVar4 != puVar16) {
      FUN_00fb7254();
LAB_00b7b26c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb7b26c);
      (*pcVar1)();
    }
  }
  return;
code_r0x00b7acdc:
  puVar12 = puVar12 + -0x14;
  FUN_016dd1aa(puVar12 + param_2 * 0x14,puVar3,0x50);
  puVar3 = puVar3 + 0x14;
  puVar4 = param_1 + uVar5 * 0x14;
  uVar9 = uVar5;
  if (puVar3 < puVar4) goto LAB_00b7ac94;
  goto LAB_00b7acd0;
code_r0x00b7ae28:
  FUN_016dd1aa(param_3 + uVar10 * 0x14,puVar3,0x50);
  puVar3 = puVar3 + 0x14;
  uVar10 = uVar10 + 1;
  puVar4 = puVar4 + -0x14;
  puVar12 = param_1 + uVar5 * 0x14;
  uVar7 = uVar5;
  if (puVar3 < puVar12) goto LAB_00b7ade0;
  goto LAB_00b7ae1c;
}

