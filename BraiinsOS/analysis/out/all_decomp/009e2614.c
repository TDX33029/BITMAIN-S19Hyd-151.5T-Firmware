// FUN_009e2614 @ 009e2614 size=1528 calls_out=12 calls_in=0
// strings: Span not found; this is a bugnewtime.busytime.idleenter

void FUN_009e2614(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  int *****pppppiVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int ******ppppppiVar9;
  uint uVar10;
  int *piVar11;
  int *****pppppiVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_9c;
  uint local_80 [2];
  uint *local_78;
  uint local_74;
  int local_70;
  uint *local_68;
  uint local_64;
  uint *local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int ******local_50;
  undefined *local_4c;
  undefined4 local_48;
  uint local_44;
  int ******local_40;
  code *local_3c;
  uint *local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar14 = *param_2;
  FUN_009f418c(local_80,*(undefined4 *)(param_1 + 0x2c),param_5,param_6,param_7);
  if ((local_80[0] & 1) == 0) {
    return;
  }
  if (local_70 == 0) {
LAB_009e2bf4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b5dc);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x16);
  FUN_016a4f80(&local_68,local_70,iVar14 + -1);
  puVar3 = local_68;
  if (local_68 == (uint *)0x0) goto LAB_009e2bf4;
  local_34 = local_64;
  local_30 = local_60;
  local_3c = (code *)0x0;
  local_40 = (int ******)0x0;
  local_2c = local_70;
  local_38 = local_68;
  if ((*local_68 & (uint)local_78) != 0 || (local_68[1] & local_74) != 0) {
    FUN_009ee6c0();
    goto LAB_009e2bf4;
  }
  local_58 = local_60;
  local_68 = local_78;
  local_5c = local_64;
  local_54 = local_70;
  local_60 = puVar3;
  local_64 = local_74;
  uVar16 = FUN_016a11a4(puVar3);
  puVar3 = (uint *)uVar16;
  if (puVar3[6] != 0) {
    uVar4 = puVar3[3];
    uVar10 = puVar3[4];
    local_9c = 0;
    uVar6 = uVar10 & 0xb36486b9;
    while( true ) {
      uVar7 = *(uint *)(uVar4 + uVar6);
      uVar15 = (uVar7 & 0x80808080 ^ 0x80808080) & (uVar7 ^ 0x59595959) + 0xfefefeff;
      while (uVar15 != 0) {
        uVar8 = uVar6 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) & uVar10
        ;
        piVar11 = (int *)((uVar4 - 0x18) + uVar8 * -0x18);
        uVar15 = uVar15 - 1 & uVar15;
        if ((*piVar11 == -0xa1a2068 && piVar11[2] == -0x4c9b7947) &&
            (piVar11[1] == 0x66389fa0 && piVar11[3] == 0x2259fa41)) {
          iVar14 = uVar4 + uVar8 * -0x18;
          ppppppiVar9 = *(int *******)(iVar14 + -8);
          (**(code **)(*(int *)(iVar14 + -4) + 0xc))(&local_40,ppppppiVar9);
          if ((local_40 != (int ******)0xf5e5df98 || local_38 != (uint *)0xb36486b9) ||
              (local_3c != (code *)0x66389fa0 || local_34 != 0x2259fa41)) goto LAB_009e2970;
          pppppiVar12 = ppppppiVar9[2];
          if (pppppiVar12 != (int *****)0x0) {
            pppppiVar5 = pppppiVar12;
            if (*ppppppiVar9 == pppppiVar12) {
              FUN_009f4d18(ppppppiVar9,pppppiVar12,1,1,1);
              pppppiVar5 = ppppppiVar9[2];
            }
            *(undefined1 *)((int)ppppppiVar9[1] + (int)pppppiVar5) = 0x20;
            ppppppiVar9[2] = (int *****)((int)pppppiVar12 + 1);
          }
          local_34 = CONCAT22(local_34._2_2_,1);
          local_38 = (uint *)CONCAT31(local_38._1_3_,*(undefined1 *)(ppppppiVar9 + 3));
          param_3 = (int *)*param_3;
          local_3c = (code *)&DAT_0186b3dc;
          local_40 = ppppppiVar9;
          if (param_3[1] != 0) {
            iVar13 = *(int *)(param_3[2] + 8);
            piVar11 = (int *)(*param_3 + 4);
            iVar14 = param_3[1] * 0xc;
            do {
              if ((*(int *)(piVar11[-1] + 8) == iVar13) && (*piVar11 != 0)) {
                (**(code **)(piVar11[1] + 0xc))(*piVar11,piVar11[-1],&local_40,&DAT_0186b4f8);
              }
              piVar11 = piVar11 + 3;
              iVar14 = iVar14 + -0xc;
            } while (iVar14 != 0);
          }
          goto LAB_009e2a70;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_9c = local_9c + 4;
      uVar6 = uVar6 + local_9c & uVar10;
    }
  }
LAB_009e2970:
  local_48 = 0;
  local_40 = (int ******)&local_50;
  local_50 = (int ******)0x0;
  local_44 = local_44 & 0xffffff00;
  local_4c = (undefined *)0x1;
  param_3 = (int *)*param_3;
  local_34 = CONCAT22(local_34._2_2_,1);
  local_38 = (uint *)CONCAT31(local_38._1_3_,uVar1);
  local_3c = (code *)&DAT_0186b53c;
  if (param_3[1] != 0) {
    iVar13 = *(int *)(param_3[2] + 8);
    piVar11 = (int *)(*param_3 + 4);
    iVar14 = param_3[1] * 0xc;
    do {
      if ((*(int *)(piVar11[-1] + 8) == iVar13) && (*piVar11 != 0)) {
        (**(code **)(piVar11[1] + 0xc))(*piVar11,piVar11[-1],&local_40,&DAT_0186b4f8);
      }
      piVar11 = piVar11 + 3;
      iVar14 = iVar14 + -0xc;
    } while (iVar14 != 0);
    if ((local_34 & 0x100) != 0) {
      if (local_50 != (int ******)0x0) {
        thunk_FUN_016d3fb4(local_4c);
      }
      goto LAB_009e2a70;
    }
  }
  local_44 = CONCAT31(local_44._1_3_,uVar1);
  local_40 = local_50;
  local_3c = (code *)local_4c;
  local_38 = (uint *)local_48;
  local_34 = local_44;
  FUN_009fdcf8(puVar3,&local_40);
LAB_009e2a70:
  if ((((uVar16 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
    *(undefined1 *)(puVar3 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar3;
    bVar2 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar2);
  *puVar3 = uVar4 + 0xc0000001;
  if (0x3fffffff < uVar4 + 0xc0000001) {
    FUN_015e9814(puVar3);
  }
  uVar4 = local_60[0xe];
  DataMemoryBarrier(0xb);
  puVar3 = local_60 + 0xe;
  do {
    if ((uVar4 & 3) == 2) {
      local_50 = (int ******)0x2;
      local_3c = FUN_00facc48;
      local_40 = (int ******)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
    }
    uVar10 = (uVar4 & 0x3fffffff) >> 2;
    uVar15 = uVar4 & 3 ^ 1;
    uVar6 = uVar4 & 0xc0000000 | 3;
    uVar7 = uVar10 ^ 1;
    if (uVar15 != 0 || uVar7 != 0) {
      uVar6 = uVar10 * 4 - 4 | uVar4 & 0xc0000003;
    }
    uVar10 = *puVar3;
    if (*puVar3 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar3);
        if (bVar2) {
          *puVar3 = uVar6;
          DataMemoryBarrier(0xb);
          if (uVar15 == 0 && uVar7 == 0) {
            FUN_009ebe80(local_5c,local_58);
            return;
          }
          return;
        }
        uVar10 = *puVar3;
      } while (*puVar3 == uVar4);
    }
    uVar4 = uVar10;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

