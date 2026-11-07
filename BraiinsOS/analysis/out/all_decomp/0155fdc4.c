// FUN_0155fdc4 @ 0155fdc4 size=1484 calls_out=13 calls_in=0
// strings: 

void FUN_0155fdc4(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  int unaff_r4;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined1 local_138;
  uint local_134;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint uStack_108;
  undefined1 auStack_100 [72];
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  byte local_98;
  undefined2 local_97;
  undefined1 local_95;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int *local_84;
  undefined4 uStack_28;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0155fdf8;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0155fdf8:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    uVar21 = 0;
    if ((char)param_1[1] != '\0') goto LAB_0156029c;
  }
  else {
    uVar21 = FUN_015bf3f8();
    uVar21 = uVar21 ^ 1;
    if ((char)param_1[1] != '\0') {
      if (uVar21 != 0) goto LAB_015602ac;
LAB_0156029c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
LAB_015602ac:
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *param_1;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = 0;
      if (iVar12 == 2) {
        FUN_016d6968(0xf0,param_1,0x81,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a8e8c);
    }
  }
  if ((char)*param_2 == '\0') {
    uVar19 = param_2[3];
    uVar8 = param_2[2];
    if (param_2[1] == 0x80000000) {
      local_114 = 0x80000000;
      uVar6 = uVar8;
    }
    else {
      if (uVar19 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_016d4a50(uVar19);
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar19);
        }
      }
      FUN_016dd1aa(uVar6,uVar8,uVar19);
      local_114 = uVar19;
    }
    local_118 = local_118 & 0xffffff00;
    local_110 = uVar6;
    local_10c = uVar19;
  }
  else {
    local_118 = *param_2;
    local_114 = param_2[1];
    uStack_108 = param_2[4];
    local_110 = param_2[2];
    local_10c = param_2[3];
  }
  FUN_016dd1aa(auStack_100,param_3,0x48);
  FUN_01532be4(&local_a0,param_1 + 6,&local_118);
  uVar19 = local_a0;
  if (local_98 == 2) {
    FUN_016dd1aa(&local_a0,param_3,0x48);
    FUN_015604d4(&local_a0,uVar19 - 0x78);
    goto LAB_0156020c;
  }
  local_b6 = local_95;
  local_b8 = local_97;
  local_b2 = local_95;
  local_b4 = local_97;
  bVar4 = local_a0._3_1_;
  if ((local_98 & 1) == 0) {
    local_138 = 0;
    if (local_94 == 0x80000000) {
      uVar8 = 0x80000000;
      local_138 = 0;
      goto LAB_0155ff88;
    }
    if (local_8c == 0) {
      local_134 = 1;
    }
    else {
      local_134 = thunk_FUN_016d4a50();
      if (local_134 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_8c);
      }
    }
    FUN_016dd1aa(local_134,local_90,local_8c);
    uVar6 = param_1[2];
    uVar10 = param_1[5];
    uVar8 = local_8c;
    uVar5 = 0;
    if (uVar10 == uVar6) goto LAB_0155fffc;
  }
  else {
    local_a0 = CONCAT22(CONCAT11(local_a0._3_1_,local_95),local_97);
    uVar8 = local_94;
    local_138 = 1;
LAB_0155ff88:
    local_134 = local_90;
    uVar6 = param_1[2];
    uVar10 = param_1[5];
    uVar5 = local_138;
    if (uVar10 == uVar6) {
LAB_0155fffc:
      local_138 = uVar5;
      FUN_0155e8e0(param_1 + 2);
      uVar6 = param_1[2];
      uVar10 = param_1[5];
    }
  }
  uVar11 = param_1[4] + uVar10;
  uVar7 = uVar11 - uVar6;
  if (uVar11 < uVar6) {
    uVar7 = uVar11;
  }
  param_1[5] = uVar10 + 1;
  puVar13 = (undefined1 *)(param_1[3] + uVar7 * 0x14);
  *puVar13 = local_138;
  *(uint *)(puVar13 + 8) = local_134;
  *(uint *)(puVar13 + 0xc) = local_8c;
  *(uint *)(puVar13 + 0x10) = local_88;
  *(undefined2 *)(puVar13 + 1) = (undefined2)local_a0;
  puVar13[3] = local_a0._2_1_;
  *(uint *)(puVar13 + 4) = uVar8;
  FUN_016dd1aa(&local_a0,param_3,0x48);
  uVar8 = thunk_FUN_016d4a50(0x240);
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x240);
  }
  puVar14 = (uint *)*local_84;
  uVar10 = local_84[1];
  uVar19 = uVar10 & uVar19;
  uVar6 = *(uint *)((int)puVar14 + uVar19) & 0x80808080;
  if (uVar6 == 0) {
    iVar12 = 4;
    do {
      uVar19 = uVar19 + iVar12;
      iVar12 = iVar12 + 4;
      uVar19 = uVar19 & uVar10;
      uVar6 = *(uint *)((int)puVar14 + uVar19) & 0x80808080;
    } while (uVar6 == 0);
  }
  uVar19 = uVar19 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                   (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar10;
  uVar6 = (uint)*(char *)((int)puVar14 + uVar19);
  if (-1 < (int)uVar6) {
    uVar19 = *puVar14 & 0x80808080;
    uVar19 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                     (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18);
    uVar6 = (uint)*(byte *)((int)puVar14 + (uVar19 >> 3));
    uVar19 = uVar19 >> 3;
  }
  iVar12 = local_84[2];
  *(byte *)((int)puVar14 + uVar19) = bVar4 >> 1;
  local_84[2] = iVar12 - (uVar6 & 1);
  *(byte *)((int)puVar14 + (uVar19 - 4 & uVar10) + 4) = bVar4 >> 1;
  puVar14[uVar19 * -0x24 + -0x1e] = 8;
  puVar14[uVar19 * -0x24 + -0x20] = local_88;
  puVar14[uVar19 * -0x24 + -0x21] = local_8c;
  puVar14[uVar19 * -0x24 + -0x22] = local_90;
  puVar14[uVar19 * -0x24 + -0x23] = local_94;
  *(undefined2 *)(puVar14 + uVar19 * -0x24 + -2) = 0x10;
  puVar14[uVar19 * -0x24 + -0x11] = 0x80000000;
  *(undefined2 *)((int)puVar14 + uVar19 * -0x90 + -0x8f) = local_b4;
  *(undefined1 *)((int)puVar14 + uVar19 * -0x90 + -0x8d) = local_b2;
  *(byte *)(puVar14 + uVar19 * -0x24 + -0x24) = local_98;
  puVar14[uVar19 * -0x24 + -0x1b] = 0;
  puVar14[uVar19 * -0x24 + -0x1c] = 0;
  iVar12 = local_84[3];
  puVar14[uVar19 * -0x24 + -0x1d] = uVar8;
  local_84[3] = iVar12 + 1;
  FUN_015604d4(&local_a0);
  uVar19 = param_1[2];
  if ((uVar19 == param_1[5]) && (uVar19 != 0)) {
    param_1[5] = uVar19 - 1;
    uVar6 = param_1[4] + 1;
    uVar8 = uVar6 - uVar19;
    if (uVar6 < uVar19) {
      uVar8 = uVar6;
    }
    pcVar15 = (char *)(param_1[3] + param_1[4] * 0x14);
    cVar1 = *pcVar15;
    param_1[4] = uVar8;
    if (cVar1 != '\x02') {
      local_b4 = CONCAT11(local_b4._1_1_,cVar1);
      FUN_016dd1aa((uint)&local_b4 | 1,pcVar15 + 1,0x13);
      FUN_015337fc(&local_a0,param_1 + 6,&local_b4);
      FUN_0155e968(&local_a0);
      if ((cVar1 == '\0') && ((local_b0 & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(local_ac);
      }
    }
  }
LAB_0156020c:
  if (((uVar21 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar12 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    cVar1 = (char)*param_2;
  }
  else {
    cVar1 = (char)*param_2;
  }
  if (cVar1 == '\0') {
    if ((param_2[1] & 0x7fffffff) != 0) {
      uVar21 = param_2[2];
      if (uVar21 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar19 = *(byte *)(uVar21 - 3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar16 = uVar8 - 0x10, uVar8 == 0)) {
        iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar8 = (uint)(*(byte *)(uVar21 - 3) >> 5);
      iVar20 = *(int *)(iVar12 + 8) + 0x10;
      iVar18 = iVar16 * uVar19 + iVar16 + -4;
      iVar16 = iVar20 + iVar18;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar8 = *(uint *)(iVar16 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if (iVar16 - uVar21 < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar16 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar12 + 0x14);
      uVar8 = 1 << uVar19;
      *(undefined1 *)(uVar21 - 3) = 0xff;
      *(undefined2 *)(uVar21 - 2) = 0;
      do {
        uVar6 = *(uint *)(iVar12 + 0x10);
        uVar21 = *(uint *)(iVar12 + 0xc) | uVar6;
        if ((uVar8 & uVar21) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar6 == 0) || (uVar21 + uVar8 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar19);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar17 = *puVar9;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar9 = uVar17;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar8 + uVar6;
          return;
        }
        puVar14 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar21 = *puVar14;
          if (uVar6 != uVar21) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar2);
        *puVar14 = uVar8 + uVar6;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar6 == uVar21) {
          return;
        }
      } while( true );
    }
  }
  return;
}

