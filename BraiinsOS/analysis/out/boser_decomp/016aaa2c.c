// FUN_016aaa2c @ 016aaa2c size=1756 calls_out=10 calls_in=4
// strings: 

void FUN_016aaa2c(uint *param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint unaff_lr;
  ulonglong uVar18;
  uint local_70;
  uint local_64;
  uint local_58 [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  uVar10 = param_4[4];
  uVar9 = uVar10 - 1;
  if ((uVar10 == 0) || ((uint)param_4[3] <= uVar9)) {
    iVar15 = *param_4;
    uVar17 = 2;
    uVar14 = param_4[1];
LAB_016aab0c:
    if (iVar15 == 0) {
      uVar13 = uVar17;
LAB_016aab28:
      if (*(uint *)(param_3 + 0x88) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,*(uint *)(param_3 + 0x88),&DAT_01d084ec);
      }
      uVar13 = *(uint *)(*(int *)(param_3 + 0x84) + uVar13 * 4);
      if ((int)uVar13 < 0) {
        unaff_lr = 0x16ab008;
        local_30 = param_2;
        local_2c = param_3;
        FUN_016c5600(&local_38,&local_30,iVar15,uVar14,uVar17);
        if (local_38 != 5) goto LAB_016aacd8;
        uVar13 = local_34;
      }
    }
    else {
      if (iVar15 == 1) {
        uVar13 = uVar17 + 6;
        goto LAB_016aab28;
      }
      if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
        local_38 = 2;
        local_34 = uVar14;
        goto LAB_016aacd8;
      }
      if (uVar14 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
        uVar13 = uVar17 + uVar14 * 6 + 0xc;
        goto LAB_016aab28;
      }
      unaff_lr = 0x16aaeb8;
      uVar13 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
    }
    uVar17 = param_4[5];
    uVar9 = param_4[3];
    if (uVar10 < uVar17) {
      iVar3 = *(int *)(param_2 + 0x278);
      iVar16 = param_4[2];
      uVar4 = *(uint *)(param_2 + 0x27c) & 0x1f;
      iVar15 = param_4[6];
      uVar14 = uVar9;
      if (uVar9 < uVar10) {
        uVar14 = uVar10;
      }
      local_64 = 0;
      do {
        if (uVar14 == uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14,uVar9,&DAT_01d0846c);
        }
        uVar11 = (uint)*(byte *)(iVar16 + uVar10);
        uVar7 = *(uint *)(param_3 + 0x7c);
        uVar5 = (uVar13 & 0x7ffffff) + (uint)*(byte *)(param_2 + 0x158 + uVar11);
        if (uVar7 <= uVar5) goto LAB_016ab0b4;
        uVar5 = *(uint *)(*(int *)(param_3 + 0x78) + uVar5 * 4);
        if ((int)uVar5 < 0) {
          local_30 = param_2;
          local_2c = param_3;
          uVar18 = FUN_016c4f08(&local_30,uVar13,uVar11 << 8);
        }
        else {
          uVar18 = (ulonglong)uVar5 << 0x20;
        }
        uVar13 = (uint)(uVar18 >> 0x20);
        if ((uVar18 & 1) != 0) {
          uVar2 = 1;
LAB_016aad34:
          local_30 = CONCAT31(local_30._1_3_,uVar2);
          local_2c = uVar10;
          FUN_016cc61c(&local_30);
          uVar10 = FUN_016c2dec();
          *param_1 = 2;
          param_1[1] = uVar10;
          return;
        }
        if (0x7ffffffffffffff < uVar18) {
          if ((uVar18 & 0x800000000000000) == 0) {
            if ((uVar18 & 0x4000000000000000) != 0) {
              if (local_64 != 0) {
                uVar10 = unaff_lr;
              }
              *param_1 = local_64 ^ 1;
              param_1[1] = uVar10;
              param_1[2] = local_70;
              return;
            }
            if ((uVar18 & 0x2000000000000000) != 0) {
              local_30 = (uint)CONCAT21(local_30._2_2_,*(undefined1 *)(iVar16 + uVar10)) << 8;
              uVar2 = 0;
              goto LAB_016aad34;
            }
          }
          else {
            unaff_lr = 0;
            if (*(int *)(iVar3 + 0x154) != 1) {
              uVar5 = (uVar13 & 0x7ffffff) >> uVar4;
              if (*(uint *)(param_3 + 0x94) <= (uVar13 & 0x7ffffff) >> uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar5,*(uint *)(param_3 + 0x94),&DAT_01d09420);
              }
              puVar8 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar5 * 8);
              unaff_lr = FUN_0168c724(*puVar8,puVar8[1],0);
            }
            local_64 = 1;
            if ((char)iVar15 != '\0') {
              *param_1 = 0;
              param_1[1] = unaff_lr;
              param_1[2] = uVar10;
              return;
            }
            local_70 = uVar10;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar17 != uVar10);
      uVar10 = uVar17;
    }
    else {
      local_64 = 0;
    }
    if (uVar17 < uVar9) {
      uVar7 = *(uint *)(param_3 + 0x7c);
      bVar1 = *(byte *)(param_4[2] + uVar17);
      uVar5 = (uVar13 & 0x7ffffff) + (uint)*(byte *)(param_2 + (uint)bVar1 + 0x158);
      if (uVar7 <= uVar5) {
LAB_016ab0b4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,uVar7,&DAT_01d084bc);
      }
      uVar14 = *(uint *)(*(int *)(param_3 + 0x78) + uVar5 * 4);
      if ((int)uVar14 < 0) {
        local_30 = param_2;
        local_2c = param_3;
        uVar18 = FUN_016c4f08(&local_30,uVar13,(uint)bVar1 << 8);
      }
      else {
        uVar18 = (ulonglong)uVar14 << 0x20;
      }
      if ((uVar18 & 1) != 0) {
        uVar2 = 1;
        local_2c = uVar17;
        goto LAB_016aae8c;
      }
      if ((uVar18 & 0x800000000000000) != 0) {
        uVar9 = uVar17;
        if (*(int *)(*(int *)(param_2 + 0x278) + 0x154) != 1) {
          uVar17 = (uint)(uVar18 >> 0x20) & 0x7ffffff;
          uVar13 = *(uint *)(param_3 + 0x94);
          uVar14 = *(uint *)(param_2 + 0x27c) & 0x1f;
          uVar10 = uVar17 >> uVar14;
          if (uVar13 <= uVar17 >> uVar14) goto LAB_016ab0f8;
          uVar17 = 0;
          puVar8 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar10 * 8);
          uVar10 = FUN_0168c724(*puVar8,puVar8[1],0);
          goto LAB_016aafcc;
        }
        goto LAB_016aaef8;
      }
      if ((uVar18 & 0x2000000000000000) == 0) goto LAB_016aae58;
      uVar2 = 0;
      local_30 = (uint)CONCAT21(local_30._2_2_,bVar1) << 8;
      local_2c = uVar17;
    }
    else {
      iVar15 = *(byte *)(param_2 + 599) + 1;
      uVar14 = FUN_016c2c08(iVar15);
      uVar17 = (uVar14 & 0xffff) >> 8;
      if ((uVar14 & 1) != 0) {
        uVar17 = uVar14 >> 0x10;
      }
      uVar17 = uVar17 + (uVar13 & 0x7ffffff);
      if (*(uint *)(param_3 + 0x7c) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,*(uint *)(param_3 + 0x7c),&DAT_01d084cc);
      }
      uVar17 = *(uint *)(*(int *)(param_3 + 0x78) + uVar17 * 4);
      if ((int)uVar17 < 0) {
        uVar6 = FUN_016c2c08(iVar15);
        local_30 = param_2;
        local_2c = param_3;
        uVar18 = FUN_016c4f08(&local_30,uVar13,uVar6);
      }
      else {
        uVar18 = (ulonglong)uVar17 << 0x20;
      }
      if ((uVar18 & 1) == 0) {
        if ((uVar18 & 0x800000000000000) == 0) {
LAB_016aae58:
          if (local_64 == 0) {
            uVar17 = 1;
          }
          else {
            uVar17 = 0;
            uVar10 = unaff_lr;
            uVar9 = local_70;
          }
          goto LAB_016aafcc;
        }
        if (*(int *)(*(int *)(param_2 + 0x278) + 0x154) != 1) {
          uVar17 = (uint)(uVar18 >> 0x20) & 0x7ffffff;
          uVar13 = *(uint *)(param_3 + 0x94);
          uVar14 = *(uint *)(param_2 + 0x27c) & 0x1f;
          uVar10 = uVar17 >> uVar14;
          if (uVar13 <= uVar17 >> uVar14) {
LAB_016ab0f8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,uVar13,&DAT_01d09420);
          }
          uVar17 = 0;
          puVar8 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar10 * 8);
          uVar10 = FUN_0168c724(*puVar8,puVar8[1],0);
          goto LAB_016aafcc;
        }
LAB_016aaef8:
        uVar10 = 0;
        uVar17 = 0;
LAB_016aafcc:
        param_1[1] = uVar10;
        param_1[2] = uVar9;
        *param_1 = uVar17;
        return;
      }
      uVar2 = 1;
      local_2c = uVar9;
    }
    local_30 = CONCAT31(local_30._1_3_,uVar2);
    FUN_016cc61c(&local_30);
  }
  else {
    iVar15 = *param_4;
    uVar14 = param_4[1];
    bVar1 = *(byte *)(param_4[2] + uVar9);
    uVar17 = (uint)bVar1;
    unaff_lr = 0x16aaa90;
    iVar3 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
    if (iVar3 == 0) {
LAB_016aaaf8:
      uVar17 = (uint)*(byte *)(param_2 + uVar17 + 0x58);
      goto LAB_016aab0c;
    }
    puVar12 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
    local_58[0] = *puVar12;
    local_58[1] = puVar12[1];
    local_58[2] = puVar12[2];
    local_58[3] = puVar12[3];
    uStack_48 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    if ((local_58[(uVar17 & 0x7f) >> 5] >> (uVar17 & 0x1f) & 1) == 0) goto LAB_016aaaf8;
    local_38 = 4;
    local_34 = uVar17;
LAB_016aacd8:
    iVar15 = 2;
    if (2 < local_38) {
      iVar15 = local_38 - 3;
    }
    if (iVar15 == 0) {
      uVar2 = 1;
      local_2c = uVar10;
    }
    else if (iVar15 == 1) {
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce84e,0x24,&DAT_01d084dc);
      }
      uVar2 = 0;
      local_30 = (uint)CONCAT21(local_30._2_2_,(char)local_34) << 8;
      local_2c = uVar9;
    }
    else {
      uVar2 = 3;
      local_2c = local_38;
      local_28 = local_34;
    }
LAB_016aae8c:
    local_30 = CONCAT31(local_30._1_3_,uVar2);
    FUN_016cc61c(&local_30);
  }
  uVar10 = FUN_016c2dec();
  *param_1 = 2;
  param_1[1] = uVar10;
  return;
}

