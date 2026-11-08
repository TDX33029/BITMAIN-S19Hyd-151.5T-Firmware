// FUN_01043710 @ 01043710 size=1944 calls_out=25 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01043710(uint *param_1,uint *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint *unaff_r11;
  bool bVar16;
  undefined8 uVar17;
  undefined1 auStack_1f8 [152];
  undefined4 local_160;
  undefined *local_15c;
  undefined4 local_158;
  code *local_154;
  uint uStack_150;
  uint uStack_14c;
  uint local_148;
  undefined1 auStack_144 [52];
  undefined1 auStack_110 [48];
  undefined4 local_e0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined1 local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  uVar4 = (&switchD_01043738::switchdataD_0104373c)[(byte)param_2[0x3f]];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)param_2[0x3f]) {
  case 0:
    if ((short)param_2[4] == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 10;
    }
    uVar4 = FUN_016d997a(uVar5,0x80801,6);
    if (uVar4 == 0xffffffff) {
      puVar7 = (uint *)FUN_016d2bc8();
      local_30 = (ulonglong)*puVar7 << 0x20;
    }
    else {
      param_2[0x3e] = uVar4;
      if ((ushort)param_2[0xc] == 2) {
LAB_01043860:
        local_160 = (uint *)0x1;
        iVar6 = FUN_016d98a4(param_2[0x3e],6,1,&local_160,4);
        if (iVar6 != -1) {
          local_a8 = param_2[0x3e];
          local_c8 = param_2[4];
          uStack_c4 = param_2[5];
          uStack_c0 = param_2[6];
          uStack_bc = param_2[7];
          local_b8 = param_2[8];
          uStack_b4 = param_2[9];
          uStack_b0 = param_2[10];
          uStack_ac = param_2[0xb];
          puVar9 = (undefined1 *)param_2[2];
          uVar11 = *param_2;
          uVar4 = param_2[1];
          if (puVar9 == &DAT_3b9aca00) {
            uVar11 = 5;
          }
          local_84 = 0;
          if (puVar9 == &DAT_3b9aca00) {
            puVar9 = (undefined1 *)0x0;
            uVar4 = 0;
          }
          param_2[0x14] = uVar11;
          param_2[0x15] = uVar4;
          param_2[0x16] = (uint)puVar9;
          FUN_0165a798(&local_80);
          uVar12 = local_80 + uVar11;
          uVar11 = local_7c + uVar4 + (uint)CARRY4(local_80,uVar11);
          if ((int)uVar4 < 0 == (int)((local_7c ^ uVar11) & ~(local_7c ^ uVar4)) < 0) {
            puVar9 = puVar9 + local_78;
            if (&DAT_3b9aca00 <= puVar9) {
              bVar16 = 0xfffffffe < uVar12;
              uVar12 = uVar12 + 1;
              uVar4 = uVar11 + bVar16;
              if (-1 < (int)((uVar11 ^ uVar4) & ~uVar11)) {
                puVar9 = puVar9 + -1000000000;
                uVar11 = uVar4;
                if (puVar9 != &DAT_3b9aca00) goto LAB_01043980;
              }
              goto LAB_01043958;
            }
LAB_01043980:
            local_30 = FUN_0164ec90(&DAT_018833f8);
            iVar6 = 0x180;
            if ((local_30 & 1) != 0) {
              iVar6 = 0xb8;
            }
            if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar6 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                           ,0x73,&DAT_018833f8);
            }
            local_7c = 0;
            local_80 = 0;
            local_38 = 0;
            local_48 = uVar12;
            local_44 = uVar11;
            local_40 = puVar9;
            local_50 = local_30;
          }
          else {
LAB_01043958:
            FUN_01656dc8(&local_80);
            local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
          }
          FUN_016dd1aa(auStack_110,&local_c8,0x48);
          FUN_016dd1aa(&local_160,&local_80,0x50);
          FUN_016dd1aa(auStack_1f8,&local_160,0x98);
          uVar4 = FUN_016dd1aa(param_2 + 0x18,auStack_1f8,0x98);
          goto switchD_01043738_caseD_3;
        }
      }
      else {
        uVar11 = *(uint *)((int)param_2 + 0x32);
        uVar3 = *(ushort *)((int)param_2 + 0x36);
        unaff_r11 = (uint *)(uint)uVar3;
        if (((ushort)param_2[0xc] & 1) == 0) {
          FUN_016dd606(&local_158,0,0x78);
          uVar3 = (ushort)(((uint)unaff_r11 & 0xff) << 8) | uVar3 >> 8;
          local_e0 = 0x10;
          uVar8 = 2;
        }
        else {
          uVar14 = param_2[0x12];
          local_154 = (code *)param_2[0xe];
          uStack_150 = param_2[0xf];
          uStack_14c = param_2[0x10];
          uVar15 = param_2[0x11];
          uVar12 = param_2[0x13];
          local_158 = (uint *)CONCAT22(uVar3,(short)(uVar11 >> 0x10));
          FUN_016dd606(auStack_144,0,100);
          uVar3 = (ushort)uVar12 << 8 | (ushort)uVar12 >> 8;
          local_e0 = 0x1c;
          uVar8 = 10;
          uVar11 = uVar15;
          local_148 = uVar14;
        }
        local_160 = (uint *)CONCAT22(uVar3,uVar8);
        local_15c = (undefined *)uVar11;
        iVar6 = FUN_016d6eba(uVar4,&local_160);
        if (iVar6 != -1) goto LAB_01043860;
      }
      puVar7 = (uint *)FUN_016d2bc8();
      uVar4 = *puVar7;
      FUN_016dffb2(param_2[0x3e]);
      local_30 = (ulonglong)uVar4 << 0x20;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01883408);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01883408);
  case 3:
switchD_01043738_caseD_3:
    uVar17 = thunk_FUN_016de0ee(uVar4,0x40);
    puVar13 = (undefined *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    bVar2 = *(byte *)((int)puVar13 + 0x38);
    if (bVar2 == 1) {
LAB_01043a60:
      bVar2 = ~*(byte *)((int)puVar13 + 0x30) & 1 | *(char *)((int)puVar13 + 0x31) != '\0';
    }
    else if (bVar2 != 2) {
      FUN_015e8e6c(puVar13,FUN_01044070);
      *(undefined1 *)((int)puVar13 + 0x38) = 1;
      goto LAB_01043a60;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3d]) {
    case '\0':
      uVar15 = param_2[0x34];
      uVar11 = *(uint *)((int)param_2 + 0xb2);
      uVar12 = param_2[0x31];
      uVar14 = param_2[0x32];
      uVar3 = *(ushort *)((int)param_2 + 0xb6);
      uVar4 = param_2[0x33];
      unaff_r11 = (uint *)(uint)(ushort)uVar4;
      *(undefined1 *)((int)param_2 + 0xf5) = 1;
      param_2[0x35] = uVar15;
      if ((param_2[0x2c] & 1) == 0) {
        FUN_016dd606(&local_158,0,0x78);
        uVar3 = uVar3 << 8 | uVar3 >> 8;
        local_e0 = 0x10;
        uVar8 = 2;
      }
      else {
        local_154 = (code *)param_2[0x2e];
        uStack_150 = param_2[0x2f];
        uStack_14c = param_2[0x30];
        local_158 = (uint *)CONCAT22(uVar3,(short)(uVar11 >> 0x10));
        FUN_016dd606(auStack_144,0,100);
        uVar3 = (ushort)(((uint)unaff_r11 & 0xff) << 8) | (ushort)uVar4 >> 8;
        local_e0 = 0x1c;
        uVar8 = 10;
        uVar11 = uVar12;
        local_148 = uVar14;
      }
      local_160 = (uint *)CONCAT22(uVar3,uVar8);
      local_15c = (undefined *)uVar11;
      iVar6 = FUN_016d6ed2(uVar15,&local_160);
      if (iVar6 != -1) {
LAB_01043bbc:
        uVar4 = param_2[0x35];
        param_2[0x36] = uVar4;
        *(undefined1 *)((int)param_2 + 0xf5) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
LAB_01043bdc:
        uVar17 = FUN_0164ec90(&DAT_018ac94c);
        FUN_01657a90(&local_160,uVar4,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),&DAT_018ac94c);
        uVar11 = (uint)local_158;
        puVar13 = local_15c;
        if (local_160 != (uint *)0x2) {
          param_2[0x38] = (uint)local_15c;
          param_2[0x39] = (uint)local_158;
          puVar7 = param_2 + 0x37;
          *puVar7 = (uint)local_160;
          param_2[0x3a] = uVar4;
          param_2[0x3b] = (uint)puVar7;
          goto LAB_01043c48;
        }
        FUN_016dffb2(uVar4);
        uVar4 = (uint)puVar13 >> 8 | uVar11 << 0x18;
        uVar11 = uVar11 >> 8;
        goto LAB_01043d58;
      }
      puVar7 = (uint *)FUN_016d2bc8();
      puVar10 = (undefined4 *)*puVar7;
      if (puVar10 == (undefined4 *)0x73) goto LAB_01043bbc;
      FUN_016dffb2(param_2[0x35]);
      puVar13 = (undefined *)0x0;
      *(undefined1 *)((int)param_2 + 0xf5) = 0;
LAB_01043d78:
      uVar4 = 2;
      *(undefined1 *)(param_2 + 0x3d) = 1;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a686c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a686c);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x3c]) {
      case '\0':
        uVar4 = param_2[0x36];
        goto LAB_01043bdc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a687c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a687c);
      case '\x03':
        puVar7 = (uint *)param_2[0x3b];
      }
LAB_01043c48:
      unaff_r11 = param_2 + 0x36;
      puVar10 = &local_160;
      FUN_01657318(puVar10,puVar7[2],param_3,1);
      if (local_160 != (uint *)0x2) {
        if (((uint)local_160 & 1) == 0) {
          if (param_2[0x3a] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ad11c);
          }
          puVar13 = (undefined *)0x0;
          local_160 = (uint *)0x4;
          local_80 = 0;
          iVar6 = FUN_016d7828(param_2[0x3a],1,4,&local_80,puVar10);
          if (iVar6 == -1) {
            puVar7 = (uint *)FUN_016d2bc8();
            uVar11 = *puVar7 >> 8;
            uVar4 = *puVar7 << 0x18;
          }
          else if (local_80 == 0) {
            uVar4 = 0;
            puVar13 = (undefined *)0x4;
            if (iVar6 != -1) {
              uVar4 = param_2[0x37];
              unaff_r11 = (uint *)param_2[0x3a];
              puVar13 = (undefined *)param_2[0x38];
              puVar10 = (undefined4 *)param_2[0x39];
              *(undefined1 *)(param_2 + 0x3c) = 1;
              if (uVar4 == 3) goto LAB_01043c74;
              *(undefined2 *)(param_2 + 0x3d) = 1;
              if (uVar4 == 4) goto LAB_01043c9c;
              break;
            }
            uVar11 = 0;
          }
          else {
            uVar11 = local_80 >> 8;
            uVar4 = local_80 << 0x18;
            puVar13 = (undefined *)0x0;
          }
        }
        else {
          uVar4 = (uint)local_15c >> 8 | (int)local_158 << 0x18;
          uVar11 = (uint)local_158 >> 8;
          puVar13 = local_15c;
        }
        FUN_01044104(param_2 + 0x37);
LAB_01043d58:
        unaff_r11 = param_2 + 0x36;
        *(undefined1 *)((int)param_2 + 0xf5) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 1;
        puVar13 = (undefined *)((uint)puVar13 & 0xff | uVar4 << 8);
        puVar10 = (undefined4 *)(uVar11 << 8 | uVar4 >> 0x18);
        goto LAB_01043d78;
      }
      *(undefined1 *)(param_2 + 0x3c) = 3;
LAB_01043c74:
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0x3d) = 3;
      iVar6 = FUN_016540e8(bVar2 == 2 | bVar2 & 1,param_2 + 0x18,*param_3);
      if (iVar6 != 0) {
LAB_01043c9c:
        *param_1 = 3;
        *(undefined1 *)(param_2 + 0x3f) = 3;
        return;
      }
    }
    uVar1 = CONCAT44(puVar10,puVar13);
    FUN_010443cc(param_2 + 0x18);
    if (uVar4 != 3) goto LAB_01043df8;
    local_15c = &DAT_00fb9ed0;
    local_160 = param_2 + 4;
    local_154 = FUN_00fb8184;
    local_158 = param_2 + 0x14;
    FUN_00600d2c(&local_80,&DAT_005745db,&local_160);
    local_c8 = local_80;
    uStack_c4 = local_7c;
    uStack_c0 = local_78;
    FUN_01650c14(&local_30,0x16,&local_c8);
  }
  uVar4 = 2;
  uVar1 = local_30;
LAB_01043df8:
  *param_1 = uVar4;
  *(ulonglong *)(param_1 + 1) = uVar1;
  param_1[3] = (uint)unaff_r11;
  *(undefined1 *)(param_2 + 0x3f) = 1;
  return;
}

