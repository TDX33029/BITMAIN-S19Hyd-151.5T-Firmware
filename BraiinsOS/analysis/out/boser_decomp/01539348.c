// FUN_01539348 @ 01539348 size=1036 calls_out=8 calls_in=0
// strings: 

void FUN_01539348(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  uint local_8c;
  uint *local_80;
  uint local_68;
  uint *local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = *(uint *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 4);
  iVar8 = uVar2 * 0x14;
  uVar7 = 0xffffffff;
  iVar9 = iVar11;
  while (uVar4 = uVar7, iVar8 != 0) {
    iVar3 = FUN_01577618(iVar9,param_3,param_6);
    iVar8 = iVar8 + -0x14;
    uVar7 = uVar4 + 1;
    iVar9 = iVar9 + 0x14;
    if (iVar3 != 0) {
      local_80 = (uint *)thunk_FUN_01be5118(0x10);
      if (local_80 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x10);
      }
      *local_80 = uVar7;
      local_8c = 1;
      local_60 = 1;
      local_68 = 4;
      uVar7 = uVar4 + 2;
      local_64 = local_80;
      while (uVar4 = uVar7, puVar6 = local_64, uVar7 = local_68, iVar9 != iVar11 + uVar2 * 0x14) {
        iVar8 = FUN_01577618(iVar9,param_3,param_6);
        uVar7 = uVar4 + 1;
        iVar9 = iVar9 + 0x14;
        if (iVar8 != 0) {
          if (local_8c == local_68) {
            FUN_006520b4(&local_68,local_8c,1,4,4);
            local_80 = local_64;
          }
          local_80[local_8c] = uVar4;
          local_8c = local_8c + 1;
          local_60 = local_8c;
        }
      }
      uVar10 = 0;
      bVar16 = 0x3fffffe < local_8c;
      bVar15 = local_8c == 0x3ffffff;
      uVar4 = local_8c * 0x40;
      if (local_8c < 0x4000000) {
        bVar16 = 0x7ffffffb < uVar4;
        bVar15 = uVar4 == 0x7ffffffc;
      }
      if (!bVar16 || bVar15) {
        uVar10 = 4;
        iVar8 = FUN_01298504(uVar4,4);
        if (iVar8 != 0) {
          iVar3 = 0;
          iVar9 = 0x40;
          puVar5 = puVar6;
          do {
            iVar12 = iVar9;
            puVar14 = puVar5 + 1;
            uVar4 = *puVar5;
            if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar4,uVar2,&DAT_01cfbf68);
            }
            FUN_015737d4(&local_68,iVar11 + uVar4 * 0x14,param_3,param_4,param_5,param_6);
            puVar5 = (uint *)(iVar8 + iVar3 * 0x40);
            iVar3 = iVar3 + 1;
            *puVar5 = local_68;
            puVar5[1] = (uint)local_64;
            puVar5[2] = local_60;
            puVar5[3] = uStack_5c;
            puVar5[4] = uStack_58;
            puVar5[5] = local_54;
            puVar5[6] = uStack_50;
            puVar5[7] = uStack_4c;
            puVar5[8] = uStack_48;
            puVar5[9] = uStack_44;
            puVar5[10] = local_40;
            puVar5[0xb] = uStack_3c;
            puVar5[0xc] = uStack_38;
            puVar5[0xd] = uStack_34;
            puVar5[0xe] = uStack_30;
            puVar5[0xf] = uStack_2c;
            iVar9 = iVar12 + 0x40;
            puVar5 = puVar14;
          } while (puVar14 != puVar6 + local_8c);
          FUN_0134aee0(uVar7,puVar6,4,4);
          iVar9 = iVar8;
          do {
            if (iVar12 == 0) {
              *param_1 = 0x80000000;
              param_1[1] = local_8c;
              param_1[2] = iVar8;
              param_1[3] = iVar3;
              param_1[4] = 0;
              return;
            }
            pcVar1 = (char *)(iVar9 + 0x3c);
            iVar12 = iVar12 + -0x40;
            iVar9 = iVar9 + 0x40;
          } while (*pcVar1 != '\0');
          *param_1 = 0;
          param_1[1] = 4;
          param_1[2] = 0;
          param_1[3] = local_8c;
          param_1[4] = iVar8;
          param_1[5] = iVar3;
          param_1[6] = 0;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar4);
    }
  }
  uVar10 = 0;
  bVar16 = 0x3fffffe < uVar2;
  bVar15 = uVar2 == 0x3ffffff;
  uVar7 = uVar2 * 0x40;
  if (uVar2 < 0x4000000) {
    bVar16 = 0x7ffffffb < uVar7;
    bVar15 = uVar7 == 0x7ffffffc;
  }
  if (!bVar16 || bVar15) {
    if (uVar7 == 0) {
      iVar8 = 4;
      uVar4 = 0;
    }
    else {
      uVar10 = 4;
      iVar8 = FUN_01298504(uVar7,4);
      uVar4 = uVar2;
      if (iVar8 == 0) goto LAB_01539480;
    }
    uVar13 = 0;
    if (uVar2 != 0) {
      uVar13 = 0;
      do {
        FUN_015737d4(&local_68,iVar11,param_3,param_4,param_5,param_6);
        puVar6 = (uint *)(iVar8 + uVar13 * 0x40);
        iVar11 = iVar11 + 0x14;
        uVar13 = uVar13 + 1;
        *puVar6 = local_68;
        puVar6[1] = (uint)local_64;
        puVar6[2] = local_60;
        puVar6[3] = uStack_5c;
        puVar6[4] = uStack_58;
        puVar6[5] = local_54;
        puVar6[6] = uStack_50;
        puVar6[7] = uStack_4c;
        puVar6[8] = uStack_48;
        puVar6[9] = uStack_44;
        puVar6[10] = local_40;
        puVar6[0xb] = uStack_3c;
        puVar6[0xc] = uStack_38;
        puVar6[0xd] = uStack_34;
        puVar6[0xe] = uStack_30;
        puVar6[0xf] = uStack_2c;
      } while (uVar2 != uVar13);
      uVar13 = uVar2;
    }
    iVar9 = iVar8;
    do {
      if (uVar7 == 0) {
        *param_1 = 0x80000000;
        param_1[1] = uVar4;
        param_1[2] = iVar8;
        param_1[3] = uVar13;
        param_1[4] = 0;
        goto LAB_01539728;
      }
      pcVar1 = (char *)(iVar9 + 0x3c);
      uVar7 = uVar7 - 0x40;
      iVar9 = iVar9 + 0x40;
    } while (*pcVar1 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = uVar4;
    param_1[4] = iVar8;
    param_1[5] = uVar13;
    param_1[6] = 0;
LAB_01539728:
    FUN_0134aee0(0,4,4,4);
    return;
  }
LAB_01539480:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar10,uVar7);
}

