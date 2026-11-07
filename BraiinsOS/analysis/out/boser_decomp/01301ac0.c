// FUN_01301ac0 @ 01301ac0 size=2660 calls_out=7 calls_in=3
// strings: assertion failed: buf.len() >= maxlen | assertion failed: !buf.is_empty() | assertion failed: buf[0] > b'0'

/* WARNING: Removing unreachable block (ram,0x013021d4) */

void FUN_01301ac0(double *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  short sVar8;
  uint uVar9;
  char **ppcVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 unaff_r8;
  short in_r12;
  int unaff_lr;
  undefined4 *puVar15;
  double dVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_488 [975];
  undefined1 auStack_b9 [17];
  char local_a8 [4];
  byte *local_a4;
  char **local_a0;
  undefined2 local_9c;
  undefined1 uStack_99;
  char *local_98;
  undefined4 local_94;
  undefined2 local_90;
  byte *local_8c;
  char *local_88;
  char *local_84;
  uint local_80;
  undefined2 local_7c;
  uint local_78;
  byte *local_60;
  uint local_5c;
  char *local_58;
  char *local_54;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  char *local_28;
  
  uVar2 = *(uint *)(param_2 + 8);
  dVar16 = *param_1;
  puVar15 = SUB84(dVar16,0);
  uVar12 = (uint)((ulonglong)dVar16 >> 0x20);
  local_48 = puVar15;
  if ((uVar2 & 0x10000000) == 0) {
    if ((1e+16 <= ABS(dVar16)) || (dVar16 != 0.0 && ABS(dVar16) < 0.0001)) {
      if ((uVar12 & 0x7fffffff) >> 0x14 == 0) {
        local_50._0_4_ = (undefined4 *)((int)puVar15 << 1);
        local_50._4_4_ = (uVar12 & 0xfffff) << 1 | (uint)puVar15 >> 0x1f;
      }
      else {
        local_50._4_4_ = uVar12 & 0xfffff | 0x100000;
        local_50._0_4_ = puVar15;
      }
      if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0xfffff00000000) == 0) {
        local_3c = 4;
        if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0x7fffffff00000000) == 0) {
          local_3c = 2;
        }
        local_40 = (uint)puVar15 | uVar12 & 0x7fffffff ^ 0x7ff00000;
        if (local_40 == 0) {
          uVar4 = 3;
          goto LAB_0130234c;
        }
      }
      else {
        local_40 = uVar12 & 0x7fffffff;
        local_3c = 4;
        if (local_40 < 0x100000) {
          local_3c = 3;
        }
        if (0x7fefffff < local_40) {
          uVar4 = 2;
          goto LAB_0130234c;
        }
      }
      if (local_3c == 2) {
        uVar4 = 4;
        local_3c = 2;
      }
      else {
        uVar4 = (uint)(undefined4 *)local_50 & 1;
        uVar1 = (ushort)((uVar12 & 0x7fffffff) >> 0x10);
        if (local_3c == 3) {
          in_r12 = (uVar1 >> 4) - 0x433;
        }
        else {
          if ((undefined4 *)local_50 == (undefined4 *)0x0 && local_50._4_4_ == 0x100000) {
            in_r12 = (uVar1 >> 4) - 0x435;
            local_50._0_4_ = (undefined4 *)0x0;
            local_40 = 2;
            local_50._4_4_ = 0x400000;
            uVar4 = 1;
            local_3c = 0;
            goto LAB_0130234c;
          }
          local_50._4_4_ = local_50._4_4_ << 1 | (uint)(undefined4 *)local_50 >> 0x1f;
          in_r12 = (uVar1 >> 4) - 0x434;
          local_50._0_4_ = (undefined4 *)((int)(undefined4 *)local_50 << 1);
        }
        uVar4 = uVar4 ^ 1;
        local_3c = 0;
        local_40 = 1;
      }
LAB_0130234c:
      local_48 = (undefined4 *)0x1;
      local_44 = 0;
      local_38 = CONCAT22(CONCAT11(local_38._3_1_,(char)uVar4),in_r12);
      if (uVar4 < 2) {
        FUN_012fe028(&local_60,&local_50,auStack_b9);
        pbVar14 = (byte *)"+";
        pbVar13 = (byte *)0x1;
        if ((longlong)dVar16 < 0) {
          pbVar14 = (byte *)"-";
          pbVar13 = (byte *)"-";
        }
        uVar12 = uVar12 >> 0x1f;
        if ((int)(uVar2 << 10) < 0) {
          uVar12 = 1;
          pbVar13 = pbVar14;
        }
        if (local_60 == (byte *)0x0) {
          FUN_012fea44(&local_30,&local_50,auStack_b9);
        }
        else {
          local_30 = local_60;
          local_2c = local_5c;
          local_28 = local_58;
        }
        if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: !buf.is_empty()",0x21,&DAT_01ce4750);
        }
        if (*local_30 < 0x31) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: buf[0] > b\'0\'",0x1f,&DAT_01ce4760);
        }
        pcVar6 = (char *)0x1;
        local_a0 = (char **)0x1;
        local_a4 = local_30;
        if ((char *)(local_2c + -1) == (char *)0x0) {
          ppcVar10 = (char **)&local_9c;
          local_54 = (char *)0x3;
        }
        else {
          local_8c = local_30 + 1;
          ppcVar10 = &local_84;
          local_90 = 2;
          local_54 = (char *)0x5;
          local_94 = 1;
          local_9c = 2;
          local_98 = ".";
          local_88 = (char *)(local_2c + -1);
        }
        sVar8 = (short)local_28 + -1;
        if ((short)local_28 < 1) {
          sVar8 = 1 - (short)local_28;
        }
        pcVar7 = &DAT_0052bdbb;
        *(undefined2 *)(ppcVar10 + 3) = 1;
        if ((short)local_28 < 1) {
          pcVar6 = (char *)0x2;
          pcVar7 = "e-";
        }
        *(undefined2 *)ppcVar10 = 2;
        *(short *)((int)ppcVar10 + 0xe) = sVar8;
        ppcVar10[1] = pcVar7;
        ppcVar10[2] = pcVar6;
      }
      else if (uVar4 == 2) {
        local_a0 = (char **)0x3;
        local_a4 = (byte *)0x5346f0;
        pbVar13 = (byte *)0x1;
        uVar12 = 0;
        local_54 = (char *)0x1;
      }
      else {
        pbVar14 = (byte *)"+";
        pbVar13 = (byte *)0x1;
        if ((longlong)dVar16 < 0) {
          pbVar14 = (byte *)"-";
          pbVar13 = (byte *)"-";
        }
        uVar12 = uVar12 >> 0x1f;
        local_54 = (char *)0x1;
        if ((int)(uVar2 << 10) < 0) {
          uVar12 = 1;
          pbVar13 = pbVar14;
        }
        if (uVar4 == 4) {
          local_a4 = (byte *)0x4253f2;
        }
        else {
          local_a4 = (byte *)0x5346ed;
        }
        local_a0 = (char **)0x3;
      }
      local_a8[0] = '\x02';
      local_a8[1] = '\0';
      local_60 = pbVar13;
      local_5c = uVar12;
      local_58 = local_a8;
      FUN_012fd0c0(param_2,&local_60);
      return;
    }
    iVar3 = uVar2 << 10;
    if ((uVar12 & 0x7fffffff) >> 0x14 == 0) {
      local_48 = (undefined4 *)((int)puVar15 << 1);
      local_44 = (uVar12 & 0xfffff) << 1 | (uint)puVar15 >> 0x1f;
    }
    else {
      local_44 = uVar12 & 0xfffff | 0x100000;
    }
    if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0xfffff00000000) == 0) {
      iVar11 = 4;
      local_34 = uVar12 & 0x7fffffff ^ 0x7ff00000;
      if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0x7fffffff00000000) == 0) {
        iVar11 = 2;
      }
      if (puVar15 == (undefined4 *)0x0 && local_34 == 0) {
        uVar2 = 3;
        goto LAB_01302048;
      }
    }
    else {
      iVar11 = 4;
      if ((uVar12 & 0x7fffffff) < 0x100000) {
        iVar11 = 3;
      }
      local_34 = 0x7fefffff;
      if (0x7fefffff < (uVar12 & 0x7fffffff)) {
        uVar2 = 2;
        goto LAB_01302048;
      }
    }
    if (iVar11 == 2) {
      uVar2 = 4;
    }
    else {
      uVar2 = (uint)local_48 & 1;
      uVar1 = (ushort)((uVar12 & 0x7fffffff) >> 0x10);
      if (iVar11 == 3) {
        in_r12 = (uVar1 >> 4) - 0x433;
      }
      else {
        if (local_48 == (undefined4 *)0x0 && local_44 == 0x100000) {
          in_r12 = (uVar1 >> 4) - 0x435;
          local_48 = (undefined4 *)0x0;
          unaff_lr = 2;
          local_44 = 0x400000;
          uVar2 = 1;
          local_34 = 0;
          goto LAB_01302048;
        }
        local_44 = local_44 << 1 | (uint)local_48 >> 0x1f;
        in_r12 = (uVar1 >> 4) - 0x434;
        local_48 = (undefined4 *)((int)local_48 << 1);
      }
      uVar2 = uVar2 ^ 1;
      local_34 = 0;
      unaff_lr = 1;
    }
LAB_01302048:
    local_3c = 0;
    local_40 = 1;
    local_30 = (byte *)CONCAT22(CONCAT11(local_30._3_1_,(char)uVar2),in_r12);
    local_38 = unaff_lr;
    if (uVar2 < 2) {
      FUN_012fe028(&local_88,&local_48,&uStack_99);
      pcVar7 = "+";
      pcVar6 = (char *)0x1;
      if ((longlong)dVar16 < 0) {
        pcVar7 = "-";
        pcVar6 = "-";
      }
      if (-1 < iVar3) {
        pcVar7 = pcVar6;
      }
      uVar12 = uVar12 >> 0x1f;
      if (-1 >= iVar3) {
        uVar12 = 1;
      }
      if (local_88 == (char *)0x0) {
        FUN_012fea44(&local_58,&local_48,&uStack_99);
      }
      else {
        local_58 = local_88;
        local_54 = local_84;
        local_50._0_4_ = (undefined4 *)local_80;
      }
      local_a0 = &local_88;
      local_50 = FUN_01300048(local_58,local_54,(uint)(undefined4 *)local_50 & 0xffff,1);
    }
    else if (uVar2 == 2) {
      local_80 = 3;
      local_88 = (char *)CONCAT22(local_88._2_2_,2);
      local_84 = "NaN";
      pcVar7 = (char *)0x1;
      uVar12 = 0;
      local_50 = CONCAT44(1,&local_88);
    }
    else {
      uVar4 = 1;
      pcVar6 = "+";
      pcVar7 = (char *)0x1;
      if ((longlong)dVar16 < 0) {
        pcVar6 = "-";
        pcVar7 = "-";
      }
      uVar12 = uVar12 >> 0x1f;
      if (iVar3 < 0) {
        uVar12 = 1;
        pcVar7 = pcVar6;
      }
      if (uVar2 == 4) {
        local_78 = 1;
        local_7c = 0;
        local_84 = "0.";
        uVar4 = 2;
        local_80 = uVar4;
      }
      else {
        local_80 = 3;
        local_84 = "inf";
      }
      local_88 = (char *)CONCAT22(local_88._2_2_,2);
      local_50 = CONCAT44(uVar4,&local_88);
    }
    local_58 = pcVar7;
    local_54 = (char *)uVar12;
    FUN_012fd0c0(param_2,&local_58);
    return;
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0xe);
  local_38 = (uVar12 & 0x7fffffff) >> 0x14;
  if (local_38 == 0) {
    local_48 = (undefined4 *)((int)puVar15 << 1);
    local_44 = (uVar12 & 0xfffff) << 1 | (uint)puVar15 >> 0x1f;
  }
  else {
    local_44 = uVar12 & 0xfffff | 0x100000;
  }
  if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0xfffff00000000) == 0) {
    iVar3 = 4;
    if (puVar15 == (undefined4 *)0x0 && ((ulonglong)dVar16 & 0x7fffffff00000000) == 0) {
      iVar3 = 2;
    }
    if (puVar15 == (undefined4 *)0x0 && (uVar12 & 0x7fffffff) == 0x7ff00000) {
      uVar9 = 3;
      goto LAB_01301c7c;
    }
  }
  else {
    iVar3 = 4;
    if ((uVar12 & 0x7fffffff) < 0x100000) {
      iVar3 = 3;
    }
    if (0x7fefffff < (uVar12 & 0x7fffffff)) {
      uVar9 = 2;
      goto LAB_01301c7c;
    }
  }
  if (iVar3 == 2) {
    uVar9 = 4;
  }
  else {
    uVar9 = (uint)local_48 & 1;
    if (iVar3 == 3) {
      unaff_lr = local_38 - 0x433;
    }
    else {
      if (local_48 == (undefined4 *)0x0 && local_44 == 0x100000) {
        unaff_lr = local_38 - 0x435;
        local_48 = (undefined4 *)0x0;
        local_38 = 2;
        local_44 = 0x400000;
        uVar9 = 1;
        unaff_r8 = 0;
        goto LAB_01301c7c;
      }
      local_44 = local_44 << 1 | (uint)local_48 >> 0x1f;
      unaff_lr = local_38 - 0x434;
      local_48 = (undefined4 *)((int)local_48 << 1);
    }
    uVar9 = uVar9 ^ 1;
    unaff_r8 = 0;
    local_38 = 1;
  }
LAB_01301c7c:
  local_40 = 1;
  local_3c = 0;
  sVar8 = (short)unaff_lr;
  local_30 = (byte *)CONCAT22(CONCAT11(local_30._3_1_,(char)uVar9),sVar8);
  local_34 = unaff_r8;
  if (uVar9 < 2) {
    iVar3 = 5;
    if (sVar8 < 0) {
      iVar3 = -0xc;
    }
    uVar9 = iVar3 * sVar8;
    pcVar7 = "+";
    pcVar6 = (char *)0x1;
    if ((longlong)dVar16 < 0) {
      pcVar7 = "-";
      pcVar6 = "-";
    }
    uVar12 = uVar12 >> 0x1f;
    if ((int)(uVar2 << 10) < 0) {
      uVar12 = 1;
      pcVar6 = pcVar7;
    }
    if (0x3ebf < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: buf.len() >= maxlen",0x25,&DAT_01ce4770);
    }
    iVar11 = (uVar9 >> 4) + 0x15;
    puVar17 = auStack_488;
    iVar3 = -0x8000;
    if ((uint)(int)(short)*(ushort *)(param_2 + 0xe) < 0x80000000) {
      iVar3 = -uVar4;
    }
    iVar18 = iVar11;
    iVar19 = iVar3;
    FUN_013001c0(&local_88);
    if (local_88 == (char *)0x0) {
      FUN_013006d0(&local_58,&local_48,auStack_488,iVar11,(int)(short)iVar3,puVar17,iVar18,iVar19);
    }
    else {
      local_58 = local_88;
      local_54 = local_84;
      local_50._0_4_ = (undefined4 *)local_80;
    }
    if ((int)(short)iVar3 < (int)(short)local_50) {
      local_50 = FUN_01300048(local_58,local_54,(int)(short)local_50,uVar4,&local_88);
    }
    else {
      local_80 = 2;
      local_88 = (char *)CONCAT22(local_88._2_2_,2);
      if (uVar4 == 0) {
        local_80 = 1;
        local_84 = "0";
      }
      else {
        local_84 = "0.";
        local_7c = 0;
        local_78 = uVar4;
      }
      local_50 = CONCAT44(local_80,&local_88);
    }
  }
  else if (uVar9 == 2) {
    local_80 = 3;
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    local_84 = "NaN";
    pcVar6 = (char *)0x1;
    uVar12 = 0;
    local_50 = CONCAT44(1,&local_88);
  }
  else {
    uVar12 = uVar12 >> 0x1f;
    uVar5 = 1;
    pcVar7 = "+";
    pcVar6 = (char *)0x1;
    if ((longlong)dVar16 < 0) {
      pcVar7 = "-";
      pcVar6 = "-";
    }
    if ((int)(uVar2 << 10) < 0) {
      uVar12 = 1;
      pcVar6 = pcVar7;
    }
    if (uVar9 == 4) {
      uVar5 = 2;
      if (uVar4 == 0) {
        uVar5 = 1;
        local_80 = 1;
        local_84 = "0";
      }
      else {
        local_84 = "0.";
        local_7c = 0;
        local_80 = 2;
        local_78 = uVar4;
      }
    }
    else {
      local_80 = 3;
      local_84 = "inf";
    }
    local_88 = (char *)CONCAT22(local_88._2_2_,2);
    local_50 = CONCAT44(uVar5,&local_88);
  }
  local_58 = pcVar6;
  local_54 = (char *)uVar12;
  FUN_012fd0c0(param_2,&local_58);
  return;
}

