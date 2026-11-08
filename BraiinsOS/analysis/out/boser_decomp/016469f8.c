// FUN_016469f8 @ 016469f8 size=1036 calls_out=9 calls_in=1
// strings: 

void FUN_016469f8(undefined4 *param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint ******ppppppuVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint ******extraout_r1;
  uint ******ppppppuVar10;
  uint ******extraout_r1_00;
  uint uVar11;
  uint *****pppppuVar12;
  uint ******ppppppuVar13;
  undefined4 uVar14;
  uint ******ppppppuVar15;
  uint uVar16;
  byte *pbVar17;
  bool bVar18;
  bool bVar19;
  uint in_fpscr;
  undefined4 extraout_s1;
  double dVar20;
  uint local_4c;
  byte *local_48;
  uint local_44;
  uint ******local_40;
  uint ******local_3c;
  uint ******local_38;
  uint ******local_30;
  uint ******local_2c;
  uint ******local_28;
  
  if (param_3 == 0) {
LAB_01646a40:
    *param_1 = 0x80000000;
    uVar3 = 0;
LAB_01646a78:
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  }
  cVar8 = *param_2;
  if (cVar8 == '+') {
    if (param_3 - 1 == 0) goto LAB_01646a40;
    cVar8 = param_2[1];
    pcVar4 = param_2 + 1;
    uVar11 = param_3 - 1;
    if (cVar8 != '+') goto LAB_01646a58;
  }
  else {
    pcVar4 = param_2;
    uVar11 = param_3;
LAB_01646a58:
    param_3 = uVar11;
    param_2 = pcVar4;
    if (cVar8 == '_') {
      *param_1 = 0x80000000;
      uVar3 = 1;
      goto LAB_01646a78;
    }
  }
  uVar14 = 0;
  if (-1 < (int)param_3) {
    uVar14 = 1;
    pbVar5 = (byte *)FUN_01298504(param_3,1);
    if (pbVar5 != (byte *)0x0) {
      uVar11 = 0;
      local_44 = 0;
      local_4c = param_3;
      local_48 = pbVar5;
      do {
        cVar8 = *param_2;
        if ((byte)(cVar8 - 0x30U) < 10) {
          if (uVar11 == local_4c) {
            FUN_006666a0(&local_4c);
            pbVar5 = local_48;
          }
          pbVar5[uVar11] = cVar8 - 0x30;
          uVar11 = uVar11 + 1;
          local_44 = uVar11;
        }
        else if (cVar8 != '_') {
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_01646d90;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
      dVar20 = (double)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      uVar14 = FUN_01be58f8(SUB84(dVar20 * 3.321928094887362 * 0.03125,0));
      pbVar5 = local_48;
      dVar20 = (double)CONCAT44(extraout_s1,uVar14);
      uVar14 = 0;
      local_40 = (uint ******)((uint)(0.0 < dVar20) * (int)(longlong)dVar20);
      if (4294967296.0 <= dVar20) {
        local_40 = (uint ******)0x0;
      }
      if (dVar20 <= -1.0) {
        local_40 = (uint ******)0x0;
      }
      bVar19 = (uint ******)0x3ffffffe < local_40;
      bVar18 = local_40 == (uint ******)0x3fffffff;
      uVar16 = (int)local_40 * 4;
      if (local_40 < (uint ******)0x40000000) {
        bVar19 = 0x7ffffffb < uVar16;
        bVar18 = uVar16 == 0x7ffffffc;
      }
      if (!bVar19 || bVar18) {
        if (uVar16 == 0) {
          local_3c = (uint ******)&SUB_00000004;
          local_40 = (uint ******)0x0;
        }
        else {
          uVar14 = 4;
          local_3c = (uint ******)FUN_01298504(uVar16,4);
          if (local_3c == (uint ******)0x0) goto LAB_01646b70;
        }
        local_38 = (uint ******)0x0;
        uVar16 = uVar11 % 9;
        if (uVar16 == 0) {
          uVar16 = 9;
        }
        if (uVar11 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d066cc);
        }
        pppppuVar12 = (uint *****)0x0;
        pbVar17 = pbVar5;
        uVar9 = uVar16;
        do {
          uVar9 = uVar9 - 1;
          pppppuVar12 = (uint *****)((uint)*pbVar17 + (int)pppppuVar12 * 10);
          pbVar17 = pbVar17 + 1;
        } while (uVar9 != 0);
        ppppppuVar10 = (uint ******)0x0;
        if (local_40 == (uint ******)0x0) {
          FUN_01a54b48(&local_40);
          ppppppuVar10 = extraout_r1;
        }
        uVar11 = uVar11 - uVar16;
        *local_3c = pppppuVar12;
        ppppppuVar13 = (uint ******)&DAT_00000001;
        local_38 = (uint ******)&DAT_00000001;
        if (uVar11 != 0) {
          ppppppuVar15 = local_3c;
          pbVar5 = pbVar5 + uVar16;
          do {
            uVar16 = uVar11;
            if (8 < uVar11) {
              uVar16 = 9;
            }
            ppppppuVar6 = ppppppuVar15 + (int)ppppppuVar13;
            bVar18 = ppppppuVar13 == (uint ******)0x0;
            if (!bVar18) {
              ppppppuVar10 = ppppppuVar6 + -1;
              bVar18 = ppppppuVar10 == (uint ******)0x0;
            }
            if ((bVar18) || (*ppppppuVar10 != (uint *****)0x0)) {
              if (ppppppuVar13 == local_40) {
                FUN_01a54b48(&local_40);
                local_3c[(int)ppppppuVar13] = (uint *****)0x0;
LAB_01646cb4:
                local_38 = (uint ******)((int)ppppppuVar13 + 1);
                ppppppuVar6 = local_3c + (int)local_38;
                ppppppuVar15 = local_3c;
                goto LAB_01646cb8;
              }
              *ppppppuVar6 = (uint *****)0x0;
              local_38 = (uint ******)((int)ppppppuVar13 + 1);
              if (ppppppuVar13 != (uint ******)&DAT_ffffffff) goto LAB_01646cb4;
            }
            else {
LAB_01646cb8:
              uVar9 = 0;
              do {
                lVar1 = ZEXT48(*ppppppuVar15) * 1000000000 + (ulonglong)uVar9;
                uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
                ppppppuVar10 = ppppppuVar15 + 1;
                *ppppppuVar15 = (uint *****)lVar1;
                ppppppuVar15 = ppppppuVar10;
              } while (ppppppuVar10 != ppppppuVar6);
            }
            ppppppuVar13 = local_38;
            ppppppuVar15 = local_3c;
            uVar11 = uVar11 - uVar16;
            pbVar17 = pbVar5 + uVar16;
            local_30 = (uint ******)0x0;
            do {
              uVar16 = uVar16 - 1;
              local_30 = (uint ******)((uint)*pbVar5 + (int)local_30 * 10);
              pbVar5 = pbVar5 + 1;
            } while (uVar16 != 0);
            FUN_0164a7b0(local_3c,local_38,&local_30,1);
            ppppppuVar10 = extraout_r1_00;
            pbVar5 = pbVar17;
          } while (uVar11 != 0);
        }
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        bVar18 = local_38 == (uint ******)0x0;
        ppppppuVar13 = local_40;
        ppppppuVar10 = (uint ******)&local_40;
        if (!bVar18) {
          ppppppuVar13 = local_3c + (int)local_38 + -1;
          bVar18 = ppppppuVar13 == (uint ******)0x0;
          ppppppuVar10 = local_3c;
        }
        if ((!bVar18) && (*ppppppuVar13 == (uint *****)0x0)) {
          iVar7 = (int)local_38 << 2;
          ppppppuVar13 = (uint ******)((uint)local_38 & 0x3fffffff);
          do {
            ppppppuVar15 = ppppppuVar13;
            if (iVar7 == 0) {
              ppppppuVar15 = (uint ******)0x0;
              goto LAB_01646de0;
            }
            iVar2 = iVar7 + -4;
            iVar7 = iVar7 + -4;
            ppppppuVar13 = (uint ******)((int)ppppppuVar15 + -1);
          } while (*(int *)((int)ppppppuVar10 + iVar2) == 0);
          if (ppppppuVar15 <= local_38) {
LAB_01646de0:
            local_28 = ppppppuVar15;
          }
        }
        if ((local_28 < (uint ******)((uint)local_40 >> 2)) &&
           (iVar7 = FUN_0164bb38(&local_30), iVar7 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        pbVar5 = local_48;
LAB_01646d90:
        FUN_0134bd64(local_4c,pbVar5);
        return;
      }
LAB_01646b70:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,uVar16);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar14,param_3);
}

