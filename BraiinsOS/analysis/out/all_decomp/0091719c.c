// FUN_0091719c @ 0091719c size=1604 calls_out=10 calls_in=1
// strings: telemetry_enabled | telemetry_enabled | telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements | telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements | telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements | telemetry_enabled

void FUN_0091719c(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  int unaff_r7;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int local_78;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  if (uVar2 != 0x14) {
    if (uVar2 != 0x15) {
      FUN_008f7820(param_1,param_2,&local_6c,&DAT_01867208);
      return;
    }
    uVar2 = param_2[2];
    puVar14 = (uint *)param_2[1];
    puVar5 = puVar14 + uVar2 * 8;
    if (uVar2 == 0) {
      local_70 = 2;
      uVar3 = 0;
      uVar11 = 2;
      local_78 = unaff_r7;
    }
    else {
      uVar3 = (uVar2 * 0x20 - 0x20 >> 5) + 1;
      uVar12 = 3;
      iVar10 = 0;
      uVar15 = 1;
      local_70 = 2;
      do {
        uVar6 = 0x15;
        puVar16 = (uint *)((int)puVar14 + iVar10);
        puVar17 = puVar16 + 4;
        if ((int)*puVar16 < 0) {
          uVar6 = *puVar16 ^ 0x80000000;
        }
        switch(uVar6) {
        case 1:
          cVar1 = *(char *)((int)puVar14 + iVar10 + 4);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') goto LAB_00917450;
            iStack_2c = 0;
LAB_00917370:
            local_38 = CONCAT31(local_38._1_3_,1);
            FUN_00924358(&local_68,&local_38,&DAT_01867d78,&DAT_018ab990);
            goto LAB_00917328;
          }
          goto LAB_009173d4;
        default:
          FUN_008f7820(&local_68,puVar16,&local_6c,&DAT_01867288);
          goto LAB_00917328;
        case 4:
          iVar13 = *(int *)((int)puVar14 + iVar10 + 8);
          iVar4 = *(int *)((int)puVar14 + iVar10 + 0xc);
          if (iVar13 == 0 && iVar4 == 0) goto LAB_009173d4;
          if (iVar13 != 1 || iVar4 != 0) {
            iStack_2c = iVar4;
            goto LAB_00917370;
          }
          goto LAB_00917450;
        case 0xc:
          iVar13 = *(int *)((int)puVar14 + iVar10 + 0xc);
          uVar8 = *(undefined4 *)((int)puVar14 + iVar10 + 8);
          if (iVar13 == 0x11) {
            iVar4 = thunk_FUN_016dd50a(uVar8,"telemetry_enabled",0x11);
LAB_009173cc:
            if (iVar4 == 0) goto LAB_009173d4;
          }
          else if (iVar13 == 0x1c) {
            iVar4 = thunk_FUN_016dd50a(uVar8,
                                       "telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements"
                                       ,0x1c);
LAB_00917448:
            if (iVar4 == 0) goto LAB_00917450;
          }
          break;
        case 0xd:
          uVar8 = *(undefined4 *)((int)puVar14 + iVar10 + 4);
          iVar13 = *(int *)((int)puVar14 + iVar10 + 8);
          if (iVar13 == 0x11) {
            iVar4 = thunk_FUN_016dd50a(uVar8,"telemetry_enabled",0x11);
            goto LAB_009173cc;
          }
          if (iVar13 == 0x1c) {
            iVar4 = thunk_FUN_016dd50a(uVar8,
                                       "telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements"
                                       ,0x1c);
            goto LAB_00917448;
          }
          break;
        case 0xe:
          uVar8 = *(undefined4 *)((int)puVar14 + iVar10 + 8);
          uVar9 = *(undefined4 *)((int)puVar14 + iVar10 + 0xc);
          goto LAB_00917318;
        case 0xf:
          uVar8 = *(undefined4 *)((int)puVar14 + iVar10 + 4);
          uVar9 = *(undefined4 *)((int)puVar14 + iVar10 + 8);
LAB_00917318:
          FUN_00917cac(&local_68,uVar8,uVar9);
          goto LAB_00917328;
        }
        FUN_00924444(&local_68,uVar8,iVar13,&DAT_01867bd0,2);
LAB_00917328:
        if (local_68 != 2) {
          FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
LAB_009176a8:
          *param_1 = local_68;
          return;
        }
        if ((local_64 & 1) == 0) {
LAB_009173d4:
          if (uVar12 != 3) {
            uVar8 = 0x11;
            pcVar7 = "telemetry_enabled";
LAB_00917750:
            FUN_009244cc(param_1,pcVar7,uVar8);
            if (*param_1 != 2) {
              return;
            }
            puVar14 = puVar16 + 8;
            local_38 = uVar15;
            goto joined_r0x00917778;
          }
          FUN_0093f87c(&local_68,puVar17);
          uVar12 = local_64 & 0xff;
          if (local_68 != 2) {
            FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
            goto LAB_009176a8;
          }
        }
        else {
LAB_00917450:
          if (local_70 != 2) {
            uVar8 = 0x1c;
            pcVar7 = 
            "telemetry_submit_period_secsstruct ClientInfo with 10 elementsvariant index 0 <= i < 1struct PsuInfo with 8 elements"
            ;
            goto LAB_00917750;
          }
          uVar6 = 0x15;
          if ((int)*puVar17 < 0) {
            uVar6 = *puVar17 ^ 0x80000000;
          }
          local_70 = 0;
          if (uVar6 != 0x10) {
            if (uVar6 == 0x11) {
              puVar17 = *(uint **)((int)puVar14 + iVar10 + 0x14);
            }
            else if (uVar6 == 0x12) goto LAB_00917224;
            FUN_008f84c0(&local_68,puVar17);
            if (local_68 != 2) {
              param_1[3] = local_5c;
              param_1[4] = iStack_58;
              param_1[5] = iStack_54;
              param_1[6] = local_50;
              param_1[7] = local_4c;
              param_1[8] = iStack_48;
              param_1[9] = iStack_44;
              param_1[10] = iStack_40;
              param_1[0xb] = iStack_3c;
              *param_1 = local_68;
              param_1[1] = local_64;
              param_1[2] = local_60;
              return;
            }
            local_70 = local_64;
          }
LAB_00917224:
          local_78 = local_60;
        }
        uVar11 = (undefined1)uVar12;
        iVar10 = iVar10 + 0x20;
        uVar15 = uVar15 + 1;
      } while (uVar2 * 0x20 != iVar10);
      if (uVar12 == 3) {
        uVar11 = 2;
      }
      puVar14 = puVar5;
    }
    *(undefined1 *)(param_1 + 3) = uVar11;
    uVar2 = 0;
    if (local_70 != 2) {
      uVar2 = local_70;
    }
    param_1[1] = uVar2;
    param_1[2] = local_78;
    local_38 = uVar3;
joined_r0x00917778:
    if ((puVar5 == puVar14) ||
       (FUN_00f3cf48(&local_68,local_38 + ((uint)((int)puVar5 - (int)puVar14) >> 5),&local_38,
                     &DAT_01887224), local_68 == 2)) {
      *param_1 = 2;
      return;
    }
LAB_00917804:
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
    return;
  }
  uVar2 = param_2[3];
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = param_2[2];
    FUN_0093f87c(&local_68,uVar3);
    uVar11 = (undefined1)local_64;
    if (local_68 != 2) {
      FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
      *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
      *param_1 = local_68;
      return;
    }
    if (uVar2 != 1) {
      puVar14 = (uint *)(uVar3 + 0x10);
      uVar12 = 0x15;
      if ((int)*puVar14 < 0) {
        uVar12 = *puVar14 ^ 0x80000000;
      }
      local_38 = 0;
      local_34 = 0x91751c;
      if ((uVar12 != 0x10) && (uVar12 != 0x12)) {
        if (uVar12 == 0x11) {
          puVar14 = *(uint **)(uVar3 + 0x14);
        }
        FUN_008f84c0(&local_68,puVar14);
        local_38 = local_64;
        local_34 = local_60;
        if (local_68 != 2) {
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = iStack_54;
          param_1[6] = local_50;
          param_1[7] = local_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = iStack_40;
          param_1[0xb] = iStack_3c;
          *param_1 = local_68;
          param_1[1] = local_64;
          param_1[2] = local_60;
          return;
        }
      }
      param_1[1] = local_38;
      *(undefined1 *)(param_1 + 3) = uVar11;
      local_30 = param_1[3];
      param_1[2] = local_34;
      if (uVar2 != 2) {
        local_6c = 2;
        FUN_00f3cf48(&local_68,(uVar2 + 0xffffffe & 0xfffffff) + 2,&local_6c,&DAT_01887234);
        if (local_68 != 2) goto LAB_00917804;
      }
      goto LAB_00917670;
    }
    uVar8 = 1;
  }
  FUN_00f3cf48(param_1,uVar8,&DAT_01867340,&DAT_018ab990);
  if (*param_1 != 2) {
    return;
  }
  local_38 = param_1[1];
  local_34 = param_1[2];
  local_30 = param_1[3];
LAB_00917670:
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  *param_1 = 2;
  return;
}

