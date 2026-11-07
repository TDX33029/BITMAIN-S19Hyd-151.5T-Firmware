// FUN_014de238 @ 014de238 size=1284 calls_out=10 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014de238(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  ulonglong uVar16;
  uint local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 local_94;
  int local_90;
  undefined1 local_8c;
  undefined4 uStack_8b;
  undefined4 *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined3 uStack_47;
  undefined4 local_3c;
  undefined1 local_25;
  
  FUN_006666fc(&local_c8,param_2[5],param_2[6]);
  local_b8 = param_2[8];
  local_b4 = param_2[9];
  local_b0 = param_2[10];
  local_ac = param_2[0xb];
  local_a4 = param_2[0xd];
  uStack_a0 = param_2[0xe];
  uStack_9c = param_2[0xf];
  uStack_98 = param_2[0x10];
  local_94 = *(undefined1 *)(param_2 + 0x11);
  local_d8 = *param_2;
  uStack_d4 = param_2[1];
  uStack_d0 = param_2[2];
  uStack_cc = param_2[3];
  local_bc = param_2[7];
  uVar7 = local_b8 + 1;
  local_a8 = param_2[0xc];
  if (local_b8 != 0xffffffff) {
    if (uVar7 < local_c0) {
      if (*(char *)(local_c4 + uVar7) < -0x40) goto LAB_014de2e4;
    }
    else if (uVar7 != local_c0) {
LAB_014de2e4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(local_c4,local_c0,uVar7,local_c0,&DAT_01d2fcf8);
    }
  }
  if ((local_c0 != uVar7) && (*(char *)(local_c4 + uVar7) == '/')) {
    FUN_01ac9950(&local_50,&local_d8);
    uVar7 = local_a8;
    if (local_b8 != 0) {
      if (local_b8 < local_c0) {
        if (*(char *)(local_c4 + local_b8) < -0x40) goto LAB_014de354;
      }
      else if (local_b8 != local_c0) {
LAB_014de354:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_c4,local_c0,0,local_b8,&DAT_01d2fde8);
      }
    }
    local_74 = CONCAT13(local_74._3_1_,uStack_47);
    if (local_50 != -0x80000000) {
      uVar8 = local_a8 + 1;
      uStack_8b = local_4b;
      local_7c = local_c0;
      local_8c = local_4c;
      local_90 = local_50;
      local_84 = &local_d8;
      local_80 = uVar8;
      if (uVar8 < local_c0) {
        if ((uVar8 != 0) && (*(char *)(local_c4 + uVar8) < -0x40)) {
          puVar5 = &DAT_01d2fdd8;
          uVar7 = local_c0;
          goto LAB_014de734;
        }
        if (*(char *)(((local_c4 + uVar8 + local_c0) - local_a8) + -2) == '/') {
          iVar12 = local_c4 + local_c0;
          iVar10 = -1;
          if (0x7fffffff < (uint)(int)*(char *)(iVar12 + -1)) {
            bVar1 = *(byte *)(iVar12 + -2);
            if ((char)bVar1 < -0x40) {
              bVar2 = *(byte *)(iVar12 + -3);
              if ((char)bVar2 < -0x40) {
                uVar13 = (int)(char)bVar2 & 0x3fU | (*(byte *)(iVar12 + -4) & 7) << 6;
              }
              else {
                uVar13 = bVar2 & 0xf;
              }
              uVar13 = (int)(char)bVar1 & 0x3fU | uVar13 << 6;
            }
            else {
              uVar13 = bVar1 & 0x1f;
            }
            if (1 < uVar13) {
              iVar10 = -2;
            }
            if ((0x1f < uVar13) && (iVar10 = -4, uVar13 < 0x400)) {
              iVar10 = -3;
            }
          }
          local_c0 = iVar10 + local_c0;
        }
      }
      iVar10 = param_3[1];
      uVar13 = param_3[2];
      if (local_b8 != 0) {
        if (local_b8 < local_c0) {
          if (*(char *)(local_c4 + local_b8) < -0x40) goto LAB_014de4e0;
        }
        else if (local_b8 != local_c0) {
LAB_014de4e0:
          puVar5 = &DAT_01d2fde8;
          uVar8 = 0;
          uVar7 = local_b8;
LAB_014de734:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_c4,local_c0,uVar8,uVar7,puVar5);
        }
      }
      uVar4 = FUN_01acedfc(local_c4,local_b8);
      uVar11 = 0;
      local_78 = local_c8;
      local_74 = local_c4;
      local_70 = local_c0;
      local_c4 = 1;
      local_c0 = 0;
      local_c8 = 0;
      local_58 = 2;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_3c = 0x2f;
      uVar14 = 0;
LAB_014de550:
      do {
        if (uVar13 < uVar11) {
LAB_014de5f8:
          bVar3 = true;
          uVar9 = uVar13;
          local_dc = uVar14;
        }
        else {
          uVar9 = uVar13 - uVar11;
          if (uVar9 < 8) {
            uVar6 = 0;
            if (uVar9 == 0) {
              uVar16 = 0;
            }
            else {
              do {
                if (*(char *)(iVar10 + uVar11 + uVar6) == '/') {
                  uVar16 = CONCAT44(uVar6,1);
                  goto LAB_014de5b4;
                }
                uVar6 = uVar6 + 1;
              } while (uVar9 != uVar6);
              uVar16 = (ulonglong)uVar9 << 0x20;
            }
          }
          else {
            uVar16 = FUN_01307168(0x2f,iVar10 + uVar11);
          }
LAB_014de5b4:
          if ((uVar16 & 1) == 0) {
            uVar11 = uVar13;
            goto LAB_014de5f8;
          }
          uVar9 = uVar11 + (int)(uVar16 >> 0x20);
          uVar11 = uVar9 + 1;
          if (((uVar11 == 0) || (uVar13 < uVar11)) || (*(char *)(iVar10 + uVar9) != '/'))
          goto LAB_014de550;
          bVar3 = false;
          local_dc = uVar11;
        }
        uVar6 = local_70;
        psVar15 = (short *)(iVar10 + uVar14);
        if (uVar9 - uVar14 == 2) {
          if (*psVar15 != 0x2e2e) goto LAB_014de640;
        }
        else if ((uVar9 - uVar14 != 1) || ((char)*psVar15 != '.')) {
LAB_014de640:
          if ((local_70 == uVar7) || (uVar8 < local_70)) {
            if (local_78 == local_70) {
              FUN_0132b898(&local_78,local_70,1,1,1);
            }
            *(undefined1 *)(local_74 + local_70) = 0x2f;
            local_70 = uVar6 + 1;
          }
          local_25 = 1;
          FUN_01aca0cc(&local_78,uVar4,&local_25,uVar7,psVar15,iVar10 + uVar9);
        }
        uVar14 = local_dc;
      } while (!bVar3);
      FUN_019bb7e0(0,1);
      local_c0 = local_70;
      FUN_014de7c8(&local_90);
      FUN_01bed4e2(param_1,&local_d8,0x48);
      goto LAB_014de3c0;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 7;
  FUN_019bb7e0(local_c8);
  iVar10 = param_3[1];
LAB_014de3c0:
  FUN_019bb7e0(*param_3,iVar10);
  return;
}

