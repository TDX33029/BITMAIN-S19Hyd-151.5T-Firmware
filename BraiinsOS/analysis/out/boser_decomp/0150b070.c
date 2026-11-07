// FUN_0150b070 @ 0150b070 size=828 calls_out=6 calls_in=0
// strings: 

bool FUN_0150b070(int *param_1,char *param_2,undefined4 param_3)

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
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
  undefined8 uVar24;
  int local_7c;
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
  local_34 = 0;
  local_48[1] = 0;
  uVar20 = param_1[0x13];
  local_28 = *(undefined4 *)(param_2 + 0xc);
  if (local_48[2] == 0) {
    local_28 = 0;
  }
  iVar14 = param_1[0x12];
  iVar23 = iVar14 + uVar20 * 0x28;
  local_48[0] = (uint)(local_48[2] != 0);
  iVar17 = param_1[0x10];
  uVar10 = param_1[1];
  iVar13 = *param_1;
  iVar11 = param_1[3];
  iVar2 = param_1[0xf];
  local_38 = local_48[0];
  local_30 = local_48[2];
  local_2c = local_3c;
LAB_0150b120:
  do {
    uVar24 = FUN_01a41998(local_48);
    uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
    iVar3 = (int)uVar24;
    if (iVar3 == 0) {
LAB_0150b388:
      return iVar3 == 0;
    }
    if (iVar17 != 0) {
      uVar18 = *(undefined4 *)(iVar3 + 4);
      iVar21 = *(int *)(iVar3 + 8);
      iVar15 = iVar2;
      iVar16 = iVar17 << 5;
      do {
        if ((*(int *)(iVar15 + 8) == iVar21) &&
           (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(iVar15 + 4),uVar18,iVar21), iVar4 == 0)) {
          iVar15 = FUN_01577618(iVar15 + 0xc,uVar12,param_3);
          if (iVar15 == 0) goto LAB_0150b388;
          if (iVar11 != 0) {
            iVar15 = *(int *)(iVar3 + 8);
            uVar18 = *(undefined4 *)(iVar3 + 4);
            uVar5 = FUN_01676700(param_1 + 4,uVar18,iVar15);
            uVar9 = uVar5 >> 0x19;
            local_7c = 0;
            while( true ) {
              uVar5 = uVar10 & uVar5;
              uVar6 = *(uint *)(iVar13 + uVar5);
              uVar7 = uVar6 ^ uVar9 * 0x1010101;
              uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
              while (uVar7 != 0) {
                uVar8 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                               (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                        uVar10;
                uVar7 = uVar7 - 1 & uVar7;
                iVar16 = iVar13 + -0x14 + uVar8 * -0x14;
                if ((iVar15 == *(int *)(iVar16 + 8)) &&
                   (iVar16 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar16 + 4),iVar15),
                   iVar16 == 0)) {
                  iVar15 = iVar13 + uVar8 * -0x14;
                  puVar19 = *(uint **)(iVar15 + -8);
                  iVar15 = *(int *)(iVar15 + -4) << 2;
                  goto LAB_0150b348;
                }
              }
              if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
              local_7c = local_7c + 4;
              uVar5 = uVar5 + local_7c;
            }
          }
          goto LAB_0150b120;
        }
        iVar15 = iVar15 + 0x20;
        iVar16 = iVar16 + -0x20;
      } while (iVar16 != 0);
    }
    if (uVar20 == 0) goto LAB_0150b388;
    bVar22 = false;
    iVar15 = iVar14;
    do {
      while( true ) {
        cVar1 = FUN_015050f0(iVar15,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        iVar16 = iVar15 + 0x28;
        if (cVar1 == '\0') break;
        iVar15 = FUN_01577618(iVar15 + 0x14,uVar12,param_3);
        if (iVar15 == 0) goto LAB_0150b388;
        bVar22 = true;
        iVar15 = iVar16;
        if (iVar16 == iVar23) goto LAB_0150b120;
      }
      iVar15 = iVar16;
    } while (iVar16 != iVar23);
    if (!bVar22) goto LAB_0150b388;
  } while( true );
LAB_0150b348:
  if (iVar15 == 0) goto LAB_0150b120;
  uVar9 = *puVar19;
  if (uVar20 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,uVar20,&DAT_01cfa9c8);
  }
  iVar16 = FUN_01577618(iVar14 + uVar9 * 0x28 + 0x14,uVar12,param_3);
  iVar15 = iVar15 + -4;
  puVar19 = puVar19 + 1;
  if (iVar16 == 0) goto LAB_0150b388;
  goto LAB_0150b348;
}

