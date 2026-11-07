// FUN_012bd08c @ 012bd08c size=1816 calls_out=10 calls_in=2
// strings: 

void FUN_012bd08c(uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int local_54;
  int local_38;
  
  if (param_2 < 0x11) {
LAB_012bd0a4:
    if (param_2 < 2) {
      return;
    }
    FUN_012bc068(param_1,param_2);
    return;
  }
LAB_012bd0d4:
  uVar10 = param_2;
LAB_012bd0d8:
  if (param_5 == 0) {
    FUN_012baadc(param_1,uVar10,param_3,param_4);
    return;
  }
  puVar18 = param_1 + (uVar10 >> 3) * 0x8c;
  puVar17 = param_1 + (uVar10 >> 3) * 0x50;
  if (uVar10 < 0x40) {
    iVar4 = FUN_012bb508(param_1,puVar17);
    iVar5 = FUN_012bb508(param_1,puVar18);
    puVar6 = param_1;
    if (iVar4 == iVar5) {
      iVar5 = FUN_012bb508(puVar17,puVar18);
      puVar6 = puVar18;
      if (iVar4 == iVar5) {
        puVar6 = puVar17;
      }
    }
  }
  else {
    puVar6 = (uint *)FUN_012bd7b8(param_1,puVar17,puVar18);
  }
  if (param_4 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12bd774);
    (*pcVar1)();
  }
  param_2 = 0;
  param_5 = param_5 + -1;
  uVar19 = ((uint)((int)puVar6 - (int)param_1) >> 4) * -0x33333333;
  iVar5 = param_3 + uVar10 * 0x50;
  local_54 = 0;
  uVar24 = uVar19;
  iVar4 = iVar5;
  puVar17 = param_1;
  do {
    for (; puVar17 < param_1 + uVar24 * 0x14; puVar17 = puVar17 + 0x14) {
      uVar14 = puVar17[6];
      uVar11 = puVar17[7];
      if (uVar14 < uVar11) goto LAB_012bd730;
      uVar14 = puVar6[6];
      uVar21 = puVar6[7];
      if (uVar14 < uVar21) goto LAB_012bd740;
      if (uVar11 == uVar21) {
        uVar14 = puVar17[5];
        uVar21 = puVar6[5];
        iVar22 = 0;
        iVar20 = uVar11 + 1;
        do {
          iVar20 = iVar20 + -1;
          if (iVar20 == 0) {
            uVar14 = 0;
            uVar21 = 0;
            uVar11 = 0;
            if ((*puVar17 & 1) != 0) {
              uVar14 = puVar17[2];
              uVar21 = puVar17[3];
            }
            uVar13 = 0;
            if ((*puVar6 & 1) != 0) {
              uVar11 = puVar6[2];
              uVar13 = puVar6[3];
            }
            uVar14 = (uint)((int)(uVar21 - (uVar13 + (uVar14 < uVar11))) < 0 !=
                           (SBORROW4(uVar21,uVar13) !=
                           SBORROW4(uVar21 - uVar13,(uint)(uVar14 < uVar11))));
            goto LAB_012bd218;
          }
          iVar9 = uVar14 + iVar22;
          iVar23 = uVar21 + iVar22;
          uVar8 = 1;
          iVar12 = 0;
          cVar2 = *(char *)(iVar9 + 0x1c);
          iVar16 = 0;
          cVar3 = *(char *)(iVar23 + 0x1c);
          uVar15 = 1;
          if (cVar2 != '\0') {
            iVar7 = uVar14 + iVar22;
            iVar12 = *(int *)(iVar7 + 0x18);
            uVar8 = *(undefined4 *)(iVar7 + 0x14);
          }
          if (cVar3 == '\x01') {
            iVar16 = uVar21 + iVar22;
            uVar15 = *(undefined4 *)(iVar16 + 0x14);
            iVar16 = *(int *)(iVar16 + 0x18);
          }
          if (iVar12 != iVar16) break;
          iVar22 = iVar22 + 0x28;
          iVar12 = thunk_FUN_016dd50a(uVar8,uVar15,iVar12);
        } while (iVar12 == 0);
        uVar21 = 0;
        uVar15 = 1;
        uVar11 = 0;
        if (cVar2 != '\0') {
          uVar15 = *(undefined4 *)(iVar9 + 0x14);
        }
        uVar8 = 1;
        if (cVar2 != '\0') {
          uVar21 = *(uint *)(iVar9 + 0x18);
        }
        if (cVar3 != '\0') {
          uVar11 = *(uint *)(iVar23 + 0x18);
          uVar8 = *(undefined4 *)(iVar23 + 0x14);
        }
        uVar14 = uVar11;
        if (uVar21 < uVar11) {
          uVar14 = uVar21;
        }
        uVar14 = FUN_016dd50a(uVar15,uVar8,uVar14);
        if (uVar14 == 0) {
          uVar14 = uVar21 - uVar11;
        }
        uVar14 = uVar14 >> 0x1f;
      }
      else {
        uVar14 = 0;
        if (uVar11 < uVar21) {
          uVar14 = 1;
        }
      }
LAB_012bd218:
      iVar4 = iVar4 + -0x50;
      iVar22 = iVar4;
      if (uVar14 != 0) {
        iVar22 = param_3;
      }
      FUN_016dd1aa(iVar22 + param_2 * 0x50,puVar17,0x50);
      param_2 = param_2 + uVar14;
    }
    if (uVar24 == uVar10) break;
    iVar4 = iVar4 + -0x50;
    local_54 = iVar4 + param_2 * 0x50;
    FUN_016dd1aa(local_54,puVar17,0x50);
    puVar17 = puVar17 + 0x14;
    uVar24 = uVar10;
  } while( true );
  FUN_016dd1aa(local_54,puVar6,0x50);
  FUN_016dd1aa(param_1,param_3,param_2 * 0x50);
  iVar4 = uVar10 - param_2;
  if (iVar4 != 0) {
    iVar20 = param_3 + -0x50 + uVar10 * 0x50;
    puVar17 = param_1 + param_2 * 0x14;
    iVar22 = iVar4;
    do {
      FUN_016dd1aa(puVar17,iVar20,0x50);
      iVar20 = iVar20 + -0x50;
      puVar17 = puVar17 + 0x14;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  if (param_2 == 0) goto LAB_012bd46c;
  if (uVar10 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_012bd08c(param_1 + param_2 * 0x14,iVar4,param_3,param_4,param_5);
  uVar10 = param_2;
  if (param_2 < 0x11) goto LAB_012bd0a4;
  goto LAB_012bd0d8;
LAB_012bd46c:
  local_38 = 0;
  uVar24 = 0;
  puVar17 = param_1;
  do {
    for (; puVar17 < param_1 + uVar19 * 0x14; puVar17 = puVar17 + 0x14) {
      uVar14 = puVar6[6];
      uVar11 = puVar6[7];
      if (uVar14 < uVar11) {
LAB_012bd730:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar11,uVar14,&DAT_0188f948);
      }
      uVar14 = puVar17[6];
      uVar21 = puVar17[7];
      if (uVar14 < uVar21) {
LAB_012bd740:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar21,uVar14,&DAT_0188f948);
      }
      if (uVar11 == uVar21) {
        iVar4 = 0;
        uVar14 = puVar6[5];
        uVar21 = puVar17[5];
        iVar22 = uVar11 + 1;
        do {
          iVar22 = iVar22 + -1;
          if (iVar22 == 0) {
            uVar14 = 0;
            uVar21 = 0;
            uVar11 = 0;
            if ((*puVar6 & 1) != 0) {
              uVar14 = puVar6[2];
              uVar21 = puVar6[3];
            }
            uVar13 = 0;
            if ((*puVar17 & 1) != 0) {
              uVar11 = puVar17[2];
              uVar13 = puVar17[3];
            }
            uVar14 = (uint)((int)(uVar21 - (uVar13 + (uVar14 < uVar11))) < 0 !=
                           (SBORROW4(uVar21,uVar13) !=
                           SBORROW4(uVar21 - uVar13,(uint)(uVar14 < uVar11))));
            goto LAB_012bd4ec;
          }
          iVar23 = uVar14 + iVar4;
          iVar16 = uVar21 + iVar4;
          uVar8 = 1;
          iVar20 = 0;
          cVar2 = *(char *)(iVar23 + 0x1c);
          iVar12 = 0;
          cVar3 = *(char *)(iVar16 + 0x1c);
          uVar15 = 1;
          if (cVar2 != '\0') {
            iVar9 = uVar14 + iVar4;
            iVar20 = *(int *)(iVar9 + 0x18);
            uVar8 = *(undefined4 *)(iVar9 + 0x14);
          }
          if (cVar3 == '\x01') {
            iVar12 = uVar21 + iVar4;
            uVar15 = *(undefined4 *)(iVar12 + 0x14);
            iVar12 = *(int *)(iVar12 + 0x18);
          }
          if (iVar20 != iVar12) break;
          iVar4 = iVar4 + 0x28;
          iVar20 = thunk_FUN_016dd50a(uVar8,uVar15,iVar20);
        } while (iVar20 == 0);
        uVar21 = 0;
        uVar15 = 1;
        uVar11 = 0;
        if (cVar2 != '\0') {
          uVar15 = *(undefined4 *)(iVar23 + 0x14);
        }
        uVar8 = 1;
        if (cVar2 != '\0') {
          uVar21 = *(uint *)(iVar23 + 0x18);
        }
        if (cVar3 != '\0') {
          uVar11 = *(uint *)(iVar16 + 0x18);
          uVar8 = *(undefined4 *)(iVar16 + 0x14);
        }
        uVar14 = uVar11;
        if (uVar21 < uVar11) {
          uVar14 = uVar21;
        }
        uVar14 = FUN_016dd50a(uVar15,uVar8,uVar14);
        if (uVar14 == 0) {
          uVar14 = uVar21 - uVar11;
        }
        uVar14 = uVar14 >> 0x1f;
      }
      else {
        uVar14 = 0;
        if (uVar11 < uVar21) {
          uVar14 = 1;
        }
      }
LAB_012bd4ec:
      iVar5 = iVar5 + -0x50;
      iVar4 = param_3;
      if (uVar14 != 0) {
        iVar4 = iVar5;
      }
      FUN_016dd1aa(iVar4 + uVar24 * 0x50,puVar17,0x50);
      uVar24 = uVar24 + (uVar14 ^ 1);
    }
    if (uVar19 == uVar10) break;
    local_38 = param_3 + uVar24 * 0x50;
    FUN_016dd1aa(local_38,puVar17,0x50);
    puVar17 = puVar17 + 0x14;
    uVar24 = uVar24 + 1;
    iVar5 = iVar5 + -0x50;
    uVar19 = uVar10;
  } while( true );
  FUN_016dd1aa(local_38,puVar6,0x50);
  FUN_016dd1aa(param_1,param_3,uVar24 * 0x50);
  param_2 = uVar10 - uVar24;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar24 * 0x14;
  iVar4 = param_3 + -0x50 + uVar10 * 0x50;
  puVar17 = param_1;
  uVar19 = param_2;
  do {
    FUN_016dd1aa(puVar17,iVar4,0x50);
    iVar4 = iVar4 + -0x50;
    puVar17 = puVar17 + 0x14;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  if (uVar10 < uVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar24,uVar10,uVar10,&DAT_018af348);
  }
  if (param_2 < 0x11) goto LAB_012bd0a4;
  goto LAB_012bd0d4;
}

