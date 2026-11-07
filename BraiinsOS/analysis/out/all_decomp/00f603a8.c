// FUN_00f603a8 @ 00f603a8 size=6460 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f603a8(ulonglong *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined1 uVar11;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  undefined1 *local_54;
  int local_40;
  undefined4 local_3c;
  byte *local_38;
  undefined1 *local_34;
  uint local_30;
  uint uStack_2c;
  
  uVar33 = CONCAT44(param_4,param_3);
joined_r0x00f603c8:
  if (param_5 == param_6) {
    *param_1 = uVar33;
    return;
  }
  pbVar32 = (byte *)(uVar33 >> 0x20);
  pbVar7 = (byte *)uVar33;
  puVar28 = param_5 + 0xc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_5) {
  case 0:
    pbVar20 = *(byte **)(param_5 + 8);
    if (pbVar32 < pbVar20) {
LAB_00f61a58:
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((int)param_1 + 4) = 4;
      return;
    }
    iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(param_5 + 4),pbVar7,pbVar20);
    if (iVar6 != 0) {
LAB_00f61a78:
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((int)param_1 + 4) = 3;
      return;
    }
    if (pbVar20 == (byte *)0x0 || pbVar32 <= pbVar20) goto LAB_00f603f4;
    if ((char)pbVar7[(int)pbVar20] < -0x40) {
      puVar10 = &DAT_0187faac;
      goto LAB_00f61a40;
    }
    uVar33 = CONCAT44(pbVar32 + -(int)pbVar20,pbVar7 + (int)pbVar20);
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case 1:
    pbVar20 = *(byte **)(param_5 + 8);
    if (pbVar32 < pbVar20) goto LAB_00f61a58;
    iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(param_5 + 4),pbVar7,pbVar20);
    if (iVar6 != 0) goto LAB_00f61a78;
    if (pbVar20 != (byte *)0x0) {
      if (pbVar20 < pbVar32) {
        if ((char)pbVar7[(int)pbVar20] < -0x40) goto LAB_00f61c74;
      }
      else if (pbVar32 != pbVar20) {
LAB_00f61c74:
        puVar10 = &DAT_0187fabc;
LAB_00f61a40:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar7,pbVar32,pbVar20,pbVar32,puVar10);
      }
    }
LAB_00f603f4:
    uVar33 = CONCAT44(pbVar32 + -(int)pbVar20,pbVar7 + (int)pbVar20);
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  default:
    uVar33 = FUN_00f6aec0(pbVar7,pbVar32);
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case 4:
    uVar19 = 2;
    pcVar12 = FUN_00f62484;
    pcVar4 = FUN_00f623dc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_5[1]) {
    case 0:
      goto switchD_00f6046c_caseD_0;
    case 2:
      pcVar4 = FUN_00f6238c;
      break;
    case 3:
      pcVar12 = FUN_00f62430;
switchD_00f6046c_caseD_0:
      uVar33 = FUN_00f6aec0(pbVar7,pbVar32);
      uVar23 = (uint)(uVar33 >> 0x20);
      pbVar32 = (byte *)uVar33;
      if (uVar23 == 0) {
        local_54 = &DAT_00000004;
        goto LAB_00f61bb0;
      }
      if (*pbVar32 != 0x2b) {
        if (*pbVar32 != 0x2d) {
          uVar14 = *pbVar32 - 0x30 & 0xff;
          if (9 < uVar14) {
            local_54 = (undefined1 *)0x3;
            goto LAB_00f61bb0;
          }
          uVar22 = uVar23;
          if (uVar23 == 1) {
LAB_00f60eec:
            uVar25 = 4;
            if (uVar33 < 0x400000000) {
              uVar25 = uVar23;
            }
          }
          else {
            if (9 < (byte)(pbVar32[1] - 0x30)) {
              uVar25 = 1;
LAB_00f614bc:
              uVar27 = 0;
              if ((uVar23 <= uVar25) || (pbVar7 = pbVar32 + uVar25, (char)*pbVar7 < -0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac();
              }
              local_54 = (undefined1 *)(uVar23 - uVar25);
              goto LAB_00f60d6c;
            }
            uVar14 = uVar14 * 10 + (uint)(byte)(pbVar32[1] - 0x30);
            if (uVar23 == 2) goto LAB_00f60eec;
            uVar25 = 2;
            if (9 < (byte)(pbVar32[2] - 0x30)) goto LAB_00f614bc;
            uVar14 = uVar14 * 10 + (uint)(byte)(pbVar32[2] - 0x30);
            if (uVar23 == 3) goto LAB_00f60eec;
            uVar25 = 3;
            if (9 < (byte)(pbVar32[3] - 0x30)) goto LAB_00f614bc;
            uVar25 = 4;
            if (uVar33 < 0x400000000) {
              uVar25 = uVar23;
            }
            uVar14 = uVar14 * 10 + (uint)(byte)(pbVar32[3] - 0x30);
            if ((0x4ffffffff < uVar33) && ((char)pbVar32[uVar25] < -0x40)) {
LAB_00f61da8:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac();
            }
          }
          uVar27 = 0;
          local_54 = (undefined1 *)(uVar23 - uVar25);
          pbVar7 = pbVar32 + uVar25;
          if (pbVar7 == (byte *)0x0) {
LAB_00f61bb0:
            *(undefined4 *)param_1 = 0;
            *(char *)((int)param_1 + 4) = (char)local_54;
            return;
          }
          goto LAB_00f60d6c;
        }
        if (uVar23 == 1) {
          uVar11 = 4;
LAB_00f61c24:
          *(undefined4 *)param_1 = 0;
          *(undefined1 *)((int)param_1 + 4) = uVar11;
          return;
        }
        pbVar20 = pbVar32 + 1;
        if ((char)*pbVar20 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar32,uVar23,1,uVar23,&DAT_0187fadc);
        }
        pbVar7 = pbVar32 + uVar23;
        uVar22 = uVar23 - 1;
        local_54 = (undefined1 *)0x0;
        uVar30 = 0;
        uVar27 = 0;
        uVar25 = 0;
        if (uVar22 != 0) {
          do {
            uVar14 = pbVar20[uVar30] - 0x30 & 0xff;
            if (9 < uVar14) {
              if (uVar30 == 0) {
                uVar11 = 3;
                goto LAB_00f61c24;
              }
              if (uVar30 < uVar22) {
                if ((char)pbVar20[uVar30] < -0x40) goto LAB_00f61d04;
              }
              else if (uVar22 != uVar30) goto LAB_00f61d04;
              pbVar7 = pbVar20 + uVar30;
              local_54 = (undefined1 *)(uVar22 - uVar30);
              break;
            }
            uVar24 = (uint)((ulonglong)uVar27 * 10);
            uVar11 = 0;
            lVar2 = (longlong)(int)uVar25 * 10 + ((ulonglong)uVar27 * 10 >> 0x20);
            uVar26 = (uint)lVar2;
            uVar27 = (uint)((ulonglong)lVar2 >> 0x20);
            if (uVar27 != (int)uVar26 >> 0x1f || (int)(uVar27 ^ uVar26) < 0) goto LAB_00f61c24;
            uVar27 = uVar24 + uVar14;
            uVar25 = uVar26 + CARRY4(uVar24,uVar14);
            if ((int)((uVar26 ^ uVar25) & ~uVar26) < 0) goto LAB_00f61c24;
            uVar30 = uVar30 + 1;
          } while (uVar22 != uVar30);
        }
        uVar14 = -uVar27;
        uVar27 = -(uVar25 + (uVar27 != 0));
        if ((int)(uVar25 & uVar27) < 0) {
          *(undefined4 *)param_1 = 0;
          *(undefined1 *)((int)param_1 + 4) = 0;
          return;
        }
        goto LAB_00f60d68;
      }
      if (uVar23 == 1) {
LAB_00f61b5c:
        cVar5 = '\x04';
        goto LAB_00f61c00;
      }
      pbVar20 = pbVar32 + 1;
      if ((char)*pbVar20 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar32,uVar23,1,uVar23,&DAT_0187facc);
      }
      pbVar7 = pbVar32 + uVar23;
      uVar22 = uVar23 - 1;
      local_54 = (undefined1 *)0x0;
      uVar30 = 0;
      uVar14 = 0;
      uVar27 = 0;
      if (uVar22 != 0) {
        do {
          uVar25 = pbVar20[uVar30] - 0x30 & 0xff;
          if (9 < uVar25) {
            if (uVar30 == 0) goto LAB_00f61bfc;
            if (uVar30 < uVar22) {
              if ((char)pbVar20[uVar30] < -0x40) {
LAB_00f61d04:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(pbVar32 + 1,uVar23 - 1,uVar30,uVar23 - 1,&DAT_01880204);
              }
            }
            else if (uVar22 != uVar30) goto LAB_00f61d04;
            pbVar7 = pbVar20 + uVar30;
            local_54 = (undefined1 *)(uVar22 - uVar30);
            break;
          }
          cVar5 = '\0';
          uVar26 = (uint)((ulonglong)uVar14 * 10);
          lVar2 = (longlong)(int)uVar27 * 10 + ((ulonglong)uVar14 * 10 >> 0x20);
          uVar24 = (uint)lVar2;
          uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
          if (uVar14 != (int)uVar24 >> 0x1f || (int)(uVar14 ^ uVar24) < 0) goto LAB_00f61c00;
          uVar14 = uVar26 + uVar25;
          uVar27 = uVar24 + CARRY4(uVar26,uVar25);
          if ((int)((uVar24 ^ uVar27) & ~uVar24) < 0) goto LAB_00f61c00;
          uVar30 = uVar30 + 1;
        } while (uVar22 != uVar30);
      }
      goto LAB_00f60d6c;
    case 4:
      pcVar4 = FUN_00f62338;
      break;
    case 5:
      pcVar4 = FUN_00f622e8;
      break;
    case 6:
      uVar19 = 1;
      pcVar4 = FUN_00f62290;
      break;
    case 7:
      pcVar4 = FUN_00f62238;
      break;
    case 8:
      pcVar4 = FUN_00f621e0;
      break;
    case 9:
      pcVar4 = FUN_00f62190;
      break;
    case 10:
      pcVar4 = FUN_00f62140;
      break;
    case 0xb:
      pcVar4 = (code *)&UNK_00f620e8;
      break;
    case 0xc:
      uVar19 = 1;
      pcVar4 = (code *)&UNK_00f620a8;
      break;
    case 0xd:
      uVar19 = 1;
      pcVar4 = (code *)&UNK_00f62070;
      break;
    case 0xe:
      uVar19 = 3;
      pcVar4 = FUN_00f62010;
      break;
    case 0xf:
      pcVar4 = FUN_00f6030c;
      break;
    case 0x10:
      pcVar4 = FUN_00f61fb0;
      break;
    case 0x11:
      pcVar4 = FUN_00f61f60;
      break;
    case 0x12:
      pcVar4 = FUN_00f61f10;
      break;
    case 0x13:
      uVar19 = 9;
      pcVar4 = FUN_00f61eb8;
      break;
    case 0x14:
      uVar19 = 0xffffffff;
      pcVar4 = FUN_00f61e68;
    }
    pcVar12 = pcVar4;
    uVar34 = FUN_00f6aec0(pbVar7,pbVar32);
    FUN_00f60164(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),1,uVar19);
    if (local_38 == (byte *)0x0) goto LAB_00f61a94;
    uVar22 = extraout_r1;
    uVar14 = local_30;
    uVar27 = uStack_2c;
    pbVar7 = local_38;
    local_54 = local_34;
LAB_00f60d68:
LAB_00f60d6c:
    uVar33 = CONCAT44(local_54,pbVar7);
    cVar5 = (*pcVar12)(param_2,uVar22,uVar14,uVar27);
    param_5 = puVar28;
    if (cVar5 != '\b') {
LAB_00f61c00:
      *(undefined4 *)param_1 = 0;
      *(char *)((int)param_1 + 4) = cVar5;
      return;
    }
    goto joined_r0x00f603c8;
  case 5:
    bVar1 = param_5[1];
    cVar5 = '\x13';
    if (3 < bVar1) {
      cVar5 = bVar1 - 4;
    }
    break;
  case 6:
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 4) = 6;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar5) {
  case '\0':
    FUN_00f69c18(&local_38,pbVar7,pbVar32);
    if (local_38 == (byte *)0x0) goto LAB_00f61a94;
    if ((local_30 & 0xff) < 0xc) {
      iVar6 = (local_30 & 0xff) + 1;
      pbVar7 = local_38;
      puVar29 = local_34;
      if ((*(int *)(param_2 + 0x48) != 1) || (*(int *)(param_2 + 0x4c) == iVar6)) goto LAB_00f6132c;
LAB_00f61b08:
      uVar11 = 1;
      goto LAB_00f61b0c;
    }
    break;
  case '\x01':
    FUN_00f69c18(&local_38,pbVar7,pbVar32);
    if (local_38 == (byte *)0x0) {
      cVar5 = (char)local_34;
      goto LAB_00f61c00;
    }
    uVar14 = local_30 & 0xff;
    if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,0xc,&DAT_0188010c);
    }
    puVar31 = *(undefined1 **)(&DAT_01880130 + uVar14 * 8);
    pbVar7 = local_38;
    puVar29 = local_34;
    if (puVar31 <= local_34) {
      puVar15 = (undefined1 *)0x0;
      do {
        if (puVar31 == puVar15) {
          if ((puVar31 != (undefined1 *)0x0 && puVar31 < local_34) &&
             ((char)local_38[(int)puVar31] < -0x40)) {
            puVar10 = &DAT_0188011c;
LAB_00f61de8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_38,local_34,puVar31,local_34,puVar10);
          }
          pbVar7 = local_38 + (int)puVar31;
          puVar29 = local_34 + -(int)puVar31;
          break;
        }
        uVar22 = (uint)(byte)puVar15[*(int *)(&DAT_0188012c + uVar14 * 8)];
        uVar27 = (uint)local_38[(int)puVar15];
        puVar15 = puVar15 + 1;
        if (uVar22 - 0x41 < 0x1a) {
          uVar22 = uVar22 | 0x20;
        }
        if (uVar27 - 0x41 < 0x1a) {
          uVar27 = uVar27 | 0x20;
        }
      } while (uVar27 == uVar22);
    }
    iVar6 = uVar14 + 1;
    if (*(int *)(param_2 + 0x48) == 1) {
      if (*(int *)(param_2 + 0x4c) != iVar6) goto LAB_00f61acc;
    }
LAB_00f6132c:
    uVar33 = CONCAT44(puVar29,pbVar7);
    *(undefined4 *)(param_2 + 0x48) = 1;
    *(int *)(param_2 + 0x4c) = iVar6;
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case '\x02':
    FUN_00f69e24(&local_38,pbVar7,pbVar32);
    if ((local_30 & 0xff) != 7) {
      pbVar7 = local_38;
      puVar29 = local_34;
      if (*(byte *)(param_2 + 0xa8) != 7 && (uint)*(byte *)(param_2 + 0xa8) != (local_30 & 0xff))
      goto LAB_00f61acc;
      goto LAB_00f612e0;
    }
    local_34._0_1_ = (char)local_38;
    goto LAB_00f61a98;
  case '\x03':
    FUN_00f69e24(&local_38,pbVar7,pbVar32);
    uVar14 = local_30 & 0xff;
    if (uVar14 == 7) {
      cVar5 = (char)local_38;
      goto LAB_00f61c00;
    }
    puVar31 = *(undefined1 **)(&DAT_018801b0 + uVar14 * 8);
    pbVar7 = local_38;
    puVar29 = local_34;
    if (puVar31 <= local_34) {
      puVar15 = (undefined1 *)0x0;
      do {
        if (puVar31 == puVar15) {
          if ((puVar31 != (undefined1 *)0x0 && puVar31 < local_34) &&
             ((char)local_38[(int)puVar31] < -0x40)) {
            puVar10 = &DAT_0188019c;
            goto LAB_00f61de8;
          }
          pbVar7 = local_38 + (int)puVar31;
          puVar29 = local_34 + -(int)puVar31;
          break;
        }
        uVar22 = (uint)(byte)puVar15[*(int *)(&DAT_018801ac + uVar14 * 8)];
        uVar27 = (uint)local_38[(int)puVar15];
        puVar15 = puVar15 + 1;
        if (uVar22 - 0x41 < 0x1a) {
          uVar22 = uVar22 | 0x20;
        }
        if (uVar27 - 0x41 < 0x1a) {
          uVar27 = uVar27 | 0x20;
        }
      } while (uVar27 == uVar22);
    }
    if (*(byte *)(param_2 + 0xa8) != 7 && *(byte *)(param_2 + 0xa8) != uVar14) goto LAB_00f61acc;
LAB_00f612e0:
    uVar33 = CONCAT44(puVar29,pbVar7);
    *(undefined1 *)(param_2 + 0xa8) = (undefined1)local_30;
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case '\x04':
  case '\x05':
    if (uVar33 < 0x200000000) goto LAB_00f61a58;
    if ((*pbVar7 | 0x20) == 0x61) {
      iVar6 = 0;
    }
    else {
      if ((*pbVar7 | 0x20) != 0x70) goto LAB_00f61a78;
      iVar6 = 1;
    }
    if ((pbVar7[1] | 0x20) != 0x6d) goto LAB_00f61a78;
    if ((*(int *)(param_2 + 0x78) == 1) && (*(int *)(param_2 + 0x7c) != iVar6)) goto LAB_00f61acc;
    *(undefined4 *)(param_2 + 0x78) = 1;
    *(int *)(param_2 + 0x7c) = iVar6;
    if ((pbVar32 != &SUB_00000002) && ((char)pbVar7[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pbVar7,pbVar32,2,pbVar32,&DAT_0187faec);
    }
    uVar33 = CONCAT44(pbVar32 + -2,pbVar7 + 2);
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case '\x06':
    if (pbVar32 == (byte *)0x0) goto LAB_00f60974;
    param_5 = puVar28;
    if (*pbVar7 == 0x2e) {
      if (pbVar32 == &DAT_00000001) goto LAB_00f61b5c;
      pbVar20 = pbVar7 + 1;
      if ((char)*pbVar20 < -0x40) {
        puVar10 = &DAT_0187fafc;
        goto LAB_00f61d90;
      }
      uVar14 = pbVar7[1] - 0x30 & 0xff;
      if (9 < uVar14) {
LAB_00f61bfc:
        cVar5 = '\x03';
        goto LAB_00f61c00;
      }
      pbVar21 = pbVar32 + -1;
      if (pbVar32 == &SUB_00000002) {
        uVar33 = (ulonglong)uVar14;
LAB_00f6086c:
        pbVar8 = &DAT_00000009;
        if (pbVar21 < &DAT_00000009) {
          pbVar8 = pbVar21;
        }
      }
      else if ((byte)(pbVar7[2] - 0x30) < 10) {
        uVar14 = uVar14 * 10 + (uint)(byte)(pbVar7[2] - 0x30);
        uVar33 = (ulonglong)uVar14;
        if (pbVar32 == (byte *)0x3) goto LAB_00f6086c;
        pbVar8 = &SUB_00000002;
        if (9 < (byte)(pbVar7[3] - 0x30)) goto LAB_00f618fc;
        uVar14 = uVar14 * 10 + (uint)(byte)(pbVar7[3] - 0x30);
        uVar33 = (ulonglong)uVar14;
        if (pbVar32 == &DAT_00000004) goto LAB_00f6086c;
        pbVar8 = (byte *)0x3;
        if (9 < (byte)(pbVar7[4] - 0x30)) goto LAB_00f618fc;
        uVar14 = uVar14 * 10 + (uint)(byte)(pbVar7[4] - 0x30);
        uVar33 = (ulonglong)uVar14;
        if (pbVar32 == &DAT_00000005) goto LAB_00f6086c;
        pbVar8 = &DAT_00000004;
        if (9 < (byte)(pbVar7[5] - 0x30)) goto LAB_00f618fc;
        uVar14 = uVar14 * 10 + (uint)(byte)(pbVar7[5] - 0x30);
        uVar33 = (ulonglong)uVar14;
        if (pbVar32 == &DAT_00000006) goto LAB_00f6086c;
        uVar27 = pbVar7[6] - 0x30 & 0xff;
        pbVar8 = &DAT_00000005;
        if (9 < uVar27) goto LAB_00f618fc;
        uVar33 = (ulonglong)uVar14 * 10 + (ulonglong)uVar27;
        if (pbVar32 == &DAT_00000007) goto LAB_00f6086c;
        pbVar8 = &DAT_00000006;
        if (9 < (pbVar7[7] - 0x30 & 0xff)) goto LAB_00f618fc;
        uVar33 = (uVar33 & 0xffffffff) * 10 +
                 (CONCAT44((int)(uVar33 >> 0x20) * 10,pbVar7[7] - 0x30) & 0xffffffff000000ff);
        if (pbVar32 == &DAT_00000008) goto LAB_00f6086c;
        pbVar8 = &DAT_00000007;
        if (9 < (pbVar7[8] - 0x30 & 0xff)) goto LAB_00f618fc;
        uVar33 = (uVar33 & 0xffffffff) * 10 +
                 (CONCAT44((int)(uVar33 >> 0x20) * 10,pbVar7[8] - 0x30) & 0xffffffff000000ff);
        if (pbVar32 == &DAT_00000009) goto LAB_00f6086c;
        pbVar8 = &DAT_00000008;
        if (9 < (pbVar7[9] - 0x30 & 0xff)) goto LAB_00f618fc;
        uVar33 = (uVar33 & 0xffffffff) * 10 +
                 (CONCAT44((int)(uVar33 >> 0x20) * 10,pbVar7[9] - 0x30) & 0xffffffff000000ff);
        pbVar8 = &DAT_00000009;
        if (pbVar21 < &DAT_00000009) {
          pbVar8 = pbVar21;
        }
        if ((&DAT_00000009 < pbVar21) && ((char)pbVar20[(int)pbVar8] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac();
        }
      }
      else {
        uVar33 = (ulonglong)uVar14;
        pbVar8 = &DAT_00000001;
LAB_00f618fc:
        if (pbVar8 < pbVar21) {
          if ((char)pbVar20[(int)pbVar8] < -0x40) goto LAB_00f61dbc;
        }
        else if (pbVar8 != pbVar21) {
LAB_00f61dbc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar20,pbVar21,pbVar8,pbVar21,&DAT_01880204);
        }
      }
      uVar14 = (uint)(uVar33 >> 0x20);
      uVar25 = *(uint *)(&DAT_0035cbcc + (int)pbVar8 * 8);
      uVar3 = (ulonglong)*(uint *)("" + (int)pbVar8 * 8) * (uVar33 & 0xffffffff);
      uVar30 = (uint)uVar3;
      lVar2 = (ulonglong)*(uint *)("" + (int)pbVar8 * 8) * (ulonglong)uVar14 + (uVar3 >> 0x20);
      uVar23 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar2 = (ulonglong)uVar25 * (uVar33 & 0xffffffff) +
              CONCAT44((int)uVar33 * ((int)uVar25 >> 0x1f),(int)lVar2);
      uVar22 = (uint)lVar2;
      uVar27 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((longlong)(int)uVar25 * (longlong)(int)uVar14 +
          CONCAT44(((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar23,uVar27),uVar23 + uVar27) !=
          CONCAT44((int)uVar22 >> 0x1f,(int)uVar22 >> 0x1f)) {
        cVar5 = '\0';
        goto LAB_00f61c00;
      }
      pbVar18 = (byte *)0x0;
      pbVar16 = pbVar20 + (int)pbVar8;
      do {
        if (pbVar16 == pbVar7 + (int)pbVar32) {
          pbVar9 = pbVar21 + -(int)pbVar8;
          break;
        }
        pbVar17 = pbVar16 + 1;
        uVar14 = (uint)*pbVar16;
        if (0x7fffffff < (uint)(int)(char)*pbVar16) {
          if (uVar14 < 0xe0) {
            uVar14 = pbVar16[1] & 0x3f | (uVar14 & 0x1f) << 6;
            pbVar17 = pbVar16 + 2;
          }
          else {
            uVar27 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
            if (uVar14 < 0xf0) {
              uVar14 = uVar27 | (uVar14 & 0x1f) << 0xc;
              pbVar17 = pbVar16 + 3;
            }
            else {
              uVar14 = pbVar16[3] & 0x3f | uVar27 << 6 | (uVar14 & 7) << 0x12;
              pbVar17 = pbVar16 + 4;
            }
          }
        }
        pbVar9 = pbVar18;
        pbVar18 = pbVar17 + ((int)pbVar18 - (int)pbVar16);
        pbVar16 = pbVar17;
      } while (0xfffffff5 < uVar14 - 0x3a);
      if (uVar22 == 0 && (999999999 < uVar30) <= uVar22) {
        if ((*(int *)(param_2 + 0x98) != 1) || (*(uint *)(param_2 + 0x9c) == uVar30)) {
          uVar33 = CONCAT44(pbVar21 + -(int)pbVar8 + -(int)pbVar9,
                            pbVar20 + (int)pbVar8 + (int)pbVar9);
          *(undefined4 *)(param_2 + 0x98) = 1;
          *(uint *)(param_2 + 0x9c) = uVar30;
          goto joined_r0x00f603c8;
        }
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((int)param_1 + 4) = uVar11;
      return;
    }
    goto joined_r0x00f603c8;
  case '\a':
    if (pbVar32 == (byte *)0x0) goto LAB_00f60974;
    param_5 = puVar28;
    if (*pbVar7 != 0x2e) goto joined_r0x00f603c8;
    if ((pbVar32 != &DAT_00000001) && ((char)pbVar7[1] < -0x40)) {
      puVar10 = &DAT_0187fb0c;
LAB_00f61d90:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pbVar7,pbVar32,1,pbVar32,puVar10);
    }
    uVar33 = CONCAT44(pbVar32 + -1,pbVar7 + 1);
LAB_00f61248:
    FUN_00f6a46c(&local_38,(int)uVar33,(int)(uVar33 >> 0x20),3);
joined_r0x00f606e4:
    if (local_38 == (byte *)0x0) goto LAB_00f61a94;
LAB_00f6125c:
    uVar33 = CONCAT44(local_34,local_38);
    if (uStack_2c == 0 && (999999999 < local_30) <= uStack_2c) {
      if ((*(int *)(param_2 + 0x98) == 1) && (*(uint *)(param_2 + 0x9c) != local_30))
      goto LAB_00f61b08;
      *(undefined4 *)(param_2 + 0x98) = 1;
      *(uint *)(param_2 + 0x9c) = local_30;
      param_5 = puVar28;
      goto joined_r0x00f603c8;
    }
    break;
  case '\b':
    if (pbVar32 == (byte *)0x0) goto LAB_00f60974;
    param_5 = puVar28;
    if (*pbVar7 == 0x2e) {
      if ((pbVar32 != &DAT_00000001) && ((char)pbVar7[1] < -0x40)) {
        puVar10 = &DAT_0187fb1c;
        goto LAB_00f61d90;
      }
      uVar33 = CONCAT44(pbVar32 + -1,pbVar7 + 1);
LAB_00f611ac:
      FUN_00f6a46c(&local_38,(int)uVar33,(int)(uVar33 >> 0x20),6);
      if (local_38 != (byte *)0x0) goto LAB_00f6125c;
      goto LAB_00f61a94;
    }
    goto joined_r0x00f603c8;
  case '\t':
    if (pbVar32 == (byte *)0x0) {
LAB_00f60974:
      uVar33 = uVar33 & 0xffffffff;
      param_5 = puVar28;
    }
    else {
      param_5 = puVar28;
      if (*pbVar7 == 0x2e) {
        if ((pbVar32 != &DAT_00000001) && ((char)pbVar7[1] < -0x40)) {
          puVar10 = &DAT_0187fb2c;
          goto LAB_00f61d90;
        }
        FUN_00f6a46c(&local_38,pbVar7 + 1,pbVar32 + -1,9);
        goto joined_r0x00f606e4;
      }
    }
    goto joined_r0x00f603c8;
  case '\n':
    if (pbVar32 == (byte *)0x0) {
      pbVar20 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)0x0;
      pbVar21 = pbVar7;
      do {
        pbVar18 = pbVar21 + 1;
        uVar14 = (uint)*pbVar21;
        if ((char)*pbVar21 < '\0') {
          if (uVar14 < 0xe0) {
            uVar14 = pbVar21[1] & 0x3f | (uVar14 & 0x1f) << 6;
            pbVar18 = pbVar21 + 2;
          }
          else {
            uVar27 = pbVar21[2] & 0x3f | (pbVar21[1] & 0x3f) << 6;
            if (uVar14 < 0xf0) {
              uVar14 = uVar27 | (uVar14 & 0x1f) << 0xc;
              pbVar18 = pbVar21 + 3;
            }
            else {
              uVar14 = pbVar21[3] & 0x3f | uVar27 << 6 | (uVar14 & 7) << 0x12;
              pbVar18 = pbVar21 + 4;
            }
          }
        }
        pbVar20 = pbVar8;
        if ((uVar14 - 9 < 0x18) && ((1 << (uVar14 - 9 & 0xff) & 0x80001fU) != 0)) break;
        if (0x7f < uVar14) {
          uVar27 = uVar14 >> 8;
          if (uVar27 < 0x20) {
            if (uVar27 == 0) {
              bVar1 = (&DAT_0041951b)[uVar14 & 0xff] & 1;
              goto joined_r0x00f61068;
            }
            if ((uVar27 == 0x16) && (uVar14 == 0x1680)) break;
          }
          else if (uVar27 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar14 & 0xff] & 2;
joined_r0x00f61068:
            if (bVar1 != 0) break;
          }
          else if ((uVar27 == 0x30) && (uVar14 == 0x3000)) break;
        }
        pbVar8 = pbVar18 + ((int)pbVar8 - (int)pbVar21);
        pbVar20 = pbVar32;
        pbVar21 = pbVar18;
      } while (pbVar18 != pbVar7 + (int)pbVar32);
    }
    uVar33 = CONCAT44(pbVar32 + -(int)pbVar20,pbVar7 + (int)pbVar20);
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  default:
    uVar34 = FUN_00f6aec0(pbVar7,pbVar32);
    FUN_00f69fc0(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),0,0);
    if (local_38 != (byte *)0x0) goto LAB_00f60644;
    goto LAB_00f61a94;
  case '\x0e':
  case '\x10':
    uVar34 = FUN_00f6aec0(pbVar7,pbVar32);
    uVar19 = 0;
LAB_00f60620:
    FUN_00f69fc0(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),1,uVar19);
    if (local_38 == (byte *)0x0) goto LAB_00f61a94;
LAB_00f60644:
    uVar33 = CONCAT44(local_34,local_38);
    if ((*(int *)(param_2 + 0xa0) == 1) && (*(uint *)(param_2 + 0xa4) != local_30)) {
LAB_00f61acc:
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((int)param_1 + 4) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0xa0) = 1;
    *(uint *)(param_2 + 0xa4) = local_30;
    param_5 = puVar28;
    goto joined_r0x00f603c8;
  case '\x11':
    uVar34 = FUN_00f6aec0(pbVar7,pbVar32);
    FUN_00f69e24(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
    if ((local_30 & 0xff) == 7) {
LAB_00f60770:
      uVar33 = FUN_00f6aec0((int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
      iVar6 = (int)(uVar33 >> 0x20);
      pbVar7 = (byte *)uVar33;
      if (iVar6 == 0) {
        puVar29 = &DAT_00000004;
        goto LAB_00f61be4;
      }
      uVar14 = *pbVar7 - 0x30 & 0xff;
      if (9 < uVar14) {
        puVar29 = (undefined1 *)0x3;
        goto LAB_00f61be4;
      }
      if (iVar6 == 1) {
        iVar13 = iVar6;
LAB_00f607a8:
        puVar29 = (undefined1 *)(iVar6 - iVar13);
        pbVar7 = pbVar7 + iVar13;
        puVar31 = puVar29;
        if (pbVar7 == (byte *)0x0) goto LAB_00f61be4;
      }
      else {
        if ((byte)(pbVar7[1] - 0x30) < 10) {
          iVar13 = 2;
          if (uVar33 < 0x200000000) {
            iVar13 = iVar6;
          }
          uVar14 = uVar14 * 10 + (uint)(byte)(pbVar7[1] - 0x30);
          if ((0x2ffffffff < uVar33) && ((char)pbVar7[iVar13] < -0x40)) goto LAB_00f61da8;
          goto LAB_00f607a8;
        }
        if ((uVar33 < 0x200000000) || ((char)pbVar7[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar7,iVar6,1,iVar6,&DAT_01880204);
        }
        pbVar7 = pbVar7 + 1;
        puVar31 = (undefined1 *)(iVar6 + -1);
      }
      if ((uVar14 - 1 < 0x1f) <= (uVar14 == 0)) {
LAB_00f61b00:
        puVar29 = (undefined1 *)0x0;
        goto LAB_00f61be4;
      }
      if ((*(int *)(param_2 + 0x70) != 1) || (*(uint *)(param_2 + 0x74) == uVar14)) {
        *(undefined4 *)(param_2 + 0x70) = 1;
        *(uint *)(param_2 + 0x74) = uVar14;
        uVar34 = FUN_00f6aec0(pbVar7,puVar31);
        puVar29 = (undefined1 *)((ulonglong)uVar34 >> 0x20);
        if (puVar31 <= puVar29) {
          puVar29 = (undefined1 *)0x3;
          if (puVar31 == (undefined1 *)0x0) {
            puVar29 = &DAT_00000004;
          }
          goto LAB_00f61be4;
        }
        if ((int)uVar34 == 0) goto LAB_00f61be4;
        FUN_00f69c18(&local_38,(int)uVar34);
        puVar31 = local_34;
        if (local_38 == (byte *)0x0) goto LAB_00f61ae8;
        if (0xb < (local_30 & 0xff)) goto LAB_00f61b00;
        iVar6 = (local_30 & 0xff) + 1;
        if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != iVar6))
        goto LAB_00f61af0;
        *(undefined4 *)(param_2 + 0x48) = 1;
        *(int *)(param_2 + 0x4c) = iVar6;
        uVar34 = FUN_00f6aec0(local_38,local_34);
        puVar29 = (undefined1 *)((ulonglong)uVar34 >> 0x20);
        if (puVar31 <= puVar29) {
LAB_00f61b2c:
          puVar29 = (undefined1 *)0x3;
          if (puVar31 == (undefined1 *)0x0) {
            puVar29 = &DAT_00000004;
          }
          goto LAB_00f61be4;
        }
        if ((int)uVar34 == 0) goto LAB_00f61be4;
        FUN_00f60164(&local_38,(int)uVar34,puVar29,2,0xffffffff);
        puVar31 = local_34;
        if (local_38 == (byte *)0x0) goto LAB_00f61ae8;
        if ((int)puVar29 - (int)local_34 == 2) {
          if (uStack_2c == 0 && (0x31 < local_30) <= uStack_2c) {
            uVar14 = local_30 + 2000;
            uVar27 = uStack_2c + (0xfffff82f < local_30);
          }
          else {
            uVar14 = local_30 + 0x76c;
            uVar27 = uStack_2c + (0xfffff893 < local_30);
            if (uStack_2c != local_30 < 0x32 ||
                uStack_2c - (local_30 < 0x32) < (uint)(0x31 < local_30 - 0x32)) {
              uVar14 = local_30;
              uVar27 = uStack_2c;
            }
          }
        }
        else if ((int)puVar29 - (int)local_34 == 3) {
          uVar14 = local_30 + 0x76c;
          uVar27 = uStack_2c + (0xfffff893 < local_30);
        }
        else {
          uVar14 = local_30;
          uVar27 = uStack_2c;
        }
        if (uVar27 - (uVar14 < 0x80000000) != -1) goto LAB_00f61b00;
        if ((*(int *)(param_2 + 0x10) == 1) && (*(uint *)(param_2 + 0x14) != uVar14))
        goto LAB_00f61af0;
        *(undefined4 *)(param_2 + 0x10) = 1;
        *(uint *)(param_2 + 0x14) = uVar14;
        uVar34 = FUN_00f6aec0(local_38,local_34);
        puVar29 = (undefined1 *)((ulonglong)uVar34 >> 0x20);
        if (puVar31 <= puVar29) {
          puVar29 = (undefined1 *)0x3;
          if (puVar31 == (undefined1 *)0x0) {
            puVar29 = &DAT_00000004;
          }
          goto LAB_00f61be4;
        }
        if ((int)uVar34 == 0) goto LAB_00f61be4;
        FUN_00f60164(&local_38,(int)uVar34,puVar29,2,2);
        puVar31 = local_34;
        pbVar7 = local_38;
        if (local_38 != (byte *)0x0) {
          uVar14 = FUN_00f6030c(param_2,extraout_r1_00,local_30,uStack_2c);
          puVar29 = (undefined1 *)(uVar14 & 0xff);
          if (puVar29 != &DAT_00000008) goto LAB_00f61be4;
          uVar34 = FUN_00f6aec0(pbVar7,puVar31);
          FUN_00f6aca0(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
          if (local_38 != (byte *)0x0) {
            uVar34 = FUN_00f6aec0(local_38,local_34);
            FUN_00f60164(&local_38,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),2,2);
            puVar31 = local_34;
            pbVar7 = local_38;
            if (local_38 != (byte *)0x0) {
              puVar29 = (undefined1 *)0x0;
              if ((uint)(local_30 < 0x3c) <= -uStack_2c) goto LAB_00f61be4;
              if ((*(int *)(param_2 + 0x88) == 1) && (*(uint *)(param_2 + 0x8c) != local_30))
              goto LAB_00f61af0;
              *(undefined4 *)(param_2 + 0x88) = 1;
              *(uint *)(param_2 + 0x8c) = local_30;
              uVar34 = FUN_00f6aec0(local_38,local_34);
              FUN_00f6aca0(&local_40,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
              if (local_40 != 0) {
                FUN_00f60164(&local_38,local_40,local_3c,2,2);
                if (local_38 == (byte *)0x0) goto LAB_00f61ae8;
                if ((uint)(local_30 < 0x3d) <= -uStack_2c) goto LAB_00f61b00;
                if ((*(int *)(param_2 + 0x90) == 1) && (*(uint *)(param_2 + 0x94) != local_30))
                goto LAB_00f61af0;
                *(undefined4 *)(param_2 + 0x90) = 1;
                *(uint *)(param_2 + 0x94) = local_30;
                puVar31 = local_34;
                pbVar7 = local_38;
              }
              uVar34 = FUN_00f6aec0(pbVar7,puVar31);
              puVar29 = (undefined1 *)((ulonglong)uVar34 >> 0x20);
              if (puVar31 <= puVar29) goto LAB_00f61b2c;
              if ((int)uVar34 == 0) goto LAB_00f61be4;
              FUN_00f6a618(&local_38,(int)uVar34,puVar29);
              if (local_38 != (byte *)0x0) {
                if ((*(int *)(param_2 + 0xa0) == 1) &&
                   (puVar29 = &DAT_00000001, *(uint *)(param_2 + 0xa4) != local_30))
                goto LAB_00f61be4;
                *(undefined4 *)(param_2 + 0xa0) = 1;
                *(uint *)(param_2 + 0xa4) = local_30;
                do {
                  uVar33 = CONCAT44(local_34,local_38);
                  FUN_00f69b14(&local_38,local_38,local_34);
                  param_5 = puVar28;
                } while (local_38 != (byte *)0x0);
                goto joined_r0x00f603c8;
              }
            }
          }
        }
LAB_00f61ae8:
        puVar29 = (undefined1 *)((uint)local_34 & 0xff);
        goto LAB_00f61be4;
      }
    }
    else {
      puVar29 = (undefined1 *)0x3;
      if ((local_34 == (undefined1 *)0x0) || (*local_38 != 0x2c)) goto LAB_00f61be4;
      if ((local_34 != &DAT_00000001) && ((char)local_38[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_38,local_34,1,local_34,&DAT_0187fa9c);
      }
      if (*(byte *)(param_2 + 0xa8) == 7 || (uint)*(byte *)(param_2 + 0xa8) == (local_30 & 0xff)) {
        *(undefined1 *)(param_2 + 0xa8) = (undefined1)local_30;
        uVar34 = CONCAT44(local_34 + -1,local_38 + 1);
        goto LAB_00f60770;
      }
    }
LAB_00f61af0:
    puVar29 = &DAT_00000001;
LAB_00f61be4:
    *(undefined4 *)param_1 = 0;
    *(char *)((int)param_1 + 4) = (char)puVar29;
    return;
  case '\x12':
    goto switchD_00f60574_caseD_12;
  case '\x13':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 0:
      uVar34 = FUN_00f6aec0(pbVar7,pbVar32);
      uVar19 = 1;
      goto LAB_00f60620;
    case 1:
      if (uVar33 < 0x300000000) goto LAB_00f61a58;
      goto LAB_00f61248;
    case 2:
      if (uVar33 < 0x600000000) goto LAB_00f61a58;
      goto LAB_00f611ac;
    }
    if (uVar33 < 0x900000000) goto LAB_00f61a58;
    FUN_00f6a46c(&local_38,pbVar7,pbVar32,9);
    uVar33 = CONCAT44(local_34,local_38);
    if (local_38 == (byte *)0x0) goto LAB_00f61a94;
    if (uStack_2c == 0 && (999999999 < local_30) <= uStack_2c) {
      if ((*(int *)(param_2 + 0x98) == 1) && (*(uint *)(param_2 + 0x9c) != local_30))
      goto LAB_00f61b08;
      *(undefined4 *)(param_2 + 0x98) = 1;
      *(uint *)(param_2 + 0x9c) = local_30;
      param_5 = puVar28;
      goto joined_r0x00f603c8;
    }
  }
  uVar11 = 0;
LAB_00f61b0c:
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((int)param_1 + 4) = uVar11;
  return;
switchD_00f60574_caseD_12:
  FUN_00f624d8(&local_38,param_2,pbVar7,pbVar32);
  uVar33 = CONCAT44(local_34,local_38);
  param_5 = puVar28;
  if (local_38 == (byte *)0x0) {
LAB_00f61a94:
LAB_00f61a98:
    *(char *)((int)param_1 + 4) = (char)local_34;
    *(undefined4 *)param_1 = 0;
    return;
  }
  goto joined_r0x00f603c8;
}

