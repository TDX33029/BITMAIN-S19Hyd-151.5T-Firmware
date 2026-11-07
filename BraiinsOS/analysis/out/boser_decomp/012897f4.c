// FUN_012897f4 @ 012897f4 size=4352 calls_out=10 calls_in=2
// strings: assertion failed: nextspec > 0 | assertion failed: nextspec > 0

void FUN_012897f4(char *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  uint uVar16;
  uint extraout_r3;
  undefined4 uVar17;
  byte unaff_r4;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  byte *pbVar21;
  char unaff_r7;
  byte *pbVar22;
  undefined4 unaff_r11;
  byte *pbVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte *local_54;
  byte *local_50;
  undefined4 local_48;
  byte *local_44;
  byte *local_40;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *pbStack_28;
  
  uVar24 = CONCAT44(local_5c,local_60);
  if (*(int *)((int)param_2 + 0xc) != 0) {
    pcVar19 = *(char **)(param_2 + 1);
    uVar16 = *(int *)((int)param_2 + 0xc) - 1;
    pcVar13 = pcVar19 + 0xc;
    cVar2 = *pcVar19;
    *(char **)(param_2 + 1) = pcVar13;
    *(uint *)((int)param_2 + 0xc) = uVar16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar2) {
    default:
      unaff_r7 = pcVar19[2];
      uVar16 = (uint)(byte)pcVar19[3];
      pcVar13 = *(char **)(pcVar19 + 4);
      unaff_r11 = *(undefined4 *)(pcVar19 + 8);
      unaff_r4 = pcVar19[1];
      break;
    case '\x01':
    case '\x03':
      uVar24 = FUN_00666760(*(undefined4 *)(pcVar19 + 4),*(undefined4 *)(pcVar19 + 8));
      unaff_r11 = (undefined4)((ulonglong)uVar24 >> 0x20);
      pcVar13 = (char *)uVar24;
      uVar16 = extraout_r3;
      break;
    case '\x04':
      unaff_r7 = pcVar19[2];
      unaff_r4 = pcVar19[1];
      break;
    case '\x05':
      bVar3 = pcVar19[1];
      cVar9 = '\x13';
      if (3 < bVar3) {
        cVar9 = bVar3 - 4;
      }
      unaff_r4 = 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar9) {
      case '\x01':
        unaff_r4 = 5;
        break;
      case '\x02':
        unaff_r4 = 6;
        break;
      case '\x03':
        unaff_r4 = 7;
        break;
      case '\x04':
        unaff_r4 = 8;
        break;
      case '\x05':
        unaff_r4 = 9;
        break;
      case '\x06':
        unaff_r4 = 10;
        break;
      case '\a':
        unaff_r4 = 0xb;
        break;
      case '\b':
        unaff_r4 = 0xc;
        break;
      case '\t':
        unaff_r4 = 0xd;
        break;
      case '\n':
        unaff_r4 = 0xe;
        break;
      case '\v':
        unaff_r4 = 0xf;
        break;
      case '\f':
        unaff_r4 = 0x10;
        break;
      case '\r':
        unaff_r4 = 0x11;
        break;
      case '\x0e':
        unaff_r4 = 0x12;
        break;
      case '\x0f':
        unaff_r4 = 0x13;
        break;
      case '\x10':
        unaff_r4 = 0x14;
        break;
      case '\x11':
        unaff_r4 = 0x15;
        break;
      case '\x12':
        unaff_r4 = 0x16;
        break;
      case '\x13':
        unaff_r4 = bVar3;
      }
      break;
    case '\x06':
      break;
    }
    *(char **)(param_1 + 4) = pcVar13;
    *(undefined4 *)(param_1 + 8) = unaff_r11;
    param_1[3] = (char)uVar16;
    param_1[2] = unaff_r7;
    param_1[1] = unaff_r4;
    *param_1 = cVar2;
    return;
  }
  pbVar22 = *(byte **)((int)param_2 + 4);
  if (pbVar22 == (byte *)0x0) {
LAB_01289af4:
    local_58 = (byte *)CONCAT31(local_58._1_3_,7);
    goto LAB_01289b20;
  }
  pbVar23 = *(byte **)param_2;
  puVar11 = (undefined1 *)(uint)*pbVar23;
  if (0x7fffffff < (uint)(int)(char)*pbVar23) {
    if (puVar11 < (undefined1 *)0xe0) {
      puVar11 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
    }
    else {
      uVar16 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
      if (puVar11 < (undefined1 *)0xf0) {
        puVar11 = (undefined1 *)(uVar16 | ((uint)puVar11 & 0x1f) << 0xc);
      }
      else {
        puVar11 = (undefined1 *)(pbVar23[3] & 0x3f | uVar16 << 6 | ((uint)puVar11 & 7) << 0x12);
      }
    }
  }
  pbVar7 = pbVar23 + (int)pbVar22;
  if (puVar11 < (undefined1 *)0x20) {
    if (puVar11 + -9 < (undefined1 *)0x5) goto LAB_01289984;
LAB_01289b98:
    if (&DAT_00000080 <= puVar11) {
      uVar16 = (uint)puVar11 >> 8;
      if (uVar16 < 0x20) {
        if (uVar16 == 0) {
          bVar3 = (&DAT_00533bcd)[(uint)puVar11 & 0xff] & 1;
          goto joined_r0x01289d48;
        }
        if ((uVar16 == 0x16) && (puVar11 == (undefined1 *)0x1680)) goto LAB_01289984;
      }
      else if (uVar16 == 0x20) {
        bVar3 = (&DAT_00533bcd)[(uint)puVar11 & 0xff] & 2;
joined_r0x01289d48:
        if (bVar3 != 0) goto LAB_01289984;
      }
      else if ((uVar16 == 0x30) && (puVar11 == (undefined1 *)0x3000)) goto LAB_01289984;
    }
    pbVar21 = (byte *)0x0;
    pbVar14 = pbVar23;
    do {
      local_50 = pbVar21;
      if (pbVar14 == pbVar7) {
        local_50 = pbVar22;
        break;
      }
      pbVar12 = pbVar14 + 1;
      uVar16 = (uint)*pbVar14;
      if (0x7fffffff < (uint)(int)(char)*pbVar14) {
        if (uVar16 < 0xe0) {
          uVar16 = pbVar14[1] & 0x3f | (uVar16 & 0x1f) << 6;
          pbVar12 = pbVar14 + 2;
        }
        else {
          uVar20 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (uVar16 < 0xf0) {
            uVar16 = uVar20 | (uVar16 & 0x1f) << 0xc;
            pbVar12 = pbVar14 + 3;
          }
          else {
            uVar16 = pbVar14[3] & 0x3f | uVar20 << 6 | (uVar16 & 7) << 0x12;
            pbVar12 = pbVar14 + 4;
          }
        }
      }
      if ((uVar16 - 9 < 0x18) && ((1 << (uVar16 - 9 & 0xff) & 0x80001fU) != 0)) break;
      uVar20 = 0;
      if (0x7f < uVar16) {
        uVar1 = uVar16 >> 8;
        if (uVar1 < 0x20) {
          if (uVar1 == 0) {
            uVar20 = (uint)(byte)(&DAT_00533bcd)[uVar16 & 0xff];
          }
          else if (uVar1 == 0x16) {
            iVar18 = uVar16 - 0x1680;
            goto LAB_01289e38;
          }
        }
        else if (uVar1 == 0x20) {
          uVar20 = ((byte)(&DAT_00533bcd)[uVar16 & 0xff] & 3) >> 1;
        }
        else if (uVar1 == 0x30) {
          iVar18 = uVar16 - 0x3000;
LAB_01289e38:
          uVar20 = (uint)(iVar18 == 0);
        }
      }
      if (uVar16 == 0x25) break;
      pbVar21 = pbVar12 + ((int)local_50 - (int)pbVar14);
      pbVar14 = pbVar12;
    } while ((uVar20 & 1) == 0);
    if (local_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: nextspec > 0",0x1e,&DAT_01c26054);
    }
    pbVar7 = pbVar23 + (int)local_50;
    if (local_50 < pbVar22) {
      if (-0x41 < (char)*pbVar7) goto LAB_01289eb0;
    }
    else if (pbVar22 == local_50) {
LAB_01289eb0:
      uVar10 = 0;
LAB_01289b0c:
      local_58 = (byte *)CONCAT31(local_58._1_3_,uVar10);
      uVar24 = CONCAT44(pbVar22 + -(int)local_50,pbVar7);
      local_54 = pbVar23;
      goto LAB_01289b20;
    }
    puVar8 = &DAT_01c26064;
LAB_01289ac8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(pbVar23,pbVar22,0,local_50,puVar8);
  }
  if (puVar11 == (undefined1 *)0x20) {
LAB_01289984:
    local_50 = (byte *)0x0;
    pbVar21 = pbVar23;
    do {
      pbVar14 = pbVar21 + 1;
      uVar16 = (uint)*pbVar21;
      if (0x7fffffff < (uint)(int)(char)*pbVar21) {
        if (uVar16 < 0xe0) {
          uVar16 = pbVar21[1] & 0x3f | (uVar16 & 0x1f) << 6;
          pbVar14 = pbVar21 + 2;
        }
        else {
          uVar20 = pbVar21[2] & 0x3f | (pbVar21[1] & 0x3f) << 6;
          if (uVar16 < 0xf0) {
            uVar16 = uVar20 | (uVar16 & 0x1f) << 0xc;
            pbVar14 = pbVar21 + 3;
          }
          else {
            uVar16 = pbVar21[3] & 0x3f | uVar20 << 6 | (uVar16 & 7) << 0x12;
            pbVar14 = pbVar21 + 4;
          }
        }
      }
      if ((4 < uVar16 - 9) && (uVar16 != 0x20)) {
        if (uVar16 < 0x80) goto LAB_01289aa0;
        uVar20 = uVar16 >> 8;
        if (uVar20 < 0x20) {
          if (uVar20 == 0) {
            bVar3 = (&DAT_00533bcd)[uVar16 & 0xff] & 1;
            goto joined_r0x01289a94;
          }
          if ((uVar20 != 0x16) || (uVar16 != 0x1680)) goto LAB_01289aa0;
        }
        else if (uVar20 == 0x20) {
          bVar3 = (&DAT_00533bcd)[uVar16 & 0xff] & 2;
joined_r0x01289a94:
          if (bVar3 == 0) goto LAB_01289aa0;
        }
        else if ((uVar20 != 0x30) || (uVar16 != 0x3000)) goto LAB_01289aa0;
      }
      local_50 = pbVar14 + ((int)local_50 - (int)pbVar21);
      pbVar21 = pbVar14;
    } while (pbVar14 != pbVar7);
    local_50 = pbVar22;
LAB_01289aa0:
    if (local_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: nextspec > 0",0x1e,&DAT_01c26074);
    }
    pbVar7 = pbVar23 + (int)local_50;
    if (local_50 < pbVar22) {
      if (-0x41 < (char)*pbVar7) goto LAB_01289b04;
    }
    else if (pbVar22 == local_50) {
LAB_01289b04:
      uVar10 = 2;
      goto LAB_01289b0c;
    }
    puVar8 = &DAT_01c26084;
    goto LAB_01289ac8;
  }
  if (puVar11 != (undefined1 *)0x25) {
    if (puVar11 == &DAT_00110000) goto LAB_01289af4;
    goto LAB_01289b98;
  }
  pbVar21 = pbVar23 + 1;
  if (pbVar22 == &DAT_00000001) {
    uVar10 = 6;
    pbVar14 = (byte *)0x0;
    if (*(char *)(param_2 + 2) == '\x01') {
      local_50 = &DAT_00000001;
      uVar10 = 0;
      local_54 = pbVar23;
    }
    local_58 = (byte *)CONCAT31(local_58._1_3_,uVar10);
LAB_01289b90:
    uVar24 = CONCAT44(pbVar14,pbVar21);
    goto LAB_01289b20;
  }
  bVar3 = *pbVar21;
  if ((char)bVar3 < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(pbVar23,pbVar22,1,pbVar22,&DAT_01c25eac);
  }
  pbVar14 = pbVar22 + -1;
  puVar11 = (undefined1 *)(uint)bVar3;
  pbVar12 = &DAT_00000001;
  if (0x7fffffff < (uint)(int)(char)bVar3) {
    if (puVar11 < (undefined1 *)0xe0) {
      puVar11 = (undefined1 *)(pbVar23[2] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
    }
    else {
      uVar16 = pbVar23[3] & 0x3f | (pbVar23[2] & 0x3f) << 6;
      if (puVar11 < (undefined1 *)0xf0) {
        puVar11 = (undefined1 *)(uVar16 | ((uint)puVar11 & 0x1f) << 0xc);
      }
      else {
        puVar11 = (undefined1 *)(pbVar23[4] & 0x3f | uVar16 << 6 | ((uint)puVar11 & 7) << 0x12);
        if (puVar11 == &DAT_00110000) {
          FUN_0128ab5c(&local_58,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,pbVar14);
          goto LAB_01289b90;
        }
      }
    }
    if ((undefined1 *)0x7f < puVar11) {
      pbVar12 = (byte *)0x2;
    }
    if (((undefined1 *)0x7ff < puVar11) &&
       (pbVar12 = &SUB_00000004, puVar11 < (undefined1 *)0x10000)) {
      pbVar12 = &DAT_00000003;
    }
  }
  if (pbVar12 < pbVar14) {
    if ((char)pbVar21[(int)pbVar12] < -0x40) goto LAB_01289ef0;
  }
  else if (pbVar14 != pbVar12) {
LAB_01289ef0:
    puVar8 = &DAT_01c25ebc;
    goto LAB_0128a034;
  }
  pbVar14 = pbVar14 + -(int)pbVar12;
  pbVar21 = pbVar21 + (int)pbVar12;
  bVar4 = true;
  bVar15 = false;
  if ((undefined1 *)0x2f < puVar11) {
    if (puVar11 == (undefined1 *)0x30) {
      uVar10 = 1;
    }
    else {
      if (puVar11 != (undefined1 *)0x5f) goto LAB_01289f50;
      uVar10 = 2;
    }
LAB_01289f70:
    if (pbVar21 == pbVar7) {
LAB_0128a0a4:
      uVar24 = CONCAT44(pbVar14,pbVar21);
      FUN_0128ab5c(&local_58,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,pbVar14);
      goto LAB_01289b20;
    }
    pbVar12 = &DAT_00000001;
    puVar11 = (undefined1 *)(uint)*pbVar21;
    if (0x7fffffff < (uint)(int)(char)*pbVar21) {
      if (puVar11 < (undefined1 *)0xe0) {
        puVar11 = (undefined1 *)(pbVar21[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
      }
      else {
        uVar16 = pbVar21[2] & 0x3f | (pbVar21[1] & 0x3f) << 6;
        if (puVar11 < (undefined1 *)0xf0) {
          puVar11 = (undefined1 *)(uVar16 | ((uint)puVar11 & 0x1f) << 0xc);
        }
        else {
          puVar11 = (undefined1 *)(pbVar21[3] & 0x3f | uVar16 << 6 | ((uint)puVar11 & 7) << 0x12);
          if (puVar11 == &DAT_00110000) goto LAB_0128a0a4;
        }
      }
      if ((undefined1 *)0x7f < puVar11) {
        pbVar12 = (byte *)0x2;
      }
      if (((undefined1 *)0x7ff < puVar11) &&
         (pbVar12 = &SUB_00000004, puVar11 < (undefined1 *)0x10000)) {
        pbVar12 = &DAT_00000003;
      }
    }
    if (pbVar12 < pbVar14) {
      if (-0x41 < (char)pbVar21[(int)pbVar12]) goto LAB_0128a044;
    }
    else if (pbVar14 == pbVar12) {
LAB_0128a044:
      pbVar21 = pbVar21 + (int)pbVar12;
      pbVar14 = pbVar14 + -(int)pbVar12;
      uVar25 = CONCAT44(pbVar14,pbVar21);
      if (!bVar15) goto LAB_0128a0c4;
      if (puVar11 != (undefined1 *)0x7a) goto LAB_0128a0a4;
      uVar6 = 5;
      goto LAB_0128a060;
    }
    puVar8 = &DAT_01c25ecc;
LAB_0128a034:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(pbVar21,pbVar14,pbVar12,pbVar14,puVar8);
  }
  if (puVar11 == (undefined1 *)0x23) {
    bVar4 = false;
    uVar10 = 3;
    bVar15 = true;
    goto LAB_01289f70;
  }
  uVar10 = 0;
  if (puVar11 == (undefined1 *)0x2d) goto LAB_01289f70;
LAB_01289f50:
  uVar10 = 3;
  bVar4 = false;
LAB_0128a0c4:
  uVar25 = CONCAT44(pbVar14,pbVar21);
  uVar24 = uVar25;
  switch(puVar11) {
  case (undefined1 *)0x25:
    uVar10 = 0;
    local_44 = (byte *)0x4049a9;
    goto LAB_0128a520;
  default:
    FUN_0128ab5c(&local_48,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,pbVar14);
    if (bVar4) goto LAB_0128aa70;
    goto LAB_0128a7f8;
  case (undefined1 *)0x2b:
    uVar6 = 0x1605;
    goto LAB_0128a060;
  case (undefined1 *)0x2e:
    local_34 = pbVar21 + (int)pbVar14;
    local_38 = pbVar21;
    puVar11 = (undefined1 *)FUN_00734c78(&local_38);
    if (puVar11 == &DAT_00110000) {
LAB_0128a618:
      FUN_0128ab5c(&local_58,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,
                   (int)((ulonglong)uVar24 >> 0x20));
      goto LAB_01289b20;
    }
    uVar17 = 1;
    if ((undefined1 *)0x7f < puVar11) {
      uVar17 = 2;
    }
    if (((undefined1 *)0x7ff < puVar11) && (uVar17 = 4, puVar11 < (undefined1 *)0x10000)) {
      uVar17 = 3;
    }
    uVar24 = FUN_0128ad78(pbVar21,pbVar14,uVar17,&DAT_01c25fe4);
    iVar18 = (int)((ulonglong)uVar24 >> 0x20);
    pbVar7 = (byte *)uVar24;
    if ((int)puVar11 < 0x39) {
      if (puVar11 == (undefined1 *)0x33) {
        local_2c = pbVar7 + iVar18;
        local_30 = pbVar7;
        puVar11 = (undefined1 *)FUN_00734c78(&local_30);
        if (puVar11 == &DAT_00110000) goto LAB_0128a618;
        puVar8 = &DAT_01c25ff4;
        if ((undefined1 *)0x7f < puVar11) goto LAB_0128aa20;
        uVar24 = FUN_0128ad78(pbVar7,iVar18,1,&DAT_01c25ff4);
        if (puVar11 == (undefined1 *)0x66) {
          uVar6 = 0xb05;
          goto LAB_0128a904;
        }
      }
      else if (puVar11 == (undefined1 *)0x36) {
        local_2c = pbVar7 + iVar18;
        local_30 = pbVar7;
        puVar11 = (undefined1 *)FUN_00734c78(&local_30);
        if (puVar11 == &DAT_00110000) goto LAB_0128a618;
        puVar8 = &DAT_01c26004;
        if ((undefined1 *)0x7f < puVar11) goto LAB_0128aa20;
        uVar24 = FUN_0128ad78(pbVar7,iVar18,1,&DAT_01c26004);
        if (puVar11 == (undefined1 *)0x66) {
          uVar6 = 0xc05;
          goto LAB_0128a904;
        }
      }
    }
    else if (puVar11 == (undefined1 *)0x39) {
      local_2c = pbVar7 + iVar18;
      local_30 = pbVar7;
      puVar11 = (undefined1 *)FUN_00734c78(&local_30);
      if (puVar11 == &DAT_00110000) goto LAB_0128a618;
      puVar8 = &DAT_01c26014;
      if ((undefined1 *)0x7f < puVar11) goto LAB_0128aa20;
      uVar24 = FUN_0128ad78(pbVar7,iVar18,1,&DAT_01c26014);
      if (puVar11 == (undefined1 *)0x66) {
        uVar6 = 0xd05;
        goto LAB_0128a904;
      }
    }
    else if (puVar11 == (undefined1 *)0x66) {
      uVar6 = 0xa05;
LAB_0128a904:
      local_48 = (byte *)CONCAT22(local_48._2_2_,uVar6);
      goto LAB_0128aa68;
    }
    goto LAB_0128aa48;
  case (undefined1 *)0x33:
    local_2c = pbVar21 + (int)pbVar14;
    local_30 = pbVar21;
    puVar11 = (undefined1 *)FUN_00734c78(&local_30);
    uVar24 = CONCAT44(pbVar14,pbVar21);
    if (puVar11 == &DAT_00110000) goto LAB_0128a618;
    puVar8 = &DAT_01c26024;
    uVar24 = uVar25;
    if (puVar11 < (undefined1 *)0x80) {
      uVar24 = FUN_0128ad78(pbVar21,pbVar14,1,&DAT_01c26024);
      if (puVar11 == (undefined1 *)0x66) {
        uVar6 = 0x105;
        goto LAB_0128a904;
      }
    }
    else {
LAB_0128aa20:
      uVar17 = 4;
      if (puVar11 < (undefined1 *)0x10000) {
        uVar17 = 3;
      }
      if (puVar11 < (undefined1 *)0x800) {
        uVar17 = 2;
      }
      uVar24 = FUN_0128ad78((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar17,puVar8);
    }
    goto LAB_0128aa48;
  case (undefined1 *)0x36:
    local_2c = pbVar21 + (int)pbVar14;
    local_30 = pbVar21;
    puVar11 = (undefined1 *)FUN_00734c78(&local_30);
    uVar24 = CONCAT44(pbVar14,pbVar21);
    if (puVar11 == &DAT_00110000) goto LAB_0128a618;
    puVar8 = &DAT_01c26034;
    uVar24 = uVar25;
    if ((undefined1 *)0x7f < puVar11) goto LAB_0128aa20;
    uVar24 = FUN_0128ad78(pbVar21,pbVar14,1,&DAT_01c26034);
    if (puVar11 == (undefined1 *)0x66) {
      uVar6 = 0x205;
      goto LAB_0128a904;
    }
    goto LAB_0128aa48;
  case (undefined1 *)0x39:
    local_2c = pbVar21 + (int)pbVar14;
    local_30 = pbVar21;
    puVar11 = (undefined1 *)FUN_00734c78(&local_30);
    uVar24 = CONCAT44(pbVar14,pbVar21);
    if (puVar11 == &DAT_00110000) goto LAB_0128a618;
    puVar8 = &DAT_01c26044;
    uVar24 = uVar25;
    if ((undefined1 *)0x7f < puVar11) goto LAB_0128aa20;
    uVar24 = FUN_0128ad78(pbVar21,pbVar14,1,&DAT_01c26044);
    if (puVar11 == (undefined1 *)0x66) {
      uVar6 = 0x305;
      goto LAB_0128a904;
    }
LAB_0128aa48:
    FUN_0128ab5c(&local_48,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,
                 (int)((ulonglong)uVar24 >> 0x20));
LAB_0128aa68:
    if (!bVar4) goto LAB_0128a7f8;
LAB_0128aa70:
    if ((char)local_48 == '\x04') {
      uVar5 = local_48._1_1_;
      goto LAB_0128a77c;
    }
    goto LAB_0128a06c;
  case (undefined1 *)0x3a:
    if (&DAT_00000003 <= pbVar14) {
      iVar18 = thunk_FUN_01bed842("::z",pbVar21,3);
      if (iVar18 == 0) {
        uVar25 = FUN_0128ad78(pbVar21,pbVar14,3,&DAT_01c25fd4);
        uVar6 = 0x1105;
      }
      else {
LAB_0128a84c:
        if (*(short *)pbVar21 != 0x7a3a) goto LAB_0128a85c;
        uVar25 = FUN_0128ad78(pbVar21,pbVar14,2,&DAT_01c25fc4);
        uVar6 = 0x1005;
      }
      goto LAB_0128a060;
    }
    if (pbVar14 != (byte *)0x0) {
      if (pbVar14 == (byte *)0x2) goto LAB_0128a84c;
LAB_0128a85c:
      if (*pbVar21 == 0x7a) {
        uVar25 = FUN_0128ad78(pbVar21,pbVar14,1,&DAT_01c25fb4);
        uVar6 = 0xf05;
        goto LAB_0128a060;
      }
    }
    FUN_0128ab5c(&local_48,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,pbVar14);
    goto LAB_0128aa68;
  case (undefined1 *)0x41:
    uVar6 = 0x705;
    goto LAB_0128a060;
  case (undefined1 *)0x42:
    uVar6 = 0x505;
    goto LAB_0128a060;
  case (undefined1 *)0x43:
    uVar5 = 1;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x104);
    break;
  case (undefined1 *)0x44:
    *(undefined **)(param_2 + 1) = &DAT_01c25edc;
    *(undefined4 *)((int)param_2 + 0xc) = 4;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    uVar6 = 0x704;
    goto LAB_0128a060;
  case (undefined1 *)0x46:
    *(undefined **)(param_2 + 1) = &DAT_01c25f0c;
    *(undefined4 *)((int)param_2 + 0xc) = 4;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10004);
    goto LAB_0128a064;
  case (undefined1 *)0x47:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x304);
    uVar5 = 3;
    break;
  case (undefined1 *)0x48:
    uVar5 = 1;
    goto LAB_0128a2fc;
  case (undefined1 *)0x49:
    uVar5 = 1;
    goto LAB_0128a678;
  case (undefined1 *)0x4d:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1104);
    uVar5 = 0x11;
    break;
  case (undefined1 *)0x50:
    uVar6 = 0x805;
    goto LAB_0128a060;
  case (undefined1 *)0x52:
    uVar17 = 2;
    puVar8 = &DAT_01c25f3c;
    goto LAB_0128a714;
  case (undefined1 *)0x53:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1204);
    uVar5 = 0x12;
    break;
  case (undefined1 *)0x54:
    uVar17 = 4;
    puVar8 = &DAT_01c25f54;
LAB_0128a714:
    *(undefined **)(param_2 + 1) = puVar8;
    *(undefined4 *)((int)param_2 + 0xc) = uVar17;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    uVar6 = 0xf04;
    goto LAB_0128a060;
  case (undefined1 *)0x55:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x904);
    uVar5 = 9;
    break;
  case (undefined1 *)0x56:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xb04);
    uVar5 = 0xb;
    break;
  case (undefined1 *)0x57:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xa04);
    uVar5 = 10;
    break;
  case (undefined1 *)0x58:
    puVar8 = &DAT_01c260e0;
    goto LAB_0128a7a8;
  case (undefined1 *)0x59:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,4);
    uVar5 = 0;
    break;
  case (undefined1 *)0x5a:
    uVar6 = 0xe05;
    goto LAB_0128a060;
  case (undefined1 *)0x61:
    uVar6 = 0x605;
    goto LAB_0128a060;
  case (undefined1 *)0x62:
  case (undefined1 *)0x68:
    uVar6 = 0x405;
    goto LAB_0128a060;
  case (undefined1 *)0x63:
    uVar17 = 0xc;
    puVar8 = &DAT_01c2611c;
    goto LAB_0128a7ac;
  case (undefined1 *)0x64:
    uVar5 = 1;
    goto LAB_0128a6f4;
  case (undefined1 *)0x65:
    uVar5 = 2;
LAB_0128a6f4:
    local_48 = (byte *)CONCAT22(CONCAT11(local_48._3_1_,uVar5),0x804);
    uVar5 = 8;
    break;
  case (undefined1 *)0x66:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1304);
    uVar5 = 0x13;
    break;
  case (undefined1 *)0x67:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x504);
    uVar5 = 5;
    break;
  case (undefined1 *)0x6a:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xe04);
    uVar5 = 0xe;
    break;
  case (undefined1 *)0x6b:
    uVar5 = 2;
LAB_0128a2fc:
    local_48 = (byte *)CONCAT22(CONCAT11(local_48._3_1_,uVar5),0xf04);
    uVar5 = 0xf;
    break;
  case (undefined1 *)0x6c:
    uVar5 = 2;
LAB_0128a678:
    local_48 = (byte *)CONCAT22(CONCAT11(local_48._3_1_,uVar5),0x1004);
    uVar5 = 0x10;
    break;
  case (undefined1 *)0x6d:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x704);
    uVar5 = 7;
    break;
  case (undefined1 *)0x6e:
    local_44 = (byte *)0x533bb6;
    goto LAB_0128a298;
  case (undefined1 *)0x70:
    uVar6 = 0x905;
    goto LAB_0128a060;
  case (undefined1 *)0x71:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x604);
    uVar5 = 6;
    break;
  case (undefined1 *)0x72:
    uVar17 = 6;
    puVar8 = &DAT_01c25e58;
    goto LAB_0128a7ac;
  case (undefined1 *)0x73:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x1404);
    uVar5 = 0x14;
    break;
  case (undefined1 *)0x74:
    local_44 = &DAT_00522133;
LAB_0128a298:
    uVar10 = 2;
LAB_0128a520:
    local_40 = &DAT_00000001;
    local_48 = (byte *)CONCAT31(local_48._1_3_,uVar10);
    goto LAB_0128a064;
  case (undefined1 *)0x75:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xd04);
    uVar5 = 0xd;
    break;
  case (undefined1 *)0x76:
    *(undefined **)(param_2 + 1) = &DAT_01c25f84;
    *(undefined4 *)((int)param_2 + 0xc) = 4;
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x20000);
    uVar6 = 0x804;
    goto LAB_0128a060;
  case (undefined1 *)0x77:
    local_48 = (byte *)((uint)local_48._3_1_ << 0x18);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0xc04);
    uVar5 = 0xc;
    break;
  case (undefined1 *)0x78:
    puVar8 = &DAT_01c260a4;
LAB_0128a7a8:
    uVar17 = 4;
LAB_0128a7ac:
    *(undefined **)(param_2 + 1) = puVar8 + 0xc;
    *(undefined4 *)((int)param_2 + 0xc) = uVar17;
    FUN_0128abd8(&local_48);
    goto LAB_0128a064;
  case (undefined1 *)0x79:
    local_48 = (byte *)CONCAT13(local_48._3_1_,0x10000);
    local_48 = (byte *)CONCAT22(local_48._2_2_,0x204);
    uVar5 = 2;
    break;
  case (undefined1 *)0x7a:
    uVar6 = 0x1305;
LAB_0128a060:
    local_48 = (byte *)CONCAT22(local_48._2_2_,uVar6);
    uVar24 = uVar25;
LAB_0128a064:
    if (!bVar4) goto LAB_0128a7f8;
LAB_0128a06c:
    FUN_0128ab5c(&local_30,*(undefined1 *)(param_2 + 2),pbVar23,pbVar22,
                 (int)((ulonglong)uVar24 >> 0x20));
    local_58 = local_30;
    local_54 = local_2c;
    local_50 = pbStack_28;
    goto LAB_0128a790;
  }
  if (bVar4) {
LAB_0128a77c:
    local_58 = (byte *)CONCAT31(CONCAT12(local_58._3_1_,CONCAT11(uVar10,uVar5)),4);
LAB_0128a790:
    FUN_01279988(&local_48);
  }
  else {
LAB_0128a7f8:
    local_58 = local_48;
    local_54 = local_44;
    local_50 = local_40;
  }
LAB_01289b20:
  cVar2 = (char)local_58;
  if ((char)local_58 == '\a') {
    *param_1 = '\a';
  }
  else {
    FUN_01bed4e2(param_1 + 1,(int)&local_58 + 1,0xb);
    *param_2 = uVar24;
    *param_1 = cVar2;
  }
  return;
}

