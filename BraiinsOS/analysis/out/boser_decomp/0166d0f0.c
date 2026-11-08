// FUN_0166d0f0 @ 0166d0f0 size=1288 calls_out=12 calls_in=1
// strings: no entry found for key

void FUN_0166d0f0(undefined4 *param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_bc;
  char *local_b8;
  uint local_b4;
  char *local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char **local_5c;
  char *local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_b4 = param_5;
  local_bc = param_3;
  local_b8 = param_4;
  if (*(int *)(param_2 + 0x6c) != 0) {
    uVar4 = FUN_01676610(param_2 + 0x70,&local_bc);
    uVar13 = uVar4 >> 0x19;
    iVar12 = *(int *)(param_2 + 0x60);
    uVar14 = *(uint *)(param_2 + 100);
    local_d0 = 0;
    while( true ) {
      uVar4 = uVar14 & uVar4;
      uVar11 = *(uint *)(iVar12 + uVar4);
      uVar5 = uVar11 ^ uVar13 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar15 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                        (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar14;
        iVar6 = FUN_01676d88(&local_bc,iVar12 + -0x20 + uVar15 * -0x20);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar6 != 0) {
          *param_1 = 0x8000000a;
          param_1[1] = iVar12 + uVar15 * -0x20 + -0x14;
          return;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_d0 = local_d0 + 4;
      uVar4 = uVar4 + local_d0;
    }
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
LAB_0166d5e0:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no entry found for key",0x16,&DAT_01d06f14);
  }
  iVar6 = *(int *)(param_3 + 8);
  uVar10 = *(undefined4 *)(param_3 + 4);
  uVar4 = FUN_01676700(param_2 + 0x40,uVar10,iVar6);
  uVar13 = uVar4 >> 0x19;
  uVar14 = *(uint *)(param_2 + 0x34);
  iVar12 = *(int *)(param_2 + 0x30);
  local_d4 = 0;
  do {
    uVar4 = uVar14 & uVar4;
    uVar5 = *(uint *)(iVar12 + uVar4);
    uVar11 = uVar5 ^ uVar13 * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar15 = uVar11 >> 8;
      uVar1 = uVar11 >> 0x10;
      uVar2 = uVar11 >> 0x18;
      uVar3 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      uVar15 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar15 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar14;
      iVar7 = *(int *)(iVar12 + -0xc + uVar15 * -0xc);
      if ((iVar6 == *(int *)(iVar7 + 0x10)) &&
         (iVar7 = thunk_FUN_01bed842(uVar10,*(undefined4 *)(iVar7 + 0xc),iVar6), iVar7 == 0)) {
        uVar16 = FUN_016798f4(iVar12 + uVar15 * -0xc + -8);
        if ((int)uVar16 != 0) {
          FUN_0166fa70(&local_5c,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          local_88 = local_58;
          uStack_84 = local_54;
          uStack_80 = uStack_50;
          uStack_7c = uStack_4c;
          uStack_78 = uStack_48;
          local_74 = local_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          uStack_68 = uStack_38;
          uStack_64 = uStack_34;
          if (local_5c != (char **)0x8000000a) {
            param_1[0xb] = local_30;
            param_1[0xc] = uStack_2c;
            param_1[0xd] = uStack_28;
            param_1[1] = local_58;
            param_1[2] = local_54;
            param_1[3] = uStack_50;
            param_1[4] = uStack_4c;
            param_1[5] = uStack_48;
            param_1[6] = local_44;
            param_1[7] = uStack_40;
            param_1[8] = uStack_3c;
            param_1[9] = uStack_38;
            param_1[10] = uStack_34;
            *param_1 = local_5c;
            return;
          }
          local_5c = &local_b0;
          local_b0 = local_58;
          local_ac = local_54;
          uStack_a8 = uStack_50;
          uStack_a4 = uStack_4c;
          uStack_a0 = uStack_48;
          local_9c = local_44;
          uStack_98 = uStack_40;
          uStack_94 = uStack_3c;
          uStack_90 = uStack_38;
          uStack_8c = uStack_34;
          local_54 = param_5;
          local_58 = param_4;
          if (*(int *)(param_2 + 0x6c) != 0) {
            uVar4 = FUN_01676610(param_2 + 0x70,&local_5c);
            uVar13 = uVar4 >> 0x19;
            iVar12 = *(int *)(param_2 + 0x60);
            uVar14 = *(uint *)(param_2 + 100);
            local_c8 = 0;
            while( true ) {
              uVar4 = uVar14 & uVar4;
              uVar11 = *(uint *)(iVar12 + uVar4);
              uVar5 = uVar11 ^ uVar13 * 0x1010101;
              uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
              while (uVar5 != 0) {
                uVar15 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                         uVar14;
                iVar6 = FUN_01676d88(&local_5c,iVar12 + -0x20 + uVar15 * -0x20);
                uVar5 = uVar5 - 1 & uVar5;
                if (iVar6 != 0) {
                  *param_1 = 0x8000000a;
                  param_1[1] = iVar12 + uVar15 * -0x20 + -0x14;
                  FUN_019bb7e0(local_b0,local_ac);
                  return;
                }
              }
              if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
              local_c8 = local_c8 + 4;
              uVar4 = uVar4 + local_c8;
            }
          }
          FUN_019bb7e0(local_b0,local_ac);
        }
        uVar13 = param_5;
        if (param_5 < 8) {
          if (param_5 != 0) {
            pcVar8 = param_4;
            uVar4 = param_5;
            do {
              if (*pcVar8 == '/') goto LAB_0166d51c;
              uVar4 = uVar4 - 1;
              pcVar8 = pcVar8 + 1;
            } while (uVar4 != 0);
            goto LAB_0166d550;
          }
          iVar12 = 1;
          uVar13 = 0;
        }
        else {
          iVar12 = FUN_01307168(0x2f,param_4,param_5);
          if (iVar12 == 1) {
LAB_0166d51c:
            uVar10 = 0;
            if ((int)param_5 < 0) goto LAB_0166d55c;
            if (param_5 == 0) {
              iVar12 = 1;
              uVar13 = 0;
            }
            else {
              uVar10 = 1;
              iVar12 = FUN_01298504(param_5,1);
              if (iVar12 == 0) goto LAB_0166d55c;
            }
            FUN_01bed4e2(iVar12,param_4,param_5);
            puVar9 = (undefined1 *)0x80000006;
            goto LAB_0166d5c8;
          }
LAB_0166d550:
          uVar10 = 0;
          if ((int)param_5 < 0) {
LAB_0166d55c:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar10,param_5);
          }
          uVar10 = 1;
          iVar12 = FUN_01298504(param_5,1);
          if (iVar12 == 0) goto LAB_0166d55c;
        }
        FUN_01bed4e2(iVar12,param_4,param_5);
        puVar9 = &DAT_80000005;
LAB_0166d5c8:
        *param_1 = puVar9;
        param_1[1] = uVar13;
        param_1[2] = iVar12;
        param_1[3] = param_5;
        return;
      }
    }
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) goto LAB_0166d5e0;
    local_d4 = local_d4 + 4;
    uVar4 = uVar4 + local_d4;
  } while( true );
}

