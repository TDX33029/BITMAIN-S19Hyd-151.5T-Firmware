// FUN_01192838 @ 01192838 size=864 calls_out=3 calls_in=1
// strings: properties | patternProperties | additionalProperties

void FUN_01192838(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_30;
  int local_28;
  
  if (*param_4 == '\x04') {
    iVar10 = *param_3;
    if (iVar10 != 0) {
      local_28 = param_3[1];
      iVar9 = local_28;
      iVar7 = iVar10;
      do {
        uVar14 = (uint)*(ushort *)(iVar7 + 0x192);
        iVar13 = iVar7 + 0x10c;
        uVar15 = 0xffffffff;
        iVar11 = uVar14 * 0xc;
        do {
          if (iVar11 == 0) goto LAB_01192904;
          uVar8 = *(uint *)(iVar13 + 8);
          uVar5 = uVar8;
          if (9 < uVar8) {
            uVar5 = 10;
          }
          iVar4 = FUN_016dd50a("properties",*(undefined4 *)(iVar13 + 4),uVar5);
          if (iVar4 == 0) {
            iVar4 = 10 - uVar8;
          }
          iVar11 = iVar11 + -0xc;
          uVar15 = uVar15 + 1;
          iVar13 = iVar13 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        uVar14 = uVar15;
        if (0 < iVar4 == iVar4 < 0) {
          bVar2 = false;
          goto LAB_01192924;
        }
LAB_01192904:
        if (iVar9 == 0) goto LAB_01192b88;
        iVar9 = iVar9 + -1;
        iVar7 = *(int *)(iVar7 + uVar14 * 4 + 0x198);
      } while( true );
    }
    bVar2 = true;
    bVar3 = false;
LAB_01192b14:
    bVar6 = 0;
    iVar10 = *(int *)(param_4 + 0xc);
LAB_01192b18:
    if (((!bVar2) && (iVar10 == 2 && !bVar3)) && ((bVar6 & 1) == 0)) {
LAB_01192b64:
      *param_1 = 0;
      return;
    }
  }
LAB_01192b2c:
  uVar16 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                        &DAT_00569b28,8);
  FUN_0119fb90(param_1,param_4,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  return;
LAB_01192b88:
  bVar2 = true;
LAB_01192924:
  iVar9 = iVar10;
  local_30 = local_28;
  do {
    uVar14 = (uint)*(ushort *)(iVar9 + 0x192);
    iVar11 = iVar9 + 0x10c;
    uVar15 = 0xffffffff;
    iVar7 = uVar14 * 0xc;
    do {
      if (iVar7 == 0) goto LAB_011929c0;
      uVar8 = *(uint *)(iVar11 + 8);
      uVar5 = uVar8;
      if (0x10 < uVar8) {
        uVar5 = 0x11;
      }
      iVar13 = FUN_016dd50a("patternProperties",*(undefined4 *)(iVar11 + 4),uVar5);
      if (iVar13 == 0) {
        iVar13 = 0x11 - uVar8;
      }
      iVar7 = iVar7 + -0xc;
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0xc;
    } while ((char)((0 < iVar13) - (iVar13 < 0)) == '\x01');
    uVar14 = uVar15;
    if (0 < iVar13 == iVar13 < 0) {
      bVar3 = true;
      goto LAB_01192a00;
    }
LAB_011929c0:
    if (local_30 == 0) break;
    local_30 = local_30 + -1;
    iVar9 = *(int *)(iVar9 + uVar14 * 4 + 0x198);
  } while( true );
  bVar3 = false;
LAB_01192a00:
  do {
    uVar14 = (uint)*(ushort *)(iVar10 + 0x192);
    iVar7 = iVar10 + 0x10c;
    uVar15 = 0xffffffff;
    iVar9 = uVar14 * 0xc;
    do {
      if (iVar9 == 0) goto LAB_01192a84;
      uVar8 = *(uint *)(iVar7 + 8);
      uVar5 = uVar8;
      if (0x13 < uVar8) {
        uVar5 = 0x14;
      }
      iVar11 = FUN_016dd50a("additionalProperties",*(undefined4 *)(iVar7 + 4),uVar5);
      if (iVar11 == 0) {
        iVar11 = 0x14 - uVar8;
      }
      iVar9 = iVar9 + -0xc;
      uVar15 = uVar15 + 1;
      iVar7 = iVar7 + 0xc;
    } while ((char)((0 < iVar11) - (iVar11 < 0)) == '\x01');
    uVar14 = uVar15;
    if (0 < iVar11 == iVar11 < 0) {
      pcVar12 = (char *)(iVar10 + uVar15 * 0x18);
      if (*pcVar12 == '\x01') {
        bVar1 = pcVar12[1];
        iVar10 = *(int *)(param_4 + 0xc);
        bVar6 = bVar1 ^ 1;
        if ((iVar10 != 1) || ((bVar1 & 1) != 0)) goto LAB_01192b18;
        if (!(!bVar2 && !bVar3)) goto LAB_01192b2c;
        goto LAB_01192b64;
      }
      goto LAB_01192b14;
    }
LAB_01192a84:
    if (local_28 == 0) goto LAB_01192b14;
    local_28 = local_28 + -1;
    iVar10 = *(int *)(iVar10 + uVar14 * 4 + 0x198);
  } while( true );
}

