// FUN_013814c0 @ 013814c0 size=972 calls_out=6 calls_in=2
// strings: 

void FUN_013814c0(byte *param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint extraout_r2;
  int iVar9;
  uint uVar10;
  byte unaff_r4;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  code *unaff_r10;
  undefined *unaff_r11;
  uint uVar17;
  undefined8 uVar18;
  code *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined3 uStack_44;
  byte *local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  bool local_26;
  undefined1 local_25;
  
  if (param_3 == 0) {
    unaff_r10 = (code *)0x0;
    iVar14 = 1;
    unaff_r11 = (undefined *)0x0;
    unaff_r4 = 0;
    uVar16 = 0;
    uVar15 = 0;
    bVar12 = 0;
    uStack_44 = 0;
    local_5c = (code *)&LAB_005fcd8c;
    uStack_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_40 = (byte *)0x0;
    local_3c = (byte *)((uint)local_3c & 0xffff0000);
  }
  else {
    bVar12 = *param_2;
    uVar13 = (uint)bVar12;
    if (param_3 != 1) {
      uVar16 = (uint)param_2[1];
      iVar9 = param_3 - 2;
      uVar15 = uVar16 + uVar13 * 2;
      if (iVar9 == 0) {
        iVar14 = 2;
      }
      else {
        iVar14 = 2;
        pbVar7 = param_2 + 2;
        do {
          iVar9 = iVar9 + -1;
          iVar14 = iVar14 << 1;
          uVar15 = (uint)*pbVar7 + uVar15 * 2;
          pbVar7 = pbVar7 + 1;
        } while (iVar9 != 0);
      }
      unaff_r11 = &DAT_003cf239;
      local_25 = (byte)(&DAT_003cf239)[uVar13] <= (byte)(&DAT_003cf239)[uVar16];
      if ((bool)local_25) {
        uVar11 = uVar16;
      }
      else {
        uVar11 = uVar13;
        uVar13 = uVar16;
      }
      local_26 = !(bool)local_25;
      uVar17 = (uint)(byte)local_25;
      uVar16 = (uint)!(bool)local_25;
      local_34 = 0xff;
      local_38 = 0;
      iVar9 = 2;
      local_40 = param_2;
      local_3c = param_2 + param_3;
LAB_013816a8:
      local_30 = 0;
      uVar18 = FUN_005fca50(&local_40,iVar9);
      uVar2 = uVar13;
      pbVar6 = local_40;
      pbVar7 = (byte *)((ulonglong)uVar18 >> 0x20);
      do {
        local_40 = pbVar6;
        if (pbVar7 == (byte *)0x0) {
LAB_0138172c:
          if (uVar16 == uVar17) {
            FUN_005ff99c(&local_26,&local_25,&DAT_01892af0);
            param_3 = extraout_r2;
          }
          else if (uVar16 < param_3) {
            unaff_r4 = param_2[uVar16];
            if ((byte)(&DAT_003cf239)[unaff_r4] < 0xfb) {
              if (param_3 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar17,param_3,&DAT_01892b40);
              }
              bVar12 = param_2[uVar17];
              FUN_005fcaf0(&local_40);
              local_5c = FUN_012676bc;
              unaff_r11 = (undefined *)
                          ((uint)unaff_r4 << 0x10 | (uint)bVar12 << 0x18 | uVar17 << 8 | uVar16);
            }
            else {
              FUN_005fcaf0(&local_40);
              local_5c = FUN_01266eec;
            }
            bVar12 = (byte)local_40;
            FUN_016dd1aa(&local_58,(uint)&local_40 | 1,0x17);
            unaff_r10 = FUN_012674c8;
            goto LAB_013817cc;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar16,param_3,&DAT_01892b30);
        }
        uVar8 = (uint)uVar18;
        uVar1 = CONCAT44(local_40,local_38);
        uVar10 = (uint)*(byte *)((ulonglong)uVar18 >> 0x20);
        if ((byte)(&DAT_003cf239)[uVar10] < (byte)(&DAT_003cf239)[uVar2]) {
          local_25 = (undefined1)uVar16;
          uVar3 = uVar8;
          uVar13 = uVar10;
          uVar11 = uVar2;
          uVar17 = uVar16;
          uVar4 = (char)uVar18;
          uVar5 = local_25;
          if (0xff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01892ae0,&DAT_01892b10);
          }
        }
        else {
          uVar3 = uVar16;
          uVar13 = uVar2;
          uVar4 = local_26;
          uVar5 = local_25;
          if (((uVar10 != uVar2) && ((byte)(&DAT_003cf239)[uVar10] < (byte)(&DAT_003cf239)[uVar11]))
             && (uVar11 = uVar10, uVar17 = uVar8, uVar5 = (char)uVar18, 0xff < uVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01892ae0,&DAT_01892b00);
          }
        }
        local_25 = uVar5;
        local_26 = (bool)uVar4;
        uVar16 = uVar3;
        iVar9 = local_30;
        if (local_30 != 0) goto LAB_013816a8;
        if ((local_34 == 0) || (local_34 = local_34 + -1, local_40 == local_3c)) goto LAB_0138172c;
        local_38 = local_38 + 1;
        uVar2 = uVar13;
        pbVar6 = local_40 + 1;
        uVar18 = uVar1;
        pbVar7 = local_40;
      } while( true );
    }
    iVar14 = 1;
    uVar16 = 0;
    local_5c = (code *)&LAB_0126734c;
    uVar15 = uVar13;
  }
LAB_013817cc:
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(byte **)(param_1 + 0x3c) = param_2;
  *(uint *)(param_1 + 0x40) = param_3;
  *param_1 = bVar12;
  FUN_016dd1aa(param_1 + 1,&local_58,0x17);
  param_1[0x21] = (byte)uVar16;
  param_1[0x20] = unaff_r4;
  *(code **)(param_1 + 0x18) = unaff_r10;
  *(undefined **)(param_1 + 0x1c) = unaff_r11;
  *(uint *)(param_1 + 0x28) = uVar15;
  *(int *)(param_1 + 0x2c) = iVar14;
  *(code **)(param_1 + 0x30) = local_5c;
  *(byte **)(param_1 + 0x22) = local_40;
  *(undefined2 *)(param_1 + 0x26) = local_3c._0_2_;
  return;
}

