// FUN_0150523c @ 0150523c size=1396 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_0150523c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
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
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    local_44 = 0;
    uVar24 = param_1[0x1f];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_5c = 0;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_64 = 0;
    uVar14 = param_1[0xd];
    iVar15 = param_1[0x1e];
    iVar8 = iVar15 + uVar24 * 0x28;
    iVar9 = param_1[0xf];
    uVar10 = param_1[1];
    iVar16 = *param_1;
    iVar11 = param_1[3];
    iVar2 = param_1[0xc];
    local_60 = 4;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_0150532c:
    uVar26 = FUN_01a41998(&local_58);
    uVar12 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar22 = (int)uVar26;
    if (iVar22 != 0) {
      uVar17 = *(undefined4 *)(iVar22 + 4);
      iVar23 = *(int *)(iVar22 + 8);
      if (iVar11 != 0) {
        uVar3 = FUN_0155d010(param_1 + 4,uVar17,iVar23);
        uVar6 = uVar3 >> 0x19;
        iVar25 = 0;
        while( true ) {
          uVar3 = uVar10 & uVar3;
          uVar20 = *(uint *)(iVar16 + uVar3);
          uVar4 = uVar20 ^ uVar6 * 0x1010101;
          for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0;
              uVar4 = uVar4 - 1 & uVar4) {
            uVar18 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar10;
            iVar5 = iVar16 + -0x20 + uVar18 * -0x20;
            if (iVar23 == *(int *)(iVar5 + 8)) {
              uVar21 = *(undefined4 *)(iVar5 + 4);
              iVar5 = thunk_FUN_01bed842(uVar17,uVar21,iVar23);
              if (iVar5 == 0) {
                local_34 = 0x80000000;
                local_30 = uVar21;
                local_2c = iVar23;
                local_28 = param_3;
                uVar26 = FUN_01576990(iVar16 + -0x14 + uVar18 * -0x20,uVar12,&local_34,param_4,
                                      param_5);
                FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
                if (iVar9 == 0) goto LAB_0150532c;
                uVar17 = *(undefined4 *)(iVar22 + 4);
                iVar22 = *(int *)(iVar22 + 8);
                uVar3 = FUN_01676700(param_1 + 0x10,uVar17,iVar22);
                uVar6 = uVar3 >> 0x19;
                iVar23 = 0;
                goto LAB_015054f4;
              }
            }
          }
          if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
          iVar25 = iVar25 + 4;
          uVar3 = uVar3 + iVar25;
        }
      }
      if (uVar24 == 0) {
LAB_015056ec:
        local_34 = 0x80000000;
        local_30 = uVar17;
        local_2c = iVar23;
        local_28 = param_3;
        uVar26 = FUN_01576990(param_1 + 0x18,uVar12,&local_34,param_4,param_5);
        FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      }
      else {
        bVar19 = false;
        iVar23 = iVar15;
        do {
          iVar25 = iVar23;
          while( true ) {
            cVar1 = FUN_015050f0(iVar25,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8));
            iVar23 = iVar25 + 0x28;
            if (cVar1 != '\0') break;
            iVar25 = iVar23;
            if (iVar23 == iVar8) {
              if (bVar19) goto LAB_0150532c;
              uVar17 = *(undefined4 *)(iVar22 + 4);
              iVar23 = *(int *)(iVar22 + 8);
              goto LAB_015056ec;
            }
          }
          local_30 = *(undefined4 *)(iVar22 + 4);
          local_2c = *(int *)(iVar22 + 8);
          local_34 = 0x80000000;
          local_28 = param_3;
          uVar26 = FUN_01576990(iVar25 + 0x14,uVar12,&local_34,param_4,param_5);
          FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
          bVar19 = true;
        } while (iVar23 != iVar8);
      }
      goto LAB_0150532c;
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
    puVar13 = &UNK_01cfa84c;
    *puVar7 = local_58;
    puVar7[1] = local_54;
    puVar7[2] = local_50;
    puVar7[3] = local_4c;
  }
  else {
    puVar7 = (uint *)&DAT_00000001;
    puVar13 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar13,puVar7);
LAB_015054f4:
  uVar3 = uVar14 & uVar3;
  uVar20 = *(uint *)(iVar2 + uVar3);
  uVar4 = uVar20 ^ uVar6 * 0x1010101;
  uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
  while( true ) {
    if (uVar4 == 0) goto LAB_01505594;
    uVar18 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar14;
    iVar25 = iVar2 + -0x14 + uVar18 * -0x14;
    if ((iVar22 == *(int *)(iVar25 + 8)) &&
       (iVar25 = thunk_FUN_01bed842(uVar17,*(undefined4 *)(iVar25 + 4),iVar22), iVar25 == 0)) break;
    uVar4 = uVar4 - 1 & uVar4;
  }
  iVar23 = iVar2 + uVar18 * -0x14;
  puVar7 = *(uint **)(iVar23 + -8);
  for (iVar22 = *(int *)(iVar23 + -4) << 2; iVar22 != 0; iVar22 = iVar22 + -4) {
    uVar6 = *puVar7;
    if (uVar24 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar24,&DAT_01cfa968);
    }
    uVar26 = FUN_01576990(iVar15 + uVar6 * 0x28 + 0x14,uVar12,&local_34,param_4,param_5);
    FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar7 = puVar7 + 1;
  }
  goto LAB_0150532c;
LAB_01505594:
  if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) goto LAB_0150532c;
  iVar23 = iVar23 + 4;
  uVar3 = uVar3 + iVar23;
  goto LAB_015054f4;
}

