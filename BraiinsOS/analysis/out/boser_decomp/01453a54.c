// FUN_01453a54 @ 01453a54 size=1060 calls_out=4 calls_in=4
// strings: 

void FUN_01453a54(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint *puVar28;
  undefined4 uVar29;
  bool bVar30;
  uint local_84;
  int local_6c;
  
  uVar25 = param_1[4];
  uVar26 = param_1[5];
  uVar27 = param_1[6];
  uVar29 = param_1[7];
  uVar9 = FUN_01453ee8(uVar25,uVar26,uVar27,uVar29,param_2);
  if (param_1[2] == 0) {
    FUN_014534c4(param_1,1,uVar25,uVar26,uVar27,uVar29);
  }
  uVar23 = param_1[1];
  iVar10 = *param_2;
  uVar21 = param_2[1];
  puVar28 = (uint *)*param_1;
  iVar11 = param_2[3];
  uVar22 = param_2[4];
  bVar1 = *(byte *)(param_2 + 5);
  cVar2 = *(char *)((int)param_2 + 0x47);
  cVar3 = *(char *)((int)param_2 + 0x45);
  iVar12 = *(int *)((int)param_2 + 0x16);
  bVar4 = *(byte *)((int)param_2 + 0x15);
  iVar13 = *(int *)((int)param_2 + 0x1e);
  iVar14 = *(int *)((int)param_2 + 0x1a);
  cVar5 = *(char *)((int)param_2 + 0x22);
  bVar6 = *(byte *)((int)param_2 + 0x46);
  bVar8 = false;
  local_6c = 0;
  uVar24 = uVar9;
  do {
    uVar24 = uVar23 & uVar24;
    uVar15 = *(uint *)((int)puVar28 + uVar24);
    uVar16 = uVar15 ^ (uVar9 >> 0x19) * 0x1010101;
    for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      uVar17 = uVar24 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                       (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar23
      ;
      uVar18 = (uint)*(byte *)((int)puVar28 + uVar17 * -0x48 + -2);
      bVar30 = bVar6 == uVar18;
      if (bVar30) {
        uVar18 = puVar28[uVar17 * -0x12 + -0xe];
      }
      if (((bVar30 && uVar22 == uVar18) &&
          (iVar19 = thunk_FUN_01bed842(iVar11,puVar28[uVar17 * -0x12 + -0xf]), iVar19 == 0)) &&
         (bVar7 = (byte)puVar28[uVar17 * -0x12 + -0xd], (bVar1 != 2) != (bVar7 == 2))) {
        if (bVar1 == 2) {
          if (cVar5 == *(char *)((int)puVar28 + uVar17 * -0x48 + -0x26)) {
            iVar20 = *(int *)((int)puVar28 + uVar17 * -0x48 + -0x2e);
            bVar30 = iVar14 == iVar20;
            iVar19 = iVar14;
            if (bVar30) {
              iVar20 = *(int *)((int)puVar28 + uVar17 * -0x48 + -0x2a);
              iVar19 = iVar13;
            }
            if (bVar30 && iVar19 == iVar20) {
              uVar18 = (uint)*(byte *)((int)puVar28 + uVar17 * -0x48 + -0x33);
              if ((bVar4 & 1) == 0) goto LAB_01453cd8;
              if ((uVar18 != 0) && (iVar12 == *(int *)((int)puVar28 + uVar17 * -0x48 + -0x32)))
              goto LAB_01453cec;
            }
          }
        }
        else if ((cVar3 == *(char *)((int)puVar28 + uVar17 * -0x48 + -3)) &&
                ((iVar19 = thunk_FUN_01bed842((int)param_2 + 0x25,
                                              (int)puVar28 + uVar17 * -0x48 + -0x23,0x10),
                 iVar19 == 0 &&
                 (iVar19 = thunk_FUN_01bed842((int)param_2 + 0x35,
                                              (int)puVar28 + uVar17 * -0x48 + -0x13,0x10),
                 iVar19 == 0)))) {
          if ((bVar1 & 1) == 0) {
            if ((bVar7 & 1) == 0) {
LAB_01453cec:
              if (iVar10 == 0) {
                if (puVar28[uVar17 * -0x12 + -0x12] == 0) goto LAB_01453d20;
              }
              else if ((puVar28[uVar17 * -0x12 + -0x12] != 0) &&
                      (uVar21 == puVar28[uVar17 * -0x12 + -0x11])) {
LAB_01453d20:
                if (cVar2 == *(char *)((int)puVar28 + uVar17 * -0x48 + -1)) {
                  FUN_0134bd64(param_2[2],iVar11);
                  return;
                }
              }
            }
          }
          else if ((bVar7 & 1) != 0) {
            uVar18 = thunk_FUN_01bed842((byte *)((int)param_2 + 0x15),
                                        (int)puVar28 + uVar17 * -0x48 + -0x33,0x10);
LAB_01453cd8:
            if (uVar18 == 0) goto LAB_01453cec;
          }
        }
      }
    }
    uVar16 = uVar15 & 0x80808080;
    if (bVar8) {
LAB_01453d64:
      if ((uVar16 & uVar15 << 1) != 0) {
        uVar24 = (uint)*(char *)((int)puVar28 + local_84);
        if (-1 < (int)uVar24) {
          uVar24 = *puVar28 & 0x80808080;
          uVar21 = LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                           (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18);
          uVar24 = (uint)*(byte *)((int)puVar28 + (uVar21 >> 3));
          local_84 = uVar21 >> 3;
        }
        iVar10 = param_1[3];
        iVar11 = param_1[2];
        bVar1 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar28 + local_84) = bVar1;
        param_1[2] = iVar11 - (uVar24 & 1);
        param_1[3] = iVar10 + 1;
        *(byte *)((int)puVar28 + (uVar23 & local_84 - 4) + 4) = bVar1;
        FUN_01bed4e2(puVar28 + local_84 * -0x12 + -0x12,param_2,0x48);
        return;
      }
      bVar8 = true;
    }
    else {
      if (uVar16 != 0) {
        local_84 = uVar24 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                   uVar23;
        goto LAB_01453d64;
      }
      bVar8 = false;
    }
    local_6c = local_6c + 4;
    uVar24 = local_6c + uVar24;
  } while( true );
}

