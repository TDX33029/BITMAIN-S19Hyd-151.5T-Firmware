// FUN_010d2424 @ 010d2424 size=1076 calls_out=3 calls_in=1
// strings: 

void FUN_010d2424(undefined4 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int unaff_r11;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  undefined2 local_2c;
  int local_28;
  
  pbVar8 = *(byte **)param_2;
  pbVar9 = *(byte **)((int)param_2 + 4);
  local_44 = (byte *)0x0;
  if (pbVar9 != (byte *)0x0) {
    pbVar4 = pbVar8;
    do {
      pbVar5 = pbVar4 + 1;
      uVar6 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar6 < 0xe0) {
          uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar5 = pbVar4 + 2;
        }
        else {
          uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
            pbVar5 = pbVar4 + 3;
          }
          else {
            pbVar5 = pbVar4 + 4;
            uVar6 = pbVar4[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          }
        }
      }
      if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
        if (uVar6 < 0x80) goto LAB_010d255c;
        uVar7 = uVar6 >> 8;
        if (uVar7 < 0x20) {
          if (uVar7 == 0) {
            bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x010d2550:
            if (bVar1 == 0) goto LAB_010d255c;
          }
          else if ((uVar7 != 0x16) || (uVar6 != 0x1680)) goto LAB_010d255c;
        }
        else {
          if (uVar7 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
            goto joined_r0x010d2550;
          }
          if ((uVar7 != 0x30) || (uVar6 != 0x3000)) goto LAB_010d255c;
        }
      }
      local_44 = pbVar5 + ((int)local_44 - (int)pbVar4);
      pbVar4 = pbVar5;
    } while (pbVar5 != pbVar8 + (int)pbVar9);
    local_44 = pbVar9;
  }
LAB_010d255c:
  local_48 = pbVar9 + -(int)local_44;
  if (local_48 == (byte *)0x0) {
LAB_010d2628:
    *(undefined4 *)param_2 = 1;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *param_1 = 0;
    return;
  }
  local_44 = pbVar8 + (int)local_44;
  uVar12 = CONCAT44(local_48,local_44);
  uVar10 = CONCAT44(local_48,local_44);
  bVar1 = *local_44;
  if (bVar1 == 0x22) {
    if ((local_48 != (byte *)0x1) && ((char)local_44[1] < -0x40)) {
      puVar3 = &DAT_01885660;
LAB_010d2840:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_44,local_48,1,local_48,puVar3);
    }
    local_48 = local_48 + -1;
    local_28 = 1;
    local_2c = 1;
    local_38 = (byte *)CONCAT31(local_38._1_3_,1);
    local_3c = (byte *)0x22;
    local_50 = 0x22;
    local_34 = (byte *)0x0;
    local_4c = local_44 + 1;
    local_44 = (byte *)0x0;
    local_40 = local_48;
    local_30 = local_48;
    uVar10 = FUN_015bb1b4(&local_50);
    if (local_28 == 0) goto LAB_010d27f0;
    if (local_28 == 1) {
      goto joined_r0x010d260c;
    }
LAB_010d2738:
    local_28 = local_28 + -1;
    uVar12 = FUN_015bb1b4(&local_50);
    unaff_r11 = (int)((ulonglong)uVar12 >> 0x20);
    pbVar8 = (byte *)uVar12;
  }
  else {
    if (bVar1 == 0x23) goto LAB_010d2628;
    if (bVar1 != 0x27) {
      local_30 = (byte *)CONCAT22(local_30._2_2_,1);
      local_34 = (byte *)0x0;
      local_4c = (byte *)0x0;
      local_50 = 1;
      local_40 = local_48;
      local_3c = local_44;
      local_38 = pbVar8 + (int)pbVar9;
      uVar11 = FUN_010d2864(&local_4c);
      lVar2 = 1;
      if (local_50 != 0) {
        if (local_50 == 1) {
          uVar6 = (uint)local_30 >> 8 & 0xff;
          lVar13 = (ulonglong)uVar6 << 0x20;
          if ((uVar6 == 0) && ((((uint)local_30 & 0xff) != 0 || (lVar13 = 0, local_48 != local_4c)))
             ) {
            lVar13 = CONCAT44((int)local_48 - (int)local_4c,local_44 + (int)local_4c);
          }
        }
        else {
          local_50 = local_50 + -1;
          lVar13 = FUN_010d2864(&local_4c);
        }
        uVar10 = uVar12;
        lVar2 = 1;
        if ((int)uVar11 != 0 && (int)lVar13 != 0) {
          uVar10 = uVar11;
          lVar2 = lVar13;
        }
      }
      goto LAB_010d2810;
    }
    if ((local_48 != (byte *)0x1) && ((char)local_44[1] < -0x40)) {
      puVar3 = &DAT_01885670;
      goto LAB_010d2840;
    }
    local_48 = local_48 + -1;
    local_28 = 1;
    local_2c = 1;
    local_38 = (byte *)CONCAT31(local_38._1_3_,1);
    local_3c = (byte *)0x27;
    local_50 = 0x27;
    local_34 = (byte *)0x0;
    local_4c = local_44 + 1;
    local_44 = (byte *)0x0;
    local_40 = local_48;
    local_30 = local_48;
    uVar10 = FUN_015bb1b4(&local_50);
    if (local_28 == 0) goto LAB_010d27f0;
    if (local_28 != 1) goto LAB_010d2738;
joined_r0x010d260c:
    if (local_2c._1_1_ == '\0') {
      pbVar8 = (byte *)0x0;
      if (((char)local_2c == '\x01') || (local_30 != local_34)) {
        unaff_r11 = (int)local_30 - (int)local_34;
        pbVar8 = local_4c + (int)local_34;
      }
    }
    else {
      pbVar8 = (byte *)0x0;
    }
  }
  lVar2 = CONCAT44(unaff_r11,pbVar8);
  if ((int)uVar10 != 0 && pbVar8 != (byte *)0x0) {
LAB_010d2810:
    *param_2 = lVar2;
    *(undefined8 *)(param_1 + 1) = uVar10;
    *param_1 = 1;
    return;
  }
LAB_010d27f0:
  *(undefined4 *)param_2 = 1;
  *(undefined4 *)((int)param_2 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 1;
  return;
}

