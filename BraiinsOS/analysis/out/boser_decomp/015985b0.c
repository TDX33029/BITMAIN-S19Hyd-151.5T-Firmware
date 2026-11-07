// FUN_015985b0 @ 015985b0 size=1788 calls_out=13 calls_in=3
// strings: ASCII label already validated

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_015985b0(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  byte **ppbVar13;
  undefined4 uVar14;
  uint uVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  char cVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  char *pcVar22;
  uint uVar23;
  byte *pbVar24;
  byte **ppbVar25;
  byte *pbVar26;
  byte *pbVar27;
  bool bVar28;
  byte *local_234;
  byte **local_218;
  int local_210;
  byte *local_20c;
  byte **local_208;
  byte *local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar6 = FUN_01599834();
  if (iVar6 == 0) {
    return 0;
  }
LAB_015985f0:
  if (param_2 != 0) {
    uVar15 = 0;
    do {
      cVar1 = param_1[uVar15];
      if (cVar1 == '.') {
        pcVar22 = param_1 + uVar15 + 1;
        param_2 = param_2 - (uVar15 + 1);
        goto LAB_01598630;
      }
      uVar15 = uVar15 + 1;
    } while (param_2 != uVar15);
    uVar15 = param_2;
    pcVar22 = param_1;
LAB_01598630:
    if (3 < uVar15) {
      if (param_1[2] == '-') {
        cVar18 = *param_1;
        if (param_1[3] == '-') {
          cVar2 = '-';
          if (cVar18 == 'x') {
            cVar2 = param_1[1];
          }
          if (cVar18 != 'x' || cVar2 != 'n') {
            return 0;
          }
          goto LAB_015986ac;
        }
      }
      else {
        cVar18 = *param_1;
      }
      if (((cVar18 == 'x') && (param_1[1] == 'n' && param_1[2] == '-')) && (param_1[3] == '-')) {
LAB_015986ac:
        FUN_012fbd94(&local_210,param_1 + 4,uVar15 - 4);
        pbVar24 = local_20c;
        if (local_210 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("ASCII label already validated",0x1d,&local_30,&DAT_01cfc5d0,&DAT_01cfc490);
        }
        local_34 = (byte *)0x0;
        local_210 = 0;
        ppbVar25 = local_208;
        do {
          ppbVar17 = ppbVar25;
          ppbVar16 = (byte **)0x0;
          if (ppbVar17 == (byte **)0x0) goto LAB_0159872c;
          ppbVar25 = (byte **)((int)ppbVar17 + -1);
        } while ((local_20c + -1)[(int)ppbVar17] != 0x2d);
        if (ppbVar25 == (byte **)0x0) {
LAB_0159872c:
          ppbVar25 = (byte **)0x0;
          ppbVar13 = local_208;
          pbVar27 = local_20c;
        }
        else {
          if (local_208 < ppbVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(ppbVar17,local_208,local_208,&DAT_01cf92dc);
          }
          ppbVar13 = (byte **)((int)local_208 - (int)ppbVar17);
          pbVar27 = local_20c + (int)ppbVar17;
        }
        pbVar26 = local_20c + (int)ppbVar25;
        while (ppbVar25 != ppbVar16) {
          pbVar7 = local_20c + (int)ppbVar16;
          ppbVar16 = (byte **)((int)ppbVar16 + 1);
          if (0x7fffffff < (uint)(int)(char)*pbVar7) goto LAB_01598c24;
        }
        ppbVar16 = &local_20c;
        if (ppbVar13 == (byte **)0x0) {
          pbVar27 = (byte *)0x0;
        }
        else {
          pbVar7 = pbVar27 + (int)ppbVar13;
          pbVar20 = (byte *)0x0;
          uVar15 = 0x48;
          local_234 = (byte *)0x80;
          local_218 = ppbVar25;
          do {
            uVar23 = 0x24;
            uVar19 = 1;
            pbVar21 = pbVar20;
            pbVar11 = pbVar27;
            while( true ) {
              pbVar27 = pbVar11 + 1;
              bVar3 = *pbVar11;
              if ((byte)(bVar3 - 0x30) < 10) {
                bVar12 = bVar3 - 0x16;
              }
              else {
                bVar12 = bVar3 + 0xbf;
                if ((0x19 < (byte)(bVar3 + 0xbf)) &&
                   (bVar12 = bVar3 + 0x9f, 0x19 < (byte)(bVar3 + 0x9f))) goto LAB_01598c24;
              }
              lVar5 = (ulonglong)uVar19 * (ulonglong)(uint)bVar12;
              uVar8 = (uint)lVar5;
              if (((int)((ulonglong)lVar5 >> 0x20) != 0) ||
                 (bVar28 = CARRY4(uVar8,(uint)pbVar21), pbVar21 = pbVar21 + uVar8, bVar28))
              goto LAB_01598c24;
              uVar8 = 0x1a;
              if (uVar23 < uVar15 + 0x1a) {
                uVar8 = uVar23 - uVar15;
              }
              if (uVar23 <= uVar15) {
                uVar8 = 1;
              }
              if (bVar12 < uVar8) break;
              lVar5 = (ulonglong)(0x24 - uVar8) * (ulonglong)uVar19;
              uVar19 = (uint)lVar5;
              if (((int)((ulonglong)lVar5 >> 0x20) != 0) ||
                 (uVar23 = uVar23 + 0x24, pbVar11 = pbVar27, pbVar27 == pbVar7)) goto LAB_01598c24;
            }
            bVar28 = (byte **)0xfffffffe < local_218;
            local_218 = (byte **)((int)local_218 + 1);
            if (bVar28) {
                    /* WARNING: Subroutine does not return */
              FUN_012ffdf4(&DAT_01cf92cc);
            }
            uVar14 = 2;
            if (pbVar20 == (byte *)0x0) {
              uVar14 = 700;
            }
            iVar6 = FUN_01bf1250((int)pbVar21 - (int)pbVar20,uVar14);
            iVar9 = FUN_01bf1250(iVar6,local_218);
            uVar15 = iVar9 + iVar6;
            iVar6 = 0;
            if (uVar15 < 0x1c8) {
              uVar19 = uVar15;
            }
            else {
              do {
                iVar6 = iVar6 + 0x24;
                uVar19 = uVar15 / 0x23;
                bVar28 = 0x3e57 < uVar15;
                uVar15 = uVar19;
              } while (bVar28);
            }
            iVar9 = FUN_01bf1250(uVar19 * 0x24 & 0xffff,uVar19 + 0x26 & 0xffff);
            uVar15 = FUN_01bf1250(pbVar21,local_218);
            bVar28 = CARRY4(uVar15,(uint)local_234);
            local_234 = local_234 + uVar15;
            if ((bVar28) || (((uint)local_234 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_01598c24:
              if (local_34 < (byte *)0x3c) {
                return 0;
              }
              FUN_01af7af8(local_34,local_208,4,8);
              return 0;
            }
            pbVar21 = pbVar21 + -(uVar15 * (int)local_218);
            ppbVar17 = &local_20c;
            pbVar20 = local_34;
            if ((byte *)0x3b < local_34) {
              ppbVar17 = local_208;
              pbVar20 = local_20c;
            }
            if (pbVar20 != (byte *)0x0) {
              iVar10 = (int)pbVar20 << 3;
              do {
                if (pbVar21 <= *ppbVar17) {
                  *ppbVar17 = *ppbVar17 + 1;
                }
                iVar10 = iVar10 + -8;
                ppbVar17 = ppbVar17 + 2;
              } while (iVar10 != 0);
            }
            if (local_34 < &DAT_0000003c) {
              pbVar20 = (byte *)0x3b;
              ppbVar17 = &local_20c;
              ppbVar13 = &local_34;
              pbVar11 = local_34;
            }
            else {
              pbVar20 = local_34;
              ppbVar17 = local_208;
              ppbVar13 = &local_20c;
              pbVar11 = local_20c;
            }
            if (pbVar11 == pbVar20) {
              FUN_0144f06c(&local_210);
              ppbVar17 = local_208;
              ppbVar13 = &local_20c;
              pbVar11 = local_20c;
            }
            ppbVar17[(int)pbVar11 * 2] = pbVar21;
            uVar15 = iVar6 + iVar9;
            (ppbVar17 + (int)pbVar11 * 2)[1] = local_234;
            *ppbVar13 = *ppbVar13 + 1;
            pbVar20 = pbVar21 + 1;
          } while (pbVar27 != pbVar7);
          pbVar27 = local_34;
          if ((byte *)0x3b < local_34) {
            ppbVar16 = local_208;
            pbVar27 = local_20c;
          }
        }
        if (&DAT_00000001 < pbVar27) {
          if (&DAT_00000014 < pbVar27) {
            FUN_01452820(ppbVar16);
          }
          else {
            FUN_01451640();
          }
        }
        pbVar27 = local_34;
        local_218 = &local_20c;
        if ((byte *)0x3b < local_34) {
          local_218 = local_208;
          pbVar27 = local_20c;
        }
        local_2c = 1;
        local_28 = 0;
        local_30 = 0;
        if (pbVar27 + (int)ppbVar25 != (byte *)0x0) {
          FUN_01af7b44(&local_30,0,pbVar27 + (int)ppbVar25,1,1);
        }
        pbVar20 = (byte *)0x0;
        pbVar7 = (byte *)0x0;
        do {
          iVar10 = local_28;
          iVar9 = local_2c;
          iVar6 = local_30;
          if (pbVar20 < pbVar27) {
            do {
              if (local_218[(int)pbVar20 * 2] == pbVar7) {
                pbVar21 = (local_218 + (int)pbVar20 * 2)[1];
                pbVar20 = pbVar20 + 1;
                goto LAB_01598a74;
              }
            } while (pbVar24 == pbVar26);
          }
          else if (pbVar24 == pbVar26) goto LAB_01598b64;
          pbVar21 = (byte *)(uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
LAB_01598a74:
          uVar15 = 1;
          if ((byte *)0x7f < pbVar21) {
            uVar15 = 2;
          }
          if (((byte *)0x7ff < pbVar21) && (uVar15 = 4, pbVar21 < (byte *)0x10000)) {
            uVar15 = 3;
          }
          if ((uint)(local_30 - local_28) < uVar15) {
            FUN_01af7b44(&local_30,local_28,uVar15,1,1);
          }
          pbVar11 = (byte *)(local_2c + local_28);
          if (pbVar21 < (byte *)0x80) {
            *pbVar11 = (byte)pbVar21;
          }
          else {
            bVar3 = (byte)pbVar21 & 0x3f | 0x80;
            bVar12 = (byte)((uint)pbVar21 >> 6);
            if (pbVar21 < (byte *)0x800) {
              bVar12 = bVar12 | 0xc0;
              pbVar11[1] = bVar3;
            }
            else {
              bVar4 = bVar12 & 0x3f | 0x80;
              bVar12 = (byte)((uint)pbVar21 >> 0xc);
              if ((uint)pbVar21 >> 0x10 != 0) {
                pbVar11[3] = bVar3;
                pbVar11[2] = bVar4;
                pbVar11[1] = bVar12 & 0x3f | 0x80;
                *pbVar11 = (byte)((uint)pbVar21 >> 0x12) | 0xf0;
                goto LAB_01598b2c;
              }
              pbVar11[1] = bVar4;
              bVar12 = bVar12 | 0xe0;
              pbVar11[2] = bVar3;
            }
            *pbVar11 = bVar12;
          }
LAB_01598b2c:
          local_28 = uVar15 + iVar10;
          pbVar7 = pbVar7 + 1;
        } while( true );
      }
    }
    param_1 = pcVar22;
    if (cVar1 == '.') goto LAB_015985f0;
  }
  return 1;
LAB_01598b64:
  if ((byte *)0x3b < local_34) {
    FUN_01af7af8(local_34,local_208,4,8);
  }
  if (iVar6 == -0x80000000) {
    return 0;
  }
  uVar15 = FUN_01598d24(iVar9,iVar10);
  FUN_019bb7e0(iVar6,iVar9);
  param_1 = pcVar22;
  if ((cVar1 == '.' & uVar15) == 0) {
    return uVar15;
  }
  goto LAB_015985f0;
}

