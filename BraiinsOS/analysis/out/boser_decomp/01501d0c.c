// FUN_01501d0c @ 01501d0c size=1404 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01501d0c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    local_60 = 4;
    uVar13 = param_1[0x1f];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_50 == 0) {
      local_38 = 0;
    }
    uVar19 = param_1[0xd];
    local_5c = 0;
    local_64 = 0;
    local_44 = 0;
    local_54 = 0;
    iVar17 = param_1[0x1e];
    iVar14 = uVar13 * 100 + iVar17;
    iVar8 = param_1[0xf];
    uVar9 = param_1[1];
    iVar15 = *param_1;
    iVar10 = param_1[3];
    iVar2 = param_1[0xc];
    local_58 = (uint)(local_50 != 0);
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
LAB_01501e04:
    uVar26 = FUN_01a41998(&local_58);
    uVar11 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar25 = (int)uVar26;
    if (iVar25 != 0) {
      uVar20 = *(undefined4 *)(iVar25 + 4);
      iVar23 = *(int *)(iVar25 + 8);
      if (iVar10 != 0) {
        uVar3 = FUN_0155d010(param_1 + 4,uVar20,iVar23);
        uVar6 = uVar3 >> 0x19;
        iVar24 = 0;
        while( true ) {
          uVar3 = uVar9 & uVar3;
          uVar16 = *(uint *)(iVar15 + uVar3);
          uVar4 = uVar16 ^ uVar6 * 0x1010101;
          for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0;
              uVar4 = uVar4 - 1 & uVar4) {
            uVar18 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar9;
            iVar5 = iVar15 + -0x20 + uVar18 * -0x20;
            if (iVar23 == *(int *)(iVar5 + 8)) {
              uVar21 = *(undefined4 *)(iVar5 + 4);
              iVar5 = thunk_FUN_01bed842(uVar20,uVar21,iVar23);
              if (iVar5 == 0) {
                local_34 = 0x80000000;
                local_30 = uVar21;
                local_2c = iVar23;
                local_28 = param_3;
                uVar26 = FUN_01576990(iVar15 + -0x14 + uVar18 * -0x20,uVar11,&local_34,param_4,
                                      param_5);
                FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
                if (iVar8 == 0) goto LAB_01501e04;
                iVar23 = *(int *)(iVar25 + 8);
                uVar20 = *(undefined4 *)(iVar25 + 4);
                uVar3 = FUN_01676700(param_1 + 0x10,uVar20,iVar23);
                uVar6 = uVar3 >> 0x19;
                iVar25 = 0;
                goto LAB_01501fcc;
              }
            }
          }
          if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
          iVar24 = iVar24 + 4;
          uVar3 = uVar3 + iVar24;
        }
      }
      if (uVar13 == 0) {
LAB_015021c4:
        local_34 = 0x80000000;
        local_30 = uVar20;
        local_2c = iVar23;
        local_28 = param_3;
        uVar26 = FUN_01576990(param_1 + 0x18,uVar11,&local_34,param_4,param_5);
        FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      }
      else {
        bVar22 = false;
        iVar23 = iVar17;
        do {
          iVar24 = iVar23;
          while( true ) {
            cVar1 = FUN_01501468(iVar24,*(undefined4 *)(iVar25 + 4),*(undefined4 *)(iVar25 + 8));
            iVar23 = iVar24 + 100;
            if (cVar1 != '\0') break;
            iVar24 = iVar23;
            if (iVar23 == iVar14) {
              if (bVar22) goto LAB_01501e04;
              uVar20 = *(undefined4 *)(iVar25 + 4);
              iVar23 = *(int *)(iVar25 + 8);
              goto LAB_015021c4;
            }
          }
          local_30 = *(undefined4 *)(iVar25 + 4);
          local_2c = *(int *)(iVar25 + 8);
          local_34 = 0x80000000;
          local_28 = param_3;
          uVar26 = FUN_01576990(iVar24 + 0x50,uVar11,&local_34,param_4,param_5);
          FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
          bVar22 = true;
        } while (iVar23 != iVar14);
      }
      goto LAB_01501e04;
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar7 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar12 = &UNK_01cfa84c;
    *puVar7 = local_58;
    puVar7[1] = local_54;
    puVar7[2] = local_50;
    puVar7[3] = local_4c;
  }
  else {
    puVar7 = (uint *)&DAT_00000001;
    puVar12 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar12,puVar7);
LAB_01501fcc:
  uVar3 = uVar19 & uVar3;
  uVar16 = *(uint *)(iVar2 + uVar3);
  uVar4 = uVar16 ^ uVar6 * 0x1010101;
  uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
  while( true ) {
    if (uVar4 == 0) goto LAB_0150206c;
    uVar18 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar19;
    iVar24 = iVar2 + -0x14 + uVar18 * -0x14;
    if ((iVar23 == *(int *)(iVar24 + 8)) &&
       (iVar24 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar24 + 4),iVar23), iVar24 == 0)) break;
    uVar4 = uVar4 - 1 & uVar4;
  }
  iVar23 = iVar2 + uVar18 * -0x14;
  puVar7 = *(uint **)(iVar23 + -8);
  for (iVar25 = *(int *)(iVar23 + -4) << 2; iVar25 != 0; iVar25 = iVar25 + -4) {
    uVar6 = *puVar7;
    if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar13,&DAT_01cfa968);
    }
    uVar26 = FUN_01576990(uVar6 * 100 + iVar17 + 0x50,uVar11,&local_34,param_4,param_5);
    FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar7 = puVar7 + 1;
  }
  goto LAB_01501e04;
LAB_0150206c:
  if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) goto LAB_01501e04;
  iVar25 = iVar25 + 4;
  uVar3 = uVar3 + iVar25;
  goto LAB_01501fcc;
}

