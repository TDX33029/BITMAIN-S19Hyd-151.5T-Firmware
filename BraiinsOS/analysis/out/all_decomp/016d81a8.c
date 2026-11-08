// FUN_016d81a8 @ 016d81a8 size=1482 calls_out=14 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_016d81a8(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  uint3 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  bool bVar20;
  bool bVar21;
  int local_1f8;
  uint *local_1dc;
  uint *local_1d4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  uint local_1b4 [10];
  byte local_18c [12];
  undefined4 uStack_180;
  undefined4 local_17c;
  uint local_138;
  uint local_130 [2];
  byte local_128 [12];
  undefined4 local_11c;
  undefined4 local_118;
  
  *param_2 = 0;
  if (param_3 == 0) {
    uVar12 = param_5 & 8;
    if (uVar12 == 0) {
      uVar6 = param_5 & 1;
      puVar13 = param_1;
      uVar18 = param_5;
      if (uVar6 == 0) {
        uVar12 = uVar6;
        if (param_4 != 10) goto LAB_016d86f8;
        uVar6 = 1;
        goto LAB_016d8262;
      }
      if (param_4 == 10) {
      }
      else {
        if (param_4 != 2) {
          uVar6 = uVar12;
        }
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *param_1 = 2;
        uVar12 = uVar6;
        if (param_4 == 2) {
          return uVar6;
        }
LAB_016d824a:
        uVar6 = 2;
        puVar13 = param_1 + 7;
        param_5 = uVar18;
      }
LAB_016d8654:
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      *puVar13 = 10;
LAB_016d8666:
      bVar21 = false;
      goto LAB_016d8668;
    }
    if (param_4 == 10) {
      puVar13 = param_1 + 7;
      if ((param_5 & 1) != 0) {
        uVar6 = 2;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *param_1 = 2;
        goto LAB_016d8654;
      }
      param_1[1] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar6 = 2;
      param_1[2] = &DAT_0100007f;
      *param_1 = 2;
LAB_016d8262:
      puVar13[5] = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[6] = 0;
      *puVar13 = 10;
      *(undefined1 *)((int)puVar13 + 0x17) = 1;
      goto LAB_016d8666;
    }
    uVar18 = param_5 - 8;
    uVar12 = uVar18 & 8;
    if ((int)(param_5 << 0x1f) < 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = 2;
      if (param_4 != 2) goto LAB_016d824a;
    }
    else {
LAB_016d86f8:
      uVar6 = 2;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[2] = &DAT_0100007f;
      if (param_4 != 2) {
        puVar13 = param_1 + 7;
        param_5 = uVar18;
        goto LAB_016d8262;
      }
    }
    if (uVar12 == 0) {
      return 1;
    }
    uVar6 = 1;
    bVar21 = true;
  }
  else {
    iVar5 = FUN_016dd92c(param_3,0xff);
    if (0xfd < iVar5 - 1U) {
      return 0xfffffffe;
    }
    FUN_016dd1aa(param_2,param_3,iVar5 + 1);
    if ((int)(param_5 << 0x1c) < 0) {
      if (param_4 == 10) {
        param_4 = 0;
      }
      else {
        param_5 = param_5 - 8;
      }
    }
    uVar6 = FUN_016d7baa(param_1,param_3,param_4);
    if (uVar6 == 0) {
      if ((int)(param_5 << 0x1d) < 0) {
        return 0xfffffffe;
      }
      uVar6 = FUN_016d7f88(param_1,param_2,param_3,param_4);
      if (uVar6 != 0) goto LAB_016d828e;
      puVar11 = local_130;
      puVar3 = local_1b4 + 8;
      iVar5 = FUN_016d95ac(puVar3,puVar11,0x100);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      pcVar14 = (char *)(param_3 + -1);
      uVar6 = 0;
      while( true ) {
        pcVar16 = pcVar14 + (1 - param_3);
        pcVar14 = pcVar14 + 1;
        if (*pcVar14 == '\0') break;
        if (*pcVar14 == '.') {
          uVar6 = uVar6 + 1;
        }
      }
      pcVar14 = pcVar16 + -1;
      uVar4 = local_130[0]._1_3_;
      if (uVar6 < local_138) {
        if (pcVar14[param_3] != '.') goto LAB_016d830e;
LAB_016d82f0:
        local_130[0] = (uint)uVar4 << 8;
        if (pcVar14 == (char *)0x0) {
          return 0xfffffffe;
        }
        if (pcVar16[param_3 + -2] == '.') {
          return 0xfffffffe;
        }
      }
      else {
        local_130[0] = (uint)local_130[0]._1_3_ << 8;
        if (pcVar14[param_3] == '.') goto LAB_016d82f0;
LAB_016d830e:
        pcVar14 = pcVar16;
        if (pcVar16 == (char *)0x0) {
          return 0xfffffffe;
        }
      }
      if (&DAT_00000100 <= pcVar14) {
        return 0xfffffffe;
      }
      FUN_016dd1aa(param_2,param_3,pcVar14);
      param_2[(int)pcVar14] = 0x2e;
      uVar6 = local_130[0] & 0xff;
      while (puVar10 = puVar11, uVar6 != 0) {
        while( true ) {
          bVar21 = 0x1f < uVar6;
          if (uVar6 != 0x20) {
            bVar21 = 3 < uVar6 - 9;
          }
          if (bVar21 && (uVar6 != 0x20 && uVar6 - 9 != 4)) break;
          puVar10 = (uint *)((int)puVar10 + 1);
          uVar6 = (uint)*(byte *)puVar10;
        }
        puVar11 = puVar10;
        while (((uVar6 & 0xdf) != 0 && (4 < uVar6 - 9))) {
          puVar11 = (uint *)((int)puVar11 + 1);
          uVar6 = (uint)*(byte *)puVar11;
        }
        if (puVar10 == puVar11) break;
        uVar12 = (int)puVar11 - (int)puVar10;
        if (uVar12 < 0xffU - (int)pcVar14) {
          FUN_016dd1aa(pcVar14 + 1 + (int)param_2,puVar10,uVar12);
          (param_2 + uVar12)[(int)(pcVar14 + 1)] = 0;
          uVar6 = FUN_016d7d58(param_1,param_2,param_2,param_4,puVar3);
          if (uVar6 != 0) {
            if ((int)uVar6 < 1) {
              return uVar6;
            }
            goto LAB_016d8294;
          }
          uVar6 = (uint)(byte)*puVar11;
        }
      }
      param_2[(int)pcVar14] = 0;
      uVar6 = FUN_016d7d58(param_1,param_2,param_3,param_4,puVar3);
      if ((int)uVar6 < 1) {
        if (uVar6 == 0) {
          return 0xfffffffe;
        }
        return uVar6;
      }
    }
    else {
LAB_016d828e:
      if ((int)uVar6 < 1) {
        return uVar6;
      }
    }
LAB_016d8294:
    uVar12 = param_5 & 8;
    bVar21 = param_4 == 2;
LAB_016d8668:
    uVar18 = param_5;
    if (uVar12 == 0) goto LAB_016d866c;
  }
  if ((uVar18 & 0x10) == 0) {
    iVar5 = 0;
    iVar7 = 0;
LAB_016d83d0:
    iVar8 = iVar7 + 1;
    piVar15 = param_1 + iVar5;
    iVar5 = iVar5 + 7;
    if (*piVar15 != 10) goto code_r0x016d83e0;
    uVar12 = 0;
    iVar5 = 10;
    piVar15 = param_1 + iVar8 * 7;
    while( true ) {
      iVar7 = iVar7 + 1;
      if (iVar5 == 10) {
        piVar19 = param_1 + uVar12 * 7;
        uVar12 = uVar12 + 1;
        iVar5 = piVar15[-6];
        iVar8 = piVar15[-5];
        iVar9 = piVar15[-4];
        *piVar19 = piVar15[-7];
        piVar19[1] = iVar5;
        piVar19[2] = iVar8;
        piVar19[3] = iVar9;
        iVar5 = piVar15[-2];
        iVar8 = piVar15[-1];
        piVar19[4] = piVar15[-3];
        piVar19[5] = iVar5;
        piVar19[6] = iVar8;
      }
      if ((int)uVar6 <= iVar7) break;
      iVar5 = *piVar15;
      piVar15 = piVar15 + 7;
    }
    uVar6 = uVar12;
  }
LAB_016d8736:
  uVar12 = 0;
  puVar13 = param_1 + 5;
  while (bVar20 = uVar6 != uVar12, uVar12 = uVar12 + 1, bVar20) {
    if (puVar13[-5] == 2) {
      FUN_016dd1aa(puVar13,puVar13 + -3,4);
      FUN_016dd1aa(puVar13 + -3,&DAT_00427cec,0xc);
      puVar13[-5] = 10;
    }
    puVar13 = puVar13 + 7;
  }
LAB_016d866c:
  if ((int)uVar6 < 2) {
    bVar21 = true;
  }
  if (!bVar21) {
    uVar12 = 0;
    iVar5 = 0;
    do {
      piVar15 = param_1 + iVar5;
      iVar5 = iVar5 + 7;
      if (*piVar15 != 2) break;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar6);
    if (uVar6 != uVar12) {
      FUN_016df690(1);
      local_1f8 = 0;
      puVar13 = param_1 + 2;
      do {
        local_130[0] = 0xffff000a;
        iVar5 = puVar13[-2];
        local_1b4[4] = 0xffff0002;
        local_118 = puVar13[-1];
        local_130[1] = 0;
        local_128[0] = 0;
        local_128[1] = 0;
        local_128[2] = 0;
        local_128[3] = 0;
        local_128[4] = 0;
        local_128[5] = 0;
        local_128[6] = 0;
        local_128[7] = 0;
        local_128[8] = 0;
        local_128[9] = 0;
        local_128[10] = 0;
        local_128[0xb] = 0;
        local_11c = 0;
        local_1b4[8] = 0;
        local_1b4[9] = 0;
        local_18c[0] = 0;
        local_18c[1] = 0;
        local_18c[2] = 0;
        local_18c[3] = 0;
        local_18c[4] = 0;
        local_18c[5] = 0;
        local_18c[6] = 0;
        local_18c[7] = 0;
        local_1b4[0] = 0;
        local_1b4[1] = 0;
        local_1b4[2] = 0;
        local_1b4[3] = 0;
        local_18c[8] = 0;
        local_18c[9] = 0;
        local_18c[10] = 0;
        local_18c[0xb] = 0;
        uStack_180 = 0;
        local_17c = 0;
        local_1b4[5] = 0;
        local_1b4[6] = 0;
        local_1b4[7] = 0;
        if (iVar5 == 10) {
          uVar17 = 0x1c;
          FUN_016dd1aa(local_128,puVar13,0x10);
          local_1dc = local_130;
          local_1d4 = local_1b4 + 8;
        }
        else {
          FUN_016dd1aa(local_18c,&DAT_00427cec,0xc);
          FUN_016dd1aa(&local_11c,puVar13,4);
          FUN_016dd1aa(local_128,&DAT_00427cec,0xc);
          uVar17 = 0x10;
          FUN_016dd1aa(&local_11c,puVar13,4);
          FUN_016dd1aa(local_1b4 + 5,puVar13,4);
          local_1dc = local_1b4 + 4;
          local_1d4 = local_1b4;
        }
        local_1b8 = uVar17;
        iVar7 = FUN_016d7eec(local_128);
        iVar8 = FUN_016d7cb4(local_128);
        cVar1 = *(char *)(iVar7 + 0x13);
        bVar2 = *(byte *)(iVar7 + 0x12);
        iVar7 = FUN_016d997a(iVar5,0x80002,0x11);
        if (iVar7 < 0) {
          uVar18 = 0;
          uVar12 = uVar18;
        }
        else {
          iVar9 = FUN_016d6ed2(iVar7,local_1dc,uVar17);
          if (iVar9 == 0) {
            uVar18 = 0x40000000;
            iVar9 = FUN_016d7810(iVar7,local_1d4,&local_1b8);
            uVar12 = 0;
            if (iVar9 == 0) {
              if (iVar5 == 2) {
                FUN_016dd1aa(&uStack_180,local_1b4 + 1,4);
              }
              iVar5 = FUN_016d7cb4(local_18c);
              if (iVar5 == iVar8) {
                uVar18 = 0x60000000;
              }
              else {
                uVar18 = 0x40000000;
              }
              iVar5 = FUN_016d7eec(local_18c);
              uVar12 = 0;
              if (*(char *)(iVar5 + 0x13) == cVar1) {
                uVar18 = uVar18 | 0x10000000;
              }
              do {
                if (((uint)(local_18c[uVar12 >> 3] ^ local_128[uVar12 >> 3]) & 0x80 >> (uVar12 & 7))
                    != 0) {
                  uVar12 = uVar12 << 8;
                  goto LAB_016d84f4;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 != 0x80);
              uVar12 = 0x8000;
            }
          }
          else {
            uVar12 = 0;
            uVar18 = 0;
          }
LAB_016d84f4:
          FUN_016dffb2(iVar7);
        }
        puVar13[4] = uVar12 | 0x30U - local_1f8 | (0xf - iVar8) * 0x10000 | (uint)bVar2 << 0x14 |
                              uVar18;
        local_1f8 = local_1f8 + 1;
        puVar13 = puVar13 + 7;
      } while (local_1f8 < (int)uVar6);
      FUN_016dd0b8(param_1,uVar6,0x1c,&LAB_016d7d4e_1);
      FUN_016df690(local_1bc,0);
    }
  }
  return uVar6;
code_r0x016d83e0:
  iVar7 = iVar8;
  if ((int)uVar6 <= iVar8) goto LAB_016d8736;
  goto LAB_016d83d0;
}

