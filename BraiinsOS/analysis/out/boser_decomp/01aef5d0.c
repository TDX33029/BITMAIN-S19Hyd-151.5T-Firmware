// FUN_01aef5d0 @ 01aef5d0 size=1616 calls_out=5 calls_in=3
// strings: internal error: entered unreachable code

void FUN_01aef5d0(int *param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  int extraout_r2;
  int extraout_r3;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int extraout_r12;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_94;
  undefined2 local_93;
  undefined1 local_91;
  uint *local_90;
  int local_74;
  uint *local_70;
  uint *local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint *local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar18 = param_2[1];
  uVar17 = param_2[2];
  if (uVar17 < uVar18) {
    uVar15 = uVar17 + 1;
    iVar21 = *param_2;
    param_2[2] = uVar15;
    uVar19 = (uint)*(byte *)(*param_2 + uVar17);
    bVar1 = *(byte *)(iVar21 + uVar17);
    local_b8 = -0x7fffffe3;
    local_b4 = CONCAT31(local_b4._1_3_,0x12);
    param_4 = (uint *)~(uint)bVar1;
    uVar12 = uVar19;
    if (uVar19 != 0x17) {
      uVar12 = 0x18;
    }
    if ((((uint)param_4 & 0x1f) == 0) || (uVar18 <= uVar15)) goto switchD_01aef738_default;
    bVar2 = *(byte *)(iVar21 + uVar15);
    uVar22 = uVar17 + 2;
    param_2[2] = uVar22;
    uVar15 = (uint)(char)bVar2;
    if ((int)uVar15 < 0) {
      param_4 = (uint *)(uint)bVar2;
      switch((uint *)(uint)bVar2) {
      case (uint *)0x81:
        param_4 = &switchD_01aef738::switchdataD_01aef73c;
        if (uVar22 < uVar18) {
          pcVar16 = (char *)(iVar21 + uVar22);
          uVar22 = uVar17 + 3;
          param_2[2] = uVar22;
          uVar15 = (uint)*pcVar16;
          if ((int)uVar15 < 0) goto LAB_01aef64c;
        }
        break;
      case (uint *)0x82:
        param_4 = &switchD_01aef738::switchdataD_01aef73c;
        if (uVar22 < uVar18) {
          cVar5 = *(char *)(iVar21 + uVar22);
          uVar15 = uVar17 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar18) {
            uVar6 = *(undefined1 *)(iVar21 + uVar15);
            uVar22 = uVar17 + 4;
            param_2[2] = uVar22;
            if (cVar5 != '\0') {
              param_4 = (uint *)(uint)CONCAT11(cVar5,uVar6);
LAB_01aefac8:
              if (param_4 < (uint *)0xffff) goto LAB_01aef650;
            }
          }
        }
        break;
      case (uint *)0x83:
        param_4 = &switchD_01aef738::switchdataD_01aef73c;
        if (uVar22 < uVar18) {
          bVar2 = *(byte *)(iVar21 + uVar22);
          uVar15 = uVar17 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar18) {
            bVar3 = *(byte *)(iVar21 + uVar15);
            uVar15 = uVar17 + 4;
            param_2[2] = uVar15;
            if (uVar15 < uVar18) {
              param_4 = (uint *)(uint)*(byte *)(iVar21 + uVar15);
              uVar22 = uVar17 + 5;
              param_2[2] = uVar22;
              if (bVar2 != 0) {
                uVar17 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10;
LAB_01aefa8c:
                param_4 = (uint *)(uVar17 | (uint)param_4);
                goto LAB_01aefac8;
              }
            }
          }
        }
        break;
      case (uint *)0x84:
        param_4 = &switchD_01aef738::switchdataD_01aef73c;
        if (uVar22 < uVar18) {
          bVar2 = *(byte *)(iVar21 + uVar22);
          uVar15 = uVar17 + 3;
          param_2[2] = uVar15;
          if (uVar15 < uVar18) {
            bVar3 = *(byte *)(iVar21 + uVar15);
            uVar15 = uVar17 + 4;
            param_2[2] = uVar15;
            if (uVar15 < uVar18) {
              bVar4 = *(byte *)(iVar21 + uVar15);
              uVar15 = uVar17 + 5;
              param_2[2] = uVar15;
              if (uVar15 < uVar18) {
                param_4 = (uint *)(uint)*(byte *)(iVar21 + uVar15);
                uVar22 = uVar17 + 6;
                param_2[2] = uVar22;
                if (bVar2 != 0) {
                  uVar17 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8;
                  goto LAB_01aefa8c;
                }
              }
            }
          }
        }
      }
      goto switchD_01aef738_default;
    }
LAB_01aef64c:
    param_4 = (uint *)(uVar15 & 0xff);
LAB_01aef650:
    if ((CARRY4((uint)param_4,uVar22)) || (uVar18 < (int)param_4 + uVar22))
    goto switchD_01aef738_default;
    param_2[2] = (int)param_4 + uVar22;
    if (uVar12 == bVar1) {
      local_74 = iVar21 + uVar22;
      local_6c = (uint *)0x0;
      local_70 = param_4;
      if (uVar19 == 0x17) {
        FUN_01aef53c(&local_48,&local_74,0,0,99,0);
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        uVar18 = 2000;
        iVar21 = 0;
        if ((uint)(local_40 < 0x32) <= (uint)-(int)local_3c) {
          uVar18 = 0x76c;
        }
LAB_01aef7e8:
        puVar20 = local_3c;
        uVar17 = local_40;
        FUN_01aef53c(&local_48,&local_74,1,0,0xc,0);
        puVar8 = local_3c;
        uVar12 = local_40;
        uVar15 = uVar18 + uVar17;
        iVar21 = (int)puVar20 + (uint)CARRY4(uVar18,uVar17) + iVar21;
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        if ((uint)(local_40 < 0xd) <= (uint)-(int)local_3c) {
LAB_01aefc18:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30518);
        }
        uVar14 = 0x1f;
        if ((1 << (local_40 & 0xff) & 0x15aaU) == 0) {
          if ((1 << (local_40 & 0xff) & 0xa50U) == 0) {
            if (local_40 != 2) goto LAB_01aefc18;
            if ((uVar17 & 3) == 0) {
              FUN_01bf0ff0(uVar15,iVar21,400,0);
              uVar18 = (uint)((ulonglong)uVar15 * 0xc28f5c29);
              uVar17 = iVar21 * -0x3d70a3d7 +
                       uVar15 * -0x70a3d70b + (int)((ulonglong)uVar15 * 0xc28f5c29 >> 0x20);
              uVar19 = uVar18 << 0x1e | uVar17 >> 2;
              uVar14 = 0x1d;
              if ((0x28f5c27 < uVar19 &&
                   (uint)((uVar17 * 0x40000000 | uVar18 >> 2) < 0xf5c28f5d) <= 0x28f5c28 - uVar19)
                 || (extraout_r2 == 0 && extraout_r3 == 0)) goto LAB_01aef858;
            }
            uVar14 = 0x1c;
          }
          else {
            uVar14 = 0x1e;
          }
        }
LAB_01aef858:
        FUN_01aef53c(&local_48,&local_74,1,0,uVar14,0);
        puVar9 = local_3c;
        uVar18 = local_40;
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        FUN_01aef53c(&local_48,&local_74,0,0,0x17,0);
        puVar10 = local_3c;
        uVar19 = local_40;
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        FUN_01aef53c(&local_48,&local_74,0,0,0x3b,0);
        puVar11 = local_3c;
        uVar22 = local_40;
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        uVar17 = 0x1aef92c;
        FUN_01aef53c(&local_48,&local_74,0,0,0x3b,0);
        puVar7 = local_6c;
        puVar20 = local_70;
        if (local_48 != -0x7fffffd3) goto LAB_01aefb28;
        local_48 = -0x7fffffff;
        local_44 = extraout_r12;
        if ((local_70 <= local_6c) || (*(char *)(local_74 + (int)local_6c) != 'Z'))
        goto LAB_01aefb40;
        FUN_01aef29c(&local_68,local_3c,uVar15,iVar21,uVar12,puVar8,uVar18,puVar9,uVar19,puVar10,
                     uVar22,puVar11,local_40,local_3c);
        if (local_68 != -0x7fffffd3) {
          local_48 = local_68;
          puVar20 = local_5c;
          local_44 = local_64;
          uVar17 = local_60;
          goto LAB_01aefb40;
        }
        if ((uint *)((int)puVar7 + 1) != puVar20) {
          *param_1 = local_b8;
          param_1[1] = local_b4;
          param_1[2] = iStack_b0;
          param_1[3] = iStack_ac;
          param_1[4] = local_a8;
          param_1[5] = iStack_a4;
          param_1[6] = iStack_a0;
          param_1[7] = iStack_9c;
          return;
        }
        *param_1 = -0x7fffffd3;
        param_1[2] = local_60;
        param_1[3] = (int)local_5c;
      }
      else {
        FUN_01aef53c(&local_48,&local_74,0,0,99,0);
        puVar20 = local_3c;
        uVar17 = local_40;
        if (local_48 != -0x7fffffd3) {
          local_58 = local_38;
          iStack_54 = iStack_34;
          iStack_50 = iStack_30;
          iStack_4c = iStack_2c;
          goto LAB_01aefb40;
        }
        FUN_01aef53c(&local_48,&local_74,0,0,99,0);
        if (local_48 == -0x7fffffd3) {
          uVar18 = (uint)((ulonglong)uVar17 * 100);
          iVar21 = (int)puVar20 * 100 + (int)((ulonglong)uVar17 * 100 >> 0x20);
          goto LAB_01aef7e8;
        }
LAB_01aefb28:
        local_58 = local_38;
        iStack_54 = iStack_34;
        iStack_50 = iStack_30;
        iStack_4c = iStack_2c;
        puVar20 = local_3c;
        uVar17 = local_40;
LAB_01aefb40:
        param_1[4] = local_58;
        param_1[5] = iStack_54;
        param_1[6] = iStack_50;
        param_1[7] = iStack_4c;
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = uVar17;
        param_1[3] = (int)puVar20;
      }
      piVar13 = &local_b8;
      goto LAB_01aef718;
    }
  }
  else {
switchD_01aef738_default:
    local_91 = 0;
    local_93 = 0;
    local_94 = 0;
    local_90 = param_4;
  }
  local_b4 = CONCAT31(local_b4._1_3_,0x12);
  local_b8 = -0x7fffffe3;
  local_98 = -0x80000000;
  *param_1 = -0x7fffffe3;
  param_1[1] = local_b4;
  param_1[2] = iStack_b0;
  param_1[3] = iStack_ac;
  piVar13 = &local_98;
  param_1[4] = local_a8;
  param_1[5] = iStack_a4;
  param_1[6] = iStack_a0;
  param_1[7] = iStack_9c;
LAB_01aef718:
  FUN_01aeb5f4(piVar13);
  return;
}

