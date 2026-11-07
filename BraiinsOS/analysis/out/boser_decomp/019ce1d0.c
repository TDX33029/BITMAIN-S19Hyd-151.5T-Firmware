// FUN_019ce1d0 @ 019ce1d0 size=1556 calls_out=4 calls_in=0
// strings: when `range:standard` is used

void FUN_019ce1d0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  uint local_30;
  int local_2c;
  
  uVar1 = *(undefined1 *)(param_4 + 3);
  uVar9 = (int)param_3 >> 10;
  if (*(char *)(param_4 + 1) == '\x01') {
    iVar10 = uVar9 + 999999;
    iVar5 = (int)((ulonglong)((longlong)iVar10 * -0x51eb851f) >> 0x20);
    lVar2 = (longlong)iVar10 * 0x5b5 + ((ulonglong)((longlong)iVar10 * 0x5b5) >> 0x3e);
    uVar3 = (param_3 & 0x1ff) + ((iVar5 >> 5) - (iVar5 >> 0x1f)) + iVar10 / 400 +
            ((uint)lVar2 >> 2 | (int)((ulonglong)lVar2 >> 0x20) << 0x1e) + 0xea551bcd;
    iVar5 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x6db6db6d >> 0x20);
    uVar3 = ((param_3 & 0x1ff) -
            (uint)(byte)(&DAT_005391de)[uVar3 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7]) + 10 &
            0xffff;
    if (uVar3 * 0x249300 >> 0x18 == 0x35) {
      uVar3 = 1;
      iVar5 = (int)uVar9 % 400;
      if (8 < iVar5) {
        if (iVar5 < 0xd4) {
          if (iVar5 < 0x6f) {
            if (((0x1c < iVar5 - 9U) || ((1 << (iVar5 - 9U & 0xff) & 0x10820841U) == 0)) &&
               ((0x1c < iVar5 - 0x2bU || ((1 << (iVar5 - 0x2bU & 0xff) & 0x10420821U) == 0)))) {
              uVar7 = iVar5 - 0x4c;
              goto LAB_019ce41c;
            }
          }
          else if (((0x1c < iVar5 - 0x6fU) || ((1 << (iVar5 - 0x6fU & 0xff) & 0x10420821U) == 0)) &&
                  ((0x1c < iVar5 - 0x90U || ((1 << (iVar5 - 0x90U & 0xff) & 0x10821041U) == 0)))) {
            uVar7 = iVar5 - 0xb2;
            if (0x1d < uVar7) goto LAB_019ce620;
            uVar3 = 0x841;
LAB_019ce428:
            uVar3 = uVar3 | 0x20820000;
            goto LAB_019ce4a8;
          }
          goto LAB_019ce61c;
        }
        if (iVar5 < 0x13a) {
          if (((iVar5 - 0xd4U < 0x1d) && ((1 << (iVar5 - 0xd4U & 0xff) & 0x10821041U) != 0)) ||
             ((iVar5 - 0xf6U < 0x1d && ((1 << (iVar5 - 0xf6U & 0xff) & 0x10420841U) != 0))))
          goto LAB_019ce61c;
          uVar7 = iVar5 - 0x118;
          if (uVar7 < 0x1d) {
            uVar3 = 0x10810821;
            goto LAB_019ce4a8;
          }
        }
        else {
          if (((iVar5 - 0x13aU < 0x1d) && ((1 << (iVar5 - 0x13aU & 0xff) & 0x10420841U) != 0)) ||
             ((iVar5 - 0x15cU < 0x1d && ((1 << (iVar5 - 0x15cU & 0xff) & 0x10410821U) != 0))))
          goto LAB_019ce61c;
          uVar7 = iVar5 - 0x17d;
          if (uVar7 < 0x12) {
            uVar3 = 0x20841;
            goto LAB_019ce4a8;
          }
        }
        goto LAB_019ce620;
      }
      if (iVar5 < -0xc1) {
        if (iVar5 < -0x127) {
          if (((iVar5 + 0x18cU < 0x1d) && ((1 << (iVar5 + 0x18cU & 0xff) & 0x10410821U) != 0)) ||
             ((iVar5 + 0x16bU < 0x1d && ((1 << (iVar5 + 0x16bU & 0xff) & 0x10820841U) != 0)))) {
LAB_019ce61c:
            uVar3 = 0;
          }
          else {
            uVar7 = iVar5 + 0x149;
            if (uVar7 < 0x1d) {
              uVar3 = 0x10420821;
              goto LAB_019ce4a8;
            }
          }
        }
        else {
          if (((iVar5 + 0x127U < 0x1d) && ((1 << (iVar5 + 0x127U & 0xff) & 0x10820841U) != 0)) ||
             ((iVar5 + 0x105U < 0x1d && ((1 << (iVar5 + 0x105U & 0xff) & 0x10420821U) != 0))))
          goto LAB_019ce61c;
          uVar7 = iVar5 + 0xe4;
LAB_019ce41c:
          if (uVar7 < 0x1e) {
            uVar3 = 0x1041;
            goto LAB_019ce428;
          }
        }
      }
      else if (iVar5 < -0x5c) {
        if (((iVar5 + 0xc1U < 0x1d) && ((1 << (iVar5 + 0xc1U & 0xff) & 0x10420821U) != 0)) ||
           ((iVar5 + 0xa0U < 0x1d && ((1 << (iVar5 + 0xa0U & 0xff) & 0x10821041U) != 0))))
        goto LAB_019ce61c;
        uVar7 = iVar5 + 0x7e;
        if (uVar7 < 0x1e) {
          uVar3 = 0x20420841;
LAB_019ce4a8:
          uVar3 = (uint)((uVar3 & 1 << (uVar7 & 0xff)) == 0);
        }
      }
      else {
        if (((iVar5 + 0x5cU < 0x1d) && ((1 << (iVar5 + 0x5cU & 0xff) & 0x10821041U) != 0)) ||
           ((iVar5 + 0x3aU < 0x1d && ((1 << (iVar5 + 0x3aU & 0xff) & 0x10420841U) != 0))))
        goto LAB_019ce61c;
        uVar7 = iVar5 + 0x18;
        if (uVar7 < 0x1d) {
          uVar3 = 0x10410821;
          goto LAB_019ce4a8;
        }
      }
LAB_019ce620:
      uVar9 = uVar9 + uVar3;
    }
    else if (uVar3 * 0x2493 >> 0x10 == 0) {
      uVar9 = uVar9 - 1;
    }
  }
  if (*(char *)(param_4 + 4) == '\0') {
    uVar3 = uVar9;
    if ((int)uVar9 < 0) {
      uVar3 = -uVar9;
    }
    if (9999 < uVar3) {
LAB_019ce684:
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x28);
      }
      *param_1 = 2;
      param_1[1] = puVar4;
      puVar4[8] = "when `range:standard` is used";
      puVar4[2] = 0xffffd8f1;
      puVar4[3] = 0xffffffff;
      puVar4[4] = 9999;
      puVar4[5] = 0;
      puVar4[6] = uVar9;
      puVar4[7] = (int)uVar9 >> 0x1f;
      *puVar4 = &DAT_0056cfb8;
      puVar4[1] = 4;
      puVar4[9] = 0x1d;
      return;
    }
    pcVar8 = (code *)&UNK_019cea10;
    uVar3 = uVar9;
  }
  else {
    if (*(char *)(param_4 + 4) != '\x01') {
      pcVar8 = FUN_019ce804;
      uVar3 = (int)uVar9 % 100;
      iVar5 = 0;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      goto LAB_019ce76c;
    }
    uVar3 = uVar9;
    if ((int)uVar9 < 0) {
      uVar3 = -uVar9;
    }
    if (9999 < uVar3) goto LAB_019ce684;
    pcVar8 = FUN_019ce804;
    uVar3 = (int)uVar9 / 100;
  }
  if ((int)uVar9 < 0) {
    pcVar6 = "-";
  }
  else {
    iVar5 = 0;
    if (*(char *)(param_4 + 2) == '\0') goto LAB_019ce76c;
    pcVar6 = "+";
  }
  iVar5 = 1;
  FUN_01ac6cbc(param_2,pcVar6,1);
LAB_019ce76c:
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  (*pcVar8)(&local_30,param_2,uVar3,uVar1);
  if (((char)local_30 == '\x04') || ((local_30 & 0xff) == 4)) {
    *param_1 = 4;
    param_1[1] = local_2c + iVar5;
  }
  else {
    param_1[1] = local_30;
    *param_1 = 3;
    param_1[2] = local_2c;
  }
  return;
}

