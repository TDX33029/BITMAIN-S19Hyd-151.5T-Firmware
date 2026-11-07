// FUN_01ace210 @ 01ace210 size=2492 calls_out=13 calls_in=1
// strings: 

void FUN_01ace210(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,
                 uint *param_6)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int local_30;
  short *local_2c;
  int local_28;
  
  local_58 = param_3;
  local_54 = param_4;
  puVar5 = (undefined1 *)FUN_01ac9ff4(&local_58);
  uVar11 = local_54;
  uVar12 = local_58;
  if ((int)puVar5 < 0x3f) {
    if (puVar5 == (undefined1 *)0x23) {
      local_58 = *param_2;
      local_54 = param_2[1];
      local_50 = param_2[2];
      local_4c = param_2[3];
      local_48 = param_2[4];
      uStack_44 = param_2[5];
      uStack_40 = param_2[6];
      uStack_3c = param_2[7];
      uStack_38 = param_2[8];
      FUN_01acec04(param_1,&local_58,param_6,param_3,param_4);
      return;
    }
    if (puVar5 == (undefined1 *)0x2f) {
LAB_01ace2c0:
      uVar14 = 0;
      uVar13 = param_3;
      uVar17 = param_4;
      while( true ) {
        local_58 = uVar13;
        local_54 = uVar17;
        iVar9 = FUN_01ac9ff4(&local_58);
        if (!(iVar9 == 0x5c || iVar9 == 0x2f)) break;
        uVar14 = uVar14 + 1;
        uVar13 = local_58;
        uVar17 = local_54;
      }
      if (uVar14 < 2) {
        uVar15 = param_6[0xc];
        local_60 = param_6[5];
        if (uVar15 == 0) {
LAB_01ace528:
          uVar14 = *param_2;
          uVar13 = param_2[2];
          if (uVar14 - uVar13 < uVar15) {
            FUN_01af7b44(param_2,uVar13,uVar15,1,1);
            uVar14 = *param_2;
            uVar13 = param_2[2];
          }
          uVar18 = param_2[1];
          FUN_01bed4e2(uVar18 + uVar13,local_60,uVar15);
          uVar13 = uVar13 + uVar15;
          param_2[2] = uVar13;
          uVar17 = uVar13;
          if (uVar14 == uVar13) {
            FUN_01af7b44(param_2,uVar14,1,1,1);
            uVar18 = param_2[1];
            uVar17 = param_2[2];
          }
          *(undefined1 *)(uVar18 + uVar17) = 0x2f;
          param_2[2] = uVar13 + 1;
          local_58 = CONCAT31(local_58._1_3_,1);
          uVar20 = FUN_01aca0cc(param_2,param_5,&local_58,uVar15,uVar12,uVar11);
          local_58 = *param_2;
          local_54 = param_2[1];
          local_50 = param_2[2];
          local_4c = param_2[3];
          local_48 = param_2[4];
          uStack_44 = param_2[5];
          uStack_40 = param_2[6];
          uStack_3c = param_2[7];
          uStack_38 = param_2[8];
          uVar12 = param_6[9];
          uVar13 = param_6[0xb];
          uVar3 = (undefined2)param_6[7];
          uVar2 = *(undefined2 *)((int)param_6 + 0x1e);
          uVar14 = param_6[8];
          uVar17 = param_6[10];
          goto LAB_01aceab0;
        }
        uVar14 = param_6[6];
        if (uVar15 < uVar14) {
          if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace528;
        }
        else if (uVar15 == uVar14) goto LAB_01ace528;
      }
      else {
        uVar12 = param_2[6];
        if (uVar12 != 0) {
          uVar11 = param_2[7];
          local_2c = (short *)&DAT_00000001;
          psVar16 = (short *)&DAT_00000001;
          local_28 = 0;
          local_30 = 0;
          local_50 = local_50 & 0xffffff00;
          local_58 = param_3;
          local_54 = param_4;
          while( true ) {
            iVar9 = local_28;
            iVar6 = FUN_01ac9ff4(&local_58);
            if (!(iVar6 == 0x5c || iVar6 == 0x2f)) break;
            iVar7 = iVar9;
            if (iVar9 == local_30) {
              FUN_01af7b44(&local_30,iVar9,1,1,1);
              iVar7 = local_28;
              psVar16 = local_2c;
            }
            *(char *)((int)psVar16 + iVar7) = (char)iVar6;
            local_28 = iVar9 + 1;
          }
          if (iVar9 == 2) {
            sVar1 = *local_2c;
            FUN_019bb7e0(local_30);
            if (sVar1 == 0x2f2f) goto LAB_01ace604;
          }
          else {
            FUN_019bb7e0(local_30);
          }
          (**(code **)(uVar11 + 0x14))(uVar12,3);
        }
LAB_01ace604:
        local_60 = param_6[5];
        uVar12 = param_6[8];
        uVar15 = uVar12 + 1;
        if (0xfffffffe < uVar12) {
LAB_01ace680:
          uVar11 = param_2[2];
          if (*param_2 - uVar11 < uVar15) {
            FUN_01af7b44(param_2,uVar11,uVar15,1,1);
            uVar11 = param_2[2];
          }
          FUN_01bed4e2(param_2[1] + uVar11,local_60,uVar15);
          param_2[2] = uVar11 + uVar15;
          local_58 = param_3;
          local_54 = param_4;
          iVar9 = FUN_01acbbe8(&DAT_005327bf,2,&local_58);
          if (iVar9 == 0) {
            local_58 = *param_2;
            local_54 = param_2[1];
            local_50 = param_2[2];
            local_4c = param_2[3];
            local_48 = param_2[4];
            uStack_44 = param_2[5];
            uStack_40 = param_2[6];
            uStack_3c = param_2[7];
            uStack_38 = param_2[8];
          }
          else {
            local_50 = param_2[2];
            local_4c = param_2[3];
            local_48 = param_2[4];
            uStack_44 = param_2[5];
            uStack_40 = param_2[6];
            uStack_3c = param_2[7];
            uStack_38 = param_2[8];
            uVar13 = local_58;
            uVar17 = local_54;
            local_58 = *param_2;
            local_54 = param_2[1];
          }
          FUN_01acbc90(param_1,&local_58,uVar13,uVar17,param_5,uVar12);
          return;
        }
        uVar14 = param_6[6];
        if (uVar15 < uVar14) {
          if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace680;
        }
        else if (uVar15 == uVar14) goto LAB_01ace680;
      }
      goto LAB_01ace8cc;
    }
LAB_01ace440:
    if (*param_6 == 0) {
      if (param_6[2] != 0) {
        puVar8 = param_6 + 3;
        goto LAB_01ace4ec;
      }
      uVar14 = param_6[6];
      local_60 = param_6[5];
      uVar15 = uVar14;
      goto LAB_01ace84c;
    }
    puVar8 = param_6 + 1;
LAB_01ace4ec:
    uVar15 = *puVar8;
    uVar14 = param_6[6];
    local_60 = param_6[5];
    if (uVar15 != 0) {
      if (uVar15 < uVar14) {
        if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace84c;
      }
      else if (uVar15 == uVar14) {
        uVar14 = uVar15;
LAB_01ace84c:
        if (*param_2 - param_2[2] < uVar15) {
          FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
        }
        goto LAB_01ace864;
      }
      goto LAB_01ace8cc;
    }
    uVar15 = 0;
LAB_01ace864:
    uVar12 = param_2[2];
    FUN_01bed4e2(param_2[1] + uVar12,local_60,uVar15);
    uVar11 = param_6[0xc];
    param_2[2] = uVar12 + uVar15;
    FUN_01acb210(param_2,param_5,uVar11);
    if (param_2[2] != uVar11) {
LAB_01ace9f8:
      local_58 = param_3;
      local_54 = param_4;
      iVar9 = FUN_01ac9ff4(&local_58);
      uVar12 = local_58;
      if (iVar9 == 0x2f) {
        local_58 = CONCAT31(local_58._1_3_,1);
        uVar20 = FUN_01aca0cc(param_2,param_5,&local_58,uVar11,uVar12,local_54);
      }
      else {
        local_58 = CONCAT31(local_58._1_3_,1);
        uVar20 = FUN_01aca0cc(param_2,param_5,&local_58,uVar11,param_3,param_4);
      }
      local_58 = *param_2;
      local_54 = param_2[1];
      local_50 = param_2[2];
      local_4c = param_2[3];
      local_48 = param_2[4];
      uStack_44 = param_2[5];
      uStack_40 = param_2[6];
      uStack_3c = param_2[7];
      uStack_38 = param_2[8];
      uVar12 = param_6[9];
      uVar13 = param_6[0xb];
      uVar3 = (undefined2)param_6[7];
      uVar2 = *(undefined2 *)((int)param_6 + 0x1e);
      uVar14 = param_6[8];
      uVar17 = param_6[10];
      uVar15 = uVar11;
LAB_01aceab0:
      FUN_01accbb8(param_1,&local_58,param_5,uVar14,uVar12,uVar17,uVar13,param_6 + 0xd,uVar3,uVar2,
                   uVar15,uVar20);
      return;
    }
    uVar15 = param_6[8];
    if (uVar15 == 0) {
LAB_01ace9a8:
      cVar4 = FUN_01acedfc(local_60,uVar15);
      if (cVar4 == '\x02') {
        local_58 = param_3;
        local_54 = param_4;
        puVar5 = (undefined1 *)FUN_01ac9ff4(&local_58);
        if (puVar5 == &DAT_00110000) goto LAB_01ace9f8;
      }
      uVar12 = uVar11;
      if (*param_2 == uVar11) {
        FUN_01af7b44(param_2,uVar11,1,1,1);
        uVar12 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + uVar12) = 0x2f;
      param_2[2] = uVar11 + 1;
      goto LAB_01ace9f8;
    }
    if (uVar15 < uVar14) {
      if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace9a8;
    }
    else if (uVar15 == uVar14) goto LAB_01ace9a8;
    goto LAB_01ace8cc;
  }
  if (puVar5 != (undefined1 *)0x3f) {
    if (puVar5 == (undefined1 *)0x5c) goto LAB_01ace2c0;
    if (puVar5 != &DAT_00110000) goto LAB_01ace440;
    if (param_6[2] != 1) {
      local_60 = param_6[5];
      uVar15 = param_6[6];
      goto LAB_01ace900;
    }
    uVar15 = param_6[3];
    local_60 = param_6[5];
    if (uVar15 == 0) {
      uVar15 = 0;
      goto LAB_01ace918;
    }
    uVar14 = param_6[6];
    if (uVar15 < uVar14) {
      if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace900;
    }
    else if (uVar15 == uVar14) {
LAB_01ace900:
      if (*param_2 - param_2[2] < uVar15) {
        FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
      }
LAB_01ace918:
      uVar12 = param_2[2];
      FUN_01bed4e2(param_2[1] + uVar12,local_60,uVar15);
      param_2[2] = uVar12 + uVar15;
      uVar12 = param_2[1];
      uVar11 = param_2[2];
      param_1[4] = *param_2;
      param_1[5] = uVar12;
      param_1[6] = uVar11;
      uVar18 = param_6[8];
      uVar19 = param_6[9];
      uVar14 = param_6[10];
      uVar17 = param_6[0xb];
      uVar12 = param_6[0xe];
      uVar11 = param_6[0xf];
      uVar15 = param_6[0x10];
      param_1[0xd] = param_6[0xd];
      param_1[0xe] = uVar12;
      param_1[0xf] = uVar11;
      param_1[0x10] = uVar15;
      uVar12 = param_6[1];
      uVar15 = param_6[7];
      uVar11 = *param_6;
      uVar13 = param_6[0xc];
      *(char *)(param_1 + 0x11) = (char)param_6[0x11];
      param_1[7] = uVar15;
      param_1[8] = uVar18;
      param_1[9] = uVar19;
      param_1[10] = uVar14;
      param_1[0xb] = uVar17;
      param_1[0xc] = uVar13;
      *param_1 = uVar11;
      param_1[1] = uVar12;
      param_1[2] = 0;
      return;
    }
    puVar10 = &DAT_01d2fb58;
    goto LAB_01ace8d4;
  }
  if (*param_6 == 0) {
    if (param_6[2] != 0) {
      puVar8 = param_6 + 3;
      goto LAB_01ace498;
    }
    uVar15 = param_6[6];
    local_60 = param_6[5];
    goto LAB_01ace73c;
  }
  puVar8 = param_6 + 1;
LAB_01ace498:
  uVar15 = *puVar8;
  local_60 = param_6[5];
  if (uVar15 == 0) {
    uVar15 = 0;
    goto LAB_01ace754;
  }
  uVar14 = param_6[6];
  if (uVar15 < uVar14) {
    if (-0x41 < *(char *)(local_60 + uVar15)) goto LAB_01ace73c;
  }
  else if (uVar15 == uVar14) {
LAB_01ace73c:
    if (*param_2 - param_2[2] < uVar15) {
      FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
    }
LAB_01ace754:
    uVar12 = param_2[2];
    FUN_01bed4e2(param_2[1] + uVar12,local_60,uVar15);
    uVar11 = param_6[8];
    param_2[2] = uVar12 + uVar15;
    FUN_01aceee8(&local_58,param_2,param_5,uVar11,param_3,param_4);
    if (local_58 == 2) {
      uVar12 = *param_2;
      uVar11 = param_2[1];
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
      FUN_019bb7e0(uVar12,uVar11);
      return;
    }
    uVar12 = param_2[1];
    uVar14 = param_2[2];
    param_1[4] = *param_2;
    param_1[5] = uVar12;
    param_1[6] = uVar14;
    uVar13 = param_6[9];
    uVar18 = param_6[10];
    uVar17 = param_6[0xb];
    uVar12 = param_6[0xe];
    uVar14 = param_6[0xf];
    uVar15 = param_6[0x10];
    param_1[0xd] = param_6[0xd];
    param_1[0xe] = uVar12;
    param_1[0xf] = uVar14;
    param_1[0x10] = uVar15;
    *param_1 = local_58;
    uVar14 = param_6[7];
    uVar15 = param_6[0xc];
    uVar12 = param_6[0x11];
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    *(char *)(param_1 + 0x11) = (char)uVar12;
    param_1[7] = uVar14;
    param_1[8] = uVar11;
    param_1[9] = uVar13;
    param_1[10] = uVar18;
    param_1[0xb] = uVar17;
    param_1[0xc] = uVar15;
    return;
  }
LAB_01ace8cc:
  puVar10 = &DAT_01d2fde8;
LAB_01ace8d4:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(local_60,uVar14,0,uVar15,puVar10);
}

