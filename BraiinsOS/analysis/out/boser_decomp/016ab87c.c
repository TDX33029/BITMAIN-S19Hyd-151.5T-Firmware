// FUN_016ab87c @ 016ab87c size=2044 calls_out=11 calls_in=8
// strings: 

void FUN_016ab87c(uint *param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r4;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint local_60;
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
  
  uVar16 = param_4[3];
  uVar17 = param_4[5];
  if (uVar17 < uVar16) {
    bVar1 = *(byte *)(param_4[2] + uVar17);
    unaff_r4 = (uint)bVar1;
    iVar15 = *param_4;
    uVar12 = param_4[1];
    iVar4 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
    if (iVar4 == 0) {
LAB_016ab948:
      uVar11 = (uint)*(byte *)(param_2 + unaff_r4 + 0x58);
      goto LAB_016ab95c;
    }
    puVar13 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
    local_58[0] = *puVar13;
    local_58[1] = puVar13[1];
    local_58[2] = puVar13[2];
    local_58[3] = puVar13[3];
    uStack_48 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    if ((local_58[(unaff_r4 & 0x7f) >> 5] >> (unaff_r4 & 0x1f) & 1) == 0) goto LAB_016ab948;
    local_38 = 4;
    local_34 = unaff_r4;
LAB_016abb7c:
    iVar15 = 2;
    if (2 < local_38) {
      iVar15 = local_38 - 3;
    }
    if (iVar15 == 0) {
LAB_016abba8:
      uVar3 = 1;
      local_2c = uVar17;
    }
    else if (iVar15 == 1) {
      uVar3 = 0;
      local_30 = (uint)CONCAT21(local_30._2_2_,(char)local_34) << 8;
      local_2c = uVar17;
    }
    else {
      uVar3 = 3;
      local_2c = local_38;
      local_28 = local_34;
    }
LAB_016abc44:
    local_30 = CONCAT31(local_30._1_3_,uVar3);
LAB_016abc48:
    FUN_016cc61c(&local_30);
    uVar17 = FUN_016c2dec();
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = uVar17;
  }
  else {
    iVar15 = *param_4;
    uVar11 = 2;
    uVar12 = param_4[1];
LAB_016ab95c:
    if (iVar15 == 0) {
      uVar14 = uVar11;
LAB_016ab978:
      if (*(uint *)(param_3 + 0x88) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,*(uint *)(param_3 + 0x88),&DAT_01d084ec);
      }
      uVar14 = *(uint *)(*(int *)(param_3 + 0x84) + uVar14 * 4);
      if ((int)uVar14 < 0) {
        local_30 = param_2;
        local_2c = param_3;
        FUN_016c5600(&local_38,&local_30,iVar15,uVar12,uVar11);
        if (local_38 != 5) goto LAB_016abb7c;
        unaff_r4 = param_2;
        uVar14 = local_34;
      }
    }
    else {
      if (iVar15 == 1) {
        uVar14 = uVar11 + 6;
        goto LAB_016ab978;
      }
      if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
        local_38 = 2;
        local_34 = uVar12;
        goto LAB_016abb7c;
      }
      if (uVar12 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
        uVar14 = uVar11 + uVar12 * 6 + 0xc;
        goto LAB_016ab978;
      }
      uVar14 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
      unaff_r4 = param_2;
    }
    uVar11 = param_4[4];
    if (uVar11 != uVar17) {
      iVar15 = *(int *)(param_2 + 0x278);
      uVar12 = *(uint *)(param_2 + 0x27c);
      iVar4 = param_4[2];
      uVar10 = uVar17 - 1;
      uVar6 = uVar12 & 0x1f;
      local_60 = 0;
      while( true ) {
        if (uVar16 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar10,uVar16,&DAT_01d084ac);
        }
        uVar9 = *(uint *)(param_3 + 0x7c);
        uVar5 = (uVar14 & 0x7ffffff) +
                (uint)*(byte *)(param_2 + 0x158 + (uint)*(byte *)(iVar4 + uVar10));
        if (uVar9 <= uVar5) goto LAB_016ac020;
        uVar5 = *(uint *)(*(int *)(param_3 + 0x78) + uVar5 * 4);
        if ((int)uVar5 < 0) {
          local_30 = param_2;
          local_2c = param_3;
          uVar18 = FUN_016c4f08(&local_30,uVar14,(uint)*(byte *)(iVar4 + uVar10) << 8);
        }
        else {
          uVar18 = (ulonglong)uVar5 << 0x20;
        }
        uVar14 = (uint)(uVar18 >> 0x20);
        if ((uVar18 & 1) != 0) {
          local_30 = CONCAT31(local_30._1_3_,1);
          local_2c = uVar10;
          FUN_016cc61c(&local_30);
          uVar17 = FUN_016c2dec();
          *param_1 = 2;
          param_1[1] = 1;
          param_1[2] = uVar17;
          return;
        }
        if (0x7ffffffffffffff < uVar18) {
          if ((uVar18 & 0x800000000000000) == 0) {
            if ((uVar18 & 0x4000000000000000) != 0) {
              *param_1 = local_60;
              param_1[1] = uVar17;
              param_1[2] = unaff_r4;
              return;
            }
            if ((uVar18 & 0x2000000000000000) != 0) {
              local_30 = (uint)CONCAT21(local_30._2_2_,*(undefined1 *)(iVar4 + uVar10)) << 8;
              local_2c = uVar10;
              FUN_016cc61c(&local_30);
              uVar17 = FUN_016c2dec();
              *param_1 = 2;
              param_1[1] = 1;
              param_1[2] = uVar17;
              return;
            }
          }
          else {
            uVar17 = 0;
            if (*(int *)(iVar15 + 0x154) != 1) {
              uVar17 = (uVar14 & 0x7ffffff) >> uVar6;
              if (*(uint *)(param_3 + 0x94) <= (uVar14 & 0x7ffffff) >> uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar17,*(uint *)(param_3 + 0x94),&DAT_01d09420);
              }
              puVar7 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar17 * 8);
              uVar17 = FUN_0168c724(*puVar7,puVar7[1],0);
            }
            unaff_r4 = uVar10 + 1;
            local_60 = 1;
          }
        }
        if (uVar11 == uVar10) break;
        uVar10 = uVar10 - 1;
        if (uVar10 < param_5) {
          *param_1 = 2;
          param_1[1] = 0;
          return;
        }
      }
      if (uVar11 == 0) {
        iVar4 = *(byte *)(param_2 + 599) + 1;
        uVar6 = FUN_016c2c08(iVar4);
        uVar10 = *(uint *)(param_3 + 0x7c);
        uVar16 = (uVar6 & 0xffff) >> 8;
        if ((uVar6 & 1) != 0) {
          uVar16 = uVar6 >> 0x10;
        }
        uVar16 = uVar16 + (uVar14 & 0x7ffffff);
        if (uVar16 < uVar10) {
          uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar16 * 4);
          if ((int)uVar16 < 0) {
            uVar8 = FUN_016c2c08(iVar4);
            local_30 = param_2;
            local_2c = param_3;
            uVar19 = FUN_016c4f08(&local_30,uVar14,uVar8);
          }
          else {
            uVar19 = (ulonglong)uVar16 << 0x20;
          }
          uVar8 = (undefined4)(uVar19 >> 0x20);
          if ((uVar19 & 1) != 0) {
            local_30 = CONCAT31(local_30._1_3_,1);
            local_2c = 0;
            goto LAB_016abdbc;
          }
          if ((uVar19 & 0x800000000000000) == 0) {
code_r0x016abec8:
            uVar16 = local_60 ^ 1;
            if (uVar16 == 0 && uVar11 < unaff_r4) {
              local_60 = 1;
            }
            bVar2 = uVar11 < unaff_r4;
            uVar11 = unaff_r4;
            if ((uVar18 & 0x4000000000000000) == 0 && (uVar16 == 0 && bVar2)) {
              *param_1 = 2;
              param_1[1] = 0;
              return;
            }
            goto LAB_016abf1c;
          }
          uVar11 = 0;
LAB_016abf00:
          uVar17 = FUN_01684564(iVar15,uVar12,*(undefined4 *)(param_3 + 0x90),
                                *(undefined4 *)(param_3 + 0x94),uVar8);
          local_60 = 1;
LAB_016abf1c:
          *param_1 = local_60;
          param_1[1] = uVar17;
          param_1[2] = uVar11;
          return;
        }
LAB_016ac06c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar16,uVar10,&DAT_01d084cc);
      }
      uVar9 = *(uint *)(param_3 + 0x7c);
      bVar1 = *(byte *)(iVar4 + (uVar11 - 1));
      uVar5 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(param_2 + 0x158 + (uint)bVar1);
      if (uVar5 < uVar9) {
        uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar5 * 4);
        if ((int)uVar16 < 0) {
          local_30 = param_2;
          local_2c = param_3;
          uVar19 = FUN_016c4f08(&local_30,uVar14,(uint)bVar1 << 8);
        }
        else {
          uVar19 = (ulonglong)uVar16 << 0x20;
        }
        uVar8 = (undefined4)(uVar19 >> 0x20);
        if ((uVar19 & 1) == 0) {
          if ((uVar19 & 0x800000000000000) != 0) goto LAB_016abf00;
          if ((uVar19 & 0x2000000000000000) == 0) goto code_r0x016abec8;
          uVar3 = 0;
          local_30 = (uint)CONCAT21(local_30._2_2_,bVar1) << 8;
          local_2c = uVar11 - 1;
        }
        else {
          uVar3 = 1;
          local_2c = uVar11;
        }
        local_30 = CONCAT31(local_30._1_3_,uVar3);
LAB_016abdbc:
        FUN_016cc61c(&local_30);
        uVar17 = FUN_016c2dec();
        *param_1 = 2;
        param_1[1] = 1;
        param_1[2] = uVar17;
        return;
      }
LAB_016ac020:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar9,&DAT_01d084bc);
    }
    if (uVar17 == 0) {
      iVar15 = *(byte *)(param_2 + 599) + 1;
      uVar17 = 0x16abbe8;
      uVar11 = FUN_016c2c08(iVar15);
      uVar10 = *(uint *)(param_3 + 0x7c);
      uVar16 = (uVar11 & 0xffff) >> 8;
      if ((uVar11 & 1) != 0) {
        uVar16 = uVar11 >> 0x10;
      }
      uVar16 = uVar16 + (uVar14 & 0x7ffffff);
      if (uVar10 <= uVar16) goto LAB_016ac06c;
      uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar16 * 4);
      if ((int)uVar16 < 0) {
        uVar8 = FUN_016c2c08(iVar15);
        uVar17 = 0x16abfcc;
        local_30 = param_2;
        local_2c = param_3;
        uVar18 = FUN_016c4f08(&local_30,uVar14,uVar8);
      }
      else {
        uVar18 = (ulonglong)uVar16 << 0x20;
      }
      uVar16 = (uint)uVar18;
      if ((uVar18 & 1) != 0) {
        local_30 = CONCAT31(local_30._1_3_,1);
        local_2c = 0;
        goto LAB_016abc48;
      }
      if ((uVar18 & 0x800000000000000) == 0) {
LAB_016abd2c:
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        uVar17 = 0;
        uVar16 = 0;
        if (*(int *)(*(int *)(param_2 + 0x278) + 0x154) != 1) goto LAB_016abe00;
      }
    }
    else {
      uVar11 = uVar17 - 1;
      if (uVar16 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar16,&DAT_01d0848c);
      }
      uVar9 = *(uint *)(param_3 + 0x7c);
      bVar1 = *(byte *)(param_4[2] + uVar11);
      uVar5 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(param_2 + bVar1 + 0x158);
      if (uVar9 <= uVar5) goto LAB_016ac020;
      uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar5 * 4);
      if ((int)uVar16 < 0) {
        local_30 = param_2;
        local_2c = param_3;
        uVar18 = FUN_016c4f08(&local_30,uVar14,(uint)bVar1 << 8);
      }
      else {
        uVar18 = (ulonglong)uVar16 << 0x20;
      }
      uVar16 = (uint)uVar18;
      if ((uVar18 & 1) != 0) goto LAB_016abba8;
      if ((uVar18 & 0x800000000000000) == 0) {
        if ((uVar18 & 0x2000000000000000) == 0) goto LAB_016abd2c;
        uVar3 = 0;
        local_30 = (uint)CONCAT21(local_30._2_2_,bVar1) << 8;
        local_2c = uVar11;
        goto LAB_016abc44;
      }
      if (*(int *)(*(int *)(param_2 + 0x278) + 0x154) == 1) {
        uVar11 = 1;
        uVar16 = 0;
      }
      else {
LAB_016abe00:
        puVar7 = (undefined4 *)
                 FUN_016c55cc(*(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90),
                              *(undefined4 *)(param_3 + 0x94));
        uVar16 = FUN_0168c724(*puVar7,puVar7[1],0);
        uVar11 = 1;
      }
    }
    *param_1 = uVar11;
    param_1[1] = uVar16;
    param_1[2] = uVar17;
  }
  return;
}

