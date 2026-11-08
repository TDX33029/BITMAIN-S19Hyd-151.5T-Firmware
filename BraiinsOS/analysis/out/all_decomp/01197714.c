// FUN_01197714 @ 01197714 size=3240 calls_out=29 calls_in=1
// strings: idn-hostname | json-pointer | uri-template | regex | iri-reference | idn-email

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01197714(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int **ppiVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  int local_e0;
  int *local_c0;
  int **local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int **local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  int **local_94;
  uint local_90;
  uint local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_4c = param_4;
  if (*param_4 == '\x03') {
    iVar12 = *(int *)(param_2 + 0x48);
    bVar2 = *(byte *)(param_2 + 0x88);
    piVar17 = *(int **)(param_4 + 8);
    ppiVar20 = *(int ***)(param_4 + 0xc);
    bVar6 = bVar2 < 3;
    if (*(byte *)(iVar12 + 0x1d6) != 2) {
      bVar6 = *(byte *)(iVar12 + 0x1d6);
    }
    if ((bVar6 & 1) == 0) {
      iVar12 = 1;
      if ((ppiVar20 == (int **)0x0) || (iVar12 = thunk_FUN_016d4a50(ppiVar20), iVar12 != 0)) {
        FUN_016dd1aa(iVar12,piVar17,ppiVar20);
        local_a4._4_4_ = (int **)CONCAT31(local_a4._5_3_,3);
        local_a4._0_4_ = (undefined4 *)0x1;
        local_a8 = (int **)0x1;
        local_9c._0_4_ = ppiVar20;
        local_9c._4_4_ = iVar12;
        local_94 = ppiVar20;
        puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x20);
        }
        *puVar9 = local_a8;
        puVar9[1] = (undefined4 *)local_a4;
        puVar9[2] = local_a4._4_4_;
        puVar9[3] = (int **)local_9c;
        puVar9[4] = local_9c._4_4_;
        puVar9[5] = local_94;
        puVar9[6] = local_90;
        puVar9[7] = local_8c;
        piVar17 = (int *)thunk_FUN_016d4a50(4);
        if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,4);
        }
        *piVar17 = (int)puVar9;
        *param_1 = 1;
        param_1[1] = piVar17;
        param_1[2] = &DAT_01889888;
        return;
      }
LAB_01197b40:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppiVar20);
    }
    if (*(int *)(iVar12 + 0xc4) != 0) {
      local_8c = *(uint *)(iVar12 + 0xcc);
      local_9c._4_4_ = *(uint *)(iVar12 + 0xd0);
      local_94 = *(int ***)(iVar12 + 0xd4);
      local_90 = *(uint *)(iVar12 + 200);
      local_a4._0_4_ = *(undefined4 **)(iVar12 + 0xdc);
      local_a4._4_4_ = *(int ***)(iVar12 + 0xe0);
      local_a8 = *(int ***)(iVar12 + 0xd8);
      local_9c._0_4_ = *(int ***)(iVar12 + 0xe4);
      FUN_011df94c(&local_a8,piVar17,ppiVar20);
      uVar7 = local_9c._4_4_ ^ 0xff;
      uVar10 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
               ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
      lVar4 = (ulonglong)uVar10 * 0xb36a80d2;
      uVar14 = (uint)lVar4;
      uVar10 = (uVar7 << 0x18 | (local_9c._4_4_ >> 8 & 0xff) << 0x10 |
                (local_9c._4_4_ >> 0x10 & 0xff) << 8 | local_9c._4_4_ >> 0x18) * -0x4c957f2e +
               uVar10 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar11 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18) ^
               (int)local_94 * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
      uVar13 = local_8c << 0x18 | (local_8c >> 8 & 0xff) << 0x10 | (local_8c >> 0x10 & 0xff) << 8 |
               local_8c >> 0x18;
      uVar14 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
      lVar4 = (ulonglong)uVar13 * (ulonglong)uVar14;
      uVar7 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
              uVar11 >> 0x18;
      lVar5 = (ulonglong)~local_90 * (ulonglong)uVar7;
      uVar10 = (uint)lVar5;
      uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
              uVar14 >> 0x18) * ~local_90 + uVar7 * ~local_8c + (int)((ulonglong)lVar5 >> 0x20);
      iVar16 = *(int *)(iVar12 + 0xb8);
      uVar18 = *(uint *)(iVar12 + 0xbc);
      uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18) ^
               uVar11 * uVar13 +
               uVar14 * (local_90 << 0x18 | (local_90 >> 8 & 0xff) << 0x10 |
                         (local_90 >> 0x10 & 0xff) << 8 | local_90 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18) ^ (uint)lVar4;
      uVar10 = uVar11;
      if ((uVar14 & 0x20) != 0) {
        uVar10 = uVar7;
        uVar7 = uVar11;
      }
      uVar10 = uVar7 << (uVar14 & 0x1f) | (uVar10 >> 1) >> (~uVar14 & 0x1f);
      uVar7 = uVar10 >> 0x19;
      local_e0 = 0;
      while( true ) {
        uVar10 = uVar18 & uVar10;
        uVar11 = *(uint *)(iVar16 + uVar10);
        uVar14 = uVar11 ^ uVar7 * 0x1010101;
        uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
        while (uVar14 != 0) {
          uVar13 = uVar10 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   uVar18;
          uVar14 = uVar14 - 1 & uVar14;
          iVar8 = iVar16 + -0x14 + uVar13 * -0x14;
          if (ppiVar20 == *(int ***)(iVar8 + 8)) {
            uVar15 = *(undefined4 *)(iVar8 + 4);
            iVar8 = thunk_FUN_016dd50a(piVar17,uVar15,ppiVar20);
            if (iVar8 == 0) {
              if (ppiVar20 == (int **)0x0) {
                iVar12 = 1;
              }
              else {
                iVar12 = thunk_FUN_016d4a50(ppiVar20);
                if (iVar12 == 0) goto LAB_01197b40;
              }
              iVar16 = iVar16 + uVar13 * -0x14;
              FUN_016dd1aa(iVar12,uVar15,ppiVar20);
              piVar17 = *(int **)(iVar16 + -8);
              do {
                iVar8 = *piVar17;
                bVar3 = (bool)hasExclusiveAccess(piVar17);
              } while (!bVar3);
              *piVar17 = iVar8 + 1;
              if (-1 < iVar8) {
                iVar8 = *(int *)(iVar16 + -4);
                iVar19 = *(int *)(iVar16 + -8);
                uVar22 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),
                                      *(undefined4 *)(param_2 + 0x3c),&DAT_003e8611,6);
                iVar16 = 1;
                if ((ppiVar20 != (int **)0x0) &&
                   (iVar16 = thunk_FUN_016d4a50(ppiVar20), iVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,ppiVar20);
                }
                FUN_016dd1aa(iVar16,iVar12,ppiVar20);
                local_a4._4_4_ = (int **)CONCAT31(local_a4._5_3_,3);
                local_a4._0_4_ = (undefined4 *)0x1;
                local_a8 = (int **)0x1;
                local_9c._0_4_ = ppiVar20;
                local_9c._4_4_ = iVar16;
                local_94 = ppiVar20;
                puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
                if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x20);
                }
                *puVar9 = local_a8;
                puVar9[1] = (undefined4 *)local_a4;
                puVar9[2] = local_a4._4_4_;
                puVar9[3] = (int **)local_9c;
                puVar9[4] = local_9c._4_4_;
                puVar9[5] = local_94;
                puVar9[6] = local_90;
                puVar9[7] = local_8c;
                local_a8 = ppiVar20;
                local_a4._0_4_ = (undefined4 *)iVar12;
                local_a4._4_4_ = ppiVar20;
                local_94 = (int **)puVar9;
                local_90 = iVar19;
                local_8c = iVar8;
                local_9c = uVar22;
                piVar17 = (int *)thunk_FUN_016d4a50(0x20);
                if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x20);
                }
                *piVar17 = (int)local_a8;
                piVar17[1] = (int)(undefined4 *)local_a4;
                piVar17[2] = (int)local_a4._4_4_;
                *(undefined8 *)(piVar17 + 3) = local_9c;
                piVar17[5] = (int)local_94;
                piVar17[6] = local_90;
                piVar17[7] = local_8c;
                param_1[1] = piVar17;
                param_1[2] = &DAT_0188a8e8;
                *param_1 = 1;
                return;
              }
              goto LAB_0119841c;
            }
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_e0 = local_e0 + 4;
        uVar10 = uVar10 + local_e0;
      }
    }
    switch(ppiVar20) {
    case (int **)0x3:
      iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_0038cc82,3);
      if (iVar16 == 0) {
        if (1 < bVar2) {
          FUN_0122b6c4(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      else {
        iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_003cd59d,3);
        if (iVar16 == 0) {
          FUN_0122c150(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      break;
    case (int **)0x4:
      if (*piVar17 == 0x65746164) {
        FUN_0122cb70(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      if (*piVar17 == 0x34767069) {
        FUN_0122d708(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      if (*piVar17 == 0x36767069) {
        FUN_0122e164(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      if (*piVar17 == 0x656d6974) {
        FUN_0122eb90(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      if ((*piVar17 == 0x64697575) && (2 < bVar2)) {
        FUN_0122fa10(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      break;
    case (int **)0x5:
      iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_0038cc85,5);
      if (iVar16 == 0) {
        FUN_01230474(param_1 + 1,param_2);
        *param_1 = 1;
        return;
      }
      iVar16 = thunk_FUN_016dd50a(piVar17,"regex",5);
      if (iVar16 == 0) {
        FUN_012310c4(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      break;
    case (int **)0x8:
      iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_00569fe8,8);
      if (iVar16 == 0) {
        if (2 < bVar2) {
          FUN_012325b0(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      else {
        iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_0056a5c0,8);
        if (iVar16 == 0) {
          if (bVar2 < 2) {
            FUN_0123536c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c)
                        );
            *param_1 = 1;
            return;
          }
          FUN_012331e0(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      break;
    case (int **)0x9:
      iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_00414388,9);
      if (iVar16 == 0) {
        FUN_01231ac8(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
      iVar16 = thunk_FUN_016dd50a(piVar17,"idn-email",9);
      if (iVar16 == 0) {
        FUN_01233bb8(param_1 + 1,param_2);
        *param_1 = 1;
        return;
      }
      break;
    case (int **)0xc:
      iVar16 = thunk_FUN_016dd50a(piVar17,"idn-hostname",0xc);
      if (iVar16 == 0) {
        if (1 < bVar2) {
          FUN_012347a8(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      else {
        iVar16 = thunk_FUN_016dd50a(piVar17,"json-pointer",0xc);
        if (iVar16 == 0) {
          if (bVar2 != 0) {
            FUN_012349b0(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c)
                        );
            *param_1 = 1;
            return;
          }
        }
        else {
          iVar16 = thunk_FUN_016dd50a(piVar17,"uri-template",0xc);
          if ((bVar2 != 0) && (iVar16 == 0)) {
            FUN_01234bc0(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c)
                        );
            *param_1 = 1;
            return;
          }
        }
      }
      break;
    case (int **)0xd:
      iVar16 = thunk_FUN_016dd50a(piVar17,"iri-reference",0xd);
      if (iVar16 == 0) {
        if (1 < bVar2) {
          FUN_01234f4c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      else {
        iVar16 = thunk_FUN_016dd50a(piVar17,0x38cc60,0xd);
        if ((iVar16 == 0) && (bVar2 != 0)) {
          FUN_0123515c(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
          *param_1 = 1;
          return;
        }
      }
      break;
    case (int **)0x15:
      iVar16 = thunk_FUN_016dd50a(piVar17,&DAT_003a8be0,0x15);
      if ((iVar16 == 0) && (1 < bVar2)) {
        FUN_01235568(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
        *param_1 = 1;
        return;
      }
    }
    uVar15 = 0;
    if (*(char *)(iVar12 + 0x1d5) != '\0') {
LAB_01198328:
      *param_1 = uVar15;
      return;
    }
    local_c0 = piVar17;
    local_bc = ppiVar20;
    uVar22 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_003e8611,6);
    piVar17 = (int *)uVar22;
    do {
      iVar12 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar12 + 1;
    if (-1 < iVar12) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar12 = *DAT_018da8b4;
        bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar3);
      *DAT_018da8b4 = iVar12 + 1;
      if (-1 < iVar12) {
        uVar21 = DAT_018da8b8;
        piVar17 = DAT_018da8b4;
        local_a4._0_4_ = &DAT_0157d360;
        local_a8 = &local_c0;
        FUN_00600d2c(&local_b8,&DAT_00577810,&local_a8);
        uVar15 = 1;
        local_78 = local_b8;
        uStack_74 = uStack_b4;
        uStack_70 = uStack_b0;
        local_50 = 6;
        local_88 = (undefined1 *)0x80000012;
        local_a8 = (int **)0x1;
        local_7c = 0;
        local_80 = 1;
        local_84 = 0;
        local_38 = piVar17;
        local_34 = uVar21;
        local_a4 = uVar22;
        local_30 = uVar22;
        iVar12 = thunk_FUN_016d4a50(0x80);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar12,&local_a8,0x80);
        param_1[1] = 0;
        param_1[2] = iVar12;
        goto LAB_01198328;
      }
    }
  }
  else {
    local_30 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            &DAT_003e8611,6);
    piVar17 = (int *)local_30;
    do {
      iVar12 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar12 + 1;
    if (-1 < iVar12) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar12 = *DAT_018da8b4;
        bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar3);
      *DAT_018da8b4 = iVar12 + 1;
      if (-1 < iVar12) {
        local_38 = DAT_018da8b4;
        local_34 = DAT_018da8b8;
        local_50 = 6;
        local_84 = CONCAT22(local_84._2_2_,0x4000);
        local_88 = &DAT_80000028;
        local_a8 = (int **)0x1;
        local_a4 = local_30;
        iVar12 = thunk_FUN_016d4a50(0x80);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar12,&local_a8,0x80);
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = iVar12;
        return;
      }
    }
  }
LAB_0119841c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x119841c);
  (*pcVar1)();
}

