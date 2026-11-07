// FUN_014e4c84 @ 014e4c84 size=1564 calls_out=22 calls_in=1
// strings: description | description | description | release_date | toolbox_version

undefined8 FUN_014e4c84(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *extraout_r1;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *unaff_r6;
  byte bVar11;
  char *unaff_r9;
  uint uVar12;
  int *unaff_r10;
  bool bVar13;
  ulonglong uVar14;
  int *local_ac;
  uint local_a8;
  uint local_a4;
  int *local_9c;
  int local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint *local_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  int local_50;
  char *local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  char local_38;
  byte bStack_37;
  ushort uStack_36;
  ushort local_34;
  undefined2 uStack_32;
  uint local_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uVar8 = *param_1;
  uVar2 = 0x15;
  if ((int)uVar8 < 0) {
    uVar2 = uVar8 ^ 0x80000000;
  }
  if (uVar2 == 0x14) {
    local_7c = param_1[1];
    local_84 = param_1[2];
    local_78 = local_84 + param_1[3] * 0x10;
    local_74 = 0;
    local_80 = local_84;
    FUN_014cf4e4(&local_38,&local_84);
    bVar11 = bStack_37;
    if (local_38 == '\x01') {
LAB_014e5004:
      piVar4 = (int *)CONCAT22(uStack_32,local_34);
LAB_014e5068:
      FUN_014deb6c(&local_84);
LAB_014e5174:
      bVar11 = 0;
      local_8c = -0x80000000;
      local_ac = piVar4;
      piVar4 = unaff_r10;
    }
    else {
      if (bStack_37 == 3) {
        uVar3 = 0;
LAB_014e52d4:
        piVar4 = (int *)FUN_014dee0c(uVar3,&DAT_01cfa004,&DAT_01d064b8);
        goto LAB_014e5068;
      }
      local_a4 = (uint)uStack_36;
      unaff_r9 = (char *)(uint)local_34;
      uVar14 = FUN_014caeb4(&local_84);
      piVar4 = (int *)(uVar14 >> 0x20);
      if ((uVar14 & 1) != 0) goto LAB_014e5068;
      if (piVar4 == (int *)0x0) {
        uVar3 = 1;
        goto LAB_014e52d4;
      }
      FUN_014ca8dc(&local_38,&local_84);
      local_8c = CONCAT22(uStack_36,CONCAT11(bStack_37,local_38));
      if (local_8c == -0x7fffffff) goto LAB_014e5004;
      if (local_8c == -0x80000000) {
        uVar3 = 2;
        goto LAB_014e52d4;
      }
      local_a8 = local_30;
      local_ac = (int *)CONCAT22(uStack_32,local_34);
      piVar5 = (int *)FUN_014ca838(&local_84);
      if (piVar5 != (int *)0x0) {
        FUN_019bb7e0(local_8c,local_ac);
        local_8c = -0x80000000;
        local_ac = piVar5;
      }
    }
LAB_014e5180:
    if ((0x7fffffff < uVar8) && ((undefined1 *)(uVar8 & 0xfffffffe) != &DAT_80000014)) {
      FUN_014c81b0(param_1);
    }
    if (local_8c != -0x80000000) {
      piVar5 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *(byte *)(piVar5 + 4) = bVar11;
      *(uint *)((int)piVar5 + 0x11) = (local_a4 & 0xffff) + (int)unaff_r9 * 0x10000;
      piVar5[2] = local_a8;
      uVar3 = 0;
      *piVar5 = local_8c;
      piVar5[1] = (int)local_ac;
      piVar5[3] = (int)piVar4;
      goto LAB_014e51e8;
    }
    piVar5 = local_ac;
  }
  else {
    if (uVar2 == 0x15) {
      local_60 = (uint *)param_1[1];
      local_9c = (int *)0x0;
      local_70 = -0x7fffffeb;
      puVar7 = (uint *)((uint)&local_48 | 4);
      local_54 = local_60 + param_1[2] * 8;
      bVar11 = 3;
      local_8c = -0x80000000;
      piVar5 = &local_70;
      unaff_r9 = &local_38;
      local_50 = 0;
      piVar4 = unaff_r10;
      local_5c = local_60;
      local_58 = uVar8;
LAB_014e4d10:
      puVar1 = local_5c;
      bVar13 = local_5c == local_54;
      if (!bVar13) {
        unaff_r6 = (char *)*local_5c;
        local_5c = local_5c + 8;
      }
      if (bVar13 || unaff_r6 == (char *)0x80000015) goto switchD_014e4ed8_caseD_3;
      local_50 = local_50 + 1;
      uVar2 = puVar1[2];
      uVar9 = puVar1[3];
      *puVar7 = puVar1[1];
      puVar7[1] = uVar2;
      puVar7[2] = uVar9;
      uVar2 = puVar1[4];
      local_30 = puVar1[6];
      uStack_2c = puVar1[7];
      local_38 = (char)uVar2;
      bStack_37 = (byte)(uVar2 >> 8);
      uStack_36 = (ushort)(uVar2 >> 0x10);
      local_34 = (ushort)puVar1[5];
      uStack_32 = (undefined2)(puVar1[5] >> 0x10);
      local_48 = unaff_r6;
      if (local_70 != -0x7fffffeb) {
        FUN_014c81b0(&local_70);
      }
      uVar9 = local_40;
      uVar2 = local_44;
      local_70 = CONCAT22(uStack_36,CONCAT11(bStack_37,local_38));
      uStack_6c = CONCAT22(uStack_32,local_34);
      uVar12 = 0x15;
      if ((int)unaff_r6 < 0) {
        uVar12 = (uint)unaff_r6 ^ 0x80000000;
      }
      uStack_68 = local_30;
      uStack_64 = uStack_2c;
      uVar3 = local_3c;
      switch(uVar12) {
      case 1:
        uVar9 = local_44 & 0xff;
        uVar3 = 0;
      case 4:
        FUN_014e5674(unaff_r9,&switchD_014e4da8::switchdataD_014e4dac,uVar9,uVar3);
        goto LAB_014e4e80;
      default:
        uVar3 = FUN_014c8278(&local_48,&uStack_25,&DAT_01cf9ec4);
        local_38 = '\x01';
        local_34 = (ushort)uVar3;
        uStack_32 = (undefined2)((uint)uVar3 >> 0x10);
        goto LAB_014e4ea8;
      case 0xc:
        FUN_014e5ca0(unaff_r9,local_40,local_3c);
        goto LAB_014e4e74;
      case 0xd:
        FUN_014e5ca0(unaff_r9,local_44,local_40);
        break;
      case 0xe:
        FUN_014e5448(unaff_r9,local_40,local_3c,local_3c,piVar5);
LAB_014e4e74:
        FUN_019bb7e0(uVar2,uVar9);
LAB_014e4e80:
        if ((uVar12 | 2) != 0xe) break;
        goto LAB_014e4ea8;
      case 0xf:
        FUN_014e5448(unaff_r9,local_44,local_40,local_3c,piVar5);
      }
      FUN_014c81b0(&local_48);
LAB_014e4ea8:
      pcVar10 = "toolbox_version";
      unaff_r10 = (int *)(uint)bStack_37;
      piVar6 = (int *)CONCAT22(uStack_32,local_34);
      if (local_38 != '\0') {
        unaff_r10 = piVar4;
        goto LAB_014e5034;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bStack_37) {
      case 0:
        if (bVar11 == 3) {
          FUN_014cf484(unaff_r9,&local_70);
          if (local_38 == '\0') {
            local_a4 = CONCAT22(local_34,uStack_36);
            bVar11 = bStack_37;
            goto LAB_014e4f88;
          }
LAB_014e5030:
          piVar6 = (int *)CONCAT22(uStack_32,local_34);
          goto LAB_014e5034;
        }
        local_44 = 0xf;
        break;
      case 1:
        if (local_9c != (int *)0x0) {
          local_44 = 0xc;
          pcVar10 = "release_date";
          break;
        }
        uVar14 = FUN_014cacb4(&local_70);
        local_9c = (int *)(uVar14 >> 0x20);
        if ((uVar14 & 1) == 0) goto LAB_014e4f88;
        goto LAB_014e5154;
      case 2:
        if (local_8c == -0x80000000) {
          FUN_014cad14(unaff_r9,&local_70);
          local_8c = CONCAT22(uStack_36,CONCAT11(bStack_37,local_38));
          piVar4 = (int *)CONCAT22(uStack_32,local_34);
          if (local_8c != -0x80000000) {
            local_a8 = local_30;
            local_ac = piVar4;
            goto LAB_014e4f88;
          }
          goto LAB_014e516c;
        }
        local_44 = 0xb;
        pcVar10 = "description";
        break;
      case 3:
switchD_014e4ed8_caseD_3:
        unaff_r10 = local_9c;
        if (bVar11 == 3) {
          FUN_014f548c(&local_38);
          if (local_38 != '\0') goto LAB_014e5030;
          local_a4 = CONCAT22(local_34,uStack_36);
          bVar11 = bStack_37;
        }
        if (local_9c != (int *)0x0) {
          if (local_8c == -0x80000000) {
            local_34 = 0xb6a0;
            uStack_32 = 0x132;
            local_38 = (char)&local_48;
            bStack_37 = (byte)((uint)&local_48 >> 8);
            uStack_36 = (ushort)((uint)&local_48 >> 0x10);
            local_44 = 0xb;
            local_48 = "description";
            piVar4 = (int *)FUN_019676ac(&DAT_0057cd64,&local_38);
            goto LAB_014e516c;
          }
          piVar5 = (int *)FUN_014c9cac(&local_70);
          unaff_r9 = (char *)(local_a4 >> 0x10);
          piVar4 = local_9c;
          if (piVar5 != (int *)0x0) {
            FUN_019bb7e0(local_8c,local_ac);
            local_8c = -0x80000000;
            local_ac = piVar5;
          }
          goto LAB_014e5180;
        }
        FUN_014dbcc0();
        local_9c = extraout_r1;
LAB_014e5154:
        if (local_8c != -0x80000000) {
          FUN_019bb7e0(local_8c,local_ac);
        }
        piVar4 = local_9c;
LAB_014e516c:
        FUN_014c9c60(&local_70);
        goto LAB_014e5174;
      }
      local_34 = 0xb6a0;
      uStack_32 = 0x132;
      local_38 = (char)&local_48;
      bStack_37 = (byte)((uint)&local_48 >> 8);
      uStack_36 = (ushort)((uint)&local_48 >> 0x10);
      local_48 = pcVar10;
      piVar6 = (int *)FUN_019676ac(&DAT_005ab34f,&local_38);
LAB_014e5034:
      local_9c = piVar6;
      goto LAB_014e5154;
    }
    piVar5 = (int *)FUN_014c8278(param_1,&uStack_25,&DAT_01cf9dc4);
  }
  uVar3 = 1;
LAB_014e51e8:
  return CONCAT44(piVar5,uVar3);
LAB_014e4f88:
  piVar4 = unaff_r10;
  goto LAB_014e4d10;
}

