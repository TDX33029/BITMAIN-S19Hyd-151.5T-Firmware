// FUN_01ae1d6c @ 01ae1d6c size=1472 calls_out=2 calls_in=2
// strings: 

void FUN_01ae1d6c(undefined1 *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  bool bVar23;
  byte local_40 [8];
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 local_34;
  undefined2 uStack_33;
  undefined4 uStack_31;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  
  if (param_3 < 0x26) {
    if (param_3 == 0x20) {
      iVar6 = 0;
      uStack_29 = 0;
      uStack_2d = 0;
      local_34 = 0;
      uStack_33 = 0;
      uStack_31 = 0;
      local_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0;
      do {
        if (((&DAT_0053309f)[(param_2 + iVar6 * 2)[1]] | (&DAT_0053309f)[param_2[iVar6 * 2]]) ==
            0xff) {
          param_3 = 0x20;
          goto LAB_01ae1eac;
        }
        local_40[iVar6 + 8] =
             (&DAT_00532f6c)[(byte)(&DAT_0053309f)[param_2[iVar6 * 2]]] |
             (&DAT_0053309f)[(param_2 + iVar6 * 2)[1]];
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x10);
LAB_01ae21ec:
      *(uint *)(param_1 + 4) = CONCAT22(uStack_33,CONCAT11(local_34,uStack_35));
      *(undefined4 *)(param_1 + 8) = uStack_31;
      *(undefined4 *)(param_1 + 0xc) = uStack_2d;
      uVar4 = 0;
      param_1[3] = uStack_36;
      *(undefined2 *)(param_1 + 1) = local_38;
      param_1[0x10] = uStack_29;
      goto LAB_01ae22d4;
    }
    if (param_3 == 0x24) goto LAB_01ae1d90;
  }
  else if (param_3 == 0x26) {
    bVar2 = *param_2;
    bVar23 = bVar2 == 0x7b;
    if (bVar23) {
      bVar2 = param_2[0x25];
    }
    if (bVar23 && bVar2 == 0x7d) {
      param_2 = param_2 + 1;
LAB_01ae1d90:
      if (param_2[8] == 0x2d) {
        bVar2 = param_2[0xd];
        bVar23 = bVar2 == 0x2d;
        if (bVar23) {
          bVar2 = param_2[0x12];
        }
        if ((bVar23 && bVar2 == 0x2d) && (param_2[0x17] == 0x2d)) {
          iVar6 = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_35 = 0;
          local_40[4] = 0x13;
          local_40[5] = 0x18;
          local_40[6] = 0x1c;
          local_40[7] = 0x20;
          local_34 = 0;
          uStack_33 = 0;
          local_40[0] = 0;
          local_40[1] = 4;
          local_40[2] = 9;
          local_40[3] = 0xe;
          uStack_31 = 0;
          uStack_2d = 0;
          uStack_29 = 0;
          do {
            uVar19 = (uint)local_40[iVar6];
            if (0x23 < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19,0x24,&DAT_01d30040);
            }
            if (uVar19 == 0x23) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(0x24,0x24,&DAT_01d30050);
            }
            if (0x21 < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19 + 2,0x24,&DAT_01d30060);
            }
            if (uVar19 == 0x21) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(0x24,0x24,&DAT_01d30070);
            }
            bVar2 = (&DAT_0053309f)[param_2[uVar19 + 3]];
            if ((byte)((&DAT_0053309f)[param_2[uVar19 + 1]] | (&DAT_0053309f)[param_2[uVar19]] |
                       (&DAT_0053309f)[param_2[uVar19 + 2]] | bVar2) == 0xff) goto LAB_01ae1db0;
            bVar3 = (&DAT_00532f6c)[(byte)(&DAT_0053309f)[param_2[uVar19 + 2]]];
            local_40[iVar6 * 2 + 8] =
                 (&DAT_00532f6c)[(byte)(&DAT_0053309f)[param_2[uVar19]]] |
                 (&DAT_0053309f)[param_2[uVar19 + 1]];
            iVar20 = iVar6 * 2;
            iVar6 = iVar6 + 1;
            local_40[iVar20 + 9] = bVar3 | bVar2;
          } while (iVar6 != 8);
          goto LAB_01ae21ec;
        }
      }
LAB_01ae1db0:
      param_3 = 0x24;
    }
  }
  else {
    puVar5 = param_1;
    if (param_3 == 0x2d) {
      puVar5 = (undefined1 *)(uint)*param_2;
    }
    if (param_3 == 0x2d && puVar5 == (undefined1 *)0x75) {
      bVar2 = param_2[1];
      bVar23 = bVar2 == 0x72;
      if (bVar23) {
        bVar2 = param_2[2];
      }
      if (bVar23 && bVar2 == 0x6e) {
        bVar2 = param_2[3];
        bVar23 = bVar2 == 0x3a;
        if (bVar23) {
          bVar2 = param_2[4];
        }
        if (bVar23 && bVar2 == 0x75) {
          bVar2 = param_2[5];
          bVar23 = bVar2 == 0x75;
          if (bVar23) {
            bVar2 = param_2[6];
          }
          if (bVar23 && bVar2 == 0x69) {
            bVar2 = param_2[7];
            bVar23 = bVar2 == 100;
            if (bVar23) {
              bVar2 = param_2[8];
            }
            if (bVar23 && bVar2 == 0x3a) {
              param_2 = param_2 + 9;
              goto LAB_01ae1d90;
            }
          }
        }
      }
    }
  }
LAB_01ae1eac:
  FUN_012fbd94(&local_38,param_2,param_3);
  puVar22 = (undefined4 *)(param_1 + 4);
  if (CONCAT13(uStack_35,CONCAT12(uStack_36,local_38)) == 1) {
    *puVar22 = 5;
  }
  else {
    uVar19 = CONCAT13((undefined1)uStack_2d,uStack_31._1_3_);
    pbVar10 = (byte *)CONCAT13((undefined1)uStack_31,CONCAT21(uStack_33,local_34));
    if (uVar19 < 2) {
      uStack_29 = 0;
      uStack_2d = 0;
      local_34 = 0;
      uStack_33 = 0;
      uStack_31 = 0;
      local_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0;
      if (uVar19 != 0) goto LAB_01ae1f88;
LAB_01ae207c:
      uVar7 = 1;
    }
    else {
      bVar2 = *pbVar10;
      if (bVar2 == 0x7b) {
        if (pbVar10[uVar19 - 1] != 0x7d) goto LAB_01ae1f74;
        iVar6 = -2;
        iVar20 = 1;
LAB_01ae1f0c:
        uStack_29 = 0;
        uStack_2d = 0;
        local_34 = 0;
        uStack_33 = 0;
        uStack_31 = 0;
        local_38 = 0;
        uStack_36 = 0;
        uStack_35 = 0;
        if (uVar19 + iVar6 != 0) {
          pbVar10 = pbVar10 + iVar20;
          bVar2 = 0;
          pbVar18 = pbVar10 + uVar19 + iVar6;
          goto LAB_01ae1f94;
        }
        uVar16 = 0;
      }
      else {
        if (8 < uVar19) {
          bVar23 = bVar2 == 0x75;
          if (bVar23) {
            bVar2 = pbVar10[1];
          }
          if ((bVar23 && bVar2 == 0x72) && (pbVar10[2] == 0x6e)) {
            bVar2 = pbVar10[3];
            bVar23 = bVar2 == 0x3a;
            if (bVar23) {
              bVar2 = pbVar10[4];
            }
            if (bVar23 && bVar2 == 0x75) {
              bVar2 = pbVar10[5];
              bVar23 = bVar2 == 0x75;
              if (bVar23) {
                bVar2 = pbVar10[6];
              }
              if (bVar23 && bVar2 == 0x69) {
                bVar2 = pbVar10[7];
                bVar23 = bVar2 == 100;
                if (bVar23) {
                  bVar2 = pbVar10[8];
                }
                if (bVar23 && bVar2 == 0x3a) {
                  iVar6 = -9;
                  iVar20 = 9;
                  goto LAB_01ae1f0c;
                }
              }
            }
          }
        }
LAB_01ae1f74:
        uStack_29 = 0;
        uStack_2d = 0;
        local_34 = 0;
        uStack_33 = 0;
        uStack_31 = 0;
        local_38 = 0;
        uStack_36 = 0;
        uStack_35 = 0;
LAB_01ae1f88:
        iVar20 = 0;
        pbVar18 = pbVar10 + uVar19;
        bVar2 = 1;
LAB_01ae1f94:
        uVar16 = 0;
        pbVar9 = (byte *)0x0;
        do {
          pbVar12 = pbVar10 + 1;
          uVar17 = (uint)*pbVar10;
          if ((char)*pbVar10 < '\0') {
            if (uVar17 < 0xe0) {
              uVar17 = pbVar10[1] & 0x3f | (uVar17 & 0x1f) << 6;
              pbVar12 = pbVar10 + 2;
            }
            else {
              uVar15 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
              if (uVar17 < 0xf0) {
                uVar17 = uVar15 | (uVar17 & 0x1f) << 0xc;
                pbVar12 = pbVar10 + 3;
              }
              else {
                pbVar12 = pbVar10 + 4;
                uVar17 = pbVar10[3] & 0x3f | uVar15 << 6 | (uVar17 & 7) << 0x12;
              }
            }
            if (uVar17 < 0x100) goto LAB_01ae2028;
LAB_01ae2084:
            iVar11 = 4;
            *puVar22 = 0;
            pbVar9 = pbVar9 + iVar20 + 1;
            iVar6 = 8;
            goto LAB_01ae20a0;
          }
LAB_01ae2028:
          if (uVar17 == 0x2d) {
            if (uVar16 < 4) {
              *(byte **)((int)&local_38 + uVar16 * 4) = pbVar9;
            }
            uVar16 = uVar16 + 1;
          }
          else if ((9 < uVar17 - 0x30) && (5 < (uVar17 & 0xdf) - 0x41)) goto LAB_01ae2084;
          pbVar9 = pbVar12 + ((int)pbVar9 - (int)pbVar10);
          pbVar10 = pbVar12;
        } while (pbVar12 != pbVar18);
        if ((bool)(bVar2 & uVar16 == 0)) goto LAB_01ae207c;
        if (uVar16 == 4) {
          iVar6 = -1;
          piVar8 = (int *)0x532f54;
          piVar21 = (int *)&local_38;
          do {
            if (iVar6 == 3) {
              *(uint *)(param_1 + 0xc) = uVar19 - 0x18;
              uVar19 = iVar20 + 0x19;
              *(undefined4 *)(param_1 + 4) = 4;
              iVar6 = 0xc;
              *(undefined4 *)(param_1 + 8) = 4;
              goto LAB_01ae22cc;
            }
            piVar13 = piVar8 + 1;
            piVar1 = piVar8 + 2;
            iVar11 = *piVar21;
            iVar6 = iVar6 + 1;
            piVar8 = piVar13;
            piVar21 = piVar21 + 1;
          } while (iVar11 == *piVar1 + -1);
          iVar14 = *piVar13;
          *(undefined4 *)(param_1 + 4) = 4;
          *(int *)(param_1 + 8) = iVar6;
          pbVar9 = (byte *)(iVar11 - iVar14);
          uVar17 = iVar20 + iVar14 + 1;
          iVar6 = 0xc;
          iVar11 = 8;
LAB_01ae20a0:
          *(byte **)((int)puVar22 + iVar11) = pbVar9;
          *(uint *)((int)puVar22 + iVar6) = uVar17;
          goto LAB_01ae22d0;
        }
      }
      uVar7 = 3;
      uVar19 = uVar16 + 1;
    }
    *puVar22 = uVar7;
    iVar6 = 4;
LAB_01ae22cc:
    *(uint *)((int)puVar22 + iVar6) = uVar19;
  }
LAB_01ae22d0:
  uVar4 = 1;
LAB_01ae22d4:
  *param_1 = uVar4;
  return;
}

