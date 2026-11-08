// FUN_0164af2c @ 0164af2c size=1340 calls_out=12 calls_in=2
// strings: 

void FUN_0164af2c(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_3c;
  uint uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar5 = param_3[2];
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004c12b4,0x33,&DAT_01d0678c);
  }
  uVar11 = param_2[2];
  if (uVar11 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    FUN_0134aee0(*param_3,param_3[1],4,4);
    uVar5 = *param_2;
    uVar4 = param_2[1];
    goto LAB_0164b0f8;
  }
  if (uVar5 == 1) {
    puVar1 = (uint *)param_3[1];
    uVar5 = *puVar1;
    if (uVar5 != 1) {
      uVar4 = param_2[1];
      uVar8 = *param_2;
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_004c12b4,0x33,&DAT_01d0676c);
      }
      uVar6 = 0;
      if (uVar5 >> 0x10 == 0) {
        iVar10 = uVar11 * -4;
        do {
          uVar9 = *(uint *)((uVar4 - 4) - iVar10);
          iVar2 = FUN_01bf1250(uVar6 << 0x10 | uVar9 >> 0x10,uVar5);
          iVar7 = (uVar9 & 0xffff) + ((uVar9 >> 0x10) - iVar2 * uVar5) * 0x10000;
          uVar9 = FUN_01bf1250(iVar7,uVar5);
          uVar6 = iVar7 - uVar9 * uVar5;
          *(uint *)((uVar4 - 4) - iVar10) = uVar9 | iVar2 << 0x10;
          iVar10 = iVar10 + 4;
        } while (iVar10 != 0);
      }
      else {
        iVar10 = uVar11 * -4;
        do {
          iVar7 = *(int *)((uVar4 - 4) - iVar10);
          iVar2 = FUN_01bf0ff0(iVar7,uVar6,uVar5,0);
          uVar6 = iVar7 - iVar2 * uVar5;
          *(int *)((uVar4 - 4) - iVar10) = iVar2;
          iVar10 = iVar10 + 4;
        } while (iVar10 != 0);
      }
      piVar3 = (int *)(uVar4 + uVar11 * 4 + -4);
      if (piVar3 == (int *)0x0) {
        local_50 = uVar11;
      }
      else {
        local_50 = uVar11;
        if (*piVar3 == 0) {
          iVar10 = uVar11 * -4;
          uVar5 = uVar11;
          do {
            uVar9 = uVar5;
            if (iVar10 == 0) {
              uVar9 = 0;
              goto LAB_0164b268;
            }
            piVar3 = (int *)((uVar4 - 4) - iVar10);
            iVar10 = iVar10 + 4;
            uVar5 = uVar9 - 1;
          } while (*piVar3 == 0);
          if (uVar9 <= uVar11) {
LAB_0164b268:
            local_50 = uVar9;
          }
        }
      }
      local_58 = uVar8;
      local_54 = uVar4;
      if ((local_50 < uVar8 >> 2) &&
         (iVar10 = FUN_0164bb38(&local_58,local_50), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      uVar4 = local_50;
      uVar11 = local_54;
      uVar5 = local_58;
      param_3[2] = 0;
      if (uVar6 != 0) {
        if (*param_3 == 0) {
          FUN_01a54b48(param_3);
          puVar1 = (uint *)param_3[1];
        }
        *puVar1 = uVar6;
        param_3[2] = 1;
      }
      *param_1 = uVar5;
      param_1[1] = uVar11;
      param_1[2] = uVar4;
      uVar5 = param_3[1];
      uVar11 = param_3[2];
      param_1[3] = *param_3;
      param_1[4] = uVar5;
      param_1[5] = uVar11;
      return;
    }
LAB_0164b0d4:
    uVar5 = *param_2;
    uVar11 = param_2[1];
    uVar4 = param_2[2];
    puVar1 = param_1;
    param_1 = param_1 + 3;
  }
  else {
    uVar4 = (uint)(uVar11 >= uVar5 && uVar11 != uVar5);
    uVar8 = (uint)(uVar11 < uVar5);
    if (uVar11 == uVar5) {
      iVar10 = uVar5 << 2;
      do {
        if (iVar10 == 0) goto LAB_0164b0a4;
        uVar6 = *(uint *)((param_3[1] - 4) + iVar10);
        uVar9 = *(uint *)((param_2[1] - 4) + iVar10);
        iVar10 = iVar10 + -4;
      } while (uVar9 == uVar6);
      uVar4 = 0;
      uVar8 = (uint)(uVar9 < uVar6);
      if (uVar9 >= uVar6) {
        uVar4 = 1;
      }
    }
    if (uVar4 - uVar8 == 0) {
LAB_0164b0a4:
      param_2[2] = 0;
      if (*param_2 == 0) {
        FUN_01a54b48(param_2);
      }
      param_2[2] = 1;
      *(undefined4 *)param_2[1] = 1;
      goto LAB_0164b0d4;
    }
    if ((uVar4 - uVar8 & 0xff) != 0xff) {
      uVar4 = param_3[1];
      piVar3 = (int *)(uVar4 + uVar5 * 4 + -4);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d0677c);
      }
      iVar10 = *piVar3;
      uVar8 = LZCOUNT(iVar10);
      if (uVar8 == 0) {
        local_58 = *param_2;
        local_54 = param_2[1];
        local_50 = param_2[2];
        FUN_0164aa4c(param_1,&local_58,uVar4,uVar5);
        uVar5 = *param_3;
        goto LAB_0164b0f8;
      }
      uVar6 = *param_2;
      uVar9 = param_2[1];
      if (uVar6 == 0x80000000) {
        if (*(int *)(uVar9 + 8) == 0) {
          FUN_0164a9cc(&local_3c,*(undefined4 *)(uVar9 + 4),*(undefined4 *)(uVar9 + 8));
        }
        else {
LAB_0164b240:
          local_58 = uVar6;
          local_54 = uVar9;
          local_50 = uVar11;
          FUN_0164b560(&local_3c,&local_58,iVar10 == 0,uVar8 & 0x1f);
        }
      }
      else {
        if (uVar11 != 0) goto LAB_0164b240;
        uStack_34 = 0;
        local_3c = uVar6;
        uStack_38 = uVar9;
      }
      uVar11 = *param_3;
      if (uVar11 == 0x80000000) {
        if (*(int *)(uVar4 + 8) == 0) {
          FUN_0164a9cc(&local_30,*(undefined4 *)(uVar4 + 4),*(undefined4 *)(uVar4 + 8));
        }
        else {
LAB_0164b324:
          local_58 = uVar11;
          local_54 = uVar4;
          local_50 = uVar5;
          FUN_0164b560(&local_30,&local_58,iVar10 == 0,uVar8 & 0x1f);
        }
      }
      else {
        if (uVar5 != 0) goto LAB_0164b324;
        local_28 = 0;
        local_30 = uVar11;
        local_2c = uVar4;
      }
      uVar6 = local_2c;
      FUN_0164aa4c(&local_58,&local_3c,local_2c,local_28);
      uVar4 = local_50;
      uVar11 = local_54;
      uVar5 = local_58;
      FUN_0134aee0(local_30,uVar6,4,4);
      if (local_4c == 0x80000000) {
        if (*(int *)(local_48 + 8) == 0) {
          FUN_0164a9cc(&local_30,*(undefined4 *)(local_48 + 4),*(undefined4 *)(local_48 + 8));
          goto LAB_0164b3f8;
        }
      }
      else if (local_44 == 0) {
        local_28 = local_44;
        local_2c = local_48;
        local_30 = local_4c;
        goto LAB_0164b3f8;
      }
      local_50 = local_44;
      local_54 = local_48;
      local_58 = local_4c;
      FUN_0164b86c(&local_30,&local_58,iVar10 == 0,uVar8 & 0x1f);
LAB_0164b3f8:
      *param_1 = uVar5;
      param_1[1] = uVar11;
      param_1[2] = uVar4;
      param_1[3] = local_30;
      param_1[4] = local_2c;
      param_1[5] = local_28;
      return;
    }
    uVar5 = *param_2;
    uVar11 = param_2[1];
    uVar4 = param_2[2];
    puVar1 = param_1 + 3;
  }
  *puVar1 = uVar5;
  puVar1[1] = uVar11;
  puVar1[2] = uVar4;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  uVar5 = *param_3;
  uVar4 = param_3[1];
LAB_0164b0f8:
  FUN_0134aee0(uVar5,uVar4,4,4);
  return;
}

