// FUN_015045c4 @ 015045c4 size=952 calls_out=6 calls_in=0
// strings: 

int FUN_015045c4(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint *puVar22;
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
    uVar13 = param_1[0x16];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    iVar19 = param_1[0x15];
    iVar18 = param_1[0x13];
    iVar24 = iVar19 + uVar13 * 0x28;
    uVar3 = param_1[1];
    iVar11 = *param_1;
    iVar4 = param_1[3];
    iVar5 = param_1[0x12];
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
LAB_01504688:
    do {
      uVar25 = FUN_01a41998(local_58);
      uVar12 = (undefined4)((ulonglong)uVar25 >> 0x20);
      iVar2 = (int)uVar25;
      if (iVar2 == 0) {
        return 0;
      }
      uVar21 = *(undefined4 *)(iVar2 + 4);
      iVar16 = *(int *)(iVar2 + 8);
      if (iVar18 != 0) {
        iVar14 = iVar18 << 5;
        iVar23 = iVar5;
        do {
          if (*(int *)(iVar23 + 8) == iVar16) {
            uVar20 = *(undefined4 *)(iVar23 + 4);
            iVar6 = thunk_FUN_01bed842(uVar20,uVar21,iVar16);
            if (iVar6 == 0) {
              local_34 = 0x80000000;
              local_30 = uVar20;
              local_2c = iVar16;
              local_28 = param_3;
              iVar16 = FUN_015776f4(iVar23 + 0xc,uVar12,&local_34,param_4,param_5);
              if (iVar16 != 0) {
                return iVar16;
              }
              if (iVar4 == 0) goto LAB_01504688;
              uVar21 = *(undefined4 *)(iVar2 + 4);
              iVar2 = *(int *)(iVar2 + 8);
              uVar7 = FUN_01676700(param_1 + 4,uVar21,iVar2);
              uVar10 = uVar7 >> 0x19;
              iVar16 = 0;
              goto LAB_01504834;
            }
          }
          iVar23 = iVar23 + 0x20;
          iVar14 = iVar14 + -0x20;
        } while (iVar14 != 0);
      }
      local_34 = 0x80000000;
      local_30 = uVar21;
      local_2c = iVar16;
      local_28 = param_3;
      if (uVar13 != 0) {
        bVar15 = false;
        iVar14 = iVar19;
        do {
          iVar16 = iVar14;
          while( true ) {
            cVar1 = FUN_015050f0(iVar16,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar14 = iVar16 + 0x28;
            if (cVar1 != '\0') break;
            iVar16 = iVar14;
            if (iVar14 == iVar24) {
              if (bVar15) goto LAB_01504688;
              goto LAB_01504794;
            }
          }
          iVar16 = FUN_015776f4(iVar16 + 0x14,uVar12,&local_34,param_4,param_5);
          if (iVar16 != 0) {
            return iVar16;
          }
          bVar15 = true;
        } while (iVar14 != iVar24);
        goto LAB_01504688;
      }
LAB_01504794:
      iVar2 = FUN_015776f4(param_1 + 0xc,uVar12,&local_34,param_4,param_5);
    } while (iVar2 == 0);
  }
  return iVar2;
LAB_01504834:
  uVar7 = uVar3 & uVar7;
  uVar17 = *(uint *)(iVar11 + uVar7);
  uVar8 = uVar17 ^ uVar10 * 0x1010101;
  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
  while( true ) {
    if (uVar8 == 0) goto LAB_015048d0;
    uVar9 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar3;
    iVar14 = iVar11 + -0x14 + uVar9 * -0x14;
    if ((iVar2 == *(int *)(iVar14 + 8)) &&
       (iVar14 = thunk_FUN_01bed842(uVar21,*(undefined4 *)(iVar14 + 4),iVar2), iVar14 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  iVar2 = iVar11 + uVar9 * -0x14;
  puVar22 = *(uint **)(iVar2 + -8);
  iVar2 = *(int *)(iVar2 + -4) << 2;
  while (iVar2 != 0) {
    uVar10 = *puVar22;
    if (uVar13 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar13,&DAT_01cfa998);
    }
    iVar16 = FUN_015776f4(iVar19 + uVar10 * 0x28 + 0x14,uVar12,&local_34,param_4,param_5);
    iVar2 = iVar2 + -4;
    puVar22 = puVar22 + 1;
    if (iVar16 != 0) {
      return iVar16;
    }
  }
  goto LAB_01504688;
LAB_015048d0:
  if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_01504688;
  iVar16 = iVar16 + 4;
  uVar7 = uVar7 + iVar16;
  goto LAB_01504834;
}

