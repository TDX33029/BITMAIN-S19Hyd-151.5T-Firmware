// FUN_013d3b64 @ 013d3b64 size=1756 calls_out=25 calls_in=0
// strings: 

void FUN_013d3b64(uint *param_1,uint *param_2,undefined4 *param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined *puVar14;
  undefined *unaff_r9;
  undefined *puVar15;
  bool bVar16;
  undefined8 uVar17;
  uint *local_1f8;
  undefined *local_1f4;
  undefined4 local_160;
  undefined *local_15c;
  undefined4 local_158;
  code *local_154;
  uint uStack_150;
  undefined *puStack_14c;
  uint local_148;
  undefined1 auStack_144 [52];
  undefined1 auStack_110 [48];
  undefined4 local_e0;
  uint *local_c8;
  undefined *puStack_c4;
  undefined *puStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined1 local_84;
  uint *local_80;
  undefined *local_7c;
  uint *local_78;
  undefined *local_74;
  undefined *local_70;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x3f]) {
  case '\0':
    uVar9 = 2;
    if ((short)param_2[4] != 0) {
      uVar9 = 10;
    }
    FUN_019ee208(&local_160,uVar9);
    puVar5 = local_15c;
    puVar14 = (undefined *)((int)&local_158 + 2);
    if (((char)local_160 == '\x04') || (((uint)local_160 & 0xff) == 4)) {
      param_2[0x3e] = (uint)local_15c;
      if ((ushort)param_2[0xc] == 2) {
LAB_013d3ccc:
        FUN_01979dd0(&local_160,param_2[0x3e],6,1,1);
        if (((char)local_160 == '\x04') || (((uint)local_160 & 0xff) == 4)) {
          local_a8 = param_2[0x3e];
          local_c8 = (uint *)param_2[4];
          puStack_c4 = (undefined *)param_2[5];
          puStack_c0 = (undefined *)param_2[6];
          uStack_bc = param_2[7];
          local_b8 = param_2[8];
          uStack_b4 = param_2[9];
          uStack_b0 = param_2[10];
          uStack_ac = param_2[0xb];
          puVar10 = (undefined1 *)param_2[2];
          uVar11 = *param_2;
          unaff_r9 = (undefined *)param_2[1];
          if (puVar10 == &DAT_3b9aca00) {
            uVar11 = 5;
            puVar10 = (undefined1 *)0x0;
            unaff_r9 = (undefined *)0x0;
          }
          param_2[0x14] = uVar11;
          param_2[0x15] = (uint)unaff_r9;
          param_2[0x16] = (uint)puVar10;
          local_84 = 0;
          FUN_019ac130(&local_78,1);
          puVar12 = (undefined1 *)((int)local_78 + uVar11);
          puVar5 = local_74 + (int)unaff_r9 + CARRY4((uint)local_78,uVar11);
          if ((int)unaff_r9 < 0 ==
              (int)(((uint)local_74 ^ (uint)puVar5) & ~((uint)local_74 ^ (uint)unaff_r9)) < 0) {
            puVar14 = local_70 + (int)puVar10;
            if (&DAT_3b9aca00 <= puVar14) {
              bVar16 = (undefined1 *)0xfffffffe < puVar12;
              puVar12 = puVar12 + 1;
              if ((int)(((uint)puVar5 ^ (uint)(puVar5 + bVar16)) & ~(uint)puVar5) < 0)
              goto LAB_013d3dc4;
              puVar14 = puVar14 + -1000000000;
              puVar5 = puVar5 + bVar16;
            }
            unaff_r9 = &DAT_01cf29a4;
            uVar17 = FUN_019ef7f4(&DAT_01cf29a4);
            uVar9 = (undefined4)((ulonglong)uVar17 >> 0x20);
            FUN_019dc4f8(&local_78,(int)uVar17,uVar9,uVar9,puVar12,puVar5,puVar14,&DAT_01cf29a4);
          }
          else {
LAB_013d3dc4:
            FUN_019e6e14(&local_78);
          }
          FUN_01bed4e2(auStack_110,&local_c8,0x48);
          FUN_01bed4e2(&local_160,&local_78,0x50);
          FUN_01bed4e2(&local_1f8,&local_160,0x98);
          FUN_01bed4e2(param_2 + 0x18,&local_1f8,0x98);
          goto switchD_013d3b90_caseD_3;
        }
        puVar7 = local_160;
        puVar5 = local_15c;
      }
      else {
        puVar15 = *(undefined **)((int)param_2 + 0x32);
        uVar4 = *(ushort *)((int)param_2 + 0x36);
        if (((ushort)param_2[0xc] & 1) == 0) {
          FUN_01bed93e(&local_158,0,0x78);
          uVar4 = uVar4 << 8 | uVar4 >> 8;
          local_e0 = 0x10;
          uVar8 = 2;
        }
        else {
          uVar11 = param_2[0x13];
          local_158 = (uint *)CONCAT22(uVar4,(short)((uint)puVar15 >> 0x10));
          puVar15 = (undefined *)param_2[0x11];
          local_148 = param_2[0x12];
          local_154 = (code *)param_2[0xe];
          uStack_150 = param_2[0xf];
          puStack_14c = (undefined *)param_2[0x10];
          FUN_01bed93e(auStack_144,0,100);
          local_e0 = 0x1c;
          uVar8 = 10;
          uVar4 = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
        }
        local_160 = (uint *)CONCAT22(uVar4,uVar8);
        local_15c = puVar15;
        FUN_01979d50(&local_1f8,puVar5,&local_160);
        if (((char)local_1f8 == '\x04') || (((uint)local_1f8 & 0xff) == 4)) goto LAB_013d3ccc;
        puVar7 = local_1f8;
        puVar5 = local_1f4;
      }
      FUN_01bf01d6(param_2[0x3e]);
      local_160 = puVar7;
      local_15c = puVar5;
    }
LAB_013d41fc:
    uVar11 = 2;
    puVar13 = local_160;
    puVar5 = local_15c;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01cf29b4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01cf29b4);
  case '\x03':
switchD_013d3b90_caseD_3:
    puVar14 = (undefined *)((int)&local_158 + 2);
    bVar2 = FUN_019ec70c();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3d]) {
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e00c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e00c);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x3c]) {
      case '\0':
        uVar11 = param_2[0x36];
        goto LAB_013d3ff4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2e01c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2e01c);
      case '\x03':
        puVar7 = (uint *)param_2[0x3b];
        puVar5 = unaff_r9;
      }
LAB_013d4048:
      puVar13 = param_2 + 0x3c;
      FUN_019e7220(&local_160,puVar7[2],param_3,1);
      if (local_160 == (uint *)0x2) {
        *(undefined1 *)puVar13 = 3;
LAB_013d4070:
        uVar11 = 3;
        *(undefined1 *)(param_2 + 0x3d) = 3;
        iVar6 = FUN_019ee264(bVar2 == 2 | bVar2 & 1,param_2 + 0x18,*param_3);
        if (iVar6 == 0) goto LAB_013d4150;
      }
      else {
        if (((uint)local_160 & 1) != 0) {
          puVar14 = (undefined *)((uint)local_15c >> 8 | (int)local_158 << 0x18);
LAB_013d40f4:
          uVar11 = (uint)local_158;
          puVar5 = local_15c;
          FUN_00b76614(param_2 + 0x37);
          goto LAB_013d40fc;
        }
        if (param_2[0x3a] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d28f7c);
        }
        FUN_01609600(&local_160);
        puVar14 = (undefined *)((uint)local_15c >> 8 | (int)local_158 << 0x18);
        puVar7 = local_160;
        if (local_160 == (uint *)0x0) {
          puVar7 = (uint *)((uint)local_15c & 0xff);
        }
        if (local_160 != (uint *)0x0 || puVar7 != (uint *)&SUB_00000004) goto LAB_013d40f4;
        uVar11 = param_2[0x37];
        puVar14 = (undefined *)param_2[0x3a];
        puVar13 = (uint *)param_2[0x38];
        puVar5 = (undefined *)param_2[0x39];
        *(undefined1 *)(param_2 + 0x3c) = 1;
        if (uVar11 == 3) goto LAB_013d4070;
LAB_013d4118:
        FUN_01a6bbbc(param_2 + 0x36);
        *(undefined2 *)(param_2 + 0x3d) = 1;
        if (uVar11 != 4) goto LAB_013d4150;
      }
      uVar3 = 3;
      *param_1 = 3;
      goto LAB_013d4210;
    }
    uVar11 = param_2[0x34];
    puVar14 = *(undefined **)((int)param_2 + 0xb2);
    puVar5 = (undefined *)param_2[0x31];
    uVar4 = *(ushort *)((int)param_2 + 0xb6);
    uVar1 = (ushort)param_2[0x33];
    *(undefined1 *)((int)param_2 + 0xf5) = 1;
    param_2[0x35] = uVar11;
    if ((param_2[0x2c] & 1) == 0) {
      FUN_01bed93e(&local_158,0,0x78);
      uVar4 = uVar4 << 8 | uVar4 >> 8;
      local_e0 = 0x10;
      uVar8 = 2;
      local_15c = puVar14;
    }
    else {
      local_158 = (uint *)CONCAT22(uVar4,(short)((uint)puVar14 >> 0x10));
      local_154 = (code *)param_2[0x2e];
      uStack_150 = param_2[0x2f];
      puVar14 = (undefined *)param_2[0x30];
      puStack_14c = puVar14;
      local_148 = param_2[0x32];
      FUN_01bed93e(auStack_144,0,100);
      uVar4 = (ushort)((uVar1 & 0xff) << 8) | uVar1 >> 8;
      local_e0 = 0x1c;
      uVar8 = 10;
      local_15c = puVar5;
    }
    local_160 = (uint *)CONCAT22(uVar4,uVar8);
    FUN_01979d90(&local_78,uVar11,&local_160);
    puVar5 = local_74;
    puVar13 = local_78;
    unaff_r9 = (undefined *)(uint)uVar1;
    if ((char)local_78 == '\x04') {
LAB_013d3fd8:
      uVar11 = param_2[0x35];
      param_2[0x36] = uVar11;
      *(undefined1 *)((int)param_2 + 0xf5) = 0;
      *(undefined1 *)(param_2 + 0x3c) = 0;
LAB_013d3ff4:
      FUN_019dd2f8(&local_160,uVar11);
      if (local_160 != (uint *)0x2) {
        param_2[0x38] = (uint)local_15c;
        param_2[0x39] = (uint)local_158;
        puVar7 = param_2 + 0x37;
        *puVar7 = (uint)local_160;
        param_2[0x3a] = (uint)local_154;
        param_2[0x3b] = (uint)puVar7;
        puVar5 = unaff_r9;
        goto LAB_013d4048;
      }
      puVar14 = (undefined *)((uint)local_15c >> 8 | (int)local_158 << 0x18);
      puVar5 = local_15c;
      uVar11 = (uint)local_158;
LAB_013d40fc:
      *(undefined1 *)(param_2 + 0x3c) = 1;
      puVar13 = (uint *)((uint)puVar5 & 0xff | (int)puVar14 << 8);
      puVar5 = (undefined *)(uVar11 & 0xffffff00 | (uint)puVar14 >> 0x18);
      uVar11 = 2;
      goto LAB_013d4118;
    }
    if (((uint)local_78 & 0xff) == 0 && local_74 == (undefined *)0x73) {
      FUN_0069263c(0,0x73);
      unaff_r9 = puVar5;
      goto LAB_013d3fd8;
    }
    FUN_01bf01d6(param_2[0x35]);
    uVar11 = 2;
    *(undefined2 *)(param_2 + 0x3d) = 1;
LAB_013d4150:
    FUN_01a6b7d0(param_2 + 0x18);
    if (uVar11 == 3) {
      local_15c = &DAT_01309c20;
      local_160 = param_2 + 4;
      local_154 = FUN_01307ea0;
      local_158 = param_2 + 0x14;
      FUN_00664898(&local_78,&DAT_005a0120,&local_160);
      local_c8 = local_78;
      puStack_c4 = local_74;
      puStack_c0 = local_70;
      FUN_019ecaa4(&local_80,0x16);
      local_160 = local_80;
      puVar14 = local_70;
      local_15c = local_7c;
      goto LAB_013d41fc;
    }
  }
  uVar3 = 1;
  *param_1 = uVar11;
  param_1[1] = (uint)puVar13;
  param_1[2] = (uint)puVar5;
  param_1[3] = (uint)puVar14;
LAB_013d4210:
  *(undefined1 *)(param_2 + 0x3f) = uVar3;
  return;
}

