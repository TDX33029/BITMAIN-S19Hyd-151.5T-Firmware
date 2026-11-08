// FUN_01792afc @ 01792afc size=3156 calls_out=3 calls_in=1
// strings: 

byte * FUN_01792afc(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                   uint param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  ushort *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  uint local_40;
  uint local_34;
  int local_30;
  uint local_2c;
  
  local_30 = 0xff;
  local_2c = DAT_018ddaf8;
  puVar6 = param_1;
  iVar5 = param_2;
  if (param_7 < 0x200) goto LAB_01793038;
  uVar24 = FUN_01792310(param_6,&local_30,&local_34,param_3,param_4,0);
  pbVar4 = (byte *)uVar24;
  pbVar14 = pbVar4;
  if ((byte *)0xffffff88 < pbVar4) goto LAB_01792ff8;
  if (local_34 <= param_5) {
    uVar13 = (local_30 + 1) * 2;
    uVar22 = 1 << (local_34 & 0xff);
    uVar21 = (1 << (local_34 - 0x20 & 0xff) | 1U >> (0x20 - local_34 & 0xff)) +
             (uint)(0xfffffff4 < uVar22) + (uint)CARRY4(uVar13,uVar22 + 0xb);
    uVar8 = uVar13 + uVar22 + 0xb >> 2 | uVar21 * 0x40000000;
    uVar9 = uVar8 + uVar22 + 0x83;
    uVar13 = uVar9 * 4;
    iVar5 = ((((int)(uVar22 + 2) >> 0x1f) + (uint)(0xffffff7e < uVar22 + 2) + (uVar21 >> 2) +
             (uint)CARRY4(uVar8,uVar22 + 0x83)) * 2 + (uint)CARRY4(uVar9,uVar9)) * 2 +
            (uint)CARRY4(uVar9 * 2,uVar9 * 2);
    uVar24 = CONCAT44(uVar13,-(iVar5 + (uint)(uVar13 > param_7)));
    if ((uint)-iVar5 < (uint)(uVar13 <= param_7)) {
      puVar18 = (ushort *)(param_6 + 0x200);
      uVar24 = FUN_017927d8(puVar18,param_6,local_30,local_34,param_6 + (uVar22 + 0x81) * 4,
                            param_7 + (uVar22 + 0x81) * -4);
      iVar5 = (int)((ulonglong)uVar24 >> 0x20);
      pbVar14 = (byte *)uVar24;
      if ((byte *)0xffffff88 < pbVar14) {
        goto LAB_01792ff8;
      }
      puVar6 = (uint *)(pbVar4 + param_3);
      uVar24 = CONCAT44(iVar5,puVar6);
      puVar12 = (uint *)((int)param_1 + param_2 + -3);
      pbVar14 = (byte *)(param_4 - (int)pbVar4);
      puVar7 = puVar6;
      if (*(short *)(param_6 + 0x202) == 0) {
        if (pbVar14 == (byte *)0x0) goto LAB_01793608;
        uVar13 = (uint)((byte *)((int)puVar6 + (int)pbVar14))[-1];
        if (pbVar14 < (byte *)0x4) {
          uVar22 = (uint)(byte)*puVar6;
          if (pbVar14 == &SUB_00000002) {
LAB_01792ca4:
            uVar22 = uVar22 + (uint)*(byte *)((int)puVar6 + 1) * 0x100;
          }
          else if (pbVar14 == (byte *)0x3) {
            uVar22 = uVar22 + (uint)*(byte *)((int)puVar6 + 2) * 0x10000;
            goto LAB_01792ca4;
          }
          if (uVar13 == 0) goto LAB_01793674;
          iVar5 = LZCOUNT(uVar13) + (int)(pbVar4 + (4 - param_4)) * 8;
          puVar15 = puVar6;
        }
        else {
          if (uVar13 == 0) goto LAB_01793038;
          if ((byte *)0xffffff88 < pbVar14) goto LAB_01793058;
          iVar5 = LZCOUNT(uVar13);
          puVar15 = (uint *)((int)puVar6 + (int)(pbVar14 + -4));
          uVar22 = *(uint *)((int)puVar6 + (int)(pbVar14 + -4));
        }
        uVar21 = (uint)*puVar18;
        param_6 = param_6 + 0x204;
        puVar19 = puVar6 + 1;
        uVar8 = iVar5 + -0x17 + uVar21;
        uVar13 = *(uint *)(&DAT_0045027c + uVar21 * 4);
        uVar9 = uVar13 & uVar22 >> (-uVar8 & 0x1f);
        if (uVar8 < 0x21) {
          if (puVar15 < puVar19) {
            puVar10 = puVar6;
            if (puVar6 != puVar15) {
              uVar22 = uVar8 >> 3;
              puVar10 = (uint *)((int)puVar15 - uVar22);
              if ((uint *)((int)puVar15 - uVar22) < puVar6) {
                uVar22 = (int)puVar15 - (int)puVar6;
                puVar10 = puVar6;
              }
              uVar8 = uVar8 + uVar22 * -8;
              uVar22 = *puVar10;
            }
          }
          else {
            puVar10 = (uint *)((int)puVar15 - (uVar8 >> 3));
            uVar8 = uVar8 & 7;
            uVar22 = *puVar10;
          }
          puVar15 = (uint *)(uVar21 + uVar8);
          uVar13 = uVar13 & uVar22 >> (-(int)puVar15 & 0x1fU);
          if (&DAT_00000020 < puVar15) goto LAB_01793720;
          puVar16 = param_1;
          if (puVar19 <= puVar10) {
            puVar11 = (uint *)((int)puVar10 - ((uint)puVar15 >> 3));
            puVar15 = (uint *)((uint)puVar15 & 7);
            uVar22 = *puVar11;
LAB_01792da8:
            do {
              if (puVar11 < puVar19) {
                puVar10 = puVar11;
                if (puVar6 == puVar11) {
LAB_017935fc:
                }
                else {
                  puVar10 = (uint *)((int)puVar11 - ((uint)puVar15 >> 3));
                  if (puVar6 <= puVar10) {
                    puVar15 = puVar15 + ((uint)puVar15 >> 3) * -2;
                    uVar22 = *puVar10;
                    if (puVar16 < puVar12) {
                      bVar23 = true;
                    }
                    else {
                      bVar23 = false;
                    }
                    goto LAB_01792de8;
                  }
                  uVar22 = *puVar6;
                  puVar15 = puVar15 + ((int)puVar11 - (int)puVar6) * -2;
                  puVar10 = puVar6;
                }
                goto LAB_01792e9c;
              }
              puVar10 = (uint *)((int)puVar11 - ((uint)puVar15 >> 3));
              puVar15 = (uint *)((uint)puVar15 & 7);
              bVar23 = puVar16 < puVar12;
              uVar22 = *puVar10;
LAB_01792de8:
              if (!bVar23) goto LAB_017935fc;
              iVar5 = param_6 + uVar9 * 4;
              iVar17 = param_6 + uVar13 * 4;
              uVar2 = *(ushort *)(param_6 + uVar9 * 4);
              uVar8 = (uint)*(byte *)(iVar5 + 3);
              *(byte *)puVar16 = *(byte *)(iVar5 + 2);
              pbVar14 = (byte *)(uVar8 + (int)puVar15);
              uVar3 = *(ushort *)(param_6 + uVar13 * 4);
              uVar13 = (uint)*(byte *)(iVar17 + 3);
              uVar8 = *(uint *)(&DAT_0045027c + uVar8 * 4);
              *(byte *)((int)puVar16 + 1) = *(byte *)(iVar17 + 2);
              puVar15 = (uint *)(pbVar14 + uVar13);
              uVar9 = (uVar8 & uVar22 >> (-(int)pbVar14 & 0x1fU)) + (uint)uVar2;
              uVar13 = (*(uint *)(&DAT_0045027c + uVar13 * 4) & uVar22 >> (-(int)puVar15 & 0x1fU)) +
                       (uint)uVar3;
              if (&DAT_00000020 < puVar15) {
                puVar10 = (uint *)&UNK_00450278;
LAB_01792e98:
                puVar16 = (uint *)((int)puVar16 + 2);
                goto LAB_01792e9c;
              }
              if (puVar10 < puVar19) {
                if (puVar6 != puVar10) {
                  puVar11 = (uint *)((int)puVar10 - ((uint)puVar15 >> 3));
                  if (puVar6 <= puVar11) {
                    puVar15 = puVar15 + ((uint)puVar15 >> 3) * -2;
                    uVar22 = *puVar11;
                    goto LAB_017933d0;
                  }
                  uVar22 = *puVar6;
                  puVar15 = puVar15 + ((int)puVar10 - (int)puVar6) * -2;
                  puVar10 = puVar6;
                }
                goto LAB_01792e98;
              }
              puVar11 = (uint *)((int)puVar10 - ((uint)puVar15 >> 3));
              puVar15 = (uint *)((uint)puVar15 & 7);
              uVar22 = *puVar11;
LAB_017933d0:
              iVar5 = param_6 + uVar9 * 4;
              puVar10 = puVar16 + 1;
              uVar2 = *(ushort *)(param_6 + uVar9 * 4);
              iVar17 = param_6 + uVar13 * 4;
              uVar8 = (uint)*(byte *)(iVar5 + 3);
              *(byte *)((int)puVar16 + 2) = *(byte *)(iVar5 + 2);
              pbVar14 = (byte *)(uVar8 + (int)puVar15);
              uVar3 = *(ushort *)(param_6 + uVar13 * 4);
              uVar13 = (uint)*(byte *)(iVar17 + 3);
              *(byte *)((int)puVar16 + 3) = *(byte *)(iVar17 + 2);
              puVar15 = (uint *)(pbVar14 + uVar13);
              uVar9 = (*(uint *)(&DAT_0045027c + uVar8 * 4) & uVar22 >> (-(int)pbVar14 & 0x1fU)) +
                      (uint)uVar2;
              uVar13 = (*(uint *)(&DAT_0045027c + uVar13 * 4) & uVar22 >> (-(int)puVar15 & 0x1fU)) +
                       (uint)uVar3;
              puVar16 = puVar10;
            } while (puVar15 < &DAT_00000021);
            goto LAB_01793448;
          }
          if (puVar6 != puVar10) {
            uVar22 = (uint)puVar15 >> 3;
            puVar11 = (uint *)((int)puVar10 - uVar22);
            if ((uint *)((int)puVar10 - uVar22) < puVar6) {
              uVar22 = (int)puVar10 - (int)puVar6;
              puVar11 = puVar6;
            }
            puVar15 = puVar15 + uVar22 * -2;
            uVar22 = *puVar11;
            if (&DAT_00000020 < puVar15) goto LAB_01793720;
            goto LAB_01792da8;
          }
          puVar10 = puVar6;
        }
        else {
          puVar15 = (uint *)(uVar21 + uVar8);
          uVar13 = uVar13 & uVar22 >> (-(int)puVar15 & 0x1fU);
LAB_01793720:
          puVar10 = param_1;
LAB_01793448:
          puVar16 = puVar10;
          puVar10 = (uint *)&UNK_00450278;
        }
LAB_01792e9c:
        puVar12 = (uint *)((int)param_1 + param_2 + -2);
        if (puVar16 <= puVar12) {
          puVar11 = (uint *)((int)puVar16 +
                            ((uint)((int)param_1 + ((param_2 + -1) - (int)puVar16)) & 0xfffffffe));
          do {
            iVar5 = param_6 + uVar9 * 4;
            uVar2 = *(ushort *)(param_6 + uVar9 * 4);
            uVar8 = (uint)*(byte *)(iVar5 + 3);
            *(byte *)puVar16 = *(byte *)(iVar5 + 2);
            puVar15 = (uint *)(uVar8 + (int)puVar15);
            if (&DAT_00000020 < puVar15) {
              uVar13 = param_6 + uVar13 * 4;
              pbVar14 = (byte *)((int)puVar16 + 2);
              *(byte *)((int)puVar16 + 1) = *(byte *)(uVar13 + 2);
LAB_017934c0:
              pbVar14 = pbVar14 + -(int)param_1;
              uVar24 = CONCAT44(uVar13,puVar15);
              goto LAB_01792ff8;
            }
            if (puVar10 < puVar19) {
              if (puVar6 == puVar10) {
                puVar10 = puVar15;
                uVar21 = uVar22;
                puVar20 = puVar6;
              }
              else {
                uVar9 = (uint)puVar15 >> 3;
                puVar20 = (uint *)((int)puVar10 - uVar9);
                if ((uint *)((int)puVar10 - uVar9) < puVar6) {
                  uVar9 = (int)puVar10 - (int)puVar6;
                  puVar20 = puVar6;
                }
                puVar10 = puVar15 + uVar9 * -2;
                uVar21 = *puVar20;
              }
            }
            else {
              puVar20 = (uint *)((int)puVar10 - ((uint)puVar15 >> 3));
              puVar10 = (uint *)((uint)puVar15 & 7);
              uVar21 = *puVar20;
            }
            puVar7 = puVar15;
            if (puVar16 == puVar11) break;
            iVar5 = param_6 + uVar13 * 4;
            uVar3 = *(ushort *)(param_6 + uVar13 * 4);
            uVar9 = (*(uint *)(&DAT_0045027c + uVar8 * 4) & uVar22 >> (-(int)puVar15 & 0x1fU)) +
                    (uint)uVar2;
            uVar13 = (uint)*(byte *)(iVar5 + 3);
            *(byte *)((int)puVar16 + 1) = *(byte *)(iVar5 + 2);
            puVar15 = (uint *)(uVar13 + (int)puVar10);
            uVar13 = *(uint *)(&DAT_0045027c + uVar13 * 4);
            if (&DAT_00000020 < puVar15) {
              pbVar14 = (byte *)((int)puVar16 + 3);
              *(byte *)((int)puVar16 + 2) = *(byte *)(param_6 + uVar9 * 4 + 2);
              goto LAB_017934c0;
            }
            puVar16 = (uint *)((int)puVar16 + 2);
            uVar13 = (uVar13 & uVar21 >> (-(int)puVar15 & 0x1fU)) + (uint)uVar3;
            if (puVar20 < puVar19) {
              if (puVar6 == puVar20) {
                puVar10 = puVar6;
              }
              else {
                uVar22 = (uint)puVar15 >> 3;
                puVar10 = (uint *)((int)puVar20 - uVar22);
                if ((uint *)((int)puVar20 - uVar22) < puVar6) {
                  uVar22 = (int)puVar20 - (int)puVar6;
                  puVar10 = puVar6;
                }
                puVar15 = puVar15 + uVar22 * -2;
                uVar21 = *puVar10;
              }
            }
            else {
              puVar10 = (uint *)((int)puVar20 - ((uint)puVar15 >> 3));
              puVar15 = (uint *)((uint)puVar15 & 7);
              uVar21 = *puVar10;
            }
            puVar7 = puVar15;
            uVar22 = uVar21;
          } while (puVar16 <= puVar12);
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
LAB_01793608:
          pbVar14 = (byte *)0xffffffb8;
          goto LAB_01792ff8;
        }
        uVar13 = (uint)((byte *)((int)puVar6 + (int)pbVar14))[-1];
        if (pbVar14 < &DAT_00000004) {
          uVar22 = (uint)(byte)*puVar6;
          if (pbVar14 == &SUB_00000002) {
LAB_017935c4:
            uVar22 = uVar22 + (uint)*(byte *)((int)puVar6 + 1) * 0x100;
          }
          else if (pbVar14 == (byte *)0x3) {
            uVar22 = uVar22 + (uint)*(byte *)((int)puVar6 + 2) * 0x10000;
            goto LAB_017935c4;
          }
          if (uVar13 == 0) {
LAB_01793674:
            pbVar14 = (byte *)0xffffffec;
            uVar24 = CONCAT44(iVar5,puVar6);
            goto LAB_01792ff8;
          }
          iVar5 = LZCOUNT(uVar13) + (int)(pbVar4 + (4 - param_4)) * 8;
          puVar15 = puVar6;
        }
        else {
          if (uVar13 == 0) {
LAB_01793038:
            uVar24 = CONCAT44(iVar5,puVar6);
            pbVar14 = (byte *)0xffffffff;
            goto LAB_01792ff8;
          }
          if ((byte *)0xffffff88 < pbVar14) {
LAB_01793058:
            uVar24 = CONCAT44(iVar5,puVar6);
            goto LAB_01792ff8;
          }
          iVar5 = LZCOUNT(uVar13);
          uVar22 = *(uint *)((int)puVar6 + (int)(pbVar14 + -4));
          puVar15 = (uint *)((int)puVar6 + (int)(pbVar14 + -4));
        }
        puVar19 = puVar6 + 1;
        uVar9 = (uint)*puVar18;
        param_6 = param_6 + 0x204;
        local_40 = iVar5 + -0x17 + uVar9;
        uVar13 = *(uint *)(&DAT_0045027c + uVar9 * 4);
        uVar8 = uVar13 & uVar22 >> (-local_40 & 0x1f);
        if (local_40 < 0x21) {
          if (puVar15 < puVar19) {
            puVar10 = puVar6;
            if (puVar6 != puVar15) {
              uVar22 = local_40 >> 3;
              puVar10 = (uint *)((int)puVar15 - uVar22);
              if ((uint *)((int)puVar15 - uVar22) < puVar6) {
                uVar22 = (int)puVar15 - (int)puVar6;
                puVar10 = puVar6;
              }
              local_40 = local_40 + uVar22 * -8;
              uVar22 = *puVar10;
            }
          }
          else {
            puVar10 = (uint *)((int)puVar15 - (local_40 >> 3));
            local_40 = local_40 & 7;
            uVar22 = *puVar10;
          }
          local_40 = local_40 + uVar9;
          uVar13 = uVar13 & uVar22 >> (-local_40 & 0x1f);
          if (0x20 < local_40) goto LAB_01793744;
          puVar15 = param_1;
          if (puVar19 <= puVar10) {
            puVar16 = (uint *)((int)puVar10 - (local_40 >> 3));
            local_40 = local_40 & 7;
            uVar22 = *puVar16;
LAB_01793184:
            do {
              if (puVar16 < puVar19) {
                puVar10 = puVar16;
                if (puVar6 == puVar16) {
LAB_017936cc:
                }
                else {
                  puVar10 = (uint *)((int)puVar16 - (local_40 >> 3));
                  if (puVar6 <= puVar10) {
                    local_40 = local_40 + (local_40 >> 3) * -8;
                    uVar22 = *puVar10;
                    if (puVar15 < puVar12) {
                      bVar23 = true;
                    }
                    else {
                      bVar23 = false;
                    }
                    goto LAB_017931c0;
                  }
                  uVar22 = *puVar6;
                  local_40 = local_40 + ((int)puVar16 - (int)puVar6) * -8;
                  puVar10 = puVar6;
                }
                goto LAB_01793268;
              }
              puVar10 = (uint *)((int)puVar16 - (local_40 >> 3));
              local_40 = local_40 & 7;
              bVar23 = puVar15 < puVar12;
              uVar22 = *puVar10;
LAB_017931c0:
              if (!bVar23) goto LAB_017936cc;
              iVar5 = param_6 + uVar13 * 4;
              uVar2 = *(ushort *)(param_6 + uVar8 * 4);
              iVar17 = param_6 + uVar8 * 4;
              uVar8 = (uint)*(byte *)(iVar17 + 3);
              *(byte *)puVar15 = *(byte *)(iVar17 + 2);
              uVar3 = *(ushort *)(param_6 + uVar13 * 4);
              uVar13 = (uint)*(byte *)(iVar5 + 3);
              *(byte *)((int)puVar15 + 1) = *(byte *)(iVar5 + 2);
              uVar9 = uVar8 + local_40;
              uVar8 = (uint)uVar2 + ((uVar22 << (local_40 & 0x1f)) >> (-uVar8 & 0x1f));
              local_40 = uVar9 + uVar13;
              uVar13 = (uint)uVar3 + ((uVar22 << (uVar9 & 0x1f)) >> (-uVar13 & 0x1f));
              if (0x20 < local_40) {
                puVar10 = (uint *)&UNK_00450278;
LAB_01793264:
                puVar15 = (uint *)((int)puVar15 + 2);
                goto LAB_01793268;
              }
              if (puVar10 < puVar19) {
                if (puVar6 != puVar10) {
                  puVar16 = (uint *)((int)puVar10 - (local_40 >> 3));
                  if (puVar6 <= puVar16) {
                    local_40 = local_40 + (local_40 >> 3) * -8;
                    uVar22 = *puVar16;
                    uVar9 = local_40 & 0x1f;
                    goto LAB_01793518;
                  }
                  uVar22 = *puVar6;
                  local_40 = local_40 + ((int)puVar10 - (int)puVar6) * -8;
                  puVar10 = puVar6;
                }
                goto LAB_01793264;
              }
              puVar16 = (uint *)((int)puVar10 - (local_40 >> 3));
              uVar9 = local_40 & 7;
              uVar22 = *puVar16;
              local_40 = uVar9;
LAB_01793518:
              iVar5 = param_6 + uVar8 * 4;
              iVar17 = param_6 + uVar13 * 4;
              puVar10 = puVar15 + 1;
              uVar2 = *(ushort *)(param_6 + uVar8 * 4);
              uVar8 = (uint)*(byte *)(iVar5 + 3);
              *(byte *)((int)puVar15 + 2) = *(byte *)(iVar5 + 2);
              uVar3 = *(ushort *)(param_6 + uVar13 * 4);
              uVar21 = uVar8 + local_40;
              uVar8 = (uint)uVar2 + ((uVar22 << uVar9) >> (-uVar8 & 0x1f));
              uVar13 = (uint)*(byte *)(iVar17 + 3);
              *(byte *)((int)puVar15 + 3) = *(byte *)(iVar17 + 2);
              local_40 = uVar21 + uVar13;
              uVar13 = (uint)uVar3 + ((uVar22 << (uVar21 & 0x1f)) >> (-uVar13 & 0x1f));
              puVar15 = puVar10;
            } while (local_40 < 0x21);
            goto LAB_01793588;
          }
          if (puVar6 != puVar10) {
            uVar22 = local_40 >> 3;
            puVar16 = (uint *)((int)puVar10 - uVar22);
            if ((uint *)((int)puVar10 - uVar22) < puVar6) {
              uVar22 = (int)puVar10 - (int)puVar6;
              puVar16 = puVar6;
            }
            local_40 = local_40 + uVar22 * -8;
            uVar22 = *puVar16;
            if (0x20 < local_40) goto LAB_01793744;
            goto LAB_01793184;
          }
          puVar10 = puVar6;
        }
        else {
          local_40 = uVar9 + local_40;
          uVar13 = uVar13 & uVar22 >> (-local_40 & 0x1f);
LAB_01793744:
          puVar10 = param_1;
LAB_01793588:
          puVar15 = puVar10;
          puVar10 = (uint *)&UNK_00450278;
        }
LAB_01793268:
        puVar12 = (uint *)((int)param_1 + param_2 + -2);
        if (puVar15 <= puVar12) {
          puVar16 = (uint *)((int)puVar15 +
                            ((uint)((int)param_1 + ((param_2 + -1) - (int)puVar15)) & 0xfffffffe));
          do {
            iVar5 = param_6 + uVar8 * 4;
            uVar2 = *(ushort *)(param_6 + uVar8 * 4);
            uVar8 = (uint)*(byte *)(iVar5 + 3);
            bVar1 = *(byte *)(iVar5 + 2);
            puVar7 = (uint *)(uint)bVar1;
            uVar9 = uVar8 + local_40;
            *(byte *)puVar15 = bVar1;
            if (0x20 < uVar9) {
              uVar13 = param_6 + uVar13 * 4;
              pbVar14 = (byte *)((int)puVar15 + 2);
              *(byte *)((int)puVar15 + 1) = *(byte *)(uVar13 + 2);
LAB_017936a4:
              uVar24 = CONCAT44(uVar13,puVar7);
              pbVar14 = pbVar14 + -(int)param_1;
              goto LAB_01792ff8;
            }
            if (puVar10 < puVar19) {
              if (puVar6 == puVar10) {
                puVar7 = puVar6;
                uVar21 = uVar22;
              }
              else {
                uVar21 = uVar9 >> 3;
                puVar7 = (uint *)((int)puVar10 - uVar21);
                if ((uint *)((int)puVar10 - uVar21) < puVar6) {
                  uVar21 = (int)puVar10 - (int)puVar6;
                  puVar7 = puVar6;
                }
                uVar9 = uVar9 + uVar21 * -8;
                uVar21 = *puVar7;
              }
            }
            else {
              puVar7 = (uint *)((int)puVar10 - (uVar9 >> 3));
              uVar9 = uVar9 & 7;
              uVar21 = *puVar7;
            }
            if (puVar15 == puVar16) break;
            uVar8 = (uint)uVar2 + ((uVar22 << (local_40 & 0x1f)) >> (-uVar8 & 0x1f));
            iVar5 = param_6 + uVar13 * 4;
            uVar2 = *(ushort *)(param_6 + uVar13 * 4);
            uVar13 = (uint)*(byte *)(iVar5 + 3);
            *(byte *)((int)puVar15 + 1) = *(byte *)(iVar5 + 2);
            local_40 = uVar13 + uVar9;
            if (0x20 < local_40) {
              pbVar14 = (byte *)((int)puVar15 + 3);
              *(byte *)((int)puVar15 + 2) = *(byte *)(param_6 + uVar8 * 4 + 2);
              goto LAB_017936a4;
            }
            puVar15 = (uint *)((int)puVar15 + 2);
            uVar13 = (uint)uVar2 + ((uVar21 << (uVar9 & 0x1f)) >> (-uVar13 & 0x1f));
            if (puVar7 < puVar19) {
              if (puVar6 == puVar7) {
                puVar10 = puVar6;
              }
              else {
                uVar22 = local_40 >> 3;
                puVar10 = (uint *)((int)puVar7 - uVar22);
                if ((uint *)((int)puVar7 - uVar22) < puVar6) {
                  uVar22 = (int)puVar7 - (int)puVar6;
                  puVar10 = puVar6;
                }
                local_40 = local_40 + uVar22 * -8;
                uVar21 = *puVar10;
              }
            }
            else {
              puVar10 = (uint *)((int)puVar7 - (local_40 >> 3));
              local_40 = local_40 & 7;
              uVar21 = *puVar10;
            }
            puVar7 = puVar12;
            uVar22 = uVar21;
          } while (puVar15 <= puVar12);
        }
      }
      pbVar14 = &DAT_ffffffba;
      uVar24 = CONCAT44(uVar13,puVar7);
      goto LAB_01792ff8;
    }
  }
  pbVar14 = (byte *)0xffffffd4;
LAB_01792ff8:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return pbVar14;
}

