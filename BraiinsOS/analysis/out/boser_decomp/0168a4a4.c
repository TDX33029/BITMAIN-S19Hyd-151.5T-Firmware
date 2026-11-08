// FUN_0168a4a4 @ 0168a4a4 size=1900 calls_out=10 calls_in=2
// strings: 

void FUN_0168a4a4(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,uint param_7,uint param_8,undefined4 *param_9)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined *puVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined *local_7c;
  undefined *local_64;
  uint local_5c;
  undefined1 auStack_58 [4];
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint *local_40;
  undefined1 *local_3c;
  uint *local_38;
  undefined1 *local_34;
  uint *local_30;
  code *local_2c;
  
  *(undefined4 *)(param_4 + 0x34) = 0;
  pbVar3 = (byte *)(param_6 + 8);
  *(undefined4 *)(param_4 + 0x18) = 0;
  cVar1 = *(char *)(param_2 + 0x15c);
  uVar4 = FUN_0168b40c(pbVar3,param_7);
  if (param_7 < uVar4) {
    puVar10 = &DAT_01d077fc;
    uVar7 = param_7;
    goto LAB_0168ad18;
  }
  uVar7 = param_7 - uVar4;
  if (uVar7 == 0) {
    uVar13 = 0;
  }
  else {
    local_5c = *(uint *)(param_4 + 0x14);
    iVar11 = *(int *)(param_4 + 4);
    local_44 = *(uint *)(param_4 + 8);
    iVar14 = *(int *)(param_4 + 0x10);
    pbVar12 = pbVar3 + uVar4;
    local_7c = &DAT_01d08af8;
    uVar5 = 0;
    uVar13 = 0;
    do {
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      do {
        bVar2 = pbVar12[uVar15];
        if ((uint)(int)(char)bVar2 < 0x80000000) {
          uVar4 = uVar15 + 1;
          if (uVar7 <= uVar15) {
            puVar10 = &DAT_01d0780c;
            param_7 = uVar7;
            goto LAB_0168ad18;
          }
          uVar17 = uVar17 | (uint)bVar2 << (uVar16 & 0x1f);
          goto LAB_0168a594;
        }
        uVar4 = uVar16 & 0x1f;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 7;
        uVar17 = uVar17 | (bVar2 & 0x7f) << uVar4;
      } while (uVar7 != uVar15);
      uVar17 = 0;
      uVar4 = 0;
LAB_0168a594:
      uVar5 = (-(uVar17 & 1) ^ uVar17 >> 1) + uVar5;
      uVar17 = uVar5;
      local_4c = uVar5;
      if (local_5c <= uVar5) goto LAB_0168addc;
      uVar17 = *(uint *)(iVar14 + uVar5 * 4);
      if (uVar17 < uVar13) {
        if (local_44 <= uVar17) {
          local_7c = &DAT_01d08b08;
          local_5c = local_44;
          goto LAB_0168addc;
        }
        if (*(uint *)(iVar11 + uVar17 * 4) != uVar5) goto LAB_0168a5d4;
      }
      else {
LAB_0168a5d4:
        local_48 = uVar13;
        if (local_44 <= uVar13) {
          local_34 = &LAB_01a6a304;
          local_3c = &LAB_01a6a304;
          local_40 = &local_48;
          local_2c = FUN_016cbc48;
          local_30 = &local_4c;
          local_38 = &local_44;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0058fcf7,&local_40,&DAT_01d08ae8);
        }
        *(uint *)(iVar11 + uVar13 * 4) = uVar5;
        *(uint *)(iVar14 + uVar5 * 4) = uVar13;
        uVar13 = uVar13 + 1;
        *(uint *)(param_4 + 0x18) = uVar13;
      }
      pbVar12 = pbVar12 + uVar4;
      uVar7 = uVar7 - uVar4;
    } while (uVar7 != 0);
  }
  iVar11 = FUN_0168b4c0(pbVar3,param_7);
  if (iVar11 != 0) {
    uVar4 = FUN_0168b50c(pbVar3,param_7);
    if ((param_8 & 1) == 0) {
      uVar7 = (param_8 & 0xffff) >> 8;
      if (uVar7 != 10) {
        if (uVar7 == 0xd) {
          if (cVar1 != '\0') {
            if (param_7 == 0) goto LAB_0168ae7c;
            cVar9 = '\r';
            if ((*pbVar3 & 8) != 0) goto LAB_0168acec;
          }
          uVar4 = uVar4 | 0x20;
          uVar7 = 0xd;
        }
        goto LAB_0168a6d0;
      }
      if (cVar1 != '\0') {
LAB_0168a6c8:
        uVar4 = uVar4 | 0x20;
        uVar7 = 10;
        goto LAB_0168a6d0;
      }
      if (param_7 == 0) goto LAB_0168ae7c;
      cVar9 = '\n';
      if ((*pbVar3 & 8) == 0) goto LAB_0168a6c8;
LAB_0168acec:
      uVar5 = uVar4;
      if ((param_8 & 1) == 0) {
        uVar5 = uVar4 | 8;
      }
      if (*(char *)(param_2 + 0x158) != cVar9) {
        uVar5 = uVar4;
      }
    }
    else {
      uVar7 = (param_8 & 0xffff) >> 8;
      uVar4 = uVar4 | 0x2a;
LAB_0168a6d0:
      uVar5 = uVar4;
      if ((param_8 & 1) == 0) {
        uVar5 = uVar4 | 8;
      }
      if (*(byte *)(param_2 + 0x158) != uVar7) {
        uVar5 = uVar4;
      }
      if (param_7 == 0) {
LAB_0168ae7c:
        local_5c = 0;
        local_7c = &DAT_01d077cc;
        uVar17 = 0;
LAB_0168addc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,local_5c,local_7c);
      }
    }
    bVar2 = *pbVar3;
    if ((bVar2 & 8) != 0) {
      if (cVar1 == '\0') {
        if ((param_8 & 0xff01) != 0xa00) {
          uVar5 = uVar5 | 0x10;
        }
      }
      else if ((param_8 & 0xff01) != 0xd00) {
        uVar5 = uVar5 | 0x10;
      }
    }
    if ((param_8 & 1) == 0) {
      uVar4 = (uint)(byte)""[param_8 >> 8 & 0xff];
      uVar7 = 0x280;
      if (uVar4 != (bVar2 & 4) >> 2) {
        uVar7 = 0x140;
      }
      uVar7 = uVar7 | uVar5;
      if (uVar4 == 0) {
        uVar7 = uVar7 | 0x28000;
      }
      if ((bVar2 & 4) == 0) {
        if (uVar4 != 0) {
          uVar7 = uVar7 | 0x1400;
        }
      }
      else if (uVar4 == 0) {
        uVar7 = uVar7 | 0x2800;
      }
    }
    else {
      uVar4 = 0x280;
      bVar18 = (bVar2 & 4) != 0;
      if (bVar18) {
        uVar4 = 0x140;
      }
      uVar7 = uVar4 | uVar5 | 0x28000;
      if (bVar18) {
        uVar7 = uVar4 | uVar5 | 0x2a800;
      }
    }
    uVar4 = FUN_0168b50c(pbVar3,param_7);
    uVar5 = FUN_0168b4c0(pbVar3,param_7);
    if ((uVar5 & ~uVar4 & uVar7) != 0) {
      if (*(uint *)(param_4 + 8) < uVar13) {
        uVar4 = 0;
        puVar10 = &DAT_01d07c5c;
        param_7 = *(uint *)(param_4 + 8);
        uVar7 = uVar13;
LAB_0168ad18:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar4,uVar7,param_7,puVar10);
      }
      puVar6 = *(undefined4 **)(param_4 + 4);
      for (iVar11 = uVar13 << 2; iVar11 != 0; iVar11 = iVar11 + -4) {
        FUN_0168b55c(param_2,*puVar6,uVar7,param_5,param_4 + 0x1c);
        puVar6 = puVar6 + 1;
      }
      iVar11 = 0;
      do {
        puVar6 = (undefined4 *)(param_4 + iVar11 * 4);
        uVar8 = *puVar6;
        iVar11 = iVar11 + 1;
        *puVar6 = puVar6[7];
        puVar6[7] = uVar8;
      } while (iVar11 != 7);
      *(undefined4 *)(param_4 + 0x34) = 0;
    }
  }
  local_40 = (uint *)*param_9;
  local_3c = (undefined1 *)param_9[1];
  local_38 = (uint *)param_9[2];
  FUN_0168b9a4(auStack_58);
  iVar14 = local_50;
  iVar11 = local_54;
  uVar4 = *(uint *)(param_2 + 0x130);
  if (((uVar4 & 0x3c) == 0) ||
     ((uint)*(byte *)(param_2 + 0x158) != (param_8 & 0xffff) >> 8 || (param_8 & 1) != 0)) {
LAB_0168a8e4:
    iVar14 = local_50;
    iVar11 = local_54;
    if ((uVar4 & 0x30) != 0) {
      if (cVar1 == '\0') {
        if ((param_8 & 0xff01) == 0xa00) goto LAB_0168a914;
      }
      else if ((param_8 & 0xff01) == 0xd00) {
LAB_0168a914:
        uVar8 = FUN_0168b50c(local_54,local_50);
        if (iVar14 == 0) goto LAB_0168ad9c;
        uVar4 = iVar14 - 1;
        if (iVar14 == 1) goto LAB_0168ae0c;
        *(byte *)(iVar11 + 1) = (byte)uVar8 | 0x10;
        if (uVar4 == 1) goto LAB_0168ae20;
        *(char *)(iVar11 + 2) = (char)((uint)uVar8 >> 8);
        if (uVar4 < 3) goto LAB_0168ae34;
        *(char *)(iVar11 + 3) = (char)((uint)uVar8 >> 0x10);
        if (uVar4 == 3) goto LAB_0168ae48;
        *(char *)(iVar11 + 4) = (char)((uint)uVar8 >> 0x18);
        uVar4 = *(uint *)(param_2 + 0x130);
      }
    }
    if (((uVar4 & 0x3ffc0) != 0) && (((param_8 & 1) != 0 || (""[(param_8 & 0xffff) >> 8] == '\0'))))
    {
      uVar4 = FUN_0168b50c(local_54,local_50);
      if (local_50 == 0) goto LAB_0168ad9c;
      uVar7 = local_50 - 1;
      if (local_50 == 1) goto LAB_0168ae0c;
      *(char *)(local_54 + 1) = (char)uVar4;
      if (uVar7 == 1) goto LAB_0168ae20;
      *(char *)(local_54 + 2) = (char)((uVar4 | 0x14000) >> 8);
      if (uVar7 < 3) goto LAB_0168ae34;
      *(char *)(local_54 + 3) = (char)((uVar4 | 0x14000) >> 0x10);
      if (uVar7 == 3) goto LAB_0168ae48;
      *(char *)(local_54 + 4) = (char)(uVar4 >> 0x18);
    }
    uVar7 = *(uint *)(param_4 + 8);
    uVar4 = *(uint *)(param_4 + 0x18);
    if (uVar4 <= uVar7) {
      if (uVar4 == 0) {
        FUN_0168ba9c(&local_40,auStack_58);
        FUN_0168bb80(param_2,param_4 + 0x1c,&local_40);
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[3] = local_34;
        return;
      }
      local_64 = &DAT_01d08b38;
      uVar4 = *(uint *)(param_2 + 0x148);
      uVar7 = **(uint **)(param_4 + 4);
      if (uVar7 < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0168aa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0168aa68 +
                  *(int *)(&DAT_0168aa68 + *(int *)(*(int *)(param_2 + 0x144) + uVar7 * 0x14) * 4)))
                  ();
        return;
      }
LAB_0168ae6c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar4,local_64);
    }
    uVar8 = 0;
    puVar10 = &DAT_01d07c5c;
  }
  else {
    uVar8 = FUN_0168b50c(local_54,local_50);
    if (iVar14 != 0) {
      uVar4 = iVar14 - 1;
      if (iVar14 != 1) {
        *(byte *)(iVar11 + 1) = (byte)uVar8 | 4;
        if (uVar4 != 1) {
          *(char *)(iVar11 + 2) = (char)((uint)uVar8 >> 8);
          if (2 < uVar4) {
            *(char *)(iVar11 + 3) = (char)((uint)uVar8 >> 0x10);
            if (uVar4 != 3) {
              *(char *)(iVar11 + 4) = (char)((uint)uVar8 >> 0x18);
              uVar4 = *(uint *)(param_2 + 0x130);
              goto LAB_0168a8e4;
            }
LAB_0168ae48:
            uVar7 = 3;
            uVar4 = 3;
            local_64 = &DAT_01d0793c;
            goto LAB_0168ae6c;
          }
LAB_0168ae34:
          uVar7 = 2;
          uVar4 = 2;
          local_64 = &DAT_01d0792c;
          goto LAB_0168ae6c;
        }
LAB_0168ae20:
        uVar7 = 1;
        uVar4 = 1;
        local_64 = &DAT_01d0791c;
        goto LAB_0168ae6c;
      }
LAB_0168ae0c:
      local_64 = &DAT_01d0790c;
      uVar7 = 0;
      uVar4 = 0;
      goto LAB_0168ae6c;
    }
LAB_0168ad9c:
    uVar4 = 0;
    uVar8 = 1;
    uVar7 = 0;
    puVar10 = &DAT_01d0788c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar8,uVar4,uVar7,puVar10);
}

