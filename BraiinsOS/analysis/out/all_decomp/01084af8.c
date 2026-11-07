// FUN_01084af8 @ 01084af8 size=1580 calls_out=9 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01084af8(int param_1,uint *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  short sVar25;
  uint uVar26;
  undefined8 uVar27;
  byte *local_ac;
  byte *local_9c;
  byte *local_98;
  byte *local_8c;
  int local_88;
  undefined1 local_84;
  undefined1 local_83;
  byte *local_80;
  byte *pbStack_7c;
  byte *pbStack_78;
  undefined4 local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  undefined4 local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *pbStack_38;
  byte *local_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  
  uVar8 = param_2[0xe];
  uVar10 = param_2[0xf];
  uVar20 = (uint)*(byte *)(param_1 + 0x40);
  param_2[0xe] = uVar8 + 1;
  if (uVar10 == 0) {
LAB_01084c88:
    uVar10 = 1;
  }
  else {
    if (uVar10 != 8) {
      uVar8 = uVar20;
    }
    iVar12 = (uVar10 & 7) * 8;
    if (uVar10 == 8) {
      uVar8 = 0;
    }
    uVar18 = iVar12 - 0x20;
    uVar14 = uVar8 << iVar12;
    if (-1 < (int)uVar18) {
      uVar14 = 0;
    }
    uVar14 = param_2[0xc] | uVar14;
    param_2[0xc] = uVar14;
    uVar15 = uVar8 >> ((uVar10 & 7) * -8 + 0x20 & 0xff) | 0 << iVar12;
    if (-1 < (int)uVar18) {
      uVar15 = uVar8 << (uVar18 & 0xff);
    }
    uVar15 = param_2[0xd] | uVar15;
    param_2[0xd] = uVar15;
    if (uVar10 - 9 < 0xfffffffe) {
      uVar10 = uVar10 + 1;
      goto LAB_01084c94;
    }
    uVar16 = param_2[5];
    uVar8 = param_2[4];
    uVar26 = uVar8 + *param_2;
    uVar13 = uVar16 + param_2[1] + (uint)CARRY4(uVar8,*param_2);
    uVar18 = (uVar8 << 0xd | uVar16 >> 0x13) ^ uVar26;
    uVar19 = (uVar16 << 0xd | uVar8 >> 0x13) ^ uVar13;
    local_9c = (byte *)(uVar18 << 0x11 | uVar19 >> 0xf);
    uVar24 = param_2[7] ^ uVar15;
    uVar16 = param_2[2];
    uVar17 = param_2[6] ^ uVar14;
    uVar8 = uVar16 + uVar17;
    uVar21 = param_2[3] + uVar24 + (uint)CARRY4(uVar16,uVar17);
    param_2[3] = uVar8 + uVar18;
    param_2[4] = uVar8 + uVar18 ^ (uint)local_9c;
    uVar16 = uVar21 + uVar19 + (uint)CARRY4(uVar8,uVar18);
    param_2[5] = uVar16 ^ (uVar19 << 0x11 | uVar18 >> 0xf);
    param_2[2] = uVar16;
    uVar8 = uVar8 ^ (uVar17 << 0x10 | uVar24 >> 0x10);
    *param_2 = uVar8 + uVar13 ^ uVar14;
    uVar21 = uVar21 ^ (uVar24 << 0x10 | uVar17 >> 0x10);
    param_2[6] = (uVar8 << 0x15 | uVar21 >> 0xb) ^ uVar8 + uVar13;
    uVar14 = uVar21 + uVar26 + (uint)CARRY4(uVar8,uVar13);
    param_2[7] = (uVar21 << 0x15 | uVar8 >> 0xb) ^ uVar14;
    param_2[1] = uVar14 ^ uVar15;
    if (uVar10 != 7) goto LAB_01084c88;
    uVar20 = 0;
    uVar10 = 0;
  }
  param_2[0xc] = uVar20;
  param_2[0xd] = 0;
LAB_01084c94:
  if (*(short *)(param_1 + 0x24) == 1) {
    local_83 = (undefined1)*(undefined4 *)(param_1 + 0x30);
  }
  else {
    local_83 = (undefined1)*(undefined2 *)(param_1 + 0x26);
  }
  pbVar2 = (byte *)((uint)&local_70 | 4);
  param_2[0xf] = uVar10;
  local_98 = (byte *)0x0;
  local_84 = 0;
  local_88 = param_1;
  do {
    uVar27 = FUN_01039230(&local_88);
    if ((int)uVar27 == 0) {
      return;
    }
    FUN_01049718(&local_50,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
    pbVar6 = local_44;
    pbVar22 = local_48;
    if ((short)local_50 == 2) {
      local_30 = local_4c;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01883c98,&DAT_01883ca8);
    }
    local_70 = local_50;
    pbVar4 = local_70;
    local_6c = local_4c;
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_40;
    pbStack_5c = local_3c;
    pbStack_58 = pbStack_38;
    uVar8 = (uint)local_50 & 0xffff;
    local_70._2_2_ = (ushort)((uint)local_50 >> 0x10);
    uVar1 = local_70._2_2_;
    local_70 = pbVar4;
    if (((uint)local_50 & 1) == 0) {
      pbVar5 = (byte *)(uint)local_70._2_2_;
      pbVar4 = pbVar2;
      if (&DAT_00000018 < pbVar5) goto LAB_01085080;
    }
    else {
      pbVar4 = local_48;
      pbVar5 = local_44;
    }
    pbVar5 = pbVar4 + (int)pbVar5;
    iVar12 = 0;
    pbVar23 = (byte *)0x0;
    do {
      pbVar11 = pbVar23;
      iVar9 = iVar12;
      if (pbVar4 == pbVar5) {
        if (((uint)local_50 & 1) == 0) {
          sVar25 = 0;
          pbVar22 = (byte *)(uint)local_70._2_2_;
          local_50 = local_40;
          local_8c = local_4c;
          pbVar4 = local_48;
          local_4c = local_3c;
          local_48 = pbStack_38;
        }
        else {
          uVar3 = 0;
          pbVar4 = local_ac;
          if ((int)local_44 < 0) goto LAB_01085130;
          sVar25 = 1;
          if (local_44 == (byte *)0x0) {
            local_8c = (byte *)0x0;
            local_ac = &DAT_00000001;
          }
          else {
            local_ac = (byte *)thunk_FUN_016d4a50(local_44,local_ac);
            if (local_ac == (byte *)0x0) {
              uVar3 = 1;
              pbVar4 = pbVar6;
              goto LAB_01085130;
            }
            local_8c = pbVar6;
          }
          FUN_016dd1aa(local_ac,pbVar22,pbVar6);
          pbVar22 = local_98;
          pbVar4 = local_ac;
        }
        local_80 = local_50;
        pbStack_7c = local_4c;
        pbStack_78 = local_48;
        pbVar5 = local_50;
        if (uVar8 != 0) {
          pbVar5 = local_6c;
        }
        local_98 = pbVar22;
        if (uVar8 != 0 && pbVar5 != (byte *)0x0) goto LAB_0108506c;
        goto LAB_01084f90;
      }
      bVar7 = *pbVar4;
      uVar10 = 0xff;
      if (bVar7 - 0x41 < 0x1a) {
        uVar10 = 0xdf;
      }
      pbVar4 = pbVar4 + 1;
      iVar12 = iVar9 + -1;
      pbVar23 = pbVar11 + 1;
    } while ((uVar10 | bVar7) == 0xff);
    if (((uint)local_50 & 1) == 0) {
      pbVar4 = (byte *)(uint)local_70._2_2_;
      pbVar6 = pbVar2;
      if (&DAT_00000018 < pbVar4) {
LAB_01085080:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,0x18,&DAT_01883538);
      }
    }
    else {
      uVar3 = 0;
      pbVar4 = local_9c;
      if ((int)local_44 < 0) goto LAB_01085130;
      pbVar5 = local_9c;
      pbVar4 = local_44;
      pbVar6 = local_48;
    }
    if (pbVar4 == (byte *)0x0) {
      pbVar22 = (byte *)0x0;
      local_9c = &DAT_00000001;
    }
    else {
      local_9c = (byte *)thunk_FUN_016d4a50(pbVar4,pbVar5);
      if (local_9c == (byte *)0x0) {
        uVar3 = 1;
LAB_01085130:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,pbVar4);
      }
      pbVar22 = pbVar4;
    }
    FUN_016dd1aa(local_9c,pbVar6,pbVar22);
    if (pbVar22 < pbVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(pbVar11,pbVar22,pbVar22,&DAT_01883518);
    }
    if (pbVar22 != pbVar11) {
      pbVar4 = pbVar4 + iVar9;
      if (pbVar4 < &SUB_00000002) {
        pbVar4 = &DAT_00000001;
      }
      pbVar6 = local_9c + (int)pbVar11;
      do {
        bVar7 = *pbVar6;
        if (bVar7 - 0x41 < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        *pbVar6 = bVar7;
        pbVar4 = pbVar4 + -1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar4 != (byte *)0x0);
    }
    if (pbVar22 < &DAT_00000019) {
      sVar25 = 0;
      local_3c = (byte *)0x0;
      local_40 = (byte *)0x0;
      local_44 = (byte *)0x0;
      local_48 = (byte *)0x0;
      local_4c = (byte *)0x0;
      local_50 = (byte *)0x0;
      FUN_016dd1aa(&local_50,local_9c,pbVar22);
      local_80 = local_44;
      pbStack_7c = local_40;
      pbStack_78 = local_3c;
      local_8c = local_50;
      pbVar5 = local_44;
      pbVar6 = local_48;
      pbVar23 = pbVar22;
      pbVar4 = local_4c;
      local_30 = local_80;
      if (pbVar22 != (byte *)0x0) goto LAB_01084f78;
    }
    else {
      pbVar4 = (byte *)thunk_FUN_016d4a50(pbVar22);
      if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,pbVar22);
      }
      FUN_016dd1aa(pbVar4,local_9c,pbVar22);
      sVar25 = 1;
      pbStack_7c = pbStack_2c;
      pbStack_78 = pbStack_28;
      pbVar6 = pbVar22;
      pbVar23 = (byte *)0x0;
      local_8c = pbVar22;
LAB_01084f78:
      local_80 = local_30;
      pbVar5 = (byte *)thunk_FUN_016d3fb4(local_9c);
      pbVar22 = pbVar23;
    }
    if (uVar8 != 0) {
      pbVar5 = local_6c;
    }
    if (uVar8 != 0 && pbVar5 != (byte *)0x0) {
LAB_0108506c:
      thunk_FUN_016d3fb4(local_68);
    }
LAB_01084f90:
    local_40 = local_80;
    local_3c = pbStack_7c;
    local_4c = local_8c;
    local_50 = (byte *)CONCAT22((short)pbVar22,sVar25);
    local_44 = pbVar6;
    pbVar5 = pbVar4;
    local_48 = pbVar4;
    pbStack_38 = pbStack_78;
    if ((sVar25 == 0) &&
       (pbVar6 = pbVar22, pbVar5 = (byte *)((uint)&local_50 | 4), &DAT_00000018 < pbVar22)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,pbVar22,0x18,&DAT_01883538);
    }
    for (; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + -1) {
      bVar7 = *pbVar5;
      if (bVar7 - 0x41 < 0x1a) {
        bVar7 = bVar7 | 0x20;
      }
      uVar8 = (uint)local_70 >> 8;
      local_70 = (byte *)CONCAT31((int3)uVar8,bVar7);
      FUN_0108a6ec(param_2,&local_70,1);
      pbVar5 = pbVar5 + 1;
    }
    if (sVar25 != 0 && local_8c != (byte *)0x0) {
      thunk_FUN_016d3fb4(pbVar4);
    }
  } while( true );
}

