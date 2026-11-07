// FUN_0179ddec @ 0179ddec size=3376 calls_out=11 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0179ddec(undefined4 *param_1,undefined2 *param_2,uint param_3,uint *param_4,uint param_5,
                 uint param_6)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined2 *puVar24;
  int iVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  uint local_88;
  int local_7c;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_58;
  undefined2 *local_54;
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c [2];
  
  uVar17 = param_1[0x30];
  local_2c[0] = DAT_018ddaf8;
  uVar9 = param_1[0x94];
  if (param_1[0x38] == 0) {
    if (param_5 != 0) goto LAB_0179de64;
  }
  else if (param_5 != 0) {
    uVar14 = param_1[0x9c];
    param_1[0x9c] = uVar14 + param_5;
    iVar15 = param_1[0xae];
    param_1[0x9d] = param_1[0x9d] + (uint)CARRY4(uVar14,param_5);
    puVar6 = (uint *)((int)param_4 + param_5);
    if (param_5 + iVar15 < 0x20) {
      puVar6 = (uint *)((int)param_1 + iVar15 + 0x298);
      if (puVar6 < param_4) {
        if (param_4 < (uint *)((int)puVar6 + param_5)) goto LAB_0179eac4;
      }
      else if (puVar6 < (uint *)((int)param_4 + param_5) && param_4 < puVar6) {
LAB_0179eac4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x179eac4);
        (*pcVar1)();
      }
      FUN_016dd1aa(puVar6,param_4,param_5);
      iVar15 = param_5 + param_1[0xae];
    }
    else {
      puVar7 = param_4;
      if (iVar15 != 0) {
        puVar7 = (uint *)((int)param_1 + iVar15 + 0x298);
        if (puVar7 < param_4) {
          if (param_4 < param_1 + 0xae) goto LAB_0179eac4;
        }
        else if ((param_4 < puVar7) && (puVar7 < (uint *)((int)param_4 + (0x20 - iVar15))))
        goto LAB_0179eac4;
        FUN_016dd1aa(puVar7,param_4);
        lVar2 = (ulonglong)(uint)param_1[0xa6] * 0x27d4eb4f;
        uVar14 = (uint)lVar2;
        uVar26 = uVar14 + param_1[0x9e];
        uVar22 = param_1[0xa7] * 0x27d4eb4f + param_1[0xa6] * -0x3d4d51c3 +
                 (int)((ulonglong)lVar2 >> 0x20) + param_1[0x9f] +
                 (uint)CARRY4(uVar14,param_1[0x9e]);
        lVar2 = (ulonglong)(uint)param_1[0xa8] * 0x27d4eb4f;
        uVar14 = (uint)lVar2;
        uVar32 = uVar14 + param_1[0xa0];
        uVar28 = param_1[0xa9] * 0x27d4eb4f + param_1[0xa8] * -0x3d4d51c3 +
                 (int)((ulonglong)lVar2 >> 0x20) + param_1[0xa1] +
                 (uint)CARRY4(uVar14,param_1[0xa0]);
        lVar2 = (ulonglong)(uint)param_1[0xaa] * 0x27d4eb4f;
        uVar14 = (uint)lVar2;
        lVar3 = (ulonglong)(uint)param_1[0xac] * 0x27d4eb4f;
        uVar19 = (uint)lVar3;
        uVar18 = uVar14 + param_1[0xa2];
        uVar14 = param_1[0xab] * 0x27d4eb4f + param_1[0xaa] * -0x3d4d51c3 +
                 (int)((ulonglong)lVar2 >> 0x20) + param_1[0xa3] +
                 (uint)CARRY4(uVar14,param_1[0xa2]);
        uVar4 = uVar19 + param_1[0xa4];
        uVar12 = param_1[0xad] * 0x27d4eb4f + param_1[0xac] * -0x3d4d51c3 +
                 (int)((ulonglong)lVar3 >> 0x20) + param_1[0xa5] +
                 (uint)CARRY4(uVar19,param_1[0xa4]);
        uVar23 = uVar26 * -0x80000000 + (uVar22 >> 1);
        uVar16 = uVar32 * -0x80000000 + (uVar28 >> 1);
        uVar33 = uVar18 * -0x80000000 + (uVar14 >> 1);
        uVar19 = uVar4 * -0x80000000 + (uVar12 >> 1);
        iVar15 = param_1[0xae];
        lVar2 = (ulonglong)uVar23 * 0x85ebca87;
        param_1[0x9e] = (int)lVar2;
        param_1[0x9f] =
             (uVar22 * -0x80000000 + (uVar26 >> 1)) * -0x7a143579 + uVar23 * -0x61c8864f +
             (int)((ulonglong)lVar2 >> 0x20);
        lVar2 = (ulonglong)uVar16 * 0x85ebca87;
        param_1[0xa0] = (int)lVar2;
        lVar3 = (ulonglong)uVar33 * 0x85ebca87;
        param_1[0xa1] =
             (uVar28 * -0x80000000 + (uVar32 >> 1)) * -0x7a143579 + uVar16 * -0x61c8864f +
             (int)((ulonglong)lVar2 >> 0x20);
        param_1[0xa2] = (int)lVar3;
        param_1[0xa3] =
             (uVar14 * -0x80000000 + (uVar18 >> 1)) * -0x7a143579 + uVar33 * -0x61c8864f +
             (int)((ulonglong)lVar3 >> 0x20);
        lVar2 = (ulonglong)uVar19 * 0x85ebca87;
        param_1[0xa4] = (int)lVar2;
        param_1[0xa5] =
             (uVar12 * -0x80000000 + (uVar4 >> 1)) * -0x7a143579 + uVar19 * -0x61c8864f +
             (int)((ulonglong)lVar2 >> 0x20);
        param_1[0xae] = 0;
        puVar7 = (uint *)((int)param_4 + (0x20 - iVar15));
      }
      if (puVar7 + 8 <= (uint *)((int)param_4 + param_5)) {
        local_54 = (undefined2 *)param_1[0x9e];
        local_58 = param_1[0xa0];
        puVar29 = (uint *)((int)param_4 + param_5) + -8;
        local_64 = param_1[0xa2];
        local_68 = param_1[0xa4];
        local_6c = param_1[0xa5];
        iVar21 = param_1[0x9f];
        iVar25 = param_1[0xa1];
        iVar15 = param_1[0xa3];
        puVar30 = puVar7;
        do {
          puVar31 = puVar30 + 8;
          lVar2 = (ulonglong)*puVar30 * 0x27d4eb4f;
          uVar14 = (uint)lVar2;
          uVar19 = uVar14 + (int)local_54;
          uVar14 = puVar30[1] * 0x27d4eb4f + *puVar30 * -0x3d4d51c3 +
                   (int)((ulonglong)lVar2 >> 0x20) + iVar21 + (uint)CARRY4(uVar14,(uint)local_54);
          uVar22 = uVar19 * -0x80000000 + (uVar14 >> 1);
          lVar2 = (ulonglong)uVar22 * 0x85ebca87;
          local_54 = (undefined2 *)lVar2;
          param_1[0x9e] = local_54;
          iVar21 = (uVar14 * -0x80000000 + (uVar19 >> 1)) * -0x7a143579 + uVar22 * -0x61c8864f +
                   (int)((ulonglong)lVar2 >> 0x20);
          param_1[0x9f] = iVar21;
          lVar2 = (ulonglong)puVar30[2] * 0x27d4eb4f;
          uVar14 = (uint)lVar2;
          uVar19 = uVar14 + local_58;
          uVar14 = puVar30[3] * 0x27d4eb4f + puVar30[2] * -0x3d4d51c3 +
                   (int)((ulonglong)lVar2 >> 0x20) + iVar25 + (uint)CARRY4(uVar14,local_58);
          uVar22 = uVar19 * -0x80000000 + (uVar14 >> 1);
          lVar2 = (ulonglong)uVar22 * 0x85ebca87;
          local_58 = (uint)lVar2;
          param_1[0xa0] = local_58;
          iVar25 = (uVar14 * -0x80000000 + (uVar19 >> 1)) * -0x7a143579 + uVar22 * -0x61c8864f +
                   (int)((ulonglong)lVar2 >> 0x20);
          param_1[0xa1] = iVar25;
          lVar2 = (ulonglong)puVar30[4] * 0x27d4eb4f;
          uVar14 = (uint)lVar2;
          uVar22 = uVar14 + local_64;
          uVar19 = puVar30[5] * 0x27d4eb4f + puVar30[4] * -0x3d4d51c3 +
                   (int)((ulonglong)lVar2 >> 0x20) + iVar15 + (uint)CARRY4(uVar14,local_64);
          uVar14 = uVar22 * -0x80000000 + (uVar19 >> 1);
          lVar2 = (ulonglong)uVar14 * 0x85ebca87;
          local_64 = (uint)lVar2;
          param_1[0xa2] = local_64;
          iVar15 = (uVar19 * -0x80000000 + (uVar22 >> 1)) * -0x7a143579 + uVar14 * -0x61c8864f +
                   (int)((ulonglong)lVar2 >> 0x20);
          param_1[0xa3] = iVar15;
          lVar2 = (ulonglong)puVar30[6] * 0x27d4eb4f;
          uVar14 = (uint)lVar2;
          uVar22 = uVar14 + local_68;
          uVar14 = puVar30[7] * 0x27d4eb4f + puVar30[6] * -0x3d4d51c3 +
                   (int)((ulonglong)lVar2 >> 0x20) + local_6c + (uint)CARRY4(uVar14,local_68);
          uVar19 = uVar22 * -0x80000000 + (uVar14 >> 1);
          lVar2 = (ulonglong)uVar19 * 0x85ebca87;
          local_68 = (uint)lVar2;
          local_6c = (uVar14 * -0x80000000 + (uVar22 >> 1)) * -0x7a143579 + uVar19 * -0x61c8864f +
                     (int)((ulonglong)lVar2 >> 0x20);
          param_1[0xa4] = local_68;
          param_1[0xa5] = local_6c;
          puVar30 = puVar31;
        } while (puVar31 <= puVar29);
        puVar7 = (uint *)((int)(puVar7 + 8) + ((int)puVar29 - (int)puVar7 & 0xffffffe0U));
      }
      if (puVar6 <= puVar7) goto LAB_0179de64;
      puVar30 = param_1 + 0xa6;
      iVar15 = (int)puVar6 - (int)puVar7;
      if (puVar30 < puVar7) {
        if (puVar7 < (uint *)((int)puVar30 + iVar15)) goto LAB_0179eac4;
      }
      else if (puVar30 < puVar6 && puVar7 < puVar30) goto LAB_0179eac4;
      FUN_016dd1aa(puVar30,puVar7,iVar15);
    }
    param_1[0xae] = iVar15;
LAB_0179de64:
    uVar17 = 1 << (uVar17 & 0xff);
    local_54 = param_2;
LAB_0179df5c:
    if (param_3 < 6) goto LAB_0179e15c;
    if (uVar9 < param_5) {
      uVar14 = 0;
    }
    else {
      uVar14 = param_6 & 1;
      uVar9 = param_5;
    }
    puVar6 = (uint *)((int)param_4 + uVar9);
    FUN_01797c1c(param_1 + 0x21a,param_1 + 0x89,param_1 + 0x2f,param_4,puVar6);
    uVar19 = uVar17 + param_1[0x220];
    if ((uVar19 < (uint)((int)puVar6 - param_1[0x21b])) || (param_1[0x220] != param_1[0x21d])) {
      param_1[0x220] = 0;
      param_1[0x247] = 0;
      uVar19 = uVar17;
    }
    uVar22 = (int)param_4 - param_1[0x21b];
    if (param_1 == (undefined4 *)0xfffff780) {
      uVar19 = uVar17;
    }
    uVar4 = param_1[0x21e];
    if (uVar19 < uVar22) {
      uVar22 = uVar22 - uVar17;
      if (uVar4 < uVar22) {
        param_1[0x21e] = uVar22;
        uVar4 = uVar22;
      }
      if ((uint)param_1[0x21d] < uVar4) {
        param_1[0x21d] = uVar4;
      }
      if (param_1 != (undefined4 *)0xfffff780) {
        param_1[0x220] = 0;
      }
      if (param_1 != (undefined4 *)0xfffff6e4) {
        param_1[0x247] = 0;
      }
    }
    uVar19 = param_1[0x3c];
    if ((uint)param_1[0x221] < uVar4) {
      param_1[0x221] = uVar4;
    }
    if (uVar19 == 0) {
      if (param_1[0x4f] == 1) {
        uVar22 = FUN_0179962c(param_1,param_4,uVar9);
        if (0xffffff88 < uVar22) goto LAB_0179e068;
        if (uVar22 != 1) {
          puVar20 = param_1 + 0x2a4;
          puVar5 = param_1 + 0x299;
          local_4c = puVar20;
          local_48 = uVar19;
          if ((uint)(param_1[0xbe] - param_1[0xbd]) < 0x21) {
            iVar15 = param_1[0x218];
            local_44 = *(undefined4 *)(iVar15 + 0x11e8);
            uStack_40 = *(undefined4 *)(iVar15 + 0x11ec);
            uStack_3c = *(undefined4 *)(iVar15 + 0x11f0);
            local_38 = local_44;
            uStack_34 = uStack_40;
            uStack_30 = uStack_3c;
            FUN_016dd606(puVar5,0,0x2c,local_2c);
          }
          else {
            iVar15 = (int)(param_1[0xbe] - param_1[0xbd]) >> 3;
            puVar10 = param_1 + 0x28e;
            puVar11 = param_1 + 0xbd;
            FUN_0179dc7c(&local_4c,0,iVar15,param_1,puVar11);
            uVar19 = local_48;
            iVar21 = param_1[0x218];
            local_4c[local_48] = iVar15;
            local_44 = *(undefined4 *)(iVar21 + 0x11e8);
            uStack_40 = *(undefined4 *)(iVar21 + 0x11ec);
            uStack_3c = *(undefined4 *)(iVar21 + 0x11f0);
            local_38 = local_44;
            uStack_34 = uStack_40;
            uStack_30 = uStack_3c;
            FUN_016dd606(puVar5,0,0x2c,local_2c);
            if (uVar19 != 0) {
              FUN_01797a74(puVar10,puVar11,0,param_1[0x2a4]);
              uVar4 = 0;
              local_7c = 0;
              puVar24 = local_54;
              local_88 = 0;
              local_68 = param_3;
              do {
                iVar21 = param_1[0x28e];
                iVar25 = param_1[0x28f] - iVar21;
                uVar22 = iVar25 >> 3;
                iVar15 = 0;
                if (iVar25 != 0) {
                  iVar15 = 0;
                  uVar12 = 0;
                  iVar25 = iVar21;
                  do {
                    iVar15 = iVar15 + (uint)*(ushort *)(iVar25 + 4);
                    if ((uVar12 == param_1[0x298]) && (param_1[0x297] == 1)) {
                      iVar15 = iVar15 + 0x10000;
                    }
                    uVar12 = uVar12 + 1;
                    iVar25 = iVar25 + 8;
                  } while (uVar12 < uVar22);
                }
                if (param_1[0x28f] != iVar21) {
                  puVar27 = (undefined1 *)0x0;
                  uVar12 = 0;
                  do {
                    puVar13 = puVar27 + *(ushort *)(iVar21 + 6);
                    puVar27 = puVar13 + 3;
                    if ((param_1[0x298] == uVar12) && (param_1[0x297] == 2)) {
                      puVar27 = &DAT_00010003 + (int)puVar13;
                    }
                    uVar12 = uVar12 + 1;
                    iVar21 = iVar21 + 8;
                  } while (uVar12 < uVar22);
                  iVar15 = iVar15 + (int)puVar27;
                }
                if (uVar4 == uVar19) {
                  iVar21 = uVar9 - local_7c;
                  uVar22 = uVar14;
                }
                else {
                  FUN_01797a74(puVar5,puVar11,*puVar20,puVar20[1]);
                  uVar22 = 0;
                  iVar21 = iVar15;
                }
                uVar22 = FUN_0179c614(param_1,puVar10,&local_44,&local_38,puVar24,local_68,param_4,
                                      iVar21,uVar22,1);
                if (0xffffff88 < uVar22) goto LAB_0179e068;
                uVar4 = uVar4 + 1;
                puVar24 = (undefined2 *)((int)puVar24 + uVar22);
                local_68 = local_68 - uVar22;
                param_4 = (uint *)((int)param_4 + iVar21);
                puVar20 = puVar20 + 1;
                uVar22 = local_88 + uVar22;
                local_7c = local_7c + iVar15;
                *puVar10 = *puVar5;
                param_1[0x28f] = param_1[0x29a];
                param_1[0x290] = param_1[0x29b];
                param_1[0x291] = param_1[0x29c];
                param_1[0x292] = param_1[0x29d];
                param_1[0x293] = param_1[0x29e];
                param_1[0x294] = param_1[0x29f];
                param_1[0x295] = param_1[0x2a0];
                param_1[0x296] = param_1[0x2a1];
                param_1[0x297] = param_1[0x2a2];
                param_1[0x298] = param_1[0x2a3];
                local_88 = uVar22;
              } while (uVar4 <= uVar19);
              iVar15 = param_1[0x218];
              *(undefined4 *)(iVar15 + 0x11e8) = local_44;
              *(undefined4 *)(iVar15 + 0x11ec) = uStack_40;
              *(undefined4 *)(iVar15 + 0x11f0) = uStack_3c;
              goto LAB_0179df30;
            }
          }
          local_94 = &local_44;
          local_98 = &local_38;
          local_9c = param_1 + 0xbd;
          uVar22 = FUN_0179c614(param_1,local_9c,local_94,local_98,local_54,param_3,param_4,uVar9,
                                uVar14,0);
          goto LAB_0179df30;
        }
        if (*(int *)(param_1[0x218] + 0x11dc) == 2) {
          *(undefined4 *)(param_1[0x218] + 0x11dc) = 1;
        }
        if (param_1[0xb7] != 0) {
          uVar22 = 0xffffff96;
          goto LAB_0179e068;
        }
        uVar22 = uVar9 + 3;
        if (param_3 < uVar22) goto LAB_0179e15c;
        iVar15 = uVar14 + uVar9 * 8;
        *local_54 = (short)iVar15;
        *(char *)(local_54 + 1) = (char)((uint)iVar15 >> 0x10);
        FUN_016dd1aa((int)local_54 + 3,param_4,uVar9);
        if (0xffffff87 < uVar22 && uVar9 != 0xffffff85) goto LAB_0179e068;
      }
      else {
        uVar22 = FUN_0179ce18(param_1,(int)local_54 + 3,param_3 - 3,param_4,uVar9,1);
        if (0xffffff88 < uVar22) goto LAB_0179e068;
        if (uVar22 == 0) {
          uVar22 = uVar9 + 3;
          if (param_3 < uVar22) goto LAB_0179e15c;
          iVar15 = uVar14 + uVar9 * 8;
          *local_54 = (short)iVar15;
          *(char *)(local_54 + 1) = (char)((uint)iVar15 >> 0x10);
          FUN_016dd1aa((int)local_54 + 3,param_4,uVar9);
LAB_0179df30:
          if (0xffffff88 < uVar22) goto LAB_0179e068;
        }
        else {
          if (uVar22 == 1) {
            iVar15 = uVar14 + uVar9 * 8 + 2;
          }
          else {
            iVar15 = uVar14 + 4 + uVar22 * 8;
          }
          *local_54 = (short)iVar15;
          *(char *)(local_54 + 1) = (char)((uint)iVar15 >> 0x10);
          uVar22 = uVar22 + 3;
        }
      }
      goto LAB_0179df38;
    }
    uVar22 = FUN_0179962c(param_1,param_4,uVar9);
    if (0xffffff88 < uVar22) goto LAB_0179e068;
    if (uVar22 == 0) {
      if (param_1[0xbb] != 0) {
LAB_0179e19c:
        uVar22 = FUN_017a40a4(param_1,local_54,param_3,param_4,uVar9,uVar14);
        if (uVar22 != 0xffffffba) {
          if (uVar22 < 0xffffff89) {
            if (uVar22 != 0) {
              uVar19 = param_1[0x36];
              if (uVar19 < 7) {
                uVar19 = 7;
              }
              if (uVar22 < (uVar9 + 1) - (uVar9 >> (uVar19 - 1 & 0xff))) {
                uVar8 = param_1[0x218];
                iVar15 = param_1[0x219];
                param_1[0x218] = iVar15;
                param_1[0x219] = uVar8;
                goto LAB_0179e218;
              }
            }
            goto LAB_0179e1d8;
          }
          goto LAB_0179e068;
        }
        goto LAB_0179e1d8;
      }
      uVar19 = param_1[0xbe] - param_1[0xbd];
      bVar35 = 0x17 < uVar19;
      bVar34 = uVar19 == 0x18;
      if (uVar19 < 0x19) {
        bVar35 = 8 < (uint)(param_1[0xc0] - param_1[0xbf]);
        bVar34 = param_1[0xc0] - param_1[0xbf] == 9;
      }
      if ((bVar35 && !bVar34) || (iVar15 = FUN_017988f4(param_4,uVar9), iVar15 == 0))
      goto LAB_0179e19c;
      uVar22 = 4;
      iVar15 = uVar14 + uVar9 * 8 + 2;
      *(char *)((int)local_54 + 3) = (char)*param_4;
      *local_54 = (short)iVar15;
      *(char *)(local_54 + 1) = (char)((uint)iVar15 >> 0x10);
      iVar15 = param_1[0x218];
    }
    else {
LAB_0179e1d8:
      uVar22 = uVar9 + 3;
      if (param_3 < uVar22) goto LAB_0179e15c;
      iVar15 = uVar14 + uVar9 * 8;
      *local_54 = (short)iVar15;
      *(char *)(local_54 + 1) = (char)((uint)iVar15 >> 0x10);
      FUN_016dd1aa((int)local_54 + 3,param_4,uVar9);
      if (0xffffff87 < uVar22 && uVar9 != 0xffffff85) goto LAB_0179e068;
      iVar15 = param_1[0x218];
    }
LAB_0179e218:
    if (*(int *)(iVar15 + 0x11dc) == 2) {
      *(undefined4 *)(iVar15 + 0x11dc) = 1;
    }
LAB_0179df38:
    param_3 = param_3 - uVar22;
    param_5 = param_5 - uVar9;
    local_54 = (undefined2 *)((int)local_54 + uVar22);
    param_1[0xbb] = 0;
    if (param_5 == 0) {
      param_5 = (int)local_54 - (int)param_2;
      if (param_2 < local_54) {
        param_6 = param_6 & 1;
      }
      else {
        param_6 = 0;
      }
      if (param_6 != 0) {
        *param_1 = 3;
      }
      goto LAB_0179de54;
    }
    param_4 = puVar6;
    goto LAB_0179df5c;
  }
LAB_0179de54:
  uVar22 = param_5;
LAB_0179e068:
  if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar22;
LAB_0179e15c:
  uVar22 = 0xffffffba;
  goto LAB_0179e068;
}

