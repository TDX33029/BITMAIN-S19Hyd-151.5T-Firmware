// FUN_0126486c @ 0126486c size=2428 calls_out=14 calls_in=1
// strings: 

int * FUN_0126486c(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint unaff_r4;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int *unaff_r8;
  int iVar20;
  undefined8 uVar21;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  int *local_c4;
  int local_b0;
  int *local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int *local_88;
  uint local_84;
  uint local_80;
  char local_7c;
  byte local_77;
  byte local_71;
  byte local_6f;
  int local_6c;
  int local_68;
  int local_64;
  int local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar21 = FUN_01262790(param_2,param_3,param_4);
  uVar11 = (undefined4)((ulonglong)uVar21 >> 0x20);
  piVar6 = (int *)uVar21;
  if (piVar6 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    uVar15 = param_2[2];
    if (0x7ffffffe < uVar15) {
      FUN_00fb71b0(&DAT_0188ae98);
LAB_012651e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x12651e8);
      (*pcVar1)();
    }
    param_2[2] = uVar15 + 1;
    if (param_2[7] != 0) {
      local_ac = (int *)param_2[0xd];
      local_a8 = param_2[0xe];
      local_98 = param_2[8];
      local_94 = param_2[9];
      local_a4 = param_2[0xf];
      local_a0 = param_2[10];
      local_9c = param_2[0xb];
      local_b0 = param_2[0xc];
      FUN_011df94c(&local_b0,param_3,param_4);
      uVar7 = local_a0 ^ 0xff;
      uVar12 = local_9c << 0x18 | (local_9c >> 8 & 0xff) << 0x10 | (local_9c >> 0x10 & 0xff) << 8 |
               local_9c >> 0x18;
      lVar3 = (ulonglong)uVar12 * 0xb36a80d2;
      uVar17 = (uint)lVar3;
      uVar12 = (uVar7 << 0x18 | (local_a0 >> 8 & 0xff) << 0x10 | (local_a0 >> 0x10 & 0xff) << 8 |
               local_a0 >> 0x18) * -0x4c957f2e +
               uVar12 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar13 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18) ^
               local_9c * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
      uVar16 = local_94 << 0x18 | (local_94 >> 8 & 0xff) << 0x10 | (local_94 >> 0x10 & 0xff) << 8 |
               local_94 >> 0x18;
      uVar17 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
      lVar3 = (ulonglong)uVar16 * (ulonglong)uVar17;
      uVar7 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
              uVar13 >> 0x18;
      lVar4 = (ulonglong)~local_98 * (ulonglong)uVar7;
      uVar12 = (uint)lVar4;
      unaff_r8 = (int *)param_2[4];
      uVar7 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
              uVar17 >> 0x18) * ~local_98 + uVar7 * ~local_94 + (int)((ulonglong)lVar4 >> 0x20);
      uVar18 = param_2[5];
      uVar13 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18) ^
               uVar13 * uVar16 +
               uVar17 * (local_98 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                         (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18) ^ (uint)lVar3;
      iVar20 = 0;
      uVar12 = uVar13;
      if ((uVar17 & 0x20) != 0) {
        uVar12 = uVar7;
        uVar7 = uVar13;
      }
      uVar12 = uVar7 << (uVar17 & 0x1f) | (uVar12 >> 1) >> (~uVar17 & 0x1f);
      uVar7 = uVar12 >> 0x19;
LAB_01264a14:
      uVar12 = uVar18 & uVar12;
      uVar13 = *(uint *)((int)unaff_r8 + uVar12);
      uVar17 = uVar13 ^ uVar7 * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while( true ) {
        local_c4 = param_1;
        if (uVar17 == 0) goto LAB_01264ab0;
        uVar16 = uVar12 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 uVar18;
        unaff_r4 = uVar16 * -3;
        if ((param_4 == (unaff_r8 + uVar16 * -6 + -6)[1]) &&
           (iVar8 = thunk_FUN_016dd50a(param_3,unaff_r8[uVar16 * -6 + -6] + 8,param_4), iVar8 == 0))
        break;
        uVar17 = uVar17 - 1 & uVar17;
      }
      piVar9 = (int *)unaff_r8[uVar16 * -6 + -1];
      if (piVar9 == (int *)0x0) goto LAB_01264b24;
      do {
        iVar20 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar20 + 1;
      if (iVar20 < 0) goto LAB_012651e8;
      piVar9 = (int *)unaff_r8[uVar16 * -6 + -1];
      param_2[2] = param_2[2] + -1;
      goto LAB_01265020;
    }
LAB_01264b24:
    param_2[2] = uVar15;
    if (*param_1 == 2) {
      uVar7 = param_1[1];
      unaff_r4 = param_1[2];
      uVar15 = param_1[3];
      local_c4 = (int *)param_1[4];
    }
    else {
      uVar7 = 0;
      uVar15 = 0;
    }
    FUN_0135ccac(&local_b0,piVar6 + 2,uVar11);
    uVar16 = local_94;
    uVar13 = local_98;
    uVar17 = local_9c;
    uVar12 = local_a0;
    piVar9 = local_ac;
    iVar20 = local_b0;
    if ((uVar7 & 1) != 0) {
      piVar10 = param_2;
      if (local_7c == '\x03') {
        cVar5 = '\x03';
      }
      else if (local_7c == '\x02') {
        cVar5 = '\x02';
      }
      else {
        do {
          iVar8 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar8 + 1;
        local_b0 = iVar20;
        local_ac = piVar9;
        local_a0 = uVar12;
        local_9c = uVar17;
        local_98 = uVar13;
        local_94 = uVar16;
        if (iVar8 < 0) goto LAB_012651e8;
        local_108 = local_84;
        local_10c = local_80;
        piVar10 = local_88;
        cVar5 = local_7c;
      }
      local_100 = (uint)local_77;
      local_104 = (uint)local_71;
      unaff_r8 = (int *)(uint)local_6f;
      if (cVar5 != '\x03' && cVar5 != '\x02') {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_88,local_84);
        }
      }
      local_80 = local_10c;
      local_84 = local_108;
      local_a8 = 1;
      local_a4 = unaff_r4;
      local_88 = piVar10;
    }
    uVar7 = local_a4;
    iVar8 = local_a8;
    local_b0 = iVar20;
    local_ac = piVar9;
    if ((uVar15 & 1) != 0) {
      if (local_7c == '\x03') {
        cVar5 = '\x03';
      }
      else if (local_7c == '\x02') {
        cVar5 = '\x02';
      }
      else {
        do {
          iVar14 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar14 + 1;
        local_a0 = uVar12;
        local_9c = uVar17;
        local_98 = uVar13;
        local_94 = uVar16;
        if (iVar14 < 0) goto LAB_012651e8;
        local_100 = local_84;
        local_104 = local_80;
        unaff_r8 = local_88;
        cVar5 = local_7c;
      }
      if (cVar5 != '\x03' && cVar5 != '\x02') {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          local_a0 = uVar12;
          local_9c = uVar17;
          local_98 = uVar13;
          local_94 = uVar16;
          FUN_0089ddfc(local_88,local_84);
        }
      }
      local_80 = local_104;
      local_84 = local_100;
      local_ac = local_c4;
      local_b0 = 1;
      local_88 = unaff_r8;
    }
    local_a8 = iVar8;
    local_a4 = uVar7;
    local_a0 = uVar12;
    local_9c = uVar17;
    local_98 = uVar13;
    local_94 = uVar16;
    FUN_0135ce10(&local_50,&local_b0);
    if (local_50 == 0) {
      if ((local_4c & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_48);
      }
      puVar19 = (undefined4 *)(local_68 + 4);
      for (iVar20 = local_64; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (puVar19[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar19);
        }
        puVar19 = puVar19 + 3;
      }
      if (local_6c != 0) {
        thunk_FUN_016d3fb4(local_68);
      }
      if (local_7c != '\x03' && local_7c != '\x02') {
        DataMemoryBarrier(0xb);
        do {
          iVar20 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar20 + -1;
        if (iVar20 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_88,local_84);
        }
      }
      piVar9 = (int *)0x0;
LAB_01265020:
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar20 + -1;
    }
    else {
      local_38 = local_50;
      uStack_34 = local_4c;
      iStack_30 = local_48;
      iStack_2c = iStack_44;
      local_3c = 1;
      local_40 = 1;
      piVar9 = (int *)thunk_FUN_016d4a50(0x18);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *piVar9 = local_40;
      piVar9[1] = local_3c;
      piVar9[2] = local_38;
      piVar9[3] = uStack_34;
      piVar9[4] = iStack_30;
      piVar9[5] = iStack_2c;
      if (param_2[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_0188aea8);
      }
      param_2[2] = -1;
      iVar20 = FUN_01225f1c(param_2 + 4,param_3,param_4);
      if (iVar20 == 0) {
        iVar20 = 0;
      }
      else {
        do {
          iVar8 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_012651e8;
        piVar10 = *(int **)(iVar20 + 0xc);
        if (piVar10 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_011e0b70(*(undefined4 *)(iVar20 + 0xc));
          }
        }
        *(int **)(iVar20 + 0xc) = piVar9;
        iVar20 = param_2[2] + 1;
      }
      puVar19 = (undefined4 *)(local_68 + 4);
      param_2[2] = iVar20;
      for (iVar20 = local_64; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (puVar19[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar19);
        }
        puVar19 = puVar19 + 3;
      }
      if (local_6c != 0) {
        thunk_FUN_016d3fb4(local_68);
      }
      if (local_7c != '\x03' && local_7c != '\x02') {
        DataMemoryBarrier(0xb);
        do {
          iVar20 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = iVar20 + -1;
        if (iVar20 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_88,local_84);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar20 + -1;
    }
    if (iVar20 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(piVar6,uVar11);
      return piVar9;
    }
  }
  return piVar9;
LAB_01264ab0:
  unaff_r4 = uVar12;
  if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) goto LAB_01264b24;
  iVar20 = iVar20 + 4;
  uVar12 = uVar12 + iVar20;
  goto LAB_01264a14;
}

