// FUN_0129352c @ 0129352c size=2932 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129352c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d4;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulonglong local_78;
  char local_70;
  undefined1 local_6f;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  byte *local_4c;
  undefined1 *local_48;
  byte **local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte bStack_25;
  
  local_ac = 1;
  local_b4 = param_2 + param_3;
  local_b0 = 0;
  local_c8 = 0;
  local_c4 = param_3;
  local_c0 = param_2;
  local_bc = param_3;
  local_b8 = param_2;
  FUN_014f0980(&local_c8);
  local_78 = FUN_014f0980(&local_c8);
  iVar5 = (int)(local_78 >> 0x20);
  pcVar4 = (char *)local_78;
  if (pcVar4 == (char *)0x0) {
    local_48 = &LAB_01293510;
    local_4c = &bStack_25;
    FUN_00600d2c(&local_40,&DAT_00570448,&local_4c);
    uVar8 = 0x301;
LAB_012935fc:
    param_1[2] = local_40;
    param_1[3] = local_3c;
    *param_1 = 2;
    param_1[1] = 0;
    param_1[4] = local_38;
    goto LAB_01293788;
  }
  local_59 = 0;
  if (iVar5 == 0) {
LAB_012936dc:
    local_3c = (undefined4 *)&LAB_0157a210;
    local_40 = (byte **)&local_78;
    FUN_00600d2c(&local_4c,&DAT_0057e64c,&local_40);
    local_3c = &DAT_006043a8;
    local_34 = &LAB_00fb9ea0;
    local_38 = &local_59;
    local_40 = &local_4c;
    FUN_00600d2c(&local_a8,&DAT_005742df,&local_40);
    if (local_4c != (byte *)0x0) {
      thunk_FUN_016d3fb4(local_48);
    }
    uVar8 = 0x301;
    local_58 = local_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
  }
  else {
    if (iVar5 == 1) {
      cVar6 = *pcVar4;
      local_59 = 1;
      if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_012936dc;
    }
    else {
      cVar6 = *pcVar4;
    }
    uVar15 = local_78;
    if (cVar6 == '+') {
      uVar15 = CONCAT44(iVar5 + -1,pcVar4 + 1);
    }
    if (0x10ffffffff < uVar15) {
      uVar12 = 0;
      uVar9 = 0;
      do {
        iVar5 = (int)(uVar15 >> 0x20);
        uVar1 = CONCAT44(uVar9,uVar12);
        if (iVar5 == 0) goto LAB_012937a4;
        uVar13 = (uint)((ulonglong)uVar12 * 10);
        uVar12 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
        uVar11 = (uint)*(byte *)uVar15;
        uVar7 = (uint)((ulonglong)uVar9 * 10);
        uVar10 = uVar12 + uVar7;
        if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0 || CARRY4(uVar12,uVar7)) {
          local_59 = 1;
          if (uVar11 - 0x30 < 10) {
            local_59 = 2;
          }
          goto LAB_012936dc;
        }
        uVar11 = uVar11 - 0x30;
        if (9 < uVar11) goto LAB_012936d8;
        uVar12 = uVar13 + uVar11;
        uVar15 = CONCAT44(iVar5 + -1,(byte *)uVar15 + 1);
        uVar9 = uVar10 + CARRY4(uVar13,uVar11);
      } while (!CARRY4(uVar10,(uint)CARRY4(uVar13,uVar11)));
      local_59 = 2;
      goto LAB_012936dc;
    }
    if ((int)(uVar15 >> 0x20) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      do {
        uVar9 = *(byte *)uVar15 - 0x30;
        if (9 < uVar9) goto LAB_012936d8;
        iVar5 = (int)(uVar15 >> 0x20) + -1;
        uVar15 = CONCAT44(iVar5,(byte *)uVar15 + 1);
        uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,uVar9);
      } while (iVar5 != 0);
    }
LAB_012937a4:
    uVar15 = FUN_014f0980(&local_c8);
    iVar5 = (int)(uVar15 >> 0x20);
    pcVar4 = (char *)uVar15;
    if (pcVar4 == (char *)0x0) {
      local_48 = &LAB_01293510;
      local_4c = &bStack_25;
      FUN_00600d2c(&local_40,&DAT_00570448,&local_4c);
      uVar8 = 0x302;
      goto LAB_012935fc;
    }
    local_78 = uVar15;
    if (iVar5 == 0) {
      local_59 = 0;
LAB_01293900:
      local_3c = (undefined4 *)&LAB_0157a210;
      local_40 = (byte **)&local_78;
      FUN_00600d2c(&local_4c,&DAT_0057e64c,&local_40);
      local_3c = &DAT_006043a8;
      local_34 = &LAB_00fb9ea0;
      local_38 = &local_59;
      local_40 = &local_4c;
      FUN_00600d2c(&local_98,&DAT_005742df,&local_40);
      if (local_4c != (byte *)0x0) {
        thunk_FUN_016d3fb4(local_48);
      }
      uVar8 = 0x302;
      local_58 = local_98;
      uStack_54 = uStack_94;
      uStack_50 = uStack_90;
    }
    else {
      if (iVar5 == 1) {
        cVar6 = *pcVar4;
        local_59 = 1;
        if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_01293900;
      }
      else {
        cVar6 = *pcVar4;
      }
      if (cVar6 == '+') {
        uVar15 = CONCAT44(iVar5 + -1,pcVar4 + 1);
      }
      if (0x10ffffffff < uVar15) {
        uVar9 = 0;
        uVar12 = 0;
        do {
          iVar5 = (int)(uVar15 >> 0x20);
          uVar2 = CONCAT44(uVar12,uVar9);
          if (iVar5 == 0) goto LAB_012939a4;
          uVar10 = (uint)((ulonglong)uVar9 * 10);
          uVar13 = (uint)((ulonglong)uVar9 * 10 >> 0x20);
          uVar7 = (uint)*(byte *)uVar15;
          uVar9 = (uint)((ulonglong)uVar12 * 10);
          uVar11 = uVar13 + uVar9;
          if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0 || CARRY4(uVar13,uVar9)) {
            local_59 = 1;
            if (uVar7 - 0x30 < 10) {
              local_59 = 2;
            }
            goto LAB_01293900;
          }
          uVar7 = uVar7 - 0x30;
          if (9 < uVar7) goto LAB_012938fc;
          uVar9 = uVar10 + uVar7;
          uVar15 = CONCAT44(iVar5 + -1,(byte *)uVar15 + 1);
          uVar12 = uVar11 + CARRY4(uVar10,uVar7);
        } while (!CARRY4(uVar11,(uint)CARRY4(uVar10,uVar7)));
        local_59 = 2;
        goto LAB_01293900;
      }
      if ((int)(uVar15 >> 0x20) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          uVar9 = *(byte *)uVar15 - 0x30;
          if (9 < uVar9) goto LAB_012938fc;
          iVar5 = (int)(uVar15 >> 0x20) + -1;
          uVar15 = CONCAT44(iVar5,(byte *)uVar15 + 1);
          uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,uVar9);
        } while (iVar5 != 0);
      }
LAB_012939a4:
      uVar15 = FUN_014f0980(&local_c8);
      iVar5 = (int)(uVar15 >> 0x20);
      pcVar4 = (char *)uVar15;
      if (pcVar4 == (char *)0x0) {
        local_48 = &LAB_01293510;
        local_4c = &bStack_25;
        FUN_00600d2c(&local_40,&DAT_00570448,&local_4c);
        uVar8 = 0x303;
        goto LAB_012935fc;
      }
      local_78 = uVar15;
      if (iVar5 == 0) {
        local_59 = 0;
LAB_01293b00:
        local_3c = (undefined4 *)&LAB_0157a210;
        local_40 = (byte **)&local_78;
        FUN_00600d2c(&local_4c,&DAT_0057e64c,&local_40);
        local_3c = &DAT_006043a8;
        local_34 = &LAB_00fb9ea0;
        local_38 = &local_59;
        local_40 = &local_4c;
        FUN_00600d2c(&local_88,&DAT_005742df,&local_40);
        if (local_4c != (byte *)0x0) {
          thunk_FUN_016d3fb4(local_48);
        }
        uVar8 = 0x303;
        local_58 = local_88;
        uStack_54 = uStack_84;
        uStack_50 = uStack_80;
      }
      else {
        if (iVar5 == 1) {
          cVar6 = *pcVar4;
          local_59 = 1;
          if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_01293b00;
        }
        else {
          cVar6 = *pcVar4;
        }
        if (cVar6 == '+') {
          uVar15 = CONCAT44(iVar5 + -1,pcVar4 + 1);
        }
        if (0x10ffffffff < uVar15) {
          uVar12 = 0;
          uVar9 = 0;
          do {
            iVar5 = (int)(uVar15 >> 0x20);
            uVar3 = CONCAT44(uVar9,uVar12);
            if (iVar5 == 0) goto LAB_01293ba4;
            uVar10 = (uint)((ulonglong)uVar12 * 10);
            uVar13 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
            uVar7 = (uint)*(byte *)uVar15;
            uVar12 = (uint)((ulonglong)uVar9 * 10);
            uVar11 = uVar13 + uVar12;
            if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0 || CARRY4(uVar13,uVar12)) {
              local_59 = 1;
              if (uVar7 - 0x30 < 10) {
                local_59 = 2;
              }
              goto LAB_01293b00;
            }
            uVar7 = uVar7 - 0x30;
            if (9 < uVar7) goto LAB_01293afc;
            uVar12 = uVar10 + uVar7;
            uVar15 = CONCAT44(iVar5 + -1,(byte *)uVar15 + 1);
            uVar9 = uVar11 + CARRY4(uVar10,uVar7);
          } while (!CARRY4(uVar11,(uint)CARRY4(uVar10,uVar7)));
          local_59 = 2;
          goto LAB_01293b00;
        }
        if ((int)(uVar15 >> 0x20) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          do {
            uVar9 = *(byte *)uVar15 - 0x30;
            if (9 < uVar9) goto LAB_01293afc;
            iVar5 = (int)(uVar15 >> 0x20) + -1;
            uVar15 = CONCAT44(iVar5,(byte *)uVar15 + 1);
            uVar3 = (uVar3 & 0xffffffff) * 10 + CONCAT44((int)(uVar3 >> 0x20) * 10,uVar9);
          } while (iVar5 != 0);
        }
LAB_01293ba4:
        uVar16 = FUN_014f0980(&local_c8);
        if ((int)uVar16 == 0) {
          local_48 = &LAB_01293510;
          local_4c = &bStack_25;
          FUN_00600d2c(&local_40,&DAT_00570448,&local_4c);
          uVar8 = 0x304;
          goto LAB_012935fc;
        }
        local_78 = uVar16;
        FUN_012933b4(&local_70,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
        if (local_70 == '\0') {
          uVar16 = FUN_014f0980(&local_c8);
          local_d4 = 0;
          if ((int)uVar16 == 0) {
            local_e0 = 0;
          }
          else {
            FUN_0129415c(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            if (local_40 != (byte **)0x80000005) goto LAB_01293ed8;
            local_e0 = 1;
            local_f0 = local_38;
            local_ec = local_34;
          }
          uVar16 = FUN_014f0980(&local_c8);
          if ((int)uVar16 != 0) {
            FUN_01294370(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            local_d4 = 1;
            local_100 = local_38;
            local_fc = local_34;
            if (local_40 != (byte **)0x80000005) goto LAB_01293ed8;
          }
          uVar16 = FUN_014f0980(&local_c8);
          if ((int)uVar16 == 0) {
            local_e8 = 0;
          }
          else {
            FUN_01294584(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            local_110 = local_38;
            local_10c = local_34;
            if (local_40 != (byte **)0x80000005) goto LAB_01293ed8;
            local_e8 = 1;
          }
          uVar16 = FUN_014f0980(&local_c8);
          if ((int)uVar16 == 0) {
            local_f4 = 0;
          }
          else {
            FUN_01294798(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            local_118 = local_38;
            local_114 = local_34;
            if (local_40 != (byte **)0x80000005) goto LAB_01293ed8;
            local_f4 = 1;
          }
          uVar16 = FUN_014f0980(&local_c8);
          local_f8 = 0;
          if ((int)uVar16 == 0) {
            local_108 = 0;
          }
          else {
            FUN_012949ac(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            local_120 = local_38;
            local_11c = local_34;
            if (local_40 != (byte **)0x80000005) {
LAB_01293ed8:
              param_1[2] = local_40;
              param_1[3] = local_3c;
              param_1[4] = local_38;
              param_1[5] = local_34;
              param_1[6] = local_30;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[7] = local_2c;
              return;
            }
            local_108 = 1;
          }
          puVar14 = (undefined1 *)0x1293f1c;
          uVar16 = FUN_014f0980(&local_c8);
          if ((int)uVar16 == 0) {
            local_34 = (undefined1 *)local_d4;
          }
          else {
            FUN_01294bc0(&local_40,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
            local_f8 = 1;
            if (local_40 != (byte **)0x80000005) {
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_40;
              param_1[3] = local_3c;
              param_1[4] = local_38;
              param_1[5] = local_34;
              param_1[6] = local_30;
              param_1[7] = local_2c;
              return;
            }
            puVar14 = local_38;
          }
          *param_1 = local_e0;
          param_1[0x20] = param_5;
          param_1[0x12] = local_120;
          param_1[0x13] = local_11c;
          param_1[0x14] = local_f8;
          param_1[0x15] = 0;
          param_1[0x16] = puVar14;
          param_1[10] = local_110;
          param_1[0xb] = local_10c;
          param_1[0xc] = local_f4;
          param_1[0xe] = local_118;
          param_1[0xf] = local_114;
          param_1[0x10] = local_108;
          param_1[0x11] = 0;
          param_1[2] = local_f0;
          param_1[0x1b] = (int)(uVar2 >> 0x20);
          param_1[3] = local_ec;
          param_1[6] = local_100;
          param_1[0x1e] = local_68;
          param_1[4] = local_d4;
          param_1[7] = local_fc;
          param_1[0x1a] = (int)uVar2;
          *(ulonglong *)(param_1 + 0x1c) = uVar3;
          param_1[0x1f] = local_64;
          param_1[0x21] = param_6;
          param_1[0x17] = local_34;
          *(ulonglong *)(param_1 + 0x18) = uVar1;
          param_1[0xd] = 0;
          param_1[5] = 0;
          param_1[8] = local_e8;
          param_1[9] = 0;
          param_1[1] = 0;
          return;
        }
        local_59 = local_6f;
        local_3c = (undefined4 *)&LAB_0157a210;
        local_40 = (byte **)&local_78;
        FUN_00600d2c(&local_4c,&DAT_0057e64c,&local_40);
        local_3c = &DAT_006043a8;
        local_34 = &LAB_00fb9ea0;
        local_38 = &local_59;
        local_40 = &local_4c;
        FUN_00600d2c(&local_58,&DAT_005742df,&local_40);
        if (local_4c != (byte *)0x0) {
          thunk_FUN_016d3fb4(local_48);
        }
        uVar8 = 0x304;
      }
    }
  }
  param_1[2] = local_58;
  param_1[3] = uStack_54;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[4] = uStack_50;
LAB_01293788:
  param_1[5] = &DAT_003b6e41;
  param_1[6] = 0x9c;
  param_1[7] = uVar8;
  return;
LAB_012936d8:
  local_59 = 1;
  goto LAB_012936dc;
LAB_012938fc:
  local_59 = 1;
  goto LAB_01293900;
LAB_01293afc:
  local_59 = 1;
  goto LAB_01293b00;
}

