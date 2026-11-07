// FUN_016ab12c @ 016ab12c size=1812 calls_out=6 calls_in=8
// strings: 

void FUN_016ab12c(int *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_r3;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_60;
  int local_48;
  int local_40;
  undefined1 local_30;
  byte local_2f;
  uint local_2c;
  
  uVar16 = FUN_016b3ad4(param_2,param_3);
  uVar9 = (uint)(uVar16 >> 0x20);
  if ((uVar16 & 1) != 0) {
LAB_016ab160:
    iVar1 = FUN_016c2dec(uVar9);
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = iVar1;
    return;
  }
  uVar13 = *(uint *)(param_3 + 0x10);
  if (uVar13 != *(uint *)(param_3 + 0x14)) {
    local_2c = *(uint *)(param_3 + 0x14) - 1;
    uVar12 = param_2[3];
    uVar2 = param_2[0x15];
    uVar3 = param_2[0x5c];
    uVar4 = param_2[0x5d];
    uVar5 = param_2[0x5e];
    uVar7 = param_2[0x5a];
    uVar6 = param_2[0x57] & 0x1f;
    uVar10 = param_2[2];
    uVar14 = param_2[0x16];
    uVar15 = param_2[0x59];
    local_40 = 0;
    do {
      if (*(uint *)(param_3 + 0xc) <= local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_2c,*(uint *)(param_3 + 0xc),&DAT_01d0849c);
      }
      local_2f = *(byte *)(*(int *)(param_3 + 8) + local_2c);
      uVar9 = uVar9 + *(byte *)((int)param_2 + local_2f + 0x5c);
      if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,uVar14,&DAT_01d0828c);
      }
      uVar9 = *(uint *)(uVar2 + uVar9 * 4);
      if (uVar9 <= *param_2) {
        if ((uVar9 == 0) || (uVar9 < uVar10)) {
          if (uVar9 == 0) {
            *param_1 = local_40;
            param_1[1] = local_48;
            param_1[2] = local_60;
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          local_48 = 0;
          if (uVar5 != 1) {
            uVar8 = uVar9 - uVar10 >> uVar6;
            if (uVar7 <= uVar8 * 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar8 << 1,uVar7,&DAT_01d0866c);
            }
            uVar11 = uVar8 << 1 | 1;
            if (uVar7 <= uVar11) goto LAB_016ab7bc;
            uVar8 = *(uint *)(uVar15 + uVar8 * 8);
            uVar11 = *(uint *)(uVar15 + uVar11 * 4);
            if ((CARRY4(uVar11,uVar8)) || (uVar4 < uVar11 + uVar8)) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar8,uVar11 + uVar8,uVar4,&DAT_01d0867c);
            }
            if (uVar11 == 0) goto LAB_016ab7a8;
            local_48 = *(int *)(uVar3 + uVar8 * 4);
          }
          local_60 = local_2c + 1;
          local_40 = 1;
          goto LAB_016ab360;
        }
        if (param_2[1] == uVar9) {
          local_30 = 0;
          FUN_016cc61c(&local_30);
          iVar1 = FUN_016c2dec();
          *param_1 = 2;
          param_1[1] = 1;
          param_1[2] = iVar1;
          return;
        }
      }
LAB_016ab360:
      if (uVar13 == local_2c) {
        if (uVar13 == 0) {
          uVar11 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
          uVar8 = (uVar11 & 0xffff) >> 8;
          if ((uVar11 & 1) != 0) {
            uVar8 = uVar11 >> 0x10;
          }
          uVar8 = uVar8 + uVar9;
          if (uVar14 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,uVar14,&DAT_01d2f26c);
          }
          uVar9 = *(uint *)(uVar2 + uVar8 * 4);
          if (((uVar9 == 0) || (uVar9 < uVar10)) || (uVar12 < uVar9)) goto LAB_016ab5d8;
          if (uVar5 == 1) {
            local_48 = 0;
            local_40 = 1;
            local_60 = 0;
            goto LAB_016ab73c;
          }
          uVar9 = uVar9 - uVar10 >> uVar6;
          uVar11 = uVar9 << 1;
          if (uVar7 <= uVar9 * 2) goto LAB_016ab804;
          uVar11 = uVar11 | 1;
          if (uVar7 <= uVar11) goto LAB_016ab830;
          uVar9 = *(uint *)(uVar15 + uVar9 * 8);
          uVar2 = *(uint *)(uVar15 + uVar11 * 4);
          uVar12 = uVar2 + uVar9;
          if ((CARRY4(uVar2,uVar9)) || (uVar4 < uVar12)) goto LAB_016ab774;
          uVar13 = 0;
LAB_016ab728:
          if (uVar2 == 0) goto LAB_016ab7a8;
          local_48 = *(int *)(uVar3 + uVar9 * 4);
          local_60 = uVar13;
        }
        else {
          local_2c = uVar13 - 1;
          local_2f = *(byte *)(*(int *)(param_3 + 8) + local_2c);
          uVar9 = uVar9 + *(byte *)((int)param_2 + local_2f + 0x5c);
          if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar9,uVar14,&DAT_01d0828c);
          }
          uVar9 = *(uint *)(uVar2 + uVar9 * 4);
          if (((uVar9 == 0) || (uVar9 < uVar10)) || (uVar12 < uVar9)) {
            if ((uVar9 != 0) && (param_2[1] == uVar9)) {
              local_30 = 0;
              FUN_016cc61c(&local_30);
              iVar1 = FUN_016c2dec();
              *param_1 = 2;
              param_1[1] = 1;
              param_1[2] = iVar1;
              return;
            }
LAB_016ab5d8:
            if ((local_40 != 0) && (uVar13 < local_60)) {
              *param_1 = 2;
              param_1[1] = 0;
              return;
            }
            goto LAB_016ab73c;
          }
          if (uVar5 != 1) {
            uVar9 = uVar9 - uVar10 >> uVar6;
            uVar11 = uVar9 << 1;
            if (uVar9 * 2 < uVar7) {
              uVar11 = uVar11 | 1;
              if (uVar7 <= uVar11) {
LAB_016ab830:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar11,uVar7,&DAT_01d0860c);
              }
              uVar9 = *(uint *)(uVar15 + uVar9 * 8);
              uVar2 = *(uint *)(uVar15 + uVar11 * 4);
              uVar12 = uVar2 + uVar9;
              if ((CARRY4(uVar2,uVar9)) || (uVar4 < uVar12)) {
LAB_016ab774:
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar9,uVar12,uVar4,&DAT_01d0867c);
              }
              goto LAB_016ab728;
            }
            goto LAB_016ab804;
          }
          local_48 = 0;
          local_60 = uVar13;
        }
        local_40 = 1;
LAB_016ab73c:
        *param_1 = local_40;
        param_1[1] = local_48;
        param_1[2] = local_60;
        return;
      }
      local_2c = local_2c - 1;
      if (local_2c < param_4) {
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
    } while( true );
  }
  if (uVar13 == 0) {
    uVar2 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
    uVar12 = (uVar2 & 0xffff) >> 8;
    if ((uVar2 & 1) != 0) {
      uVar12 = uVar2 >> 0x10;
    }
    uVar12 = uVar12 + uVar9;
    if (param_2[0x16] <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,param_2[0x16],&DAT_01d2f26c);
    }
    uVar12 = *(uint *)(param_2[0x15] + uVar12 * 4);
    iVar1 = 0;
    uVar9 = extraout_r3;
    if ((uVar12 == 0) || (uVar12 < param_2[2])) goto LAB_016ab48c;
    uVar9 = param_2[3];
    if (uVar9 < uVar12) goto LAB_016ab684;
    if (param_2[0x5e] != 1) {
      uVar7 = param_2[0x5a];
      uVar9 = uVar12 - param_2[2] >> (param_2[0x57] & 0x1f);
      uVar11 = uVar9 << 1;
      if (uVar7 <= uVar9 * 2) goto LAB_016ab804;
      uVar11 = uVar11 | 1;
      if (uVar7 <= uVar11) goto LAB_016ab7bc;
      uVar9 = *(uint *)(param_2[0x59] + uVar9 * 8);
      uVar12 = *(uint *)(param_2[0x59] + uVar11 * 4);
      if ((CARRY4(uVar12,uVar9)) || (param_2[0x5d] < uVar12 + uVar9)) goto LAB_016ab768;
      uVar13 = 0;
      goto LAB_016ab670;
    }
    uVar13 = 0;
  }
  else {
    local_2c = uVar13 - 1;
    if (*(uint *)(param_3 + 0xc) <= local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_2c,*(uint *)(param_3 + 0xc),&DAT_01d0847c);
    }
    local_2f = *(byte *)(*(int *)(param_3 + 8) + local_2c);
    uVar9 = *(byte *)((int)param_2 + local_2f + 0x5c) + uVar9;
    if (param_2[0x16] <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,param_2[0x16],&DAT_01d0828c);
    }
    uVar9 = *(uint *)(param_2[0x15] + uVar9 * 4);
    if (((uVar9 == 0) || (uVar9 < param_2[2])) || (param_2[3] < uVar9)) {
      iVar1 = 0;
      if (uVar9 != 0) {
        if (param_2[1] != uVar9) goto LAB_016ab684;
        local_30 = 0;
        uVar9 = FUN_016cc61c(&local_30);
        goto LAB_016ab160;
      }
LAB_016ab48c:
      iVar1 = 0;
      goto LAB_016ab684;
    }
    if (param_2[0x5e] != 1) {
      uVar7 = param_2[0x5a];
      uVar9 = uVar9 - param_2[2] >> (param_2[0x57] & 0x1f);
      uVar11 = uVar9 << 1;
      if (uVar7 <= uVar9 * 2) {
LAB_016ab804:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar7,&DAT_01d0866c);
      }
      uVar11 = uVar11 | 1;
      if (uVar7 <= uVar11) {
LAB_016ab7bc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar7,&DAT_01d0860c);
      }
      uVar9 = *(uint *)(param_2[0x59] + uVar9 * 8);
      uVar12 = *(uint *)(param_2[0x59] + uVar11 * 4);
      if ((CARRY4(uVar12,uVar9)) || (param_2[0x5d] < uVar12 + uVar9)) {
LAB_016ab768:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4();
      }
LAB_016ab670:
      if (uVar12 == 0) {
LAB_016ab7a8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d085fc);
      }
      uVar9 = *(uint *)(param_2[0x5c] + uVar9 * 4);
      iVar1 = 1;
      goto LAB_016ab684;
    }
  }
  iVar1 = 1;
  uVar9 = 0;
LAB_016ab684:
  *param_1 = iVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar13;
  return;
}

