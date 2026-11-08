// FUN_009168b4 @ 009168b4 size=2144 calls_out=10 calls_in=1
// strings: hashrate_target | power_target | enabled

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009168b4(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int unaff_r5;
  int iVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 uVar15;
  undefined8 unaff_d8;
  int local_80;
  int local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 != 0x14) {
    if (uVar1 != 0x15) {
      FUN_008f7820(param_1,param_2,&local_64,&DAT_018671d8);
      return;
    }
    puVar12 = (uint *)param_2[1];
    uVar1 = param_2[2];
    puVar14 = puVar12 + uVar1 * 8;
    if (uVar1 == 0) {
      iVar2 = 0;
      local_6c._0_1_ = 2;
      local_70 = 2;
      local_74 = 0;
      local_68 = 2;
      uVar10 = 2;
      puVar9 = puVar12;
    }
    else {
      iVar13 = 1;
      iVar8 = 0;
      iVar2 = (uVar1 * 0x20 - 0x20 >> 5) + 1;
      uVar11 = 3;
      local_68 = 2;
      local_6c = 3;
      local_70 = 2;
      local_74 = 0;
      do {
        uVar4 = 0x15;
        puVar9 = (uint *)((int)puVar12 + iVar8);
        if ((int)*puVar9 < 0) {
          uVar4 = *puVar9 ^ 0x80000000;
        }
        switch(uVar4) {
        case 1:
          uVar4 = (uint)*(byte *)((int)puVar12 + iVar8 + 4);
          if (3 < uVar4) {
            uVar4 = 4;
          }
          local_5c = CONCAT31(local_5c._1_3_,(char)uVar4);
          break;
        default:
          FUN_008f7820(&local_60,puVar9,&local_64,&DAT_01867258);
          uVar10 = (undefined1)local_5c;
          goto joined_r0x00916b48;
        case 4:
          uVar4 = *(uint *)((int)puVar12 + iVar8 + 8);
          if (3 < uVar4) {
            uVar4 = 4;
          }
          if (*(int *)((int)puVar12 + iVar8 + 0xc) != 0) {
            uVar4 = 4;
          }
          break;
        case 0xc:
          uVar5 = *(undefined4 *)((int)puVar12 + iVar8 + 8);
          uVar7 = *(undefined4 *)((int)puVar12 + iVar8 + 0xc);
          goto LAB_00916b7c;
        case 0xd:
          uVar5 = *(undefined4 *)((int)puVar12 + iVar8 + 4);
          uVar7 = *(undefined4 *)((int)puVar12 + iVar8 + 8);
LAB_00916b7c:
          FUN_00917b78(&local_60,uVar5,uVar7);
          uVar10 = (undefined1)local_5c;
joined_r0x00916b48:
          uVar4 = local_5c & 0xff;
          if (local_60 != 2) {
            FUN_016dd1aa((int)param_1 + 5,(int)&local_5c + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar10;
            *param_1 = local_60;
            return;
          }
          break;
        case 0xe:
          uVar5 = *(undefined4 *)((int)puVar12 + iVar8 + 8);
          uVar7 = *(undefined4 *)((int)puVar12 + iVar8 + 0xc);
          goto LAB_00916b2c;
        case 0xf:
          uVar5 = *(undefined4 *)((int)puVar12 + iVar8 + 4);
          uVar7 = *(undefined4 *)((int)puVar12 + iVar8 + 8);
LAB_00916b2c:
          FUN_008f8660(&local_60,uVar5,uVar7);
          uVar10 = (undefined1)local_5c;
          goto joined_r0x00916b48;
        }
        puVar3 = puVar9 + 4;
        puVar9 = puVar9 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar4 & 0xff) {
        case 0:
          if (local_6c != 3) {
            uVar5 = 7;
            pcVar6 = "enabled";
LAB_00917080:
            FUN_009244cc(param_1,pcVar6,uVar5);
            iVar2 = *param_1;
            goto joined_r0x00916f40;
          }
          FUN_0093f87c(&local_60);
          uVar10 = (undefined1)local_5c;
          local_6c = local_5c & 0xff;
          if (local_60 != 2) {
            FUN_016dd1aa((int)param_1 + 5,(int)&local_5c + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar10;
LAB_00916f88:
            *param_1 = local_60;
            return;
          }
          break;
        case 1:
          if (uVar11 != 3) {
            uVar5 = 4;
            pcVar6 = &DAT_005675d0;
            goto LAB_00917080;
          }
          FUN_009259d4(&local_60);
          uVar10 = (undefined1)local_5c;
          uVar11 = local_5c & 0xff;
          if (local_60 != 2) {
            FUN_016dd1aa((int)param_1 + 5,(int)&local_5c + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar10;
            goto LAB_00916f88;
          }
          break;
        case 2:
          if (local_68 != 2) {
            uVar5 = 0xc;
            pcVar6 = "power_target";
            goto LAB_00917080;
          }
          uVar4 = 0x15;
          if ((int)*puVar3 < 0) {
            uVar4 = *puVar3 ^ 0x80000000;
          }
          local_68 = 0;
          if (uVar4 != 0x10) {
            if (uVar4 == 0x11) {
              puVar3 = *(uint **)((int)puVar12 + iVar8 + 0x14);
            }
            else if (uVar4 == 0x12) goto LAB_00916a70;
            FUN_008f8320(&local_60,puVar3);
            local_68 = local_5c;
            if (local_60 != 2) {
              param_1[3] = local_54;
              param_1[4] = local_50;
              param_1[5] = iStack_4c;
              param_1[6] = local_48;
              param_1[7] = local_44;
              param_1[8] = iStack_40;
              param_1[9] = iStack_3c;
              param_1[10] = iStack_38;
              param_1[0xb] = iStack_34;
              *param_1 = local_60;
              param_1[1] = local_5c;
              param_1[2] = local_58;
              return;
            }
          }
LAB_00916a70:
          local_80 = local_58;
          break;
        case 3:
          if (local_70 != 2 || local_74 != 0) {
            uVar5 = 0xf;
            pcVar6 = "hashrate_target";
            goto LAB_00917080;
          }
          FUN_00940098(&local_60);
          if (local_60 == 2) {
            unaff_d8 = CONCAT44(iStack_4c,local_50);
            local_70 = local_58;
            local_74 = local_54;
            break;
          }
          param_1[6] = local_48;
          param_1[7] = local_44;
          param_1[8] = iStack_40;
          param_1[9] = iStack_3c;
          param_1[10] = iStack_38;
          param_1[0xb] = iStack_34;
          *param_1 = local_60;
          *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_4c,local_50);
          param_1[1] = local_5c;
          param_1[2] = local_58;
          param_1[3] = local_54;
          iVar2 = *param_1;
joined_r0x00916f40:
          if (iVar2 != 2) {
            return;
          }
          goto LAB_00916d78;
        }
        uVar10 = (undefined1)uVar11;
        iVar8 = iVar8 + 0x20;
        iVar13 = iVar13 + 1;
      } while (uVar1 * 0x20 != iVar8);
      if (uVar11 == 3) {
        uVar10 = 2;
      }
      if (local_6c == 3) {
        local_6c._0_1_ = 2;
      }
      unaff_r5 = local_80;
      puVar9 = puVar14;
    }
    *(undefined1 *)(param_1 + 8) = (undefined1)local_6c;
    uVar1 = 0;
    if (local_68 != 2) {
      uVar1 = local_68;
    }
    *(undefined1 *)((int)param_1 + 0x21) = uVar10;
    param_1[6] = uVar1;
    *(undefined8 *)(param_1 + 4) = unaff_d8;
    param_1[7] = unaff_r5;
    if (local_70 == 2 && local_74 == 0) {
      local_70 = 0;
      local_74 = 0;
    }
    param_1[2] = local_70;
    param_1[3] = local_74;
    iVar13 = iVar2;
LAB_00916d78:
    if (puVar14 != puVar9) {
      local_64 = iVar13;
      FUN_00f3cf48(&local_60,iVar13 + ((uint)((int)puVar14 - (int)puVar9) >> 5),&local_64,
                   &DAT_01887224);
      if (local_60 != 2) {
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        param_1[3] = local_54;
        param_1[4] = local_50;
        param_1[5] = iStack_4c;
        param_1[6] = local_48;
        param_1[7] = local_44;
        param_1[8] = iStack_40;
        param_1[9] = iStack_3c;
        param_1[10] = iStack_38;
        param_1[0xb] = iStack_34;
        return;
      }
    }
    *param_1 = 2;
    return;
  }
  puVar14 = (uint *)param_2[2];
  uVar1 = param_2[3];
  puVar12 = puVar14 + uVar1 * 4;
  if (uVar1 == 0) {
    local_6c = 0;
    FUN_00f3cf48(param_1,0,&DAT_01867338,&DAT_018ab990);
    iVar2 = *param_1;
  }
  else {
    iVar2 = 0x91696c;
    FUN_0093f87c(&local_60,puVar14);
    uVar10 = (undefined1)local_5c;
    if (local_60 != 2) {
      FUN_016dd1aa((int)param_1 + 5,(int)&local_5c + 1,0x2b);
      *(undefined1 *)(param_1 + 1) = (undefined1)local_5c;
LAB_00916a38:
      *param_1 = local_60;
      return;
    }
    puVar9 = puVar14 + 4;
    if (uVar1 == 1) {
      local_6c = 1;
      uVar15 = 2;
      if (puVar9 != puVar12) goto LAB_00916998;
LAB_00916dc8:
      uVar5 = 2;
    }
    else {
      iVar2 = 0x916da8;
      FUN_009259d4(&local_60,puVar9);
      if (local_60 != 2) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_5c + 1,0x2b);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_5c;
        goto LAB_00916a38;
      }
      puVar9 = puVar14 + 8;
      local_6c = 2;
      uVar15 = (undefined1)local_5c;
      if (puVar9 == puVar12) goto LAB_00916dc8;
LAB_00916998:
      uVar1 = 0x15;
      if ((int)*puVar9 < 0) {
        uVar1 = *puVar9 ^ 0x80000000;
      }
      uVar11 = 0;
      if ((uVar1 != 0x10) && (uVar1 != 0x12)) {
        puVar14 = puVar9;
        if (uVar1 == 0x11) {
          puVar14 = (uint *)puVar9[1];
        }
        FUN_008f8320(&local_60,puVar14);
        uVar11 = local_5c;
        iVar2 = local_58;
        if (local_60 != 2) {
          param_1[3] = local_54;
          param_1[4] = local_50;
          param_1[5] = iStack_4c;
          param_1[6] = local_48;
          param_1[7] = local_44;
          param_1[8] = iStack_40;
          param_1[9] = iStack_3c;
          param_1[10] = iStack_38;
          param_1[0xb] = iStack_34;
          *param_1 = local_60;
          param_1[1] = local_5c;
          param_1[2] = local_58;
          return;
        }
      }
      if (puVar9 + 4 != puVar12) {
        FUN_00940098(&local_60,puVar9 + 4);
        puVar14 = puVar9 + 8;
        local_6c = local_6c + 2;
        if (local_60 == 2) {
          param_1[2] = local_58;
          param_1[3] = local_54;
          param_1[6] = uVar11;
          *(undefined1 *)((int)param_1 + 0x21) = uVar15;
          *(undefined1 *)(param_1 + 8) = uVar10;
          param_1[7] = iVar2;
          *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_4c,local_50);
          goto LAB_00917014;
        }
        param_1[6] = local_48;
        param_1[7] = local_44;
        param_1[8] = iStack_40;
        param_1[9] = iStack_3c;
        param_1[10] = iStack_38;
        param_1[0xb] = iStack_34;
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_4c,local_50);
        param_1[3] = local_54;
        iVar2 = *param_1;
        goto joined_r0x00916ee8;
      }
      local_6c = local_6c + 1;
      uVar5 = 3;
    }
    FUN_00f3cf48(param_1,uVar5,&DAT_01867338,&DAT_018ab990);
    iVar2 = *param_1;
    puVar14 = puVar12;
  }
joined_r0x00916ee8:
  if (iVar2 != 2) {
    return;
  }
LAB_00917014:
  if (puVar12 != puVar14) {
    local_64 = local_6c;
    FUN_00f3cf48(&local_60,local_6c + ((uint)((int)puVar12 - (int)puVar14) >> 4),&local_64,
                 &DAT_01887234);
    if (local_60 != 2) {
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = iStack_4c;
      param_1[6] = local_48;
      param_1[7] = local_44;
      param_1[8] = iStack_40;
      param_1[9] = iStack_3c;
      param_1[10] = iStack_38;
      param_1[0xb] = iStack_34;
      return;
    }
  }
  *param_1 = 2;
  return;
}

