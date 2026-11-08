// FUN_019c94fc @ 019c94fc size=1732 calls_out=21 calls_in=2
// strings: /dev/mapper/ | /dev/sd | /dev/vd | /dev/ | /dev/ | /sys/block/

undefined8 FUN_019c94fc(undefined4 param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  uint local_38;
  byte *local_34;
  uint local_30;
  undefined2 local_2c;
  
  FUN_012fbd94(&local_38,param_1,param_2);
  uVar18 = local_30;
  pbVar16 = local_34;
  uVar17 = local_38;
  FUN_019ac8ac(&local_38,param_1,param_2);
  uVar15 = local_30;
  pbVar14 = local_34;
  if (uVar17 != 0) {
    uVar18 = 0;
    pbVar16 = &DAT_00000001;
  }
  if (local_38 == 0x80000000) {
    pbVar13 = (byte *)0x0;
    if ((int)param_2 < 0) {
LAB_019c9560:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(pbVar13,param_2);
    }
    pbVar13 = &DAT_00000001;
    if (param_2 == 0) {
      uVar17 = 0;
    }
    else {
      pbVar4 = (byte *)FUN_01298504(param_2,1);
      if (pbVar4 == (byte *)0x0) goto LAB_019c9560;
      pbVar13 = pbVar4;
      uVar17 = param_2;
    }
    FUN_01bed4e2(pbVar13,param_1,param_2);
    FUN_0069263c(pbVar14,uVar15);
  }
  else {
    param_2 = local_30;
    uVar17 = local_38;
    pbVar13 = local_34;
  }
  FUN_012fbd94(&local_38,pbVar13,param_2);
  uVar3 = local_30;
  pbVar14 = local_34;
  uVar15 = local_30;
  if (local_38 != 0) {
    uVar15 = 0;
    pbVar14 = &DAT_00000001;
  }
  uVar19 = CONCAT44(uVar18,pbVar14);
  if (uVar18 < 0xc) {
    if (uVar18 < 7) {
LAB_019c9664:
      uVar19 = FUN_018a0130(pbVar14,uVar15,"/dev/",5);
    }
    else {
LAB_019c9624:
      iVar7 = thunk_FUN_01bed842("/dev/sd",pbVar16,7);
      if ((iVar7 == 0) || (iVar7 = thunk_FUN_01bed842("/dev/vd",pbVar16,7), iVar7 == 0)) {
        uVar19 = FUN_018a0130(pbVar14,uVar15,"/dev/",5);
        pbVar14 = (byte *)uVar19;
        pbVar16 = pbVar14 + (int)(uVar19 >> 0x20);
        do {
          pbVar4 = pbVar16;
          if (pbVar14 == pbVar4) {
            uVar19 = uVar19 & 0xffffffff;
            goto LAB_019c9734;
          }
          pbVar16 = pbVar4 + -1;
          uVar18 = (uint)(char)*pbVar16;
          if (0x7fffffff < uVar18) {
            pbVar16 = pbVar4 + -2;
            bVar2 = *pbVar16;
            if ((char)bVar2 < -0x40) {
              pbVar16 = pbVar4 + -3;
              bVar1 = *pbVar16;
              if ((char)bVar1 < -0x40) {
                pbVar16 = pbVar4 + -4;
                uVar15 = (int)(char)bVar1 & 0x3fU | (*pbVar16 & 7) << 6;
              }
              else {
                uVar15 = bVar1 & 0xf;
              }
              uVar15 = (int)(char)bVar2 & 0x3fU | uVar15 << 6;
            }
            else {
              uVar15 = bVar2 & 0x1f;
            }
            uVar18 = uVar18 & 0x3f | uVar15 << 6;
          }
        } while (0xfffffff4 < uVar18 - 0x3a && uVar18 != 0x2f);
        uVar19 = CONCAT44((int)pbVar4 - (int)pbVar14,pbVar14);
      }
      else {
        if (uVar18 < 9) goto LAB_019c9664;
        iVar7 = thunk_FUN_01bed842("/dev/nvme",pbVar16,9);
        if (iVar7 == 0) {
          uVar18 = 0;
          do {
            uVar10 = uVar15 - uVar18;
            if (uVar10 < 8) {
              uVar8 = 0;
              if (uVar10 == 0) {
                uVar19 = 0;
              }
              else {
                do {
                  if ((pbVar14 + uVar18)[uVar8] == 0x70) {
                    uVar19 = CONCAT44(uVar8,1);
                    goto LAB_019c9b1c;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar10 != uVar8);
                uVar19 = (ulonglong)uVar10 << 0x20;
              }
            }
            else {
              uVar19 = FUN_01307168(0x70,pbVar14 + uVar18);
            }
LAB_019c9b1c:
            if ((uVar19 & 1) == 0) break;
            uVar18 = (int)(uVar19 >> 0x20) + uVar18;
            if ((uVar18 < uVar15) && (pbVar14[uVar18] == 0x70)) {
              puVar6 = &DAT_01d2847c;
              if ((uVar18 < 5) || ((char)pbVar14[5] < -0x40)) goto LAB_019c9b74;
              goto LAB_019c9bac;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 <= uVar15);
          if (uVar15 < 6) {
            uVar18 = 5;
            if (uVar15 != 5) {
LAB_019c9b68:
              puVar6 = &DAT_01d2846c;
              uVar18 = uVar15;
LAB_019c9b74:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(pbVar14,uVar15,5,uVar18,puVar6);
            }
          }
          else {
            uVar18 = uVar3;
            if ((char)pbVar14[5] < -0x40) goto LAB_019c9b68;
          }
LAB_019c9bac:
          uVar19 = CONCAT44(uVar18 - 5,pbVar14 + 5);
        }
        else {
          iVar7 = thunk_FUN_01bed842("/dev/root",pbVar16,9);
          if (iVar7 == 0) goto LAB_019c9a00;
          if ((uVar18 < 0xb) || (iVar7 = thunk_FUN_01bed842("/dev/mmcblk",pbVar16,0xb), iVar7 != 0))
          goto LAB_019c9664;
          uVar19 = FUN_019c9c74(pbVar14,uVar15);
          if ((uVar19 & 1) == 0) {
            uVar19 = FUN_019c9d24(pbVar14,uVar15);
          }
          else {
            uVar19 = FUN_019c9d70(pbVar14,uVar15,(int)(uVar19 >> 0x20));
          }
        }
      }
    }
  }
  else {
    iVar7 = thunk_FUN_01bed842("/dev/mapper/",pbVar16,0xc);
    if (iVar7 != 0) goto LAB_019c9624;
LAB_019c9a00:
    if ((uVar15 != uVar18) || (iVar7 = thunk_FUN_01bed842(pbVar14,pbVar16,uVar18), iVar7 != 0)) {
      uVar20 = FUN_019c94fc(pbVar14,uVar15);
      goto LAB_019c9aa8;
    }
  }
LAB_019c9734:
  FUN_019afae4(&local_38,"/sys/block/",0xb);
  FUN_019a66e4(&local_48,local_34,local_30,(int)uVar19,(int)(uVar19 >> 0x20));
  uVar18 = local_44;
  FUN_019a66e4(&local_54,local_44,local_40,&DAT_0056a648,0x10);
  FUN_0134bd64(local_48,uVar18);
  FUN_0134bd64(local_38,local_34);
  local_38 = 0;
  local_2c = 0;
  local_34 = &DAT_000001b6;
  local_30 = 1;
  FUN_019a581c(&local_48,&local_38,local_50,local_4c);
  if (((char)local_48 == '\x04') || (((uint)local_48 & 0xff) == 4)) {
    FUN_019ca9c4(&local_38,local_3c,8);
    FUN_01bf01d6(local_44);
    uVar18 = local_38;
    FUN_0134bd64(local_54,local_50);
    if (uVar18 == 0x80000000) goto LAB_019c9858;
    uVar15 = local_30;
    pbVar16 = local_34;
  }
  else {
    local_34 = local_48;
    local_30 = local_44;
    FUN_0134bd64(local_54,local_50);
LAB_019c9858:
    FUN_0069263c((uint)local_34 & 0xff,local_30);
    pbVar16 = &DAT_00000001;
    uVar15 = 0;
    uVar18 = 0;
  }
  uVar19 = FUN_013245a0(pbVar16,uVar15);
  iVar7 = (int)(uVar19 >> 0x20);
  pcVar5 = (char *)uVar19;
  uVar12 = 2;
  if (iVar7 == 0) {
LAB_019c98a0:
    local_54 = -1;
  }
  else {
    if (iVar7 == 1) {
      cVar9 = *pcVar5;
      if ((cVar9 == '+') || (cVar9 == '-')) goto LAB_019c98a0;
    }
    else {
      cVar9 = *pcVar5;
    }
    if (cVar9 == '-') {
      iVar7 = iVar7 + -1;
      pbVar14 = (byte *)(pcVar5 + 1);
      if (uVar19 < 0x900000000) {
        if (iVar7 == 0) goto LAB_019c9a90;
        local_54 = 0;
        do {
          bVar2 = *pbVar14;
          if (9 < bVar2 - 0x30) goto LAB_019c98a0;
          pbVar14 = pbVar14 + 1;
          iVar7 = iVar7 + -1;
          local_54 = local_54 * 10 - (bVar2 - 0x30);
        } while (iVar7 != 0);
      }
      else {
        local_54 = 0;
        do {
          iVar11 = (int)((longlong)local_54 * 10);
          if ((((int)((ulonglong)((longlong)local_54 * 10) >> 0x20) != iVar11 >> 0x1f) ||
              (uVar15 = *pbVar14 - 0x30, 9 < uVar15)) ||
             (local_54 = iVar11 - uVar15, SBORROW4(iVar11,uVar15))) goto LAB_019c98a0;
          iVar7 = iVar7 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iVar7 != 0);
      }
LAB_019c9a78:
      if (local_54 != 0) {
        if (local_54 == 1) {
          uVar12 = 0;
        }
        goto LAB_019c9a94;
      }
    }
    else {
      if (cVar9 == '+') {
        uVar19 = CONCAT44(iVar7 + -1,pcVar5 + 1);
      }
      if (0x7ffffffff < uVar19) {
        local_54 = 0;
        do {
          iVar7 = (int)((longlong)local_54 * 10);
          if ((((int)((ulonglong)((longlong)local_54 * 10) >> 0x20) != iVar7 >> 0x1f) ||
              (uVar15 = *(byte *)uVar19 - 0x30, 9 < uVar15)) ||
             (local_54 = iVar7 + uVar15, SCARRY4(iVar7,uVar15))) goto LAB_019c98a0;
          iVar7 = (int)(uVar19 >> 0x20) + -1;
          uVar19 = CONCAT44(iVar7,(byte *)uVar19 + 1);
        } while (iVar7 != 0);
        goto LAB_019c9a78;
      }
      if ((int)(uVar19 >> 0x20) != 0) {
        local_54 = 0;
        do {
          uVar15 = *(byte *)uVar19 - 0x30;
          if (9 < uVar15) goto LAB_019c98a0;
          iVar7 = (int)(uVar19 >> 0x20) + -1;
          uVar19 = CONCAT44(iVar7,(byte *)uVar19 + 1);
          local_54 = uVar15 + local_54 * 10;
        } while (iVar7 != 0);
        goto LAB_019c9a78;
      }
    }
LAB_019c9a90:
    uVar12 = 1;
  }
LAB_019c9a94:
  uVar20 = CONCAT44(local_54,uVar12);
  FUN_0134bd64(uVar17,pbVar13);
  uVar17 = uVar18;
  pbVar13 = pbVar16;
LAB_019c9aa8:
  FUN_0134bd64(uVar17,pbVar13);
  return uVar20;
}

