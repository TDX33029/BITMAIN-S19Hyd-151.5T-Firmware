// FUN_013025ec @ 013025ec size=52 calls_out=0 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01302168) */

void FUN_013025ec(ulonglong *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_r8;
  short in_r12;
  int unaff_lr;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_488 [1000];
  char **ppcStack_a0;
  undefined1 auStack_99 [17];
  char *pcStack_88;
  char *pcStack_84;
  uint uStack_80;
  undefined2 uStack_7c;
  uint uStack_78;
  char *pcStack_58;
  char *pcStack_54;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  short sStack_30;
  undefined1 uStack_2e;
  
  uVar2 = *(uint *)(param_2 + 8);
  uVar11 = *param_1;
  uVar7 = (uint)uVar11;
  uVar10 = (uint)(uVar11 >> 0x20);
  uStack_48 = uVar7;
  if ((uVar2 & 0x10000000) != 0) {
    uVar5 = (uint)*(ushort *)(param_2 + 0xe);
    uStack_38 = (uVar10 & 0x7fffffff) >> 0x14;
    if (uStack_38 == 0) {
      uStack_48 = uVar7 << 1;
      uStack_44 = (uVar10 & 0xfffff) << 1 | uVar7 >> 0x1f;
    }
    else {
      uStack_44 = uVar10 & 0xfffff | 0x100000;
    }
    if (uVar7 == 0 && (uVar11 & 0xfffff00000000) == 0) {
      iVar3 = 4;
      if (uVar7 == 0 && (uVar11 & 0x7fffffff00000000) == 0) {
        iVar3 = 2;
      }
      if (uVar7 == 0 && (uVar10 & 0x7fffffff) == 0x7ff00000) {
        uVar7 = 3;
        goto LAB_01301c7c;
      }
    }
    else {
      iVar3 = 4;
      if ((uVar10 & 0x7fffffff) < 0x100000) {
        iVar3 = 3;
      }
      if (0x7fefffff < (uVar10 & 0x7fffffff)) {
        uVar7 = 2;
        goto LAB_01301c7c;
      }
    }
    if (iVar3 == 2) {
      uVar7 = 4;
    }
    else {
      uVar7 = uStack_48 & 1;
      if (iVar3 == 3) {
        unaff_lr = uStack_38 - 0x433;
      }
      else {
        if (uStack_48 == 0 && uStack_44 == 0x100000) {
          unaff_lr = uStack_38 - 0x435;
          uStack_48 = 0;
          uStack_38 = 2;
          uStack_44 = 0x400000;
          uVar7 = 1;
          unaff_r8 = 0;
          goto LAB_01301c7c;
        }
        uStack_44 = uStack_44 << 1 | uStack_48 >> 0x1f;
        unaff_lr = uStack_38 - 0x434;
        uStack_48 = uStack_48 << 1;
      }
      uVar7 = uVar7 ^ 1;
      unaff_r8 = 0;
      uStack_38 = 1;
    }
LAB_01301c7c:
    uStack_40 = 1;
    uStack_3c = 0;
    uStack_2e = (undefined1)uVar7;
    sStack_30 = (short)unaff_lr;
    uStack_34 = unaff_r8;
    if (uVar7 < 2) {
      iVar3 = 5;
      if (sStack_30 < 0) {
        iVar3 = -0xc;
      }
      uVar7 = iVar3 * sStack_30;
      pcVar6 = "+";
      pcVar8 = (char *)0x1;
      if ((longlong)uVar11 < 0) {
        pcVar6 = "-";
        pcVar8 = "-";
      }
      uVar10 = uVar10 >> 0x1f;
      if ((int)(uVar2 << 10) < 0) {
        uVar10 = 1;
        pcVar8 = pcVar6;
      }
      if (0x3ebf < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: buf.len() >= maxlen",0x25,&DAT_01ce4770);
      }
      iVar9 = (uVar7 >> 4) + 0x15;
      puVar12 = auStack_488;
      iVar3 = -0x8000;
      if ((uint)(int)(short)*(ushort *)(param_2 + 0xe) < 0x80000000) {
        iVar3 = -uVar5;
      }
      iVar13 = iVar9;
      iVar14 = iVar3;
      FUN_013001c0(&pcStack_88);
      if (pcStack_88 == (char *)0x0) {
        FUN_013006d0(&pcStack_58,&uStack_48,auStack_488,iVar9,(int)(short)iVar3,puVar12,iVar13,
                     iVar14);
      }
      else {
        pcStack_58 = pcStack_88;
        pcStack_54 = pcStack_84;
        uStack_50._0_4_ = uStack_80;
      }
      if ((int)(short)iVar3 < (int)(short)uStack_50) {
        uStack_50 = FUN_01300048(pcStack_58,pcStack_54,(int)(short)uStack_50,uVar5,&pcStack_88);
      }
      else {
        uStack_80 = 2;
        pcStack_88 = (char *)CONCAT22(pcStack_88._2_2_,2);
        if (uVar5 == 0) {
          uStack_80 = 1;
          pcStack_84 = "0";
        }
        else {
          pcStack_84 = "0.";
          uStack_7c = 0;
          uStack_78 = uVar5;
        }
        uStack_50 = CONCAT44(uStack_80,&pcStack_88);
      }
    }
    else if (uVar7 == 2) {
      uStack_80 = 3;
      pcStack_88 = (char *)CONCAT22(pcStack_88._2_2_,2);
      pcStack_84 = "NaN";
      pcVar8 = (char *)0x1;
      uVar10 = 0;
      uStack_50 = CONCAT44(1,&pcStack_88);
    }
    else {
      uVar10 = uVar10 >> 0x1f;
      uVar4 = 1;
      pcVar6 = "+";
      pcVar8 = (char *)0x1;
      if ((longlong)uVar11 < 0) {
        pcVar6 = "-";
        pcVar8 = "-";
      }
      if ((int)(uVar2 << 10) < 0) {
        uVar10 = 1;
        pcVar8 = pcVar6;
      }
      if (uVar7 == 4) {
        uVar4 = 2;
        if (uVar5 == 0) {
          uVar4 = 1;
          uStack_80 = 1;
          pcStack_84 = "0";
        }
        else {
          pcStack_84 = "0.";
          uStack_7c = 0;
          uStack_80 = 2;
          uStack_78 = uVar5;
        }
      }
      else {
        uStack_80 = 3;
        pcStack_84 = "inf";
      }
      pcStack_88 = (char *)CONCAT22(pcStack_88._2_2_,2);
      uStack_50 = CONCAT44(uVar4,&pcStack_88);
    }
    pcStack_58 = pcVar8;
    pcStack_54 = (char *)uVar10;
    FUN_012fd0c0(param_2,&pcStack_58);
    return;
  }
  iVar3 = uVar2 << 10;
  if ((uVar10 & 0x7fffffff) >> 0x14 == 0) {
    uStack_48 = uVar7 << 1;
    uStack_44 = (uVar10 & 0xfffff) << 1 | uVar7 >> 0x1f;
  }
  else {
    uStack_44 = uVar10 & 0xfffff | 0x100000;
  }
  if (uVar7 == 0 && (uVar11 & 0xfffff00000000) == 0) {
    iVar9 = 4;
    uStack_34 = uVar10 & 0x7fffffff ^ 0x7ff00000;
    if (uVar7 == 0 && (uVar11 & 0x7fffffff00000000) == 0) {
      iVar9 = 2;
    }
    if (uVar7 == 0 && uStack_34 == 0) {
      uVar2 = 3;
      goto LAB_01302048;
    }
  }
  else {
    iVar9 = 4;
    if ((uVar10 & 0x7fffffff) < 0x100000) {
      iVar9 = 3;
    }
    uStack_34 = 0x7fefffff;
    if (0x7fefffff < (uVar10 & 0x7fffffff)) {
      uVar2 = 2;
      goto LAB_01302048;
    }
  }
  if (iVar9 == 2) {
    uVar2 = 4;
  }
  else {
    uVar2 = uStack_48 & 1;
    uVar1 = (ushort)((uVar10 & 0x7fffffff) >> 0x10);
    if (iVar9 == 3) {
      in_r12 = (uVar1 >> 4) - 0x433;
    }
    else {
      if (uStack_48 == 0 && uStack_44 == 0x100000) {
        in_r12 = (uVar1 >> 4) - 0x435;
        uStack_48 = 0;
        unaff_lr = 2;
        uStack_44 = 0x400000;
        uVar2 = 1;
        uStack_34 = 0;
        goto LAB_01302048;
      }
      uStack_44 = uStack_44 << 1 | uStack_48 >> 0x1f;
      in_r12 = (uVar1 >> 4) - 0x434;
      uStack_48 = uStack_48 << 1;
    }
    uVar2 = uVar2 ^ 1;
    uStack_34 = 0;
    unaff_lr = 1;
  }
LAB_01302048:
  uStack_3c = 0;
  uStack_40 = 1;
  uStack_2e = (undefined1)uVar2;
  uStack_38 = unaff_lr;
  sStack_30 = in_r12;
  if (uVar2 < 2) {
    FUN_012fe028(&pcStack_88,&uStack_48,auStack_99);
    pcVar6 = "+";
    pcVar8 = (char *)0x1;
    if ((longlong)uVar11 < 0) {
      pcVar6 = "-";
      pcVar8 = "-";
    }
    if (-1 < iVar3) {
      pcVar6 = pcVar8;
    }
    uVar10 = uVar10 >> 0x1f;
    if (-1 >= iVar3) {
      uVar10 = 1;
    }
    if (pcStack_88 == (char *)0x0) {
      FUN_012fea44(&pcStack_58,&uStack_48,auStack_99);
    }
    else {
      pcStack_58 = pcStack_88;
      pcStack_54 = pcStack_84;
      uStack_50._0_4_ = uStack_80;
    }
    ppcStack_a0 = &pcStack_88;
    uStack_50 = FUN_01300048(pcStack_58,pcStack_54,(uint)uStack_50 & 0xffff,0);
  }
  else if (uVar2 == 2) {
    uStack_80 = 3;
    pcStack_88 = (char *)CONCAT22(pcStack_88._2_2_,2);
    pcStack_84 = "NaN";
    pcVar6 = (char *)0x1;
    uVar10 = 0;
    uStack_50 = CONCAT44(1,&pcStack_88);
  }
  else {
    pcVar8 = "+";
    pcVar6 = (char *)0x1;
    if ((longlong)uVar11 < 0) {
      pcVar8 = "-";
      pcVar6 = "-";
    }
    uVar10 = uVar10 >> 0x1f;
    if (iVar3 < 0) {
      uVar10 = 1;
      pcVar6 = pcVar8;
    }
    if (uVar2 == 4) {
      pcStack_84 = "0";
      uStack_80 = 1;
    }
    else {
      uStack_80 = 3;
      pcStack_84 = "inf";
    }
    pcStack_88 = (char *)CONCAT22(pcStack_88._2_2_,2);
    uStack_50 = CONCAT44(1,&pcStack_88);
  }
  pcStack_58 = pcVar6;
  pcStack_54 = (char *)uVar10;
  FUN_012fd0c0(param_2,&pcStack_58);
  return;
}

