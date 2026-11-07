// FUN_01235f80 @ 01235f80 size=1660 calls_out=15 calls_in=1
// strings: power_target | enabled | hashrate_target

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01235f80(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint *puVar11;
  int iVar12;
  char cVar13;
  undefined8 unaff_d8;
  uint *local_88;
  uint local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint *local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_31;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  if (uVar2 != 0x14) {
    if (uVar2 != 0x15) {
      FUN_01222458(param_1,param_2,&uStack_31,&DAT_01c247e4);
      return;
    }
    local_78 = (uint *)param_2[1];
    iVar12 = 0;
    local_74 = local_78 + param_2[2] * 8;
    local_6c = 0;
    local_70 = (uint *)0x0;
    if (param_2[2] == 0) {
      uVar7 = 2;
      puVar9 = (uint *)0x2;
      local_7c = 2;
      cVar13 = '\x02';
    }
    else {
      uVar2 = 3;
      cVar13 = '\x03';
      puVar9 = (uint *)0x2;
      local_7c = 2;
      do {
        puVar1 = local_78;
        puVar3 = local_78 + 8;
        uVar4 = 0x15;
        local_6c = local_6c + 1;
        puVar11 = local_78 + 4;
        if ((int)*local_78 < 0) {
          uVar4 = *local_78 ^ 0x80000000;
        }
        local_70 = puVar11;
        switch(uVar4) {
        case 1:
          uVar4 = (uint)(byte)local_78[1];
          if (3 < uVar4) {
            uVar4 = 4;
          }
          break;
        default:
          local_78 = puVar3;
          FUN_01222458(&local_68,puVar1,&uStack_31,&DAT_01c248d4);
          goto LAB_012360f4;
        case 4:
          uVar4 = local_78[2];
          if (3 < uVar4) {
            uVar4 = 4;
          }
          if (local_78[3] != 0) {
            uVar4 = 4;
          }
          break;
        case 0xc:
          uVar4 = local_78[2];
          uVar8 = local_78[3];
          goto LAB_012360e4;
        case 0xd:
          uVar4 = local_78[1];
          uVar8 = local_78[2];
LAB_012360e4:
          local_78 = puVar3;
          FUN_01236fb0(&local_68,uVar4,uVar8);
LAB_012360f4:
          uVar7 = (char)local_64;
          uVar4 = local_64 & 0xff;
          if (local_68 != 2) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar7;
            *param_1 = local_68;
            return;
          }
          goto LAB_01236108;
        case 0xe:
          uVar4 = local_78[2];
          uVar8 = local_78[3];
          goto LAB_012360a8;
        case 0xf:
          uVar4 = local_78[1];
          uVar8 = local_78[2];
LAB_012360a8:
          local_78 = puVar3;
          FUN_01222494(&local_68,uVar4,uVar8);
          goto LAB_012360f4;
        }
        local_64 = CONCAT31(local_64._1_3_,(char)uVar4);
        local_78 = puVar3;
LAB_01236108:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar4 & 0xff) {
        case 0:
          if (uVar2 != 3) {
            uVar6 = 7;
            pcVar5 = "enabled";
LAB_012365f0:
            FUN_0123c090(param_1,pcVar5,uVar6);
            goto LAB_01236568;
          }
          FUN_012227b0(&local_68,&local_78);
          uVar7 = (char)local_64;
          uVar2 = local_64 & 0xff;
          if (local_68 != 2) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar7;
LAB_01236590:
            *param_1 = local_68;
            return;
          }
          break;
        case 1:
          if (cVar13 != '\x03') {
            uVar6 = 4;
            pcVar5 = &DAT_0056d358;
            goto LAB_012365f0;
          }
          local_70 = (uint *)0x0;
          FUN_0124206c(&local_68,puVar11);
          cVar13 = (char)local_64;
          if (local_68 != 2) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
            *(char *)(param_1 + 1) = cVar13;
            goto LAB_01236590;
          }
          break;
        case 2:
          if (local_7c != 2) {
            uVar6 = 0xc;
            pcVar5 = "power_target";
            goto LAB_012365f0;
          }
          FUN_012226b0(&local_68,&local_78);
          local_7c = local_64;
          if (local_68 != 2) {
            param_1[3] = local_5c;
            param_1[4] = local_58;
            param_1[5] = iStack_54;
            param_1[6] = local_50;
            param_1[7] = local_4c;
            param_1[8] = iStack_48;
            param_1[9] = iStack_44;
            param_1[10] = iStack_40;
            param_1[0xb] = iStack_3c;
            *param_1 = local_68;
            param_1[1] = local_64;
            param_1[2] = (int)local_60;
            return;
          }
          local_88 = local_60;
          break;
        case 3:
          if (puVar9 != (uint *)0x2 || iVar12 != 0) {
            uVar6 = 0xf;
            pcVar5 = "hashrate_target";
            goto LAB_012365f0;
          }
          FUN_01222770(&local_68,&local_78);
          if (local_68 == 2) {
            unaff_d8 = CONCAT44(iStack_54,local_58);
            puVar9 = local_60;
            iVar12 = local_5c;
            break;
          }
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = iStack_3c;
          *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_54,local_58);
          *param_1 = local_68;
          param_1[1] = local_64;
          param_1[2] = (int)local_60;
          param_1[3] = local_5c;
LAB_01236568:
          if (*param_1 != 2) {
            return;
          }
          goto LAB_012363b4;
        case 4:
          local_70 = (uint *)0x0;
        }
        uVar7 = (undefined1)uVar2;
      } while (local_78 != local_74);
      if (cVar13 == '\x03') {
        cVar13 = '\x02';
      }
      param_2 = local_88;
      if (uVar2 == 3) {
        uVar7 = 2;
      }
    }
    *(undefined1 *)(param_1 + 8) = uVar7;
    *(char *)((int)param_1 + 0x21) = cVar13;
    uVar2 = 0;
    if (local_7c != 2) {
      uVar2 = local_7c;
    }
    *(undefined8 *)(param_1 + 4) = unaff_d8;
    param_1[6] = uVar2;
    param_1[7] = (int)param_2;
    if (puVar9 == (uint *)0x2 && iVar12 == 0) {
      puVar9 = (uint *)0x0;
      iVar12 = 0;
    }
    param_1[2] = (int)puVar9;
    param_1[3] = iVar12;
LAB_012363b4:
    FUN_01223db8(&local_68,&local_78);
    if (local_68 == 2) {
      *param_1 = 2;
      return;
    }
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = (int)local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
    return;
  }
  puVar9 = (uint *)param_2[2];
  uVar2 = param_2[3];
  local_70 = (uint *)0x0;
  local_74 = puVar9 + uVar2 * 4;
  if (uVar2 == 0) {
    uVar6 = 0;
    local_78 = puVar9;
LAB_01236498:
    FUN_0123c028(param_1,uVar6,&DAT_01c248fc,&DAT_01d064b8);
  }
  else {
    local_70 = (uint *)0x1;
    local_78 = puVar9 + 4;
    FUN_0123e104(&local_68,puVar9);
    uVar7 = (char)local_64;
    if (local_68 != 2) {
      FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
      *(char *)(param_1 + 1) = (char)local_64;
      *param_1 = local_68;
      return;
    }
    uVar10 = 2;
    if (uVar2 != 1) {
      local_70 = (uint *)0x2;
      local_78 = puVar9 + 8;
      FUN_0124206c(&local_68,puVar9 + 4);
      uVar10 = (char)local_64;
      if (local_68 != 2) {
        FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x2b);
        *(char *)(param_1 + 1) = (char)local_64;
        *param_1 = local_68;
        return;
      }
    }
    FUN_01222908(&local_68,&local_78);
    puVar9 = local_60;
    uVar2 = local_64;
    if (local_68 != 2) {
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = iStack_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = iStack_3c;
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = (int)local_60;
      return;
    }
    if (local_64 == 2) {
      uVar6 = 2;
      goto LAB_01236498;
    }
    FUN_01222874(&local_68,&local_78);
    if (local_68 == 2) {
      if (local_60 != (uint *)0x2 || local_5c != 0) {
        *(undefined1 *)((int)param_1 + 0x21) = uVar10;
        *(undefined1 *)(param_1 + 8) = uVar7;
        param_1[6] = uVar2;
        param_1[7] = (int)puVar9;
        *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_54,local_58);
        param_1[2] = (int)local_60;
        param_1[3] = local_5c;
        goto LAB_012364a8;
      }
      uVar6 = 3;
      goto LAB_01236498;
    }
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
    *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_54,local_58);
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = (int)local_60;
    param_1[3] = local_5c;
  }
  if (*param_1 != 2) {
    return;
  }
LAB_012364a8:
  FUN_01223e04(&local_68,&local_78);
  if (local_68 == 2) {
    *param_1 = 2;
  }
  else {
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = (int)local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
  }
  return;
}

