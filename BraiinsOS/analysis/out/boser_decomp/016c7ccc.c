// FUN_016c7ccc @ 016c7ccc size=1072 calls_out=6 calls_in=2
// strings: 

void FUN_016c7ccc(uint *param_1,byte *param_2,uint param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r6;
  undefined1 uVar12;
  uint uVar13;
  uint unaff_r8;
  uint uVar14;
  uint uVar15;
  uint unaff_r11;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_54;
  uint local_50;
  code *local_4c;
  uint local_48;
  bool local_3e;
  undefined1 local_3d;
  byte *local_3c;
  byte *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 uStack_25;
  
  if (param_3 != 0) {
    uVar3 = 1;
    pbVar6 = param_2 + param_3;
    local_48 = (uint)*param_2;
    uVar11 = 1;
    pbVar9 = param_2;
    uVar15 = local_48;
    do {
      if (uVar3 == 0) {
        if (pbVar9 == pbVar6) goto LAB_016c7d38;
      }
      else {
        if ((uint)((int)pbVar6 - (int)pbVar9) <= uVar3) goto LAB_016c7d38;
        pbVar9 = pbVar9 + uVar3;
        uVar3 = 0;
      }
      uVar11 = uVar11 << 1;
      uVar15 = (uint)*pbVar9 + uVar15 * 2;
      pbVar9 = pbVar9 + 1;
    } while( true );
  }
  unaff_r11 = 0;
  uVar3 = 0;
  pcVar2 = (code *)&LAB_00664244;
  uVar11 = 1;
  uVar12 = 0;
  uVar15 = 0;
  unaff_r6 = 0;
  unaff_r8 = 0;
  local_38 = (byte *)0x0;
  local_3c = (byte *)0x0;
  local_4c = (code *)0x0;
  local_50 = 0;
  local_54 = 0;
  local_48 = 0;
  goto LAB_016c801c;
LAB_016c7d38:
  if (param_3 != 1) {
    uVar3 = (uint)param_2[1];
    local_3d = (byte)(&DAT_004d0188)[local_48] <= (byte)(&DAT_004d0188)[uVar3];
    if ((bool)local_3d) {
      uVar13 = local_48;
    }
    else {
      uVar13 = uVar3;
      uVar3 = local_48;
    }
    local_3e = !(bool)local_3d;
    uVar10 = (uint)!(bool)local_3d;
    uVar8 = (uint)(byte)local_3d;
    local_30 = 0xff;
    local_2c = 2;
    local_34 = 0;
    local_3c = param_2;
    local_38 = pbVar6;
    do {
      uVar1 = CONCAT44(local_3c,local_34);
      if (local_2c == 0) {
        uVar16 = (ulonglong)local_30;
        if (local_30 != 0) {
          local_30 = local_30 - 1;
          uVar16 = (ulonglong)local_30;
          if (local_3c != local_38) {
            local_3c = local_3c + 1;
            local_34 = local_34 + 1;
            uVar16 = uVar1;
          }
        }
      }
      else {
        local_2c = 0;
        uVar16 = FUN_0160d040(&local_3c);
      }
      pbVar9 = (byte *)(uVar16 >> 0x20);
      uVar7 = (uint)uVar16;
      uVar12 = (undefined1)uVar10;
      if (pbVar9 == (byte *)0x0) {
        if (uVar10 == uVar8) {
          param_3 = 0x16c80d4;
          FUN_0066197c(1,&local_3e,&local_3d,&DAT_01d09768);
LAB_016c80d4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar10,param_3,&DAT_01d097a8);
        }
        if (param_3 <= uVar10) goto LAB_016c80d4;
        uVar3 = (uint)param_2[uVar10];
        uVar13 = 0;
        local_50 = (uint)(byte)(&DAT_004d0188)[uVar3];
        if (local_50 < 0xfb) {
          if (param_3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,param_3,&DAT_01d09798);
          }
          local_4c = FUN_015fc818;
          pcVar2 = FUN_015fc9fc;
          local_50 = uVar3 << 0x10 | uVar8 << 8 | (uint)param_2[uVar8] << 0x18 | uVar10;
        }
        else {
          local_4c = (code *)0x0;
          pcVar2 = FUN_015fc2a4;
        }
        unaff_r6 = 0;
        unaff_r8 = 0;
        do {
          pbVar9 = param_2 + uVar13;
          uVar13 = uVar13 + 1;
          uVar7 = *pbVar9 & 0x3f;
          uVar8 = 1 << uVar7;
          uVar10 = 1 >> (0x20 - uVar7 & 0xff);
          if (-1 < (int)(uVar7 - 0x20)) {
            uVar8 = 0;
            uVar10 = 1 << (uVar7 - 0x20 & 0xff);
          }
          unaff_r8 = uVar10 | unaff_r8;
          unaff_r6 = uVar8 | unaff_r6;
        } while (param_3 != uVar13);
        uVar17 = FUN_015fc15c(param_2,param_3,0);
        uVar18 = FUN_015fc15c(param_2,param_3,1);
        if ((uint)uVar18 < (uint)uVar17) {
          uVar18 = uVar17;
        }
        unaff_r11 = (uint)uVar18;
        uVar18 = FUN_015fc05c(param_2,param_3,(int)((ulonglong)uVar18 >> 0x20),unaff_r11);
        local_54 = (uint)((ulonglong)uVar18 >> 0x20);
        local_48 = (uint)uVar18;
        goto LAB_016c801c;
      }
      uVar4 = (uint)*pbVar9;
      if ((byte)(&DAT_004d0188)[uVar4] < (byte)(&DAT_004d0188)[uVar13]) {
        local_3d = uVar12;
        if (0xff < uVar7) {
          puVar5 = &DAT_01d09788;
LAB_016c80ac:
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d096a8,puVar5);
        }
        uVar8 = uVar10;
        uVar10 = uVar7;
        uVar14 = uVar4;
        uVar3 = uVar13;
        local_3e = (bool)(char)uVar16;
      }
      else {
        uVar14 = uVar13;
        if ((uVar4 != uVar13) && ((byte)(&DAT_004d0188)[uVar4] < (byte)(&DAT_004d0188)[uVar3])) {
          if (0xff < uVar7) {
            puVar5 = &DAT_01d09778;
            goto LAB_016c80ac;
          }
          uVar8 = uVar7;
          uVar3 = uVar4;
          local_3d = (char)uVar16;
        }
      }
      uVar13 = uVar14;
    } while( true );
  }
  uVar12 = 0;
  pcVar2 = (code *)&LAB_015fc6c4;
LAB_016c801c:
  param_1[0xc] = (uint)pcVar2;
  *param_1 = local_48;
  param_1[1] = local_54;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r8;
  param_1[4] = unaff_r11;
  param_1[5] = 0;
  param_1[6] = (uint)local_4c;
  param_1[0xe] = 0;
  param_1[0xf] = (uint)param_2;
  param_1[0x10] = param_3;
  *(undefined1 *)((int)param_1 + 0x21) = uVar12;
  *(char *)(param_1 + 8) = (char)uVar3;
  *(byte **)((int)param_1 + 0x22) = local_3c;
  *(undefined2 *)((int)param_1 + 0x26) = local_38._0_2_;
  param_1[10] = uVar15;
  param_1[0xb] = uVar11;
  param_1[7] = local_50;
  return;
}

