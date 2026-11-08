// FUN_0150067c @ 0150067c size=940 calls_out=6 calls_in=0
// strings: 

int FUN_0150067c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    uVar14 = param_1[0x16];
    iVar11 = param_1[0x15];
    iVar24 = uVar14 * 100 + iVar11;
    uVar3 = param_1[1];
    iVar12 = *param_1;
    iVar4 = param_1[3];
    local_44 = 0;
    local_58[1] = 0;
    iVar20 = param_1[0x13];
    iVar5 = param_1[0x12];
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
LAB_01500740:
    do {
      uVar25 = FUN_01a41998(local_58);
      uVar13 = (undefined4)((ulonglong)uVar25 >> 0x20);
      iVar2 = (int)uVar25;
      if (iVar2 == 0) {
        return 0;
      }
      uVar22 = *(undefined4 *)(iVar2 + 4);
      iVar23 = *(int *)(iVar2 + 8);
      if (iVar20 != 0) {
        iVar15 = iVar20 << 5;
        iVar16 = iVar5;
        do {
          if (*(int *)(iVar16 + 8) == iVar23) {
            uVar21 = *(undefined4 *)(iVar16 + 4);
            iVar6 = thunk_FUN_01bed842(uVar21,uVar22,iVar23);
            if (iVar6 == 0) {
              local_34 = 0x80000000;
              local_30 = uVar21;
              local_2c = iVar23;
              local_28 = param_3;
              iVar23 = FUN_015776f4(iVar16 + 0xc,uVar13,&local_34,param_4,param_5);
              if (iVar23 != 0) {
                return iVar23;
              }
              if (iVar4 == 0) goto LAB_01500740;
              uVar22 = *(undefined4 *)(iVar2 + 4);
              iVar2 = *(int *)(iVar2 + 8);
              uVar7 = FUN_01676700(param_1 + 4,uVar22,iVar2);
              uVar10 = uVar7 >> 0x19;
              iVar23 = 0;
              goto LAB_015008e8;
            }
          }
          iVar16 = iVar16 + 0x20;
          iVar15 = iVar15 + -0x20;
        } while (iVar15 != 0);
      }
      local_34 = 0x80000000;
      local_30 = uVar22;
      local_2c = iVar23;
      local_28 = param_3;
      if (uVar14 != 0) {
        bVar19 = false;
        iVar15 = iVar11;
        do {
          iVar23 = iVar15;
          while( true ) {
            cVar1 = FUN_01501468(iVar23,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar15 = iVar23 + 100;
            if (cVar1 != '\0') break;
            iVar23 = iVar15;
            if (iVar15 == iVar24) {
              if (bVar19) goto LAB_01500740;
              goto LAB_01500848;
            }
          }
          iVar23 = FUN_015776f4(iVar23 + 0x50,uVar13,&local_34,param_4,param_5);
          if (iVar23 != 0) {
            return iVar23;
          }
          bVar19 = true;
        } while (iVar15 != iVar24);
        goto LAB_01500740;
      }
LAB_01500848:
      iVar2 = FUN_015776f4(param_1 + 0xc,uVar13,&local_34,param_4,param_5);
    } while (iVar2 == 0);
  }
  return iVar2;
LAB_015008e8:
  uVar7 = uVar3 & uVar7;
  uVar17 = *(uint *)(iVar12 + uVar7);
  uVar8 = uVar17 ^ uVar10 * 0x1010101;
  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
  while( true ) {
    if (uVar8 == 0) goto LAB_0150097c;
    uVar9 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar3;
    iVar15 = iVar12 + -0x14 + uVar9 * -0x14;
    if ((iVar2 == *(int *)(iVar15 + 8)) &&
       (iVar15 = thunk_FUN_01bed842(uVar22,*(undefined4 *)(iVar15 + 4),iVar2), iVar15 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  iVar2 = iVar12 + uVar9 * -0x14;
  puVar18 = *(uint **)(iVar2 + -8);
  iVar2 = *(int *)(iVar2 + -4) << 2;
  while (iVar2 != 0) {
    uVar10 = *puVar18;
    if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar14,&DAT_01cfa998);
    }
    iVar23 = FUN_015776f4(uVar10 * 100 + iVar11 + 0x50,uVar13,&local_34,param_4,param_5);
    iVar2 = iVar2 + -4;
    puVar18 = puVar18 + 1;
    if (iVar23 != 0) {
      return iVar23;
    }
  }
  goto LAB_01500740;
LAB_0150097c:
  if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_01500740;
  iVar23 = iVar23 + 4;
  uVar7 = uVar7 + iVar23;
  goto LAB_015008e8;
}

