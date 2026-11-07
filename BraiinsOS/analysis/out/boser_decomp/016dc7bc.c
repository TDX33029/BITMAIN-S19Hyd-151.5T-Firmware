// FUN_016dc7bc @ 016dc7bc size=1080 calls_out=9 calls_in=1
// strings: start

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016dc7bc(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  int *piVar12;
  int unaff_r11;
  int local_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_cc = FUN_016d4a28(param_2);
  if (local_cc != 0x7b) {
    FUN_016f4e14(&local_cc,&DAT_0056f628,&DAT_01d0a058);
LAB_016dcbf4:
    FUN_01306fc8(&DAT_01d0a048);
    *(int *)(unaff_r11 + 0x40) = *(int *)(unaff_r11 + 0x40) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  unaff_r11 = *param_2;
  piVar12 = (int *)(unaff_r11 + 0x50);
  local_c8 = *piVar12;
  uStack_c4 = *(undefined4 *)(unaff_r11 + 0x54);
  uStack_c0 = *(undefined4 *)(unaff_r11 + 0x58);
  iVar4 = FUN_016d819c(param_2);
  if (iVar4 == 0) {
    local_34 = *piVar12;
    uStack_30 = *(undefined4 *)(unaff_r11 + 0x54);
    uStack_2c = *(undefined4 *)(unaff_r11 + 0x58);
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    local_98 = 0x1e;
    FUN_016d4540(param_1,param_2[1],param_2[2],&local_40,&local_98);
  }
  else {
    local_b8 = *piVar12;
    uStack_b4 = *(undefined4 *)(unaff_r11 + 0x54);
    uStack_b0 = *(undefined4 *)(unaff_r11 + 0x58);
    uVar5 = FUN_016d4a28(param_2);
    if ((uVar5 == 0x2d) || ((uVar5 & 0xffffffdf) - 0x41 < 0x1a)) {
      if (*(int *)(unaff_r11 + 0x40) != 0) goto LAB_016dcbf4;
      iVar4 = param_2[2];
      *(undefined4 *)(unaff_r11 + 0x4c) = 0;
      *(undefined4 *)(unaff_r11 + 0x40) = 0xffffffff;
      while (*piVar12 != iVar4) {
        uVar5 = FUN_016d4a28(param_2);
        if ((uVar5 != 0x2d) && (0x19 < (uVar5 & 0x1fffdf) - 0x41)) {
          if ((*piVar12 != iVar4) && (iVar10 = FUN_016d4a28(param_2), iVar10 == 0x7d)) {
            local_a8 = *piVar12;
            uStack_a4 = *(undefined4 *)(unaff_r11 + 0x54);
            uStack_a0 = *(undefined4 *)(unaff_r11 + 0x58);
            FUN_016d4fe8(param_2);
            if (*(int *)(unaff_r11 + 0x4c) - 3U < 8) {
              uVar9 = *(undefined4 *)(unaff_r11 + 0x48);
              switch(*(int *)(unaff_r11 + 0x4c)) {
              case 3:
                iVar10 = thunk_FUN_01bed842(uVar9,"end",3);
                if (iVar10 == 0) {
                  uVar11 = 7;
LAB_016dcbc4:
                  *param_1 = 0x22;
                  iVar4 = *(int *)(unaff_r11 + 0x40);
                  *(undefined1 *)(param_1 + 1) = uVar11;
                  goto LAB_016dcb10;
                }
                break;
              case 5:
                iVar10 = thunk_FUN_01bed842(uVar9,"start",5);
                if (iVar10 == 0) {
                  uVar11 = 6;
                  goto LAB_016dcbc4;
                }
                break;
              case 8:
                iVar10 = thunk_FUN_01bed842(uVar9,&DAT_005710f8,8);
                if (iVar10 == 0) {
                  uVar11 = 0xb;
                  goto LAB_016dcbc4;
                }
                break;
              case 10:
                uVar11 = 10;
                iVar10 = thunk_FUN_01bed842(uVar9,&DAT_004cfe7c,10);
                if (iVar10 == 0) goto LAB_016dcbc4;
              }
            }
            local_58 = local_b8;
            uStack_54 = uStack_b4;
            uStack_50 = uStack_b0;
            local_4c = local_a8;
            uStack_48 = uStack_a4;
            uStack_44 = uStack_a0;
            local_40 = 0x1d;
            FUN_016d4540(&local_98,param_2[1],iVar4,&local_58,&local_40);
            goto LAB_016dcaf0;
          }
          break;
        }
        uVar6 = FUN_016d4a28(param_2);
        iVar10 = *(int *)(unaff_r11 + 0x4c);
        uVar5 = 1;
        if (0x7f < uVar6) {
          uVar5 = 2;
        }
        if ((0x7ff < uVar6) && (uVar5 = 4, uVar6 < 0x10000)) {
          uVar5 = 3;
        }
        iVar8 = iVar10;
        if ((uint)(*(int *)(unaff_r11 + 0x44) - iVar10) < uVar5) {
          FUN_006520b4((int *)(unaff_r11 + 0x44),iVar10,uVar5,1,1);
          iVar8 = *(int *)(unaff_r11 + 0x4c);
        }
        pbVar7 = (byte *)(*(int *)(unaff_r11 + 0x48) + iVar8);
        if (uVar6 < 0x80) {
          *pbVar7 = (byte)uVar6;
        }
        else {
          bVar1 = (byte)uVar6 & 0x3f | 0x80;
          bVar2 = (byte)(uVar6 >> 6);
          if (uVar6 < 0x800) {
            pbVar7[1] = bVar1;
            *pbVar7 = bVar2 | 0xc0;
          }
          else {
            bVar2 = bVar2 & 0x3f | 0x80;
            bVar3 = (byte)(uVar6 >> 0xc);
            if (uVar6 >> 0x10 == 0) {
              pbVar7[1] = bVar2;
              pbVar7[2] = bVar1;
              *pbVar7 = bVar3 | 0xe0;
            }
            else {
              pbVar7[3] = bVar1;
              pbVar7[2] = bVar2;
              pbVar7[1] = bVar3 & 0x3f | 0x80;
              *pbVar7 = (byte)(uVar6 >> 0x12) | 0xf0;
            }
          }
        }
        *(uint *)(unaff_r11 + 0x4c) = uVar5 + iVar10;
        FUN_016d819c(param_2);
      }
      local_4c = *piVar12;
      uStack_48 = *(undefined4 *)(unaff_r11 + 0x54);
      uStack_44 = *(undefined4 *)(unaff_r11 + 0x58);
      local_58 = local_c8;
      uStack_54 = uStack_c4;
      uStack_50 = uStack_c0;
      local_40 = 0x1c;
      FUN_016d4540(&local_98,param_2[1],iVar4,&local_58,&local_40);
LAB_016dcaf0:
      *param_1 = local_98;
      param_1[1] = uStack_94;
      param_1[2] = uStack_90;
      param_1[3] = uStack_8c;
      param_1[4] = uStack_88;
      param_1[5] = local_84;
      param_1[6] = uStack_80;
      param_1[7] = uStack_7c;
      param_1[8] = uStack_78;
      param_1[9] = uStack_74;
      param_1[10] = local_70;
      param_1[0xb] = uStack_6c;
      param_1[0xc] = uStack_68;
      param_1[0xd] = uStack_64;
      param_1[0xe] = uStack_60;
      param_1[0xf] = uStack_5c;
      iVar4 = *(int *)(unaff_r11 + 0x40);
LAB_016dcb10:
      *(int *)(unaff_r11 + 0x40) = iVar4 + 1;
    }
    else {
      *piVar12 = local_c8;
      *(undefined4 *)(unaff_r11 + 0x54) = uStack_c4;
      *(undefined4 *)(unaff_r11 + 0x58) = uStack_c0;
      *param_1 = 0x22;
      *(undefined1 *)(param_1 + 1) = 0xc;
    }
  }
  return;
}

