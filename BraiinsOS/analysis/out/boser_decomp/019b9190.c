// FUN_019b9190 @ 019b9190 size=1380 calls_out=11 calls_in=1
// strings: internal error: entered unreachable code: waitid with WEXITED should not return None

void FUN_019b9190(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  uint uStack_64;
  uint uStack_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  FUN_019b4754(&local_78,param_2,2,0);
  iVar3 = local_6c;
  uVar2 = local_70;
  uVar11 = local_74;
  uVar1 = local_78;
  uVar12 = local_74;
  uVar13 = local_70;
  if (local_78 == 2) goto LAB_019b958c;
  if (local_68 != -1) {
    FUN_01bf01d6();
  }
  local_54 = 0;
  local_58 = 1;
  local_5c = 0;
  local_48 = 0;
  local_4c = 1;
  local_50 = 0;
  if (uStack_64 == 0xffffffff) {
    if (uStack_60 != 0xffffffff) {
      FUN_019ac378(&local_38,uStack_60,&local_50);
      if ((char)local_38 != '\x04') {
        local_74 = local_34;
        local_78 = local_38;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d27e94,&DAT_01d27b34);
      }
      uStack_64 = uStack_60;
      goto LAB_019b9474;
    }
  }
  else if (uStack_60 == 0xffffffff) {
    FUN_019ac378(&local_40,uStack_64,&local_5c);
    if ((char)local_40 != '\x04') {
      local_74 = local_3c;
      local_78 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d27e94,&DAT_01d27b44);
    }
LAB_019b9474:
    FUN_01bf01d6(uStack_64);
  }
  else {
    local_78 = 1;
    iVar7 = FUN_01be67dc(uStack_64,0x5421,&local_78);
    if (iVar7 == -1) {
LAB_019b93ec:
      puVar8 = (uint *)FUN_01be3244();
      uVar12 = *puVar8;
    }
    else {
      local_78 = 1;
      iVar7 = FUN_01be67dc(uStack_60,0x5421,&local_78);
      if (iVar7 == -1) goto LAB_019b93ec;
      local_70 = uStack_60;
      local_78 = uStack_64;
      local_6c = 1;
      local_74 = 1;
      uVar13 = uVar2;
      uVar12 = uStack_60;
LAB_019b92bc:
      do {
        iVar7 = FUN_01bea68a(&local_78,2,0xffffffff);
        if (iVar7 != -1) {
          if (local_74._2_2_ == 0) goto LAB_019b9330;
          FUN_019ac378(&local_30,uStack_64,&local_5c);
          if ((char)local_30 == '\x04') {
LAB_019b95f4:
            local_30 = 0;
            iVar7 = FUN_01be67dc(uStack_60,0x5421,&local_30);
            if (iVar7 == -1) {
LAB_019b963c:
              puVar8 = (uint *)FUN_01be3244();
              uVar12 = *puVar8;
              break;
            }
            FUN_019ac378(&local_30,uStack_60,&local_50);
          }
          else {
            uVar12 = local_2c;
            if ((local_30 & 0xff) != 0 || local_2c != 0xb) {
              uVar10 = local_30 & 0xff;
              uVar13 = local_30 >> 8;
              if (uVar10 == 4) {
                if ((uVar13 & 1) != 0) goto LAB_019b95f4;
                goto LAB_019b9330;
              }
LAB_019b9648:
              uVar9 = local_30 >> 0x10;
              uVar12 = local_2c;
              goto LAB_019b9400;
            }
LAB_019b9330:
            if (local_6c._2_2_ == 0) goto LAB_019b92bc;
            FUN_019ac378(&local_30,uStack_60,&local_50);
            if ((char)local_30 != '\x04') {
              uVar12 = local_2c;
              if ((local_30 & 0xff) == 0 && local_2c == 0xb) goto LAB_019b92bc;
              uVar10 = local_30 & 0xff;
              uVar13 = local_30 >> 8;
              if (uVar10 != 4) goto LAB_019b9648;
              if ((uVar13 & 1) == 0) goto LAB_019b92bc;
            }
            local_30 = 0;
            iVar7 = FUN_01be67dc(uStack_64,0x5421,&local_30);
            if (iVar7 == -1) goto LAB_019b963c;
            FUN_019ac378(&local_30,uStack_64,&local_5c);
          }
          uVar9 = 0;
          if ((char)local_30 == '\x04') {
            uVar10 = 4;
          }
          else {
            uVar9 = local_30 >> 0x10;
            uVar10 = local_30 & 0xff;
            uVar13 = local_30 >> 8;
            uVar12 = local_2c;
          }
          goto LAB_019b9400;
        }
        puVar8 = (uint *)FUN_01be3244();
        uVar12 = *puVar8;
      } while (uVar12 == 4);
    }
    uVar9 = 0;
    uVar13 = 0;
    uVar10 = 0;
LAB_019b9400:
    FUN_01bf01d6(uStack_60);
    FUN_01bf01d6(uStack_64);
    if (uVar10 != 4) {
      local_78 = uVar10 | (uVar13 & 0xff | uVar9 << 8) << 8;
      local_74 = uVar12;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d27e94,&DAT_01d27b54);
    }
  }
  if ((uVar1 & 1) == 0) {
    if (iVar3 == -1) {
      local_78 = 0;
      do {
        iVar7 = FUN_01bea62a(uVar2,&local_78,0);
        if (iVar7 != -1) {
          uVar11 = local_78;
          goto LAB_019b9498;
        }
        puVar8 = (uint *)FUN_01be3244();
        uVar13 = *puVar8;
      } while (uVar13 == 4);
      uVar12 = 0;
      uVar11 = 0;
LAB_019b954c:
      if (local_50 != 0) {
        thunk_FUN_01be4678(local_4c);
      }
      if (local_5c != 0) {
        thunk_FUN_01be4678(local_58);
      }
      uVar12 = uVar12 & 0xff | uVar11 << 8;
      if (iVar3 != -1) {
        FUN_01bf01d6(iVar3);
      }
      goto LAB_019b958c;
    }
    FUN_019a8b40(&local_78,iVar3,4);
    uVar11 = local_70;
    if (local_78 == 0) {
      if ((local_74 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("internal error: entered unreachable code: waitid with WEXITED should not return None"
                     ,0xa9,&DAT_01d27984);
      }
    }
    else if ((local_74 & 0xff) != 4) {
      uVar11 = local_74 >> 8;
      uVar12 = local_74;
      uVar13 = local_70;
      goto LAB_019b954c;
    }
LAB_019b95bc:
    iVar6 = local_48;
    iVar5 = local_4c;
    iVar4 = local_50;
    uVar13 = local_54;
    uVar12 = local_58;
    iVar7 = local_5c;
    FUN_01bf01d6(iVar3);
    local_5c = iVar7;
    local_50 = iVar4;
    local_4c = iVar5;
    local_48 = iVar6;
  }
  else {
LAB_019b9498:
    uVar12 = local_58;
    uVar13 = local_54;
    if (iVar3 != -1) goto LAB_019b95bc;
  }
  if (local_5c != -0x80000000) {
    *param_1 = local_5c;
    param_1[1] = uVar12;
    param_1[2] = uVar13;
    param_1[3] = local_50;
    param_1[4] = local_4c;
    param_1[5] = local_48;
    param_1[6] = uVar11;
    return;
  }
LAB_019b958c:
  *param_1 = -0x80000000;
  param_1[1] = uVar12;
  param_1[2] = uVar13;
  return;
}

