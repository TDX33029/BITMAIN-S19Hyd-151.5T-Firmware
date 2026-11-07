// FUN_012867b0 @ 012867b0 size=5940 calls_out=16 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012867b0(ulonglong *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined1 uVar10;
  byte *extraout_r1;
  byte *pbVar11;
  undefined4 extraout_r1_00;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  byte *pbVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  char *pcVar28;
  bool bVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  byte *local_50;
  int local_40;
  undefined4 local_3c;
  byte *local_38;
  byte *local_34;
  undefined1 *local_30;
  uint local_2c;
  
  uVar30 = CONCAT44(param_4,param_3);
joined_r0x012867d0:
  if (param_5 == param_6) {
    *param_1 = uVar30;
    return;
  }
  pbVar21 = (byte *)(uVar30 >> 0x20);
  pbVar24 = (byte *)uVar30;
  puVar25 = param_5 + 0xc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_5) {
  case 0:
    pbVar17 = *(byte **)(param_5 + 8);
    if (pbVar17 <= pbVar21) {
      iVar5 = thunk_FUN_01bed842(*(undefined4 *)(param_5 + 4),pbVar24,pbVar17);
      if (iVar5 == 0) {
        if ((!(pbVar17 == (byte *)0x0 || pbVar21 <= pbVar17)) &&
           ((char)pbVar24[(int)pbVar17] < -0x40)) {
          puVar9 = &DAT_01c25c58;
          goto LAB_01287ecc;
        }
        goto LAB_012869e4;
      }
LAB_01287cd4:
      *(undefined4 *)param_1 = 0;
      uVar10 = 3;
      goto LAB_01287d24;
    }
    break;
  case 1:
    pbVar17 = *(byte **)(param_5 + 8);
    if (pbVar17 <= pbVar21) {
      iVar5 = thunk_FUN_01bed842(*(undefined4 *)(param_5 + 4),pbVar24,pbVar17);
      if (iVar5 != 0) goto LAB_01287cd4;
      if (pbVar17 != (byte *)0x0) {
        if (pbVar17 < pbVar21) {
          if ((char)pbVar24[(int)pbVar17] < -0x40) goto LAB_01287ea8;
        }
        else if (pbVar21 != pbVar17) {
LAB_01287ea8:
          puVar9 = &DAT_01c25c68;
          goto LAB_01287ecc;
        }
      }
LAB_012869e4:
      uVar30 = CONCAT44(pbVar21 + -(int)pbVar17,pbVar24 + (int)pbVar17);
      param_5 = puVar25;
      goto joined_r0x012867d0;
    }
    break;
  default:
    uVar30 = FUN_0073498c(pbVar24,pbVar21);
    param_5 = puVar25;
    goto joined_r0x012867d0;
  case 4:
    uVar16 = 2;
    pcVar18 = FUN_01285fbc;
    pcVar3 = FUN_01286558;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_5[1]) {
    case 0:
      goto switchD_01286850_caseD_0;
    case 2:
      pcVar18 = FUN_01286008;
      break;
    case 3:
      pcVar3 = FUN_01286050;
switchD_01286850_caseD_0:
      pcVar18 = pcVar3;
      uVar30 = FUN_0073498c(pbVar24,pbVar21);
      pbVar24 = (byte *)(uVar30 >> 0x20);
      pcVar8 = (char *)uVar30;
      if (pbVar24 == (byte *)0x0) {
        local_50 = &SUB_00000004;
        goto LAB_01287d70;
      }
      if (*pcVar8 == '+') {
        if (pbVar24 == &DAT_00000001) {
          cVar4 = '\x04';
          goto LAB_01287e40;
        }
        pcVar28 = pcVar8 + 1;
        if (*pcVar28 < -0x40) {
          puVar9 = &DAT_01c25c78;
LAB_01287f58:
          pbVar17 = &DAT_00000001;
          goto LAB_01287f60;
        }
        pbVar17 = (byte *)(pcVar8 + (int)pbVar24);
        pbVar24 = pbVar24 + -1;
        uVar30 = CONCAT44(pbVar24,pcVar28);
        local_50 = (byte *)0x0;
        puVar26 = (undefined1 *)0x0;
        uVar13 = 0;
        for (pbVar6 = (byte *)0x0; pbVar24 != pbVar6; pbVar6 = pbVar6 + 1) {
          uVar27 = (byte)pcVar28[(int)pbVar6] - 0x30 & 0xff;
          if (9 < uVar27) {
            if (pbVar6 == (byte *)0x0) {
              cVar4 = '\x03';
              goto LAB_01287e40;
            }
            if (pbVar6 < pbVar24) {
              uVar30 = CONCAT44(pbVar24,pcVar28);
              if (pcVar28[(int)pbVar6] < -0x40) {
LAB_01287f14:
                uVar16 = (undefined4)(uVar30 >> 0x20);
                    /* WARNING: Subroutine does not return */
                FUN_012fb514((int)uVar30,uVar16,pbVar6,uVar16,0x1c263a0);
              }
            }
            else if (pbVar24 != pbVar6) goto LAB_01287f14;
            pbVar17 = (byte *)(pcVar28 + (int)pbVar6);
            local_50 = pbVar24 + -(int)pbVar6;
            break;
          }
          uVar20 = (uint)(ZEXT48(puVar26) * 10);
          cVar4 = '\0';
          lVar2 = (longlong)(int)uVar13 * 10 + (ZEXT48(puVar26) * 10 >> 0x20);
          uVar14 = (uint)lVar2;
          uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
          if (uVar13 != (int)uVar14 >> 0x1f || (int)(uVar13 ^ uVar14) < 0) goto LAB_01287e40;
          puVar26 = (undefined1 *)(uVar20 + uVar27);
          uVar13 = uVar14 + CARRY4(uVar20,uVar27);
          if ((int)((uVar14 ^ uVar13) & ~uVar14) < 0) goto LAB_01287e40;
        }
      }
      else {
        if (*pcVar8 != '-') {
          puVar26 = (undefined1 *)0x0;
          uVar13 = 0;
          pbVar17 = (byte *)0x0;
          while( true ) {
            if (!(pbVar17 != &SUB_00000004 && pbVar24 != pbVar17)) goto LAB_01287514;
            uVar27 = (byte)pcVar8[(int)pbVar17] - 0x30 & 0xff;
            if (9 < uVar27) break;
            uVar20 = (uint)(ZEXT48(puVar26) * 10);
            lVar2 = (longlong)(int)uVar13 * 10 + (ZEXT48(puVar26) * 10 >> 0x20);
            uVar14 = (uint)lVar2;
            uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
            if (uVar13 != (int)uVar14 >> 0x1f || (int)(uVar13 ^ uVar14) < 0) {
LAB_01287e78:
              local_50 = (byte *)0x0;
              goto LAB_01287d70;
            }
            puVar26 = (undefined1 *)(uVar20 + uVar27);
            uVar13 = uVar14 + CARRY4(uVar20,uVar27);
            if ((int)((uVar14 ^ uVar13) & ~uVar14) < 0) goto LAB_01287e78;
            pbVar17 = pbVar17 + 1;
          }
          if (pbVar17 == (byte *)0x0) {
            local_50 = &DAT_00000003;
            goto LAB_01287d70;
          }
          if (pbVar17 < pbVar24) {
            if (-0x41 < pcVar8[(int)pbVar17]) goto LAB_01287538;
            goto LAB_01287fc4;
          }
          if (pbVar17 == pbVar24) goto LAB_01287538;
LAB_01287fc4:
          puVar9 = (undefined *)0x1c263a0;
          goto LAB_01287f60;
        }
        if (pbVar24 == &DAT_00000001) {
          uVar10 = 4;
LAB_01287e28:
          *(undefined4 *)param_1 = 0;
          *(undefined1 *)((int)param_1 + 4) = uVar10;
          return;
        }
        pcVar28 = pcVar8 + 1;
        if (*pcVar28 < -0x40) {
          puVar9 = &DAT_01c25c88;
          goto LAB_01287f58;
        }
        pbVar17 = (byte *)(pcVar8 + (int)pbVar24);
        pbVar24 = pbVar24 + -1;
        uVar30 = CONCAT44(pbVar24,pcVar28);
        local_50 = (byte *)0x0;
        uVar13 = 0;
        uVar27 = 0;
        for (pbVar6 = (byte *)0x0; pbVar24 != pbVar6; pbVar6 = pbVar6 + 1) {
          uVar20 = (byte)pcVar28[(int)pbVar6] - 0x30 & 0xff;
          if (9 < uVar20) {
            if (pbVar6 == (byte *)0x0) {
              uVar10 = 3;
              goto LAB_01287e28;
            }
            if (pbVar6 < pbVar24) {
              if (pcVar28[(int)pbVar6] < -0x40) goto LAB_01287f14;
            }
            else {
              uVar30 = CONCAT44(pbVar24,pcVar28);
              if (pbVar24 != pbVar6) goto LAB_01287f14;
            }
            pbVar17 = (byte *)(pcVar28 + (int)pbVar6);
            local_50 = pbVar24 + -(int)pbVar6;
            break;
          }
          uVar14 = (uint)((ulonglong)uVar13 * 10);
          uVar10 = 0;
          lVar2 = (longlong)(int)uVar27 * 10 + ((ulonglong)uVar13 * 10 >> 0x20);
          uVar19 = (uint)lVar2;
          uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
          if (uVar13 != (int)uVar19 >> 0x1f || (int)(uVar13 ^ uVar19) < 0) goto LAB_01287e28;
          uVar13 = uVar14 + uVar20;
          uVar27 = uVar19 + CARRY4(uVar14,uVar20);
          if ((int)((uVar19 ^ uVar27) & ~uVar19) < 0) goto LAB_01287e28;
        }
        puVar26 = (undefined1 *)-uVar13;
        uVar13 = -(uVar27 + (uVar13 != 0));
        if (0x7fffffff < (uVar27 & uVar13)) {
          uVar10 = 0;
          *(undefined4 *)param_1 = 0;
          goto LAB_01287d24;
        }
      }
      goto LAB_01287258;
    case 4:
      pcVar18 = FUN_0128609c;
      break;
    case 5:
      pcVar18 = FUN_012860e8;
      break;
    case 6:
      uVar16 = 1;
      pcVar18 = FUN_01286130;
      break;
    case 7:
      pcVar18 = FUN_01286180;
      break;
    case 8:
      pcVar18 = FUN_012861d0;
      break;
    case 9:
      pcVar18 = FUN_01286220;
      break;
    case 10:
      pcVar18 = FUN_01286268;
      break;
    case 0xb:
      pcVar18 = FUN_012862b0;
      break;
    case 0xc:
      uVar16 = 1;
      pcVar18 = (code *)&UNK_01286300;
      break;
    case 0xd:
      uVar16 = 1;
      pcVar18 = (code *)&UNK_01286340;
      break;
    case 0xe:
      uVar16 = 3;
      pcVar18 = FUN_01286378;
      break;
    case 0xf:
      pcVar18 = FUN_01285f34;
      break;
    case 0x10:
      pcVar18 = FUN_012863d0;
      break;
    case 0x11:
      pcVar18 = FUN_01286428;
      break;
    case 0x12:
      pcVar18 = FUN_01286470;
      break;
    case 0x13:
      uVar16 = 9;
      pcVar18 = FUN_012864b8;
      break;
    case 0x14:
      uVar16 = 0xffffffff;
      pcVar18 = FUN_01286508;
    }
    uVar31 = FUN_0073498c(pbVar24,pbVar21);
    FUN_01285dac(&local_38,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20),1,uVar16);
    if (local_38 != (byte *)0x0) {
      pbVar24 = extraout_r1;
      uVar13 = local_2c;
      puVar26 = local_30;
      pbVar17 = local_38;
      local_50 = local_34;
      goto LAB_01287258;
    }
    goto LAB_01287ce8;
  case 5:
    bVar1 = param_5[1];
    cVar4 = '\x13';
    if (3 < bVar1) {
      cVar4 = bVar1 - 4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar4) {
    case '\0':
      FUN_0128d308(&local_38,pbVar24,pbVar21);
      if (local_38 == (byte *)0x0) goto LAB_01287ce8;
      if (0xb < ((uint)local_30 & 0xff)) goto LAB_01287d40;
      iVar5 = ((uint)local_30 & 0xff) + 1;
      pbVar24 = local_38;
      pbVar21 = local_34;
      if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != iVar5)) {
LAB_01287d48:
        uVar10 = 1;
        goto LAB_01287d4c;
      }
      break;
    case '\x01':
      FUN_0128d308(&local_38,pbVar24,pbVar21);
      if (local_38 == (byte *)0x0) {
        cVar4 = (char)local_34;
        goto LAB_01287e40;
      }
      uVar13 = (uint)local_30 & 0xff;
      if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,0xc,0x1c262a8);
      }
      pbVar17 = *(byte **)(uVar13 * 8 + 0x1c262cc);
      pbVar24 = local_38;
      pbVar21 = local_34;
      if (pbVar17 <= local_34) {
        pbVar6 = (byte *)0x0;
        do {
          if (pbVar17 == pbVar6) {
            if ((pbVar17 != (byte *)0x0 && pbVar17 < local_34) &&
               ((char)local_38[(int)pbVar17] < -0x40)) {
              puVar9 = (undefined *)0x1c262b8;
LAB_01287fb4:
              uVar30 = CONCAT44(local_34,local_38);
              goto LAB_01287ecc;
            }
            pbVar24 = local_38 + (int)pbVar17;
            pbVar21 = local_34 + -(int)pbVar17;
            break;
          }
          uVar20 = (uint)pbVar6[*(int *)(uVar13 * 8 + 0x1c262c8)];
          uVar27 = (uint)local_38[(int)pbVar6];
          pbVar6 = pbVar6 + 1;
          if (uVar20 - 0x41 < 0x1a) {
            uVar20 = uVar20 | 0x20;
          }
          if (uVar27 - 0x41 < 0x1a) {
            uVar27 = uVar27 | 0x20;
          }
        } while (uVar27 == uVar20);
      }
      iVar5 = uVar13 + 1;
      if (*(int *)(param_2 + 0x48) == 1) {
        if (*(int *)(param_2 + 0x4c) != iVar5) goto LAB_01287d14;
      }
      break;
    case '\x02':
      FUN_0128d504(&local_38,pbVar24,pbVar21);
      uVar13 = (uint)local_30 & 0xff;
      if (uVar13 != 7) {
        pbVar24 = local_38;
        pbVar21 = local_34;
        goto LAB_012877f0;
      }
      local_34._0_1_ = (char)local_38;
      goto LAB_01287cec;
    case '\x03':
      FUN_0128d504(&local_38,pbVar24,pbVar21);
      uVar13 = (uint)local_30 & 0xff;
      if (uVar13 == 7) {
        cVar4 = (char)local_38;
        goto LAB_01287e40;
      }
      pbVar17 = *(byte **)(uVar13 * 8 + 0x1c2634c);
      pbVar24 = local_38;
      pbVar21 = local_34;
      if (pbVar17 <= local_34) {
        pbVar6 = (byte *)0x0;
        do {
          if (pbVar17 == pbVar6) {
            if ((pbVar17 != (byte *)0x0 && pbVar17 < local_34) &&
               ((char)local_38[(int)pbVar17] < -0x40)) {
              puVar9 = (undefined *)0x1c26338;
              goto LAB_01287fb4;
            }
            pbVar24 = local_38 + (int)pbVar17;
            pbVar21 = local_34 + -(int)pbVar17;
            break;
          }
          uVar20 = (uint)pbVar6[*(int *)(uVar13 * 8 + 0x1c26348)];
          uVar27 = (uint)local_38[(int)pbVar6];
          pbVar6 = pbVar6 + 1;
          if (uVar20 - 0x41 < 0x1a) {
            uVar20 = uVar20 | 0x20;
          }
          if (uVar27 - 0x41 < 0x1a) {
            uVar27 = uVar27 | 0x20;
          }
        } while (uVar27 == uVar20);
      }
LAB_012877f0:
      uVar30 = CONCAT44(pbVar21,pbVar24);
      if (*(byte *)(param_2 + 0xa8) != 7 && *(byte *)(param_2 + 0xa8) != uVar13) {
LAB_01287d14:
        *(undefined4 *)param_1 = 0;
        uVar10 = 1;
        goto LAB_01287d24;
      }
      *(char *)(param_2 + 0xa8) = (char)uVar13;
      param_5 = puVar25;
      goto joined_r0x012867d0;
    case '\x04':
    case '\x05':
      if (uVar30 < 0x200000000) goto LAB_01287cc0;
      if ((*pbVar24 | 0x20) == 0x61) {
        iVar5 = 0;
      }
      else {
        if ((*pbVar24 | 0x20) != 0x70) goto LAB_01287cd4;
        iVar5 = 1;
      }
      if ((pbVar24[1] | 0x20) != 0x6d) goto LAB_01287cd4;
      if ((*(int *)(param_2 + 0x78) == 1) && (*(int *)(param_2 + 0x7c) != iVar5)) goto LAB_01287d14;
      *(undefined4 *)(param_2 + 0x78) = 1;
      *(int *)(param_2 + 0x7c) = iVar5;
      if ((pbVar21 != (byte *)0x2) && ((char)pbVar24[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar24,pbVar21,2,pbVar21,&DAT_01c25c98);
      }
      uVar30 = CONCAT44(pbVar21 + -2,pbVar24 + 2);
      param_5 = puVar25;
      goto joined_r0x012867d0;
    case '\x06':
      if (pbVar21 == (byte *)0x0) {
LAB_01286e78:
        uVar30 = uVar30 & 0xffffffff;
        param_5 = puVar25;
      }
      else {
        param_5 = puVar25;
        if (*pbVar24 == 0x2e) {
          if (pbVar21 == &DAT_00000001) {
            uVar10 = 4;
LAB_01287df4:
            *(undefined4 *)param_1 = 0;
            *(undefined1 *)((int)param_1 + 4) = uVar10;
            return;
          }
          pbVar6 = pbVar24 + 1;
          if ((char)*pbVar6 < -0x40) {
            puVar9 = &DAT_01c25ca8;
            goto LAB_01287f8c;
          }
          pbVar7 = pbVar21 + -1;
          uVar30 = CONCAT44(pbVar7,pbVar6);
          uVar13 = 0;
          uVar27 = 0;
          for (pbVar17 = (byte *)0x0; pbVar17 != &DAT_00000009 && pbVar7 != pbVar17;
              pbVar17 = pbVar17 + 1) {
            uVar20 = pbVar6[(int)pbVar17] - 0x30 & 0xff;
            if (9 < uVar20) {
              if (pbVar17 == (byte *)0x0) {
                uVar10 = 3;
                goto LAB_01287df4;
              }
              if (pbVar17 < pbVar7) {
                uVar30 = CONCAT44(pbVar7,pbVar6);
                if ((char)pbVar6[(int)pbVar17] < -0x40) goto LAB_01287fc4;
              }
              else {
                uVar30 = CONCAT44(pbVar7,pbVar6);
                if (pbVar17 != pbVar7) goto LAB_01287fc4;
              }
              if (&DAT_00000009 < pbVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(pbVar17,10,&DAT_01c26208);
              }
              goto LAB_01287588;
            }
            uVar19 = (uint)((ulonglong)uVar13 * 10);
            uVar10 = 0;
            lVar2 = (longlong)(int)uVar27 * 10 + ((ulonglong)uVar13 * 10 >> 0x20);
            uVar14 = (uint)lVar2;
            uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
            if (uVar13 != (int)uVar14 >> 0x1f || (int)(uVar13 ^ uVar14) < 0) goto LAB_01287df4;
            uVar13 = uVar19 + uVar20;
            uVar27 = uVar14 + CARRY4(uVar19,uVar20);
            if ((int)((uVar14 ^ uVar27) & ~uVar14) < 0) goto LAB_01287df4;
          }
          pbVar17 = &DAT_00000009;
          if (pbVar7 < &DAT_00000009) {
            pbVar17 = pbVar7;
          }
          if ((&DAT_0000000a <= pbVar7) && ((char)pbVar6[(int)pbVar17] < -0x40)) goto LAB_01287f04;
LAB_01287588:
          uVar14 = *(uint *)(&DAT_00404cb0 + (int)pbVar17 * 8);
          uVar20 = *(uint *)(&DAT_00404cb4 + (int)pbVar17 * 8);
          puVar26 = (undefined1 *)((ulonglong)uVar14 * (ulonglong)uVar13);
          lVar2 = (ulonglong)uVar14 * (ulonglong)uVar27 +
                  ((ulonglong)(((int)uVar27 >> 0x1f) * uVar14) << 0x20 |
                  (ulonglong)uVar14 * (ulonglong)uVar13 >> 0x20);
          uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
          lVar2 = (ulonglong)uVar20 * (ulonglong)uVar13 +
                  CONCAT44(uVar13 * ((int)uVar20 >> 0x1f),(int)lVar2);
          uVar19 = (uint)lVar2;
          uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
          if ((longlong)(int)uVar20 * (longlong)(int)uVar27 +
              CONCAT44(((int)uVar14 >> 0x1f) + ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar14,uVar13),
                       uVar14 + uVar13) != CONCAT44((int)uVar19 >> 0x1f,(int)uVar19 >> 0x1f)) {
            uVar10 = 0;
            goto LAB_01287df4;
          }
          pbVar15 = (byte *)0x0;
          pbVar22 = pbVar6 + (int)pbVar17;
          do {
            pbVar11 = pbVar15;
            if (pbVar22 == pbVar24 + (int)pbVar21) {
              pbVar11 = pbVar7 + -(int)pbVar17;
              break;
            }
            pbVar23 = pbVar22 + 1;
            uVar13 = (uint)*pbVar22;
            if (0x7fffffff < (uint)(int)(char)*pbVar22) {
              if (uVar13 < 0xe0) {
                uVar13 = pbVar22[1] & 0x3f | (uVar13 & 0x1f) << 6;
                pbVar23 = pbVar22 + 2;
              }
              else {
                uVar27 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
                if (uVar13 < 0xf0) {
                  uVar13 = uVar27 | (uVar13 & 0x1f) << 0xc;
                  pbVar23 = pbVar22 + 3;
                }
                else {
                  pbVar23 = pbVar22 + 4;
                  uVar13 = pbVar22[3] & 0x3f | uVar27 << 6 | (uVar13 & 7) << 0x12;
                }
              }
            }
            pbVar15 = pbVar23 + ((int)pbVar11 - (int)pbVar22);
            pbVar22 = pbVar23;
          } while (0xfffffff5 < uVar13 - 0x3a);
          if (uVar19 == 0 && (&DAT_3b9ac9ff < puVar26) <= uVar19) {
            if ((*(int *)(param_2 + 0x98) != 1) || (*(undefined1 **)(param_2 + 0x9c) == puVar26)) {
              *(undefined4 *)(param_2 + 0x98) = 1;
              uVar30 = CONCAT44(pbVar7 + -(int)pbVar17 + -(int)pbVar11,
                                pbVar6 + (int)pbVar17 + (int)pbVar11);
              *(undefined1 **)(param_2 + 0x9c) = puVar26;
              goto joined_r0x012867d0;
            }
            uVar10 = 1;
          }
          else {
            uVar10 = 0;
          }
          *(undefined4 *)param_1 = 0;
          goto LAB_01287d24;
        }
      }
      goto joined_r0x012867d0;
    case '\a':
      if (pbVar21 == (byte *)0x0) goto LAB_01286e78;
      param_5 = puVar25;
      if (*pbVar24 == 0x2e) {
        if ((pbVar21 != &DAT_00000001) && ((char)pbVar24[1] < -0x40)) {
          puVar9 = &DAT_01c25cb8;
          goto LAB_01287f8c;
        }
        uVar30 = CONCAT44(pbVar21 + -1,pbVar24 + 1);
LAB_0128776c:
        uVar16 = 3;
LAB_01287770:
        FUN_0128db78(&local_38,(int)uVar30,(int)(uVar30 >> 0x20),uVar16);
        uVar30 = CONCAT44(local_34,local_38);
        if (local_38 == (byte *)0x0) goto LAB_01287ce8;
        if (local_2c != 0 || local_2c < (&DAT_3b9ac9ff < local_30)) {
LAB_01287d40:
          uVar10 = 0;
LAB_01287d4c:
          *(undefined4 *)param_1 = 0;
          *(undefined1 *)((int)param_1 + 4) = uVar10;
          return;
        }
        if ((*(int *)(param_2 + 0x98) == 1) && (*(undefined1 **)(param_2 + 0x9c) != local_30))
        goto LAB_01287d48;
        *(undefined4 *)(param_2 + 0x98) = 1;
        *(undefined1 **)(param_2 + 0x9c) = local_30;
        param_5 = puVar25;
      }
      goto joined_r0x012867d0;
    case '\b':
      if (pbVar21 == (byte *)0x0) goto LAB_01286e78;
      param_5 = puVar25;
      if (*pbVar24 == 0x2e) {
        if ((pbVar21 == &DAT_00000001) || (-0x41 < (char)pbVar24[1])) {
          uVar30 = CONCAT44(pbVar21 + -1,pbVar24 + 1);
LAB_012876e0:
          uVar16 = 6;
          goto LAB_01287770;
        }
        puVar9 = &DAT_01c25cc8;
        goto LAB_01287f8c;
      }
      goto joined_r0x012867d0;
    case '\t':
      if (pbVar21 == (byte *)0x0) goto LAB_01286e78;
      param_5 = puVar25;
      if (*pbVar24 == 0x2e) {
        if ((pbVar21 == &DAT_00000001) || (-0x41 < (char)pbVar24[1])) {
          uVar30 = CONCAT44(pbVar21 + -1,pbVar24 + 1);
          uVar16 = 9;
          goto LAB_01287770;
        }
        puVar9 = &DAT_01c25cd8;
LAB_01287f8c:
        pbVar17 = &DAT_00000001;
LAB_01287ecc:
        uVar16 = (undefined4)(uVar30 >> 0x20);
                    /* WARNING: Subroutine does not return */
        FUN_012fb514((int)uVar30,uVar16,pbVar17,uVar16,puVar9);
      }
      goto joined_r0x012867d0;
    case '\n':
      if (pbVar21 == (byte *)0x0) {
        pbVar17 = (byte *)0x0;
      }
      else {
        pbVar7 = (byte *)0x0;
        pbVar6 = pbVar24;
        do {
          pbVar15 = pbVar6 + 1;
          uVar13 = (uint)*pbVar6;
          if (0x7fffffff < (uint)(int)(char)*pbVar6) {
            if (uVar13 < 0xe0) {
              uVar13 = pbVar6[1] & 0x3f | (uVar13 & 0x1f) << 6;
              pbVar15 = pbVar6 + 2;
            }
            else {
              uVar27 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
              if (uVar13 < 0xf0) {
                uVar13 = uVar27 | (uVar13 & 0x1f) << 0xc;
                pbVar15 = pbVar6 + 3;
              }
              else {
                uVar13 = pbVar6[3] & 0x3f | uVar27 << 6 | (uVar13 & 7) << 0x12;
                pbVar15 = pbVar6 + 4;
              }
            }
          }
          pbVar17 = pbVar7;
          if ((uVar13 - 9 < 0x18) && ((1 << (uVar13 - 9 & 0xff) & 0x80001fU) != 0)) break;
          if (0x7f < uVar13) {
            uVar27 = uVar13 >> 8;
            if (uVar27 < 0x20) {
              if (uVar27 == 0) {
                bVar1 = (&DAT_00533bcd)[uVar13 & 0xff] & 1;
                goto joined_r0x01286e20;
              }
              if ((uVar27 == 0x16) && (uVar13 == 0x1680)) break;
            }
            else if (uVar27 == 0x20) {
              bVar1 = (&DAT_00533bcd)[uVar13 & 0xff] & 2;
joined_r0x01286e20:
              if (bVar1 != 0) break;
            }
            else if ((uVar27 == 0x30) && (uVar13 == 0x3000)) break;
          }
          pbVar7 = pbVar15 + ((int)pbVar7 - (int)pbVar6);
          pbVar17 = pbVar21;
          pbVar6 = pbVar15;
        } while (pbVar15 != pbVar24 + (int)pbVar21);
      }
      uVar30 = CONCAT44(pbVar21 + -(int)pbVar17,pbVar24 + (int)pbVar17);
      param_5 = puVar25;
      goto joined_r0x012867d0;
    default:
      uVar31 = FUN_0073498c(pbVar24,pbVar21);
      uVar16 = 0;
      uVar12 = 0;
      goto LAB_01286a1c;
    case '\x0e':
    case '\x10':
      uVar31 = FUN_0073498c(pbVar24,pbVar21);
      uVar16 = 0;
LAB_01286a08:
      uVar12 = 1;
LAB_01286a1c:
      FUN_0128d658(&local_38,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20),uVar12,uVar16);
      uVar30 = CONCAT44(local_34,local_38);
      if (local_38 == (byte *)0x0) goto LAB_01287ce8;
      if ((*(int *)(param_2 + 0xa0) == 1) && (*(undefined1 **)(param_2 + 0xa4) != local_30))
      goto LAB_01287d14;
      *(undefined4 *)(param_2 + 0xa0) = 1;
      *(undefined1 **)(param_2 + 0xa4) = local_30;
      param_5 = puVar25;
      goto joined_r0x012867d0;
    case '\x11':
      uVar31 = FUN_0073498c(pbVar24,pbVar21);
      FUN_0128d504(&local_38,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
      uVar30 = CONCAT44(local_34,local_38);
      if (((uint)local_30 & 0xff) != 7) {
        pbVar24 = &DAT_00000003;
        if ((local_34 == (byte *)0x0) || (*local_38 != 0x2c)) goto LAB_01287dd0;
        if ((local_34 == &DAT_00000001) || (-0x41 < (char)local_38[1])) {
          if (*(byte *)(param_2 + 0xa8) == 7 ||
              (uint)*(byte *)(param_2 + 0xa8) == ((uint)local_30 & 0xff)) {
            *(undefined1 *)(param_2 + 0xa8) = local_30._0_1_;
            uVar31 = CONCAT44(local_34 + -1,local_38 + 1);
            goto LAB_01286b4c;
          }
          goto LAB_01287d30;
        }
        puVar9 = &DAT_01c25c48;
        goto LAB_01287f58;
      }
LAB_01286b4c:
      uVar30 = FUN_0073498c((int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
      pbVar21 = (byte *)(uVar30 >> 0x20);
      iVar5 = (int)uVar30;
      pbVar24 = &SUB_00000004;
      if (pbVar21 == (byte *)0x0) goto LAB_01287dd0;
      uVar13 = 0;
      uVar27 = 0;
      for (pbVar17 = (byte *)0x0; pbVar17 != (byte *)0x2 && pbVar21 != pbVar17;
          pbVar17 = pbVar17 + 1) {
        uVar20 = pbVar17[iVar5] - 0x30 & 0xff;
        if (9 < uVar20) {
          if (pbVar17 == (byte *)0x0) goto LAB_01287e5c;
          if (pbVar17 < pbVar21) {
            if ((char)pbVar17[iVar5] < -0x40) goto LAB_01287fc4;
            goto LAB_012872ac;
          }
          if (pbVar17 != pbVar21) goto LAB_01287fc4;
          goto LAB_012872ac;
        }
        uVar14 = (uint)((ulonglong)uVar13 * 10);
        lVar2 = (longlong)(int)uVar27 * 10 + ((ulonglong)uVar13 * 10 >> 0x20);
        uVar19 = (uint)lVar2;
        uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
        pbVar24 = (byte *)0x0;
        if (uVar13 != (int)uVar19 >> 0x1f || (int)(uVar13 ^ uVar19) < 0) goto LAB_01287dd0;
        uVar13 = uVar14 + uVar20;
        uVar27 = uVar19 + CARRY4(uVar14,uVar20);
        if ((int)((uVar19 ^ uVar27) & ~uVar19) < 0) goto LAB_01287dd0;
      }
      pbVar17 = (byte *)0x2;
      if (uVar30 < 0x200000000) {
        pbVar17 = pbVar21;
      }
      if ((0x2ffffffff < uVar30) && ((char)pbVar17[iVar5] < -0x40)) goto LAB_01287f04;
LAB_012872ac:
      pbVar21 = pbVar21 + -(int)pbVar17;
      if (pbVar17 + iVar5 == (byte *)0x0) {
        pbVar24 = pbVar21;
        goto LAB_01287dd0;
      }
      pbVar24 = (byte *)0x0;
      if ((uint)(uVar13 - 1 < 0x1f) <= -(uVar27 - (uVar13 == 0))) goto LAB_01287dd0;
      if ((*(int *)(param_2 + 0x70) == 1) && (*(uint *)(param_2 + 0x74) != uVar13))
      goto LAB_01287d30;
      *(undefined4 *)(param_2 + 0x70) = 1;
      *(uint *)(param_2 + 0x74) = uVar13;
      uVar31 = FUN_0073498c(pbVar17 + iVar5,pbVar21);
      pbVar24 = (byte *)((ulonglong)uVar31 >> 0x20);
      if (pbVar21 <= pbVar24) {
LAB_01287dcc:
        pbVar24 = &DAT_00000003;
        if (pbVar21 == (byte *)0x0) {
          pbVar24 = &SUB_00000004;
        }
        goto LAB_01287dd0;
      }
      if ((int)uVar31 == 0) {
LAB_01287d84:
        goto LAB_01287dd0;
      }
      FUN_0128d308(&local_38,(int)uVar31);
      pbVar21 = local_34;
      if (local_38 == (byte *)0x0) goto LAB_01287d38;
      pbVar24 = (byte *)0x0;
      if (0xb < ((uint)local_30 & 0xff)) goto LAB_01287dd0;
      iVar5 = ((uint)local_30 & 0xff) + 1;
      if ((*(int *)(param_2 + 0x48) == 1) && (*(int *)(param_2 + 0x4c) != iVar5)) goto LAB_01287d30;
      *(undefined4 *)(param_2 + 0x48) = 1;
      *(int *)(param_2 + 0x4c) = iVar5;
      uVar30 = FUN_0073498c(local_38,local_34);
      pbVar17 = (byte *)(uVar30 >> 0x20);
      iVar5 = (int)uVar30;
      if (pbVar21 <= pbVar17) goto LAB_01287dcc;
      if (iVar5 == 0) {
        pbVar24 = pbVar17;
        goto LAB_01287dd0;
      }
      pbVar24 = &SUB_00000004;
      if (uVar30 < 0x200000000) goto LAB_01287dd0;
      pbVar21 = (byte *)0x0;
      uVar13 = 0;
      uVar27 = 0;
      pbVar6 = (byte *)0x0;
      while( true ) {
        pbVar7 = pbVar17;
        if ((pbVar6 == &DAT_ffffffff) || (pbVar17 == pbVar6)) goto LAB_01287928;
        uVar20 = pbVar6[iVar5] - 0x30 & 0xff;
        if (9 < uVar20) break;
        uVar19 = (uint)((ulonglong)uVar13 * 10);
        lVar2 = (longlong)(int)uVar27 * 10 + ((ulonglong)uVar13 * 10 >> 0x20);
        uVar14 = (uint)lVar2;
        uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
        pbVar24 = (byte *)0x0;
        if (uVar13 != (int)uVar14 >> 0x1f || (int)(uVar13 ^ uVar14) < 0) goto LAB_01287dd0;
        uVar13 = uVar19 + uVar20;
        uVar27 = uVar14 + CARRY4(uVar19,uVar20);
        if ((int)((uVar14 ^ uVar27) & ~uVar14) < 0) goto LAB_01287dd0;
        pbVar6 = pbVar6 + 1;
      }
      if (pbVar6 < (byte *)0x2) goto LAB_01287e5c;
      if (pbVar6 < pbVar17) {
        if ((char)pbVar6[iVar5] < -0x40) goto LAB_01287f14;
      }
      else if (pbVar17 != pbVar6) goto LAB_01287f14;
      pbVar21 = pbVar17 + -(int)pbVar6;
      pbVar7 = pbVar6;
LAB_01287928:
      if ((int)pbVar17 - (int)pbVar21 == 2) {
        if (uVar27 == 0 && (0x31 < uVar13) <= uVar27) {
          bVar29 = 0xfffff82f < uVar13;
          uVar20 = uVar13 + 2000;
          goto LAB_01287958;
        }
        uVar20 = uVar13 + 0x76c;
        uVar14 = uVar27 + (0xfffff893 < uVar13);
        if (uVar27 != uVar13 < 0x32 || uVar27 - (uVar13 < 0x32) < (uint)(0x31 < uVar13 - 0x32)) {
          uVar20 = uVar13;
          uVar14 = uVar27;
        }
      }
      else if ((int)pbVar17 - (int)pbVar21 == 3) {
        bVar29 = 0xfffff893 < uVar13;
        uVar20 = uVar13 + 0x76c;
LAB_01287958:
        uVar14 = uVar27 + bVar29;
      }
      else {
        uVar20 = uVar13;
        uVar14 = uVar27;
      }
      pbVar24 = (byte *)0x0;
      if (uVar14 - (uVar20 < 0x80000000) != -1) goto LAB_01287dd0;
      if ((*(int *)(param_2 + 0x10) == 1) && (*(uint *)(param_2 + 0x14) != uVar20))
      goto LAB_01287d30;
      *(undefined4 *)(param_2 + 0x10) = 1;
      *(uint *)(param_2 + 0x14) = uVar20;
      uVar31 = FUN_0073498c(pbVar7 + iVar5,pbVar21);
      pbVar24 = (byte *)((ulonglong)uVar31 >> 0x20);
      if (pbVar21 <= pbVar24) goto LAB_01287dcc;
      if ((int)uVar31 == 0) goto LAB_01287d84;
      FUN_01285dac(&local_38,(int)uVar31,pbVar24,2,2);
      pbVar21 = local_34;
      pbVar24 = local_38;
      if (local_38 != (byte *)0x0) {
        uVar13 = FUN_01285f34(param_2,extraout_r1_00,local_30,local_2c);
        if ((byte *)(uVar13 & 0xff) != &DAT_00000008) {
          pbVar24 = (byte *)(uVar13 & 0xff);
          goto LAB_01287dd0;
        }
        uVar31 = FUN_0073498c(pbVar24,pbVar21);
        FUN_0128daf0(&local_38,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
        if (local_38 != (byte *)0x0) {
          uVar31 = FUN_0073498c(local_38,local_34);
          FUN_01285dac(&local_38,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20),2,2);
          pbVar21 = local_34;
          pbVar17 = local_38;
          if (local_38 != (byte *)0x0) {
            pbVar24 = (byte *)0x0;
            if ((uint)(local_30 < (undefined1 *)0x3c) <= -local_2c) goto LAB_01287dd0;
            if ((*(int *)(param_2 + 0x88) == 1) && (*(undefined1 **)(param_2 + 0x8c) != local_30)) {
LAB_01287d30:
              pbVar24 = &DAT_00000001;
              goto LAB_01287dd0;
            }
            *(undefined4 *)(param_2 + 0x88) = 1;
            *(undefined1 **)(param_2 + 0x8c) = local_30;
            uVar31 = FUN_0073498c(local_38,local_34,0x3b - (int)local_30);
            FUN_0128daf0(&local_40,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
            if (local_40 != 0) {
              FUN_01285dac(&local_38,local_40,local_3c,2,2);
              if (local_38 == (byte *)0x0) goto LAB_01287d38;
              if ((uint)(local_30 < (undefined1 *)0x3d) <= -local_2c) {
                pbVar24 = (byte *)0x0;
                goto LAB_01287dd0;
              }
              if ((*(int *)(param_2 + 0x90) == 1) && (*(undefined1 **)(param_2 + 0x94) != local_30))
              goto LAB_01287d30;
              *(undefined4 *)(param_2 + 0x90) = 1;
              *(undefined1 **)(param_2 + 0x94) = local_30;
              pbVar21 = local_34;
              pbVar17 = local_38;
            }
            uVar31 = FUN_0073498c(pbVar17,pbVar21);
            pbVar24 = (byte *)((ulonglong)uVar31 >> 0x20);
            if (pbVar21 <= pbVar24) goto LAB_01287dcc;
            if ((int)uVar31 == 0) goto LAB_01287dd0;
            FUN_0128dd14(&local_38,(int)uVar31,pbVar24);
            if (local_38 != (byte *)0x0) {
              if ((*(int *)(param_2 + 0xa0) == 1) &&
                 (pbVar24 = &DAT_00000001, *(undefined1 **)(param_2 + 0xa4) != local_30))
              goto LAB_01287dd0;
              *(undefined4 *)(param_2 + 0xa0) = 1;
              *(undefined1 **)(param_2 + 0xa4) = local_30;
              do {
                uVar30 = CONCAT44(local_34,local_38);
                FUN_0128d210(&local_38,local_38,local_34);
                param_5 = puVar25;
              } while (local_38 != (byte *)0x0);
              goto joined_r0x012867d0;
            }
          }
        }
      }
LAB_01287d38:
      pbVar24 = (byte *)((uint)local_34 & 0xff);
      goto LAB_01287dd0;
    case '\x12':
      goto switchD_0128695c_caseD_12;
    case '\x13':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1) {
      case 0:
        uVar31 = FUN_0073498c(pbVar24,pbVar21);
        uVar16 = 1;
        goto LAB_01286a08;
      case 1:
        if (0x2ffffffff < uVar30) goto LAB_0128776c;
        break;
      case 2:
        if (0x5ffffffff < uVar30) goto LAB_012876e0;
        break;
      case 3:
        if (0x8ffffffff < uVar30) {
          FUN_0128db78(&local_38,pbVar24,pbVar21,9);
          uVar30 = CONCAT44(local_34,local_38);
          if (local_38 == (byte *)0x0) goto LAB_01287ce8;
          if (local_2c != 0 || local_2c < (&DAT_3b9ac9ff < local_30)) goto LAB_01287d40;
          if ((*(int *)(param_2 + 0x98) == 1) && (*(undefined1 **)(param_2 + 0x9c) != local_30))
          goto LAB_01287d48;
          *(undefined4 *)(param_2 + 0x98) = 1;
          *(undefined1 **)(param_2 + 0x9c) = local_30;
          param_5 = puVar25;
          goto joined_r0x012867d0;
        }
      }
      goto LAB_01287cc0;
    }
    uVar30 = CONCAT44(pbVar21,pbVar24);
    *(undefined4 *)(param_2 + 0x48) = 1;
    *(int *)(param_2 + 0x4c) = iVar5;
    param_5 = puVar25;
    goto joined_r0x012867d0;
  case 6:
    *(undefined4 *)param_1 = 0;
    uVar10 = 6;
    goto LAB_01287d24;
  }
LAB_01287cc0:
  *(undefined4 *)param_1 = 0;
  uVar10 = 4;
  goto LAB_01287d24;
switchD_0128695c_caseD_12:
  FUN_012865a4(&local_38,param_2,pbVar24,pbVar21);
  uVar30 = CONCAT44(local_34,local_38);
  param_5 = puVar25;
  if (local_38 == (byte *)0x0) {
LAB_01287ce8:
LAB_01287cec:
    *(char *)((int)param_1 + 4) = (char)local_34;
    *(undefined4 *)param_1 = 0;
    return;
  }
  goto joined_r0x012867d0;
LAB_01287514:
  pbVar17 = pbVar24;
  if (0x3ffffffff < uVar30) {
    pbVar17 = &SUB_00000004;
  }
  if ((0x4ffffffff < uVar30) && (pcVar8[(int)pbVar17] < -0x40)) {
LAB_01287f04:
    puVar9 = (undefined *)0x1c26390;
LAB_01287f60:
    uVar16 = (undefined4)(uVar30 >> 0x20);
                    /* WARNING: Subroutine does not return */
    FUN_012fb514((int)uVar30,uVar16,pbVar17,uVar16,puVar9);
  }
LAB_01287538:
  local_50 = pbVar24 + -(int)pbVar17;
  pbVar17 = (byte *)(pcVar8 + (int)pbVar17);
  if (pbVar17 == (byte *)0x0) {
LAB_01287d70:
    *(undefined4 *)param_1 = 0;
    uVar10 = SUB41(local_50,0);
LAB_01287d24:
    *(undefined1 *)((int)param_1 + 4) = uVar10;
    return;
  }
LAB_01287258:
  uVar30 = CONCAT44(local_50,pbVar17);
  cVar4 = (*pcVar18)(param_2,pbVar24,puVar26,uVar13);
  param_5 = puVar25;
  if (cVar4 != '\b') {
LAB_01287e40:
    *(undefined4 *)param_1 = 0;
    *(char *)((int)param_1 + 4) = cVar4;
    return;
  }
  goto joined_r0x012867d0;
LAB_01287e5c:
  pbVar24 = &DAT_00000003;
LAB_01287dd0:
  *(undefined4 *)param_1 = 0;
  *(char *)((int)param_1 + 4) = (char)pbVar24;
  return;
}

