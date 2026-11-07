// FUN_016b7738 @ 016b7738 size=2032 calls_out=14 calls_in=4
// strings: start of range should be a character boundary

void FUN_016b7738(int *param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,int param_6
                 ,int param_7,undefined4 param_8,undefined2 param_9,undefined2 param_10,
                 uint param_11,undefined4 param_12,undefined4 param_13)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int unaff_r4;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int local_40;
  int local_3c;
  uint *local_38;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  if (param_11 == param_4 + 1) {
    uVar16 = param_2[1];
    uVar19 = param_2[2];
    if (param_11 != 0) {
      puVar4 = &DAT_018aefa0;
      if (param_11 < uVar19) {
        if (*(char *)(uVar16 + param_11) < -0x40) goto LAB_016b77c8;
      }
      else if (uVar19 != param_11) {
LAB_016b77c8:
        param_4 = param_11;
        param_11 = uVar19;
        goto LAB_016b7f04;
      }
    }
    if ((1 < uVar19 - param_11) && (*(short *)(uVar16 + param_11) == 0x2f2f)) {
      if (param_11 != 0) {
        if (param_11 < uVar19) {
          if ((char)*(short *)(uVar16 + param_11) < -0x40) goto LAB_016b78d4;
        }
        else if (uVar19 != param_11) {
LAB_016b78d4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004186db,0x2c,&DAT_018aefb0);
        }
      }
      if (*param_2 - uVar19 < 2) {
        FUN_016bd7fc(param_2,uVar19,2,1,1);
        uVar16 = param_2[1];
      }
      FUN_016dd52c(uVar16 + param_11 + 2,uVar16 + param_11,uVar19 - param_11);
      uVar19 = uVar19 + 2;
      puVar6 = (undefined2 *)(param_2[1] + param_11);
      param_11 = param_11 + 2;
      *puVar6 = 0x2e2f;
      param_2[2] = uVar19;
      uVar16 = param_2[1];
    }
    if (param_4 != 0) {
      if (param_4 < uVar19) {
        if (*(char *)(uVar16 + param_4) < -0x40) goto LAB_016b7ef8;
      }
      else if (uVar19 != param_4) {
LAB_016b7ef8:
        puVar4 = &DAT_018aefc0;
        param_11 = uVar19;
        goto LAB_016b7f04;
      }
    }
    if ((2 < uVar19 - param_4) &&
       (iVar5 = thunk_FUN_016dd50a(&DAT_00418646,uVar16 + param_4,3), iVar5 == 0)) {
      puVar4 = &DAT_018aefd0;
      goto LAB_016b78a4;
    }
    goto LAB_016b7d34;
  }
  if (param_11 != param_4 + 3) goto LAB_016b7d34;
  puVar4 = &DAT_018aef40;
  uVar16 = param_2[1];
  uVar19 = param_2[2];
  if (param_11 < param_4) goto LAB_016b7f04;
  if (param_4 != 0) {
    if (param_4 < uVar19) {
      if (*(char *)(uVar16 + param_4) < -0x40) goto LAB_016b7f04;
    }
    else if (param_4 != uVar19) goto LAB_016b7f04;
  }
  if (param_11 != 0) {
    if (param_11 < uVar19) {
      if (*(char *)(uVar16 + param_11) < -0x40) goto LAB_016b7f04;
    }
    else if (uVar19 != param_11) goto LAB_016b7f04;
  }
  if (param_11 - param_4 != 3) goto LAB_016b7d34;
  pcVar15 = (char *)(uVar16 + param_4);
  iVar5 = thunk_FUN_016dd50a(pcVar15,&DAT_00418642,3);
  if (iVar5 != 0) goto LAB_016b7d34;
  if (uVar19 <= param_11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_11,uVar19,&DAT_018aef50);
  }
  if (*(char *)(uVar16 + param_11) != '/') {
    FUN_016bd7ac();
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16b7f34);
    (*pcVar1)();
  }
  if ((uVar19 <= param_11 + 1) || (uVar12 = uVar19, *(char *)(uVar16 + param_11 + 1) != '/')) {
    if (uVar19 < param_11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_11,uVar19,&DAT_018aef60);
    }
    if ((param_4 != 0) && (*pcVar15 < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("start of range should be a character boundary",0x5b,&DAT_018aef60);
    }
    iVar5 = uVar19 - param_11;
    puVar20 = &DAT_00418eb9;
    param_2[2] = param_4;
    local_34 = param_11;
    local_3c = 1;
    local_40 = 1;
    local_2c = &DAT_00418eb8;
    local_28 = &DAT_00418eb9;
    local_38 = param_2;
    local_30 = iVar5;
    if (iVar5 == 0) {
      uVar12 = param_4;
      if (*param_2 == param_4) {
        FUN_016bd7fc(param_2,param_4,1,1,1);
        uVar16 = param_2[1];
        uVar12 = param_2[2];
      }
      *(undefined1 *)(uVar16 + uVar12) = 0x3a;
      uVar12 = uVar12 + 1;
LAB_016b7cd4:
      param_2[2] = uVar12;
    }
    else {
      if (param_11 != param_4) {
        *pcVar15 = ':';
        param_2[2] = param_2[2] + 1;
        if (pcVar15 + 1 == (char *)(uVar16 + param_11)) goto LAB_016b7b50;
        uVar12 = param_2[2];
        uVar16 = param_11;
LAB_016b7cb0:
        if (uVar16 != uVar12) {
          FUN_016dd52c(param_2[1] + uVar12,param_2[1] + uVar16,iVar5);
        }
        uVar12 = uVar12 + iVar5;
        goto LAB_016b7cd4;
      }
      if (*param_2 == uVar19) {
        FUN_016bd7fc(param_2,uVar19,1,1,1);
      }
      uVar16 = param_11 + 1;
      FUN_016dd52c(param_2[1] + uVar16,param_2[1] + param_11,iVar5);
      uVar12 = param_2[2];
      uVar10 = param_2[1];
      local_34 = uVar16;
      if (uVar12 == uVar16) {
        iVar17 = 1;
        bVar3 = false;
        puVar20 = &DAT_00418eb8;
LAB_016b7b88:
        uVar12 = local_34;
        iVar7 = thunk_FUN_016d4a50(iVar17);
        if (iVar7 == 0) {
          uVar8 = 1;
LAB_016b7b64:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar8,iVar17);
        }
        if (puVar20 == &DAT_00418eb9) {
LAB_016b7c2c:
          uVar16 = uVar12;
        }
        else {
          uVar10 = 0;
          do {
            *(undefined1 *)(iVar7 + uVar10) = puVar20[uVar10];
            uVar10 = uVar10 + 1;
          } while (puVar20 + uVar10 != &DAT_00418eb9);
          local_2c = &DAT_00418eb9;
          if (uVar10 == 0) goto LAB_016b7c2c;
          if (*param_2 - (iVar5 + uVar12) < uVar10) {
            FUN_016bd7fc(param_2,iVar5 + uVar12,uVar10,1,1);
          }
          uVar16 = uVar12 + uVar10;
          FUN_016dd52c(param_2[1] + uVar16,param_2[1] + uVar12,iVar5);
          uVar11 = param_2[1];
          uVar13 = param_2[2];
          local_34 = uVar16;
          if (uVar13 == uVar16) {
          }
          else {
            uVar14 = 0;
            do {
              if (uVar10 == uVar14) break;
              *(undefined1 *)(uVar11 + uVar13 + uVar14) = *(undefined1 *)(iVar7 + uVar14);
              uVar14 = uVar14 + 1;
              param_2[2] = param_2[2] + 1;
            } while ((uVar12 - uVar13) + uVar10 != uVar14);
            if (bVar3) goto LAB_016b7c9c;
          }
        }
        thunk_FUN_016d3fb4(iVar7);
      }
      else {
        iVar17 = 0;
        do {
          if (iVar17 == -1) goto LAB_016b7c9c;
          *(undefined1 *)((uVar10 + uVar12) - iVar17) = (&DAT_00418eb8)[-iVar17];
          iVar17 = iVar17 + -1;
          param_2[2] = param_2[2] + 1;
        } while (~param_11 + uVar12 != iVar17);
        puVar20 = &DAT_00418eb8 + -iVar17;
LAB_016b7b50:
        iVar17 = (int)&DAT_00418eb9 - (int)puVar20;
        uVar8 = 0;
        local_2c = puVar20;
        if (iVar17 < 0) goto LAB_016b7b64;
        if (puVar20 != &DAT_00418eb9) {
          bVar3 = puVar20 == &DAT_00418eb9;
          goto LAB_016b7b88;
        }
        uVar16 = local_34;
      }
LAB_016b7c9c:
      uVar12 = param_2[2];
      if (uVar19 != param_11) goto LAB_016b7cb0;
    }
    param_11 = param_11 - 2;
    uVar16 = param_2[1];
  }
  if (param_4 != 0) {
    if (param_4 < uVar12) {
      if (*(char *)(uVar16 + param_4) < -0x40) goto LAB_016b7d08;
    }
    else if (uVar12 != param_4) {
LAB_016b7d08:
      puVar4 = &DAT_018aef70;
      uVar19 = uVar12;
      param_11 = uVar12;
LAB_016b7f04:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(uVar16,uVar19,param_4,param_11,puVar4);
    }
  }
  if ((2 < uVar12 - param_4) &&
     (iVar5 = thunk_FUN_016dd50a(&DAT_00418646,uVar16 + param_4,3), iVar5 == 0)) {
    puVar4 = &DAT_018aef80;
LAB_016b78a4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00418649,0x4f,puVar4);
  }
LAB_016b7d34:
  FUN_016baa30(&local_40,param_2,param_3,param_4,param_12,param_13);
  uVar16 = local_34;
  puVar21 = local_38;
  iVar17 = local_3c;
  iVar5 = local_40;
  if (local_40 == 2) {
    *param_1 = 2;
    uVar16 = *param_2;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_3c;
    if (uVar16 != 0) {
      uVar16 = param_2[1];
      if (uVar16 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar19 = *(byte *)(uVar16 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar17 = uVar12 - 0x10, uVar12 == 0)) {
        iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar12 = (uint)(*(byte *)(uVar16 - 3) >> 5);
      iVar18 = *(int *)(iVar5 + 8) + 0x10;
      iVar7 = iVar17 * uVar19 + iVar17 + -4;
      iVar17 = iVar18 + iVar7;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar17 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar17 - uVar16 < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar17 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar18 + iVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar12 = 1 << uVar19;
      *(undefined1 *)(uVar16 - 3) = 0xff;
      *(undefined2 *)(uVar16 - 2) = 0;
      do {
        uVar10 = *(uint *)(iVar5 + 0x10);
        uVar16 = *(uint *)(iVar5 + 0xc) | uVar10;
        if ((uVar12 & uVar16) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar16 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar5,uVar19);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar9;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar9 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar12 + uVar10;
          return;
        }
        puVar21 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar21);
          uVar16 = *puVar21;
          if (uVar10 != uVar16) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar21);
        } while (!bVar3);
        *puVar21 = uVar12 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar16) {
          return;
        }
      } while( true );
    }
  }
  else {
    uVar19 = param_2[1];
    uVar12 = param_2[2];
    param_1[4] = *param_2;
    param_1[5] = uVar19;
    param_1[6] = uVar12;
    FUN_016dd1aa(param_1 + 0xd,param_8,0x11);
    param_1[9] = param_5;
    param_1[10] = param_6;
    param_1[0xb] = param_7;
    *(undefined2 *)((int)param_1 + 0x1e) = param_10;
    param_1[8] = param_4;
    param_1[0xc] = param_11;
    *(undefined2 *)(param_1 + 7) = param_9;
    *param_1 = iVar5;
    param_1[1] = iVar17;
    param_1[2] = (int)puVar21;
    param_1[3] = uVar16;
  }
  return;
}

