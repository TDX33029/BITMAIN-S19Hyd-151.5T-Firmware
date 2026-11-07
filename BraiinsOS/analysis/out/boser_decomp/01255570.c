// FUN_01255570 @ 01255570 size=2724 calls_out=17 calls_in=0
// strings: shutdown_duration | hashrate_step | min_hashrate_target | power_step | enabled

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01255570(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  undefined1 uVar20;
  uint uVar21;
  int *in_r12;
  undefined1 *puVar22;
  int *unaff_s16;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  int *local_e8;
  int *local_e4;
  int local_dc;
  int *local_d8;
  int *local_d4;
  uint local_d0;
  uint local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 uStack_41;
  
  puVar22 = (undefined1 *)((int)register0x00000054 + -0x40);
  uVar12 = 0x15;
  if ((int)*param_2 < 0) {
    uVar12 = *param_2 ^ 0x80000000;
  }
  if (uVar12 == 0x14) {
    uVar12 = param_2[2];
    local_c4 = (uint *)(uVar12 + param_2[3] * 0x10);
    if (param_2[3] == 0) {
      FUN_0123c028(&local_78,0,&DAT_01c2494c,&DAT_01d064b8);
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      param_1[5] = local_6c;
      param_1[6] = local_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = local_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
LAB_01255d84:
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    local_c0 = (uint *)&DAT_00000001;
    local_c8 = (uint *)(uVar12 + 0x10);
    FUN_0123e104(&local_78,uVar12);
    uVar20 = (undefined1)local_74;
    local_b8 = local_78;
    local_b4._0_1_ = (undefined1)local_74;
    puVar22 = (undefined1 *)register0x00000054;
    if (local_78 != 2) {
LAB_01255aec:
      FUN_01bed4e2((int)param_1 + 0xd,puVar22 + -0x73,0x2b);
      *(char *)(param_1 + 3) = (char)local_b4;
LAB_01255b00:
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_b8;
      return;
    }
    FUN_01222908(&local_78,&local_c8);
    iVar6 = local_70;
    iVar18 = local_74;
    if (local_78 != 2) {
      param_1[5] = local_6c;
      param_1[6] = local_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = local_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      return;
    }
    if (local_74 == 2) {
      uVar15 = 1;
    }
    else {
      FUN_01222908(&local_78,&local_c8);
      iVar7 = local_70;
      iVar5 = local_74;
      if (local_78 != 2) {
        param_1[5] = local_6c;
        param_1[6] = local_68;
        param_1[7] = iStack_64;
        param_1[8] = local_60;
        param_1[9] = local_5c;
        param_1[10] = iStack_58;
        param_1[0xb] = iStack_54;
        param_1[0xc] = iStack_50;
        param_1[0xd] = iStack_4c;
        param_1[1] = 0;
        *param_1 = 2;
        param_1[2] = local_78;
        param_1[3] = local_74;
        param_1[4] = local_70;
        return;
      }
      if (local_74 == 2) {
        FUN_0123c028(&local_78,2,&DAT_01c2494c,&DAT_01d064b8);
        param_1[2] = local_78;
        param_1[3] = local_74;
        param_1[4] = local_70;
        param_1[5] = local_6c;
        param_1[6] = local_68;
        param_1[7] = iStack_64;
        param_1[8] = local_60;
        param_1[9] = local_5c;
        param_1[10] = iStack_58;
        param_1[0xb] = iStack_54;
        param_1[0xc] = iStack_50;
        param_1[0xd] = iStack_4c;
        goto LAB_01255d84;
      }
      FUN_01222874(&local_78,&local_c8);
      iVar10 = local_6c;
      iVar8 = local_70;
      if (local_78 != 2) {
LAB_01255cb8:
        param_1[8] = local_60;
        param_1[9] = local_5c;
        param_1[10] = iStack_58;
        param_1[0xb] = iStack_54;
        param_1[0xc] = iStack_50;
        param_1[0xd] = iStack_4c;
        param_1[4] = local_70;
        *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_64,local_68);
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_78;
        param_1[3] = local_74;
        param_1[5] = local_6c;
        return;
      }
      if (local_70 == 2 && local_6c == 0) {
        uVar15 = 3;
      }
      else {
        uVar1 = CONCAT44(iStack_64,local_68);
        FUN_01222874(&local_78,&local_c8);
        iVar11 = local_6c;
        iVar9 = local_70;
        if (local_78 != 2) goto LAB_01255cb8;
        if (local_70 == 2 && local_6c == 0) {
          uVar15 = 4;
        }
        else {
          if (local_c8 != local_c4) {
            local_c8 = local_c8 + 4;
            local_c0 = (uint *)((int)local_c0 + 1);
            uVar2 = CONCAT44(iStack_64,local_68);
            FUN_0123e104(&local_78);
            uVar4 = (undefined1)local_74;
            if (local_78 != 2) {
              FUN_01bed4e2((int)param_1 + 0xd,(int)&local_74 + 1,0x2b);
              *(undefined1 *)(param_1 + 3) = (undefined1)local_74;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_78;
              return;
            }
            FUN_01222a14(&local_78,&local_c8);
            if (local_78 != 2) {
              param_1[5] = local_6c;
              param_1[6] = local_68;
              param_1[7] = iStack_64;
              param_1[8] = local_60;
              param_1[9] = local_5c;
              param_1[10] = iStack_58;
              param_1[0xb] = iStack_54;
              param_1[0xc] = iStack_50;
              param_1[0xd] = iStack_4c;
              param_1[4] = local_70;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_78;
              param_1[3] = local_74;
              return;
            }
            if (local_74 == 2) {
              FUN_0123c028(&local_78,6,&DAT_01c2494c,&DAT_01d064b8);
            }
            else {
              param_1[4] = iVar9;
              *(undefined1 *)((int)param_1 + 0x39) = uVar4;
              param_1[0xb] = iVar7;
              param_1[5] = iVar11;
              param_1[9] = iVar6;
              param_1[1] = iVar10;
              *param_1 = iVar8;
              *(undefined1 *)(param_1 + 0xe) = uVar20;
              param_1[0xd] = local_70;
              param_1[8] = iVar18;
              param_1[10] = iVar5;
              param_1[0xc] = local_74;
              *(undefined8 *)(param_1 + 6) = uVar2;
              *(undefined8 *)(param_1 + 2) = uVar1;
              local_b8 = *param_1;
              local_b4 = param_1[1];
              local_b0 = (int *)param_1[2];
              local_ac = param_1[3];
              local_a8 = param_1[4];
              iStack_a4 = param_1[5];
              local_a0 = param_1[6];
              local_9c = param_1[7];
              iStack_98 = param_1[8];
              iStack_94 = param_1[9];
              local_90 = param_1[10];
              iStack_8c = param_1[0xb];
              iStack_88 = param_1[0xc];
              iStack_84 = param_1[0xd];
              iStack_80 = param_1[0xe];
              iStack_7c = param_1[0xf];
              FUN_01223e04(&local_78,&local_c8);
              if (local_78 == 2) goto LAB_01255c68;
            }
            param_1[2] = local_78;
            param_1[3] = local_74;
            param_1[4] = local_70;
            param_1[5] = local_6c;
            param_1[6] = local_68;
            param_1[7] = iStack_64;
            param_1[8] = local_60;
            param_1[9] = local_5c;
            param_1[10] = iStack_58;
            param_1[0xb] = iStack_54;
            param_1[0xc] = iStack_50;
            param_1[0xd] = iStack_4c;
            goto LAB_01255ef0;
          }
          uVar15 = 5;
        }
      }
    }
    FUN_0123c028(&local_78,uVar15,&DAT_01c2494c,&DAT_01d064b8);
  }
  else {
    if (uVar12 != 0x15) {
      FUN_01222458(param_1 + 2,param_2,&uStack_41,&DAT_01c247c4);
      goto LAB_01255ef0;
    }
    local_c8 = (uint *)param_2[1];
    local_dc = 0;
    local_bc = 0;
    local_c4 = local_c8 + param_2[2] * 8;
    local_c0 = (uint *)0x0;
    if (param_2[2] == 0) {
      local_cc = 2;
      cVar19 = '\x03';
      local_d0 = 2;
      local_d4 = (int *)0x2;
      local_d8 = (int *)0x2;
      iVar18 = 0;
      uVar12 = 2;
      uVar20 = 2;
      local_e8 = &local_b8;
    }
    else {
      local_dc = 0;
      local_cc = 2;
      uVar21 = 3;
      iVar18 = 0;
      local_d0 = 2;
      cVar19 = '\x03';
      uVar12 = 2;
      local_d4 = (int *)0x2;
      local_d8 = (int *)0x2;
      do {
        puVar3 = local_c8;
        puVar13 = local_c8 + 8;
        local_c0 = local_c8 + 4;
        local_bc = local_bc + 1;
        uVar14 = 0x15;
        if ((int)*local_c8 < 0) {
          uVar14 = *local_c8 ^ 0x80000000;
        }
        switch(uVar14) {
        case 1:
          uVar14 = (uint)(byte)local_c8[1];
          uVar17 = 0;
          break;
        default:
          local_c8 = puVar13;
          FUN_01222458(&local_b8,puVar3,&uStack_41,&DAT_01c248a4);
          goto LAB_012556e8;
        case 4:
          uVar14 = local_c8[2];
          uVar17 = local_c8[3];
          break;
        case 0xc:
          uVar14 = local_c8[2];
          uVar17 = local_c8[3];
          goto LAB_012556d8;
        case 0xd:
          uVar14 = local_c8[1];
          uVar17 = local_c8[2];
LAB_012556d8:
          local_c8 = puVar13;
          FUN_01258b0c(&local_b8,uVar14,uVar17);
          goto LAB_012556e8;
        case 0xe:
          uVar14 = local_c8[2];
          uVar17 = local_c8[3];
          goto LAB_012556b0;
        case 0xf:
          uVar14 = local_c8[1];
          uVar17 = local_c8[2];
LAB_012556b0:
          local_c8 = puVar13;
          FUN_012585ec(&local_b8,uVar14,uVar17);
          goto LAB_012556e8;
        }
        local_c8 = puVar13;
        FUN_01254164(&local_b8,&switchD_0125564c::switchdataD_01255650,uVar14,uVar17);
LAB_012556e8:
        if (local_b8 != 2) {
          FUN_01bed4e2((int)param_1 + 0xd,(int)&local_b4 + 1,0x2b);
          *(char *)(param_1 + 3) = (char)local_b4;
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_b8;
          return;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_b4 & 0xff) {
        case 0:
          if (uVar21 != 3) {
            uVar15 = 7;
            pcVar16 = "enabled";
LAB_01255fa4:
            FUN_0123c090(&local_b8,pcVar16,uVar15);
            param_1[2] = local_b8;
            param_1[3] = local_b4;
            param_1[4] = (int)local_b0;
            param_1[5] = local_ac;
            param_1[6] = local_a8;
            param_1[7] = iStack_a4;
            local_60 = local_a0;
            local_5c = local_9c;
            iStack_58 = iStack_98;
            iStack_54 = iStack_94;
            iStack_50 = local_90;
            iStack_4c = iStack_8c;
            goto LAB_01255eec;
          }
          FUN_012227b0(&local_b8,&local_c8);
          uVar21 = local_b4 & 0xff;
          if (local_b8 != 2) goto LAB_01255aec;
          break;
        case 1:
          if (local_cc != 2) {
            uVar15 = 10;
            pcVar16 = "power_step";
            goto LAB_01255fa4;
          }
          FUN_012226b0(&local_b8,&local_c8);
          local_cc = local_b4;
          local_e4 = local_b0;
          if (local_b8 != 2) {
            param_1[5] = local_ac;
            param_1[6] = local_a8;
            param_1[7] = iStack_a4;
            param_1[8] = local_a0;
            param_1[9] = local_9c;
            param_1[10] = iStack_98;
            param_1[0xb] = iStack_94;
            param_1[0xc] = local_90;
            param_1[0xd] = iStack_8c;
            param_1[2] = local_b8;
            param_1[3] = local_b4;
LAB_01255e24:
            *param_1 = 2;
            param_1[1] = 0;
            param_1[4] = (int)local_b0;
            return;
          }
          break;
        case 2:
          if (local_d0 != 2) {
            pcVar16 = &DAT_00569e48;
LAB_01255f88:
            uVar15 = 0x10;
            goto LAB_01255fa4;
          }
          FUN_012226b0(&local_b8,&local_c8);
          local_d0 = local_b4;
          local_e8 = local_b0;
          if (local_b8 != 2) {
            param_1[5] = local_ac;
            param_1[6] = local_a8;
            param_1[7] = iStack_a4;
            param_1[8] = local_a0;
            param_1[9] = local_9c;
            param_1[10] = iStack_98;
            param_1[0xb] = iStack_94;
            param_1[0xc] = local_90;
            param_1[0xd] = iStack_8c;
            param_1[2] = local_b8;
            param_1[3] = local_b4;
            goto LAB_01255e24;
          }
          break;
        case 3:
          if (local_d4 != (int *)0x2 || local_dc != 0) {
            uVar15 = 0xd;
            pcVar16 = "hashrate_step";
            goto LAB_01255fa4;
          }
          FUN_01222770(&local_b8,&local_c8);
          if (local_b8 != 2) {
LAB_01255d00:
            param_1[8] = local_a0;
            param_1[9] = local_9c;
            param_1[10] = iStack_98;
            param_1[0xb] = iStack_94;
            param_1[0xc] = local_90;
            param_1[0xd] = iStack_8c;
            param_1[4] = (int)local_b0;
            *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_a4,local_a8);
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = local_b8;
            param_1[3] = local_b4;
            param_1[5] = local_ac;
            return;
          }
          unaff_d9 = CONCAT44(iStack_a4,local_a8);
          local_d4 = local_b0;
          local_dc = local_ac;
          break;
        case 4:
          if (local_d8 != (int *)0x2 || iVar18 != 0) {
            uVar15 = 0x13;
            pcVar16 = "min_hashrate_target";
            goto LAB_01255fa4;
          }
          FUN_01222770(&local_b8,&local_c8);
          if (local_b8 != 2) goto LAB_01255d00;
          unaff_d10 = CONCAT44(iStack_a4,local_a8);
          local_d8 = local_b0;
          iVar18 = local_ac;
          break;
        case 5:
          if (cVar19 != '\x03') {
            pcVar16 = &DAT_00569528;
            goto LAB_01255f88;
          }
          FUN_012227b0(&local_b8,&local_c8);
          cVar19 = (char)local_b4;
          if (local_b8 != 2) {
            FUN_01bed4e2((int)param_1 + 0xd,(int)&local_b4 + 1,0x2b);
            *(char *)(param_1 + 3) = (char)local_b4;
            goto LAB_01255b00;
          }
          break;
        case 6:
          if (uVar12 != 2) {
            uVar15 = 0x11;
            pcVar16 = "shutdown_duration";
            goto LAB_01255fa4;
          }
          FUN_01222730(&local_b8,&local_c8);
          uVar12 = local_b4;
          unaff_s16 = local_b0;
          if (local_b8 != 2) {
            param_1[5] = local_ac;
            param_1[6] = local_a8;
            param_1[7] = iStack_a4;
            param_1[8] = local_a0;
            param_1[9] = local_9c;
            param_1[10] = iStack_98;
            param_1[0xb] = iStack_94;
            param_1[0xc] = local_90;
            param_1[0xd] = iStack_8c;
            param_1[4] = (int)local_b0;
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = local_b8;
            param_1[3] = local_b4;
            return;
          }
        }
        uVar20 = (undefined1)uVar21;
      } while (local_c8 != local_c4);
      if (uVar21 == 3) {
        uVar20 = 2;
      }
      in_r12 = local_e4;
    }
    param_1[0xb] = (int)local_e8;
    *(undefined1 *)(param_1 + 0xe) = uVar20;
    if (cVar19 == '\x03') {
      cVar19 = '\x02';
    }
    uVar21 = 0;
    if (uVar12 != 2) {
      uVar21 = uVar12;
    }
    param_1[0xd] = (int)unaff_s16;
    param_1[0xc] = uVar21;
    uVar12 = 0;
    if (local_d0 != 2) {
      uVar12 = local_d0;
    }
    param_1[9] = (int)in_r12;
    param_1[10] = uVar12;
    uVar12 = 0;
    if (local_cc != 2) {
      uVar12 = local_cc;
    }
    *(undefined8 *)(param_1 + 6) = unaff_d10;
    param_1[8] = uVar12;
    *(undefined8 *)(param_1 + 2) = unaff_d9;
    *(char *)((int)param_1 + 0x39) = cVar19;
    if (local_d8 == (int *)0x2 && iVar18 == 0) {
      local_d8 = (int *)0x0;
      iVar18 = 0;
    }
    param_1[4] = (int)local_d8;
    param_1[5] = iVar18;
    if (local_d4 == (int *)0x2 && local_dc == 0) {
      local_d4 = (int *)0x0;
      local_dc = 0;
    }
    *param_1 = (int)local_d4;
    param_1[1] = local_dc;
    local_b8 = *param_1;
    local_b4 = param_1[1];
    local_b0 = (int *)param_1[2];
    local_ac = param_1[3];
    local_a8 = param_1[4];
    iStack_a4 = param_1[5];
    local_a0 = param_1[6];
    local_9c = param_1[7];
    iStack_98 = param_1[8];
    iStack_94 = param_1[9];
    local_90 = param_1[10];
    iStack_8c = param_1[0xb];
    iStack_88 = param_1[0xc];
    iStack_84 = param_1[0xd];
    iStack_80 = param_1[0xe];
    iStack_7c = param_1[0xf];
    FUN_01223db8(&local_78,&local_c8);
    if (local_78 == 2) {
LAB_01255c68:
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = (int)local_b0;
      param_1[3] = local_ac;
      param_1[4] = local_a8;
      param_1[5] = iStack_a4;
      param_1[6] = local_a0;
      param_1[7] = local_9c;
      param_1[8] = iStack_98;
      param_1[9] = iStack_94;
      param_1[10] = local_90;
      param_1[0xb] = iStack_8c;
      param_1[0xc] = iStack_88;
      param_1[0xd] = iStack_84;
      param_1[0xe] = iStack_80;
      param_1[0xf] = iStack_7c;
      return;
    }
  }
  param_1[2] = local_78;
  param_1[3] = local_74;
  param_1[4] = local_70;
  param_1[5] = local_6c;
  param_1[6] = local_68;
  param_1[7] = iStack_64;
LAB_01255eec:
  param_1[8] = local_60;
  param_1[9] = local_5c;
  param_1[10] = iStack_58;
  param_1[0xb] = iStack_54;
  param_1[0xc] = iStack_50;
  param_1[0xd] = iStack_4c;
LAB_01255ef0:
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

