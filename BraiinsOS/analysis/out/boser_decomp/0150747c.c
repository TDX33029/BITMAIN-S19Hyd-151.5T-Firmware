// FUN_0150747c @ 0150747c size=820 calls_out=6 calls_in=0
// strings: 

bool FUN_0150747c(int *param_1,char *param_2,undefined4 param_3)

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
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  int local_80;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return true;
  }
  local_48[2] = *(uint *)(param_2 + 4);
  local_3c = *(undefined4 *)(param_2 + 8);
  local_28 = *(undefined4 *)(param_2 + 0xc);
  if (local_48[2] == 0) {
    local_28 = 0;
  }
  uVar22 = param_1[0x13];
  local_48[0] = (uint)(local_48[2] != 0);
  iVar13 = param_1[0x12];
  iVar21 = uVar22 * 100 + iVar13;
  iVar14 = *param_1;
  uVar10 = param_1[1];
  iVar15 = param_1[0x10];
  iVar11 = param_1[3];
  iVar2 = param_1[0xf];
  local_34 = 0;
  local_48[1] = 0;
  local_38 = local_48[0];
  local_30 = local_48[2];
  local_2c = local_3c;
LAB_01507528:
  do {
    uVar24 = FUN_01a41998(local_48);
    uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
    iVar3 = (int)uVar24;
    if (iVar3 == 0) {
LAB_0150778c:
      return iVar3 == 0;
    }
    if (iVar15 != 0) {
      uVar20 = *(undefined4 *)(iVar3 + 4);
      iVar19 = *(int *)(iVar3 + 8);
      iVar16 = iVar2;
      iVar23 = iVar15 << 5;
      do {
        if ((*(int *)(iVar16 + 8) == iVar19) &&
           (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(iVar16 + 4),uVar20,iVar19), iVar4 == 0)) {
          iVar16 = FUN_01577618(iVar16 + 0xc,uVar12,param_3);
          if (iVar16 == 0) goto LAB_0150778c;
          if (iVar11 != 0) {
            iVar16 = *(int *)(iVar3 + 8);
            uVar20 = *(undefined4 *)(iVar3 + 4);
            uVar5 = FUN_01676700(param_1 + 4,uVar20,iVar16);
            uVar9 = uVar5 >> 0x19;
            local_80 = 0;
            while( true ) {
              uVar5 = uVar10 & uVar5;
              uVar6 = *(uint *)(iVar14 + uVar5);
              uVar7 = uVar6 ^ uVar9 * 0x1010101;
              uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
              while (uVar7 != 0) {
                uVar8 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                               (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                        uVar10;
                iVar23 = iVar14 + -0x14 + uVar8 * -0x14;
                uVar7 = uVar7 - 1 & uVar7;
                if ((iVar16 == *(int *)(iVar23 + 8)) &&
                   (iVar23 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar23 + 4),iVar16),
                   iVar23 == 0)) {
                  iVar16 = iVar14 + uVar8 * -0x14;
                  puVar17 = *(uint **)(iVar16 + -8);
                  iVar16 = *(int *)(iVar16 + -4) << 2;
                  goto LAB_01507750;
                }
              }
              if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
              local_80 = local_80 + 4;
              uVar5 = uVar5 + local_80;
            }
          }
          goto LAB_01507528;
        }
        iVar16 = iVar16 + 0x20;
        iVar23 = iVar23 + -0x20;
      } while (iVar23 != 0);
    }
    if (uVar22 == 0) goto LAB_0150778c;
    bVar18 = false;
    iVar16 = iVar13;
    do {
      while( true ) {
        cVar1 = FUN_01501468(iVar16,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        iVar23 = iVar16 + 100;
        if (cVar1 == '\0') break;
        iVar16 = FUN_01577618(iVar16 + 0x50,uVar12,param_3);
        if (iVar16 == 0) goto LAB_0150778c;
        bVar18 = true;
        iVar16 = iVar23;
        if (iVar23 == iVar21) goto LAB_01507528;
      }
      iVar16 = iVar23;
    } while (iVar23 != iVar21);
    if (!bVar18) goto LAB_0150778c;
  } while( true );
LAB_01507750:
  if (iVar16 == 0) goto LAB_01507528;
  uVar9 = *puVar17;
  if (uVar22 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,uVar22,&DAT_01cfa9c8);
  }
  iVar23 = FUN_01577618(uVar9 * 100 + iVar13 + 0x50,uVar12,param_3);
  iVar16 = iVar16 + -4;
  puVar17 = puVar17 + 1;
  if (iVar23 == 0) goto LAB_0150778c;
  goto LAB_01507750;
}

