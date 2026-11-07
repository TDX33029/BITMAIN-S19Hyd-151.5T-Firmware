// FUN_01504260 @ 01504260 size=864 calls_out=6 calls_in=0
// strings: 

bool FUN_01504260(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int local_84;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar14 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    uVar21 = param_1[0x16];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_34 = 0;
    local_48[1] = 0;
    iVar20 = param_1[0x15];
    iVar23 = iVar20 + uVar21 * 0x28;
    local_48[0] = (uint)(local_48[2] != 0);
    iVar18 = param_1[0x13];
    uVar10 = param_1[1];
    iVar13 = *param_1;
    iVar11 = param_1[3];
    iVar2 = param_1[0x12];
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
LAB_01504314:
    do {
      uVar24 = FUN_01a41998(local_48);
      uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
      iVar3 = (int)uVar24;
      if (iVar3 == 0) break;
      if (iVar18 != 0) {
        uVar19 = *(undefined4 *)(iVar3 + 4);
        iVar17 = *(int *)(iVar3 + 8);
        iVar15 = iVar2;
        iVar22 = iVar18 << 5;
        do {
          if ((*(int *)(iVar15 + 8) == iVar17) &&
             (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(iVar15 + 4),uVar19,iVar17), iVar4 == 0)) {
            iVar15 = FUN_01577618(iVar15 + 0xc,uVar12,param_3);
            if (iVar15 == 0) goto LAB_0150459c;
            if (iVar11 != 0) {
              iVar15 = *(int *)(iVar3 + 8);
              uVar19 = *(undefined4 *)(iVar3 + 4);
              uVar5 = FUN_01676700(param_1 + 4,uVar19,iVar15);
              uVar9 = uVar5 >> 0x19;
              local_84 = 0;
              while( true ) {
                uVar5 = uVar10 & uVar5;
                uVar6 = *(uint *)(iVar13 + uVar5);
                uVar7 = uVar6 ^ uVar9 * 0x1010101;
                uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
                while (uVar7 != 0) {
                  uVar8 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                 (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3)
                          & uVar10;
                  iVar22 = iVar13 + -0x14 + uVar8 * -0x14;
                  uVar7 = uVar7 - 1 & uVar7;
                  if ((iVar15 == *(int *)(iVar22 + 8)) &&
                     (iVar22 = thunk_FUN_01bed842(uVar19,*(undefined4 *)(iVar22 + 4),iVar15),
                     iVar22 == 0)) {
                    iVar15 = iVar13 + uVar8 * -0x14;
                    puVar16 = *(uint **)(iVar15 + -8);
                    iVar15 = *(int *)(iVar15 + -4) << 2;
                    goto LAB_01504560;
                  }
                }
                if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
                local_84 = local_84 + 4;
                uVar5 = uVar5 + local_84;
              }
            }
            goto LAB_01504314;
          }
          iVar15 = iVar15 + 0x20;
          iVar22 = iVar22 + -0x20;
        } while (iVar22 != 0);
      }
      if (uVar21 != 0) {
        bVar14 = false;
        iVar15 = iVar20;
        do {
          while( true ) {
            cVar1 = FUN_015050f0(iVar15,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            iVar22 = iVar15 + 0x28;
            if (cVar1 == '\0') break;
            iVar15 = FUN_01577618(iVar15 + 0x14,uVar12,param_3);
            if (iVar15 == 0) goto LAB_0150459c;
            bVar14 = true;
            iVar15 = iVar22;
            if (iVar22 == iVar23) goto LAB_01504314;
          }
          iVar15 = iVar22;
        } while (iVar22 != iVar23);
        if (bVar14) goto LAB_01504314;
      }
      iVar15 = FUN_01577618(param_1 + 0xc,uVar12,param_3);
    } while (iVar15 != 0);
LAB_0150459c:
    bVar14 = iVar3 == 0;
  }
  return bVar14;
LAB_01504560:
  if (iVar15 == 0) goto LAB_01504314;
  uVar9 = *puVar16;
  if (uVar21 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,uVar21,&DAT_01cfa988);
  }
  iVar22 = FUN_01577618(iVar20 + uVar9 * 0x28 + 0x14,uVar12,param_3);
  iVar15 = iVar15 + -4;
  puVar16 = puVar16 + 1;
  if (iVar22 == 0) goto LAB_0150459c;
  goto LAB_01504560;
}

