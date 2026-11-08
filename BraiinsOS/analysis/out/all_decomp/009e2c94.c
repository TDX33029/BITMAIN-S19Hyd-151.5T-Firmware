// FUN_009e2c94 @ 009e2c94 size=2220 calls_out=15 calls_in=0
// strings: lock poisonedPatternIDError | Span not found; this is a bugnewtime.busytime.idleenter

void FUN_009e2c94(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int ******ppppppiVar11;
  uint uVar12;
  int *******pppppppiVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int ******ppppppiVar20;
  ulonglong uVar21;
  int local_98;
  uint local_80 [2];
  uint local_78;
  uint local_74;
  int local_70;
  uint *local_68;
  int local_64;
  uint *local_60;
  int local_5c;
  undefined4 local_58;
  int *******local_50;
  undefined *local_4c;
  undefined4 local_48;
  uint local_44;
  int *******local_40;
  code *local_3c;
  uint *local_38;
  uint local_34;
  undefined4 local_30;
  
  iVar3 = *param_2;
  iVar7 = param_2[1];
  uVar8 = *(undefined4 *)(param_1 + 0x11c);
  uVar14 = *(undefined4 *)(param_1 + 0x118);
  FUN_009f418c(local_80,iVar7,param_5,param_6,param_7);
  if ((local_80[0] & 1) == 0) {
    return;
  }
  puVar9 = (uint *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x30);
  if (uVar4 < 0x3ffffffe) {
    if (*puVar9 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_009e341c;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar2) goto LAB_009e341c;
    *puVar9 = uVar4 + 1;
    DataMemoryBarrier(0xb);
    if (*(char *)(param_1 + 0x38) == '\0') goto LAB_009e2d38;
LAB_009e3434:
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar3 = FUN_015bf3f8(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_0186b84c);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar4 - 1;
    if ((uVar4 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_015e9814(puVar9);
    }
  }
  else {
LAB_009e341c:
    FUN_015bebb8(puVar9);
    if (*(char *)(param_1 + 0x38) != '\0') goto LAB_009e3434;
LAB_009e2d38:
    if (*(int *)(param_1 + 0x4c) != 0) {
      iVar18 = *param_2;
      iVar19 = param_2[1];
      uVar5 = FUN_009ee3b8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),iVar18,
                           iVar19,iVar3,iVar7,uVar14,uVar8);
      uVar4 = uVar5 >> 0x19;
      iVar3 = *(int *)(param_1 + 0x40);
      iVar7 = 0;
      while( true ) {
        uVar5 = *(uint *)(param_1 + 0x44) & uVar5;
        uVar16 = *(uint *)(iVar3 + uVar5);
        uVar6 = uVar16 ^ uVar4 * 0x1010101;
        uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
        while (uVar6 != 0) {
          uVar12 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                          (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   *(uint *)(param_1 + 0x44);
          piVar15 = (int *)(iVar3 + -0x18 + uVar12 * -0x18);
          uVar6 = uVar6 - 1 & uVar6;
          if (iVar18 == *piVar15 && iVar19 == piVar15[1]) {
            iVar3 = iVar3 + uVar12 * -0x18;
            iVar7 = *(int *)(iVar3 + -4);
            if (iVar7 != 0) {
              ppppppiVar20 = *(int *******)(iVar3 + -8);
              ppppppiVar11 = ppppppiVar20 + iVar7 * 10;
              piVar15 = (int *)*param_3;
              do {
                local_40 = (int *******)ppppppiVar20;
                if (piVar15[1] != 0) {
                  iVar7 = *(int *)(piVar15[2] + 8);
                  iVar3 = piVar15[1] * 0xc;
                  piVar17 = (int *)(*piVar15 + 4);
                  do {
                    if ((*(int *)(piVar17[-1] + 8) == iVar7) && (*piVar17 != 0)) {
                      (**(code **)(piVar17[1] + 0xc))(*piVar17,piVar17[-1],&local_40,&DAT_018ae7fc);
                    }
                    piVar17 = piVar17 + 3;
                    iVar3 = iVar3 + -0xc;
                  } while (iVar3 != 0);
                }
                ppppppiVar20 = ppppppiVar20 + 10;
              } while (ppppppiVar20 != ppppppiVar11);
            }
            goto LAB_009e2ee0;
          }
        }
        if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
        iVar7 = iVar7 + 4;
        uVar5 = uVar5 + iVar7;
      }
    }
LAB_009e2ee0:
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar4 - 1;
    if ((uVar4 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_015e9814(puVar9);
    }
  }
  if (local_70 == 0) {
LAB_009e352c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b5dc);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13a);
  FUN_016a4f80(&local_68,local_70,*param_2 + -1);
  if (local_68 == (uint *)0x0) goto LAB_009e352c;
  local_34 = local_64;
  local_30 = local_60;
  local_3c = (code *)0x0;
  local_40 = (int *******)0x0;
  local_38 = local_68;
  if ((*local_68 & local_78) != 0 || (local_68[1] & local_74) != 0) {
    FUN_009ee6c0();
    goto LAB_009e352c;
  }
  local_58 = local_60;
  local_5c = local_64;
  local_60 = local_68;
  uVar21 = FUN_016a11a4(local_68);
  puVar9 = (uint *)uVar21;
  if (puVar9[6] != 0) {
    uVar4 = puVar9[3];
    uVar5 = puVar9[4];
    local_98 = 0;
    uVar6 = uVar5 & 0xb36486b9;
    while( true ) {
      uVar16 = *(uint *)(uVar4 + uVar6);
      uVar12 = (uVar16 & 0x80808080 ^ 0x80808080) & (uVar16 ^ 0x59595959) + 0xfefefeff;
      while (uVar12 != 0) {
        uVar10 = uVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar5
        ;
        piVar15 = (int *)((uVar4 - 0x18) + uVar10 * -0x18);
        uVar12 = uVar12 - 1 & uVar12;
        if ((*piVar15 == -0xa1a2068 && piVar15[2] == -0x4c9b7947) &&
            (piVar15[1] == 0x66389fa0 && piVar15[3] == 0x2259fa41)) {
          iVar3 = uVar4 + uVar10 * -0x18;
          pppppppiVar13 = *(int ********)(iVar3 + -8);
          (**(code **)(*(int *)(iVar3 + -4) + 0xc))(&local_40,pppppppiVar13);
          if ((local_40 != (int *******)0xf5e5df98 || local_38 != (uint *)0xb36486b9) ||
              (local_3c != (code *)0x66389fa0 || local_34 != 0x2259fa41)) goto LAB_009e3214;
          ppppppiVar11 = pppppppiVar13[2];
          if (ppppppiVar11 != (int ******)0x0) {
            ppppppiVar20 = ppppppiVar11;
            if (*pppppppiVar13 == ppppppiVar11) {
              FUN_009f4d18(pppppppiVar13,ppppppiVar11,1,1,1);
              ppppppiVar20 = pppppppiVar13[2];
            }
            *(undefined1 *)((int)pppppppiVar13[1] + (int)ppppppiVar20) = 0x20;
            pppppppiVar13[2] = (int ******)((int)ppppppiVar11 + 1);
          }
          local_34 = CONCAT22(local_34._2_2_,1);
          local_38 = (uint *)CONCAT31(local_38._1_3_,*(undefined1 *)(pppppppiVar13 + 3));
          param_3 = (int *)*param_3;
          local_3c = (code *)&DAT_0186b3dc;
          local_40 = pppppppiVar13;
          if (param_3[1] != 0) {
            iVar7 = *(int *)(param_3[2] + 8);
            piVar15 = (int *)(*param_3 + 4);
            iVar3 = param_3[1] * 0xc;
            do {
              if ((*(int *)(piVar15[-1] + 8) == iVar7) && (*piVar15 != 0)) {
                (**(code **)(piVar15[1] + 0xc))(*piVar15,piVar15[-1],&local_40,&DAT_0186b4f8);
              }
              piVar15 = piVar15 + 3;
              iVar3 = iVar3 + -0xc;
            } while (iVar3 != 0);
          }
          goto LAB_009e3314;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      local_98 = local_98 + 4;
      uVar6 = uVar6 + local_98 & uVar5;
    }
  }
LAB_009e3214:
  local_48 = 0;
  local_40 = (int *******)&local_50;
  local_50 = (int *******)0x0;
  local_44 = local_44 & 0xffffff00;
  local_4c = (undefined *)0x1;
  param_3 = (int *)*param_3;
  local_34 = CONCAT22(local_34._2_2_,1);
  local_38 = (uint *)CONCAT31(local_38._1_3_,uVar1);
  local_3c = (code *)&DAT_0186b53c;
  if (param_3[1] != 0) {
    iVar7 = *(int *)(param_3[2] + 8);
    piVar15 = (int *)(*param_3 + 4);
    iVar3 = param_3[1] * 0xc;
    do {
      if ((*(int *)(piVar15[-1] + 8) == iVar7) && (*piVar15 != 0)) {
        (**(code **)(piVar15[1] + 0xc))(*piVar15,piVar15[-1],&local_40,&DAT_0186b4f8);
      }
      piVar15 = piVar15 + 3;
      iVar3 = iVar3 + -0xc;
    } while (iVar3 != 0);
    if ((local_34 & 0x100) != 0) {
      if (local_50 != (int *******)0x0) {
        thunk_FUN_016d3fb4(local_4c);
      }
      goto LAB_009e3314;
    }
  }
  local_44 = CONCAT31(local_44._1_3_,uVar1);
  local_40 = local_50;
  local_3c = (code *)local_4c;
  local_38 = (uint *)local_48;
  local_34 = local_44;
  FUN_009fdcf8(puVar9,&local_40);
LAB_009e3314:
  if ((((uVar21 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(puVar9 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar9;
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = uVar4 + 0xc0000001;
  if (0x3fffffff < uVar4 + 0xc0000001) {
    FUN_015e9814(puVar9);
  }
  uVar4 = local_60[0xe];
  DataMemoryBarrier(0xb);
  puVar9 = local_60 + 0xe;
  do {
    if ((uVar4 & 3) == 2) {
      local_50 = (int *******)0x2;
      local_3c = FUN_00facc48;
      local_40 = (int *******)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
    }
    uVar6 = (uVar4 & 0x3fffffff) >> 2;
    uVar12 = uVar4 & 3 ^ 1;
    uVar5 = uVar4 & 0xc0000000 | 3;
    uVar16 = uVar6 ^ 1;
    if (uVar12 != 0 || uVar16 != 0) {
      uVar5 = uVar6 * 4 - 4 | uVar4 & 0xc0000003;
    }
    uVar6 = *puVar9;
    if (*puVar9 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar9);
        if (bVar2) {
          *puVar9 = uVar5;
          DataMemoryBarrier(0xb);
          if (uVar12 == 0 && uVar16 == 0) {
            FUN_009ebe80(local_5c,local_58);
            return;
          }
          return;
        }
        uVar6 = *puVar9;
      } while (*puVar9 == uVar4);
    }
    uVar4 = uVar6;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

