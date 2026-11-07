// FUN_01525ed4 @ 01525ed4 size=1116 calls_out=13 calls_in=33
// strings: 

void FUN_01525ed4(int param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  int unaff_r4;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint local_f0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a4;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*(char *)(param_1 + 0x259) == '\x01') {
    if (*param_2 == 0x80000001) {
      *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)((int)param_2 + 6);
      return;
    }
    local_a8 = 0;
    local_ac = 1;
    local_b0 = 0;
    FUN_01522638(param_2,&local_b0);
    iVar6 = local_a8;
    uVar4 = local_ac;
    uVar7 = local_b0;
    uVar9 = *(uint *)(param_1 + 0x80);
    uVar13 = *(uint *)(param_1 + 0x8c);
    if (uVar13 == uVar9) {
      FUN_015610a8();
      uVar9 = *(uint *)(param_1 + 0x80);
      uVar13 = *(uint *)(param_1 + 0x8c);
    }
    uVar14 = *(int *)(param_1 + 0x88) + uVar13;
    *(uint *)(param_1 + 0x8c) = uVar13 + 1;
    uVar13 = uVar14 - uVar9;
    if (uVar14 < uVar9) {
      uVar13 = uVar14;
    }
    puVar5 = (undefined1 *)(*(int *)(param_1 + 0x84) + uVar13 * 0x10);
    *puVar5 = (char)param_3;
    *(undefined4 *)(puVar5 + 4) = uVar7;
    *(undefined4 *)(puVar5 + 8) = uVar4;
    *(int *)(puVar5 + 0xc) = iVar6;
    iVar6 = *param_2 + 0x7fffffff;
    if (iVar6 != 0) {
      if (*param_2 < 0x80000001) {
        iVar6 = 1;
      }
      switch(iVar6) {
      case 0:
      case 3:
        break;
      case 1:
        FUN_01522a2c(param_2 + 3);
        if (*param_2 != 0x80000000 && *param_2 != 0) {
LAB_014b47f4:
          uVar9 = param_2[1];
          if (uVar9 == 0) {
            return;
          }
          iVar6 = FUN_016d3bc8();
          uVar13 = *(byte *)(uVar9 - 3) & 0x1f;
          if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
             (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar17 = uVar14 - 0x10, uVar14 == 0)) {
            iVar17 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar14 = (uint)(*(byte *)(uVar9 - 3) >> 5);
          iVar20 = *(int *)(iVar6 + 8) + 0x10;
          iVar19 = iVar17 * uVar13 + iVar17 + -4;
          iVar17 = iVar20 + iVar19;
          if (4 < uVar14) {
            if (uVar14 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar14 = *(uint *)(iVar17 + -4);
            if (uVar14 < 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar1)();
            }
            if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar1)();
            }
          }
          if (iVar17 - uVar9 < uVar14) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar17 - uVar14) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar20 + iVar19) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar6 + 0x14);
          uVar14 = 1 << uVar13;
          *(undefined1 *)(uVar9 - 3) = 0xff;
          *(undefined2 *)(uVar9 - 2) = 0;
          do {
            uVar18 = *(uint *)(iVar6 + 0x10);
            uVar9 = *(uint *)(iVar6 + 0xc) | uVar18;
            if ((uVar14 & uVar9) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar18 == 0) || (uVar9 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&local_28,iVar6,uVar13);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar8 = (undefined4 *)FUN_016d2bc8();
              uVar7 = *puVar8;
              FUN_016d6ac4(local_28,unaff_r4);
              *puVar8 = uVar7;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar6 + 0x10) = uVar14 + uVar18;
              return;
            }
            puVar16 = (uint *)(iVar6 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar16);
              uVar9 = *puVar16;
              if (uVar18 != uVar9) goto LAB_016d409c;
              bVar3 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar3);
            *puVar16 = uVar14 + uVar18;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar18 == uVar9) {
              return;
            }
          } while( true );
        }
        break;
      default:
        param_2 = param_2 + 1;
        if (*param_2 != 0x80000000 && *param_2 != 0) goto LAB_014b47f4;
      }
    }
  }
  else {
    if (param_3 != 0) {
      FUN_016dd1aa(&local_b0,param_2,0x7c);
      FUN_0152245c(&local_c8,&local_b0);
      FUN_01526458(param_1,&local_c8);
      return;
    }
    FUN_016dd1aa(&local_b0,param_2,0x7c);
    FUN_0152245c(&local_dc,&local_b0);
    uVar13 = *(uint *)(param_1 + 0x244);
    iVar6 = local_d8;
    for (uVar9 = local_d4; uVar9 != 0; uVar9 = uVar9 - uVar14) {
      uVar14 = uVar13;
      if (uVar9 < uVar13) {
        uVar14 = uVar9;
      }
      uVar18 = uVar14 + 5;
      uVar7 = 0;
      local_ac = 0;
      local_a8 = iVar6;
      local_a4 = uVar14;
      if ((int)uVar18 < 0) {
LAB_01526338:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,local_f0);
      }
      if (uVar18 == 0) {
        local_c4 = 1;
        local_c8 = 0;
LAB_0152610c:
        local_f0 = local_c4;
        local_c0 = 0;
        FUN_0154e5f8(&local_c8,0,5,1,1);
      }
      else {
        local_f0 = thunk_FUN_016d4a50(uVar18);
        if (local_f0 == 0) {
          uVar7 = 1;
          local_f0 = uVar18;
          goto LAB_01526338;
        }
        local_c0 = 0;
        local_c8 = uVar18;
        local_c4 = local_f0;
        if (uVar18 < 5) goto LAB_0152610c;
      }
      *(undefined4 *)(local_c4 + local_c0) = 0;
      local_30 = local_c8;
      local_28 = local_c0 + 5;
      *(undefined1 *)((undefined4 *)(local_c4 + local_c0) + 1) = 0;
      local_2c = local_c4;
      FUN_01533c94(&local_ac,&local_30);
      local_c8 = local_30;
      local_c4 = local_2c;
      local_c0 = local_28;
      iVar20 = *(int *)(param_1 + 0x234);
      iVar19 = *(int *)(param_1 + 0x238);
      iVar17 = *(int *)(param_1 + 0x23c);
      *(undefined4 *)(param_1 + 0x234) = 0x80000000;
      if (iVar20 != -0x80000000) {
        if (iVar17 == 0) {
          if (iVar20 != 0) {
            thunk_FUN_016d3fb4(iVar19);
          }
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x1fc);
          uVar10 = *(uint *)(param_1 + 0x208);
          if (uVar10 == uVar18) {
            FUN_01561020(param_1 + 0x1fc);
            uVar18 = *(uint *)(param_1 + 0x1fc);
            uVar10 = *(uint *)(param_1 + 0x208);
          }
          uVar11 = *(int *)(param_1 + 0x204) + uVar10;
          *(uint *)(param_1 + 0x208) = uVar10 + 1;
          uVar10 = uVar11 - uVar18;
          if (uVar11 < uVar18) {
            uVar10 = uVar11;
          }
          piVar15 = (int *)(*(int *)(param_1 + 0x200) + uVar10 * 0xc);
          *piVar15 = iVar20;
          piVar15[1] = iVar19;
          piVar15[2] = iVar17;
        }
      }
      FUN_01533edc(&local_30,&local_c8);
      if (local_28 == 0) {
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(local_2c);
        }
      }
      else {
        uVar18 = *(uint *)(param_1 + 0x1fc);
        uVar10 = *(uint *)(param_1 + 0x208);
        if (uVar10 == uVar18) {
          FUN_01561020(param_1 + 0x1fc);
          uVar18 = *(uint *)(param_1 + 0x1fc);
          uVar10 = *(uint *)(param_1 + 0x208);
        }
        uVar12 = *(int *)(param_1 + 0x204) + uVar10;
        uVar11 = uVar12 - uVar18;
        if (uVar12 < uVar18) {
          uVar11 = uVar12;
        }
        *(uint *)(param_1 + 0x208) = uVar10 + 1;
        puVar16 = (uint *)(*(int *)(param_1 + 0x200) + uVar11 * 0xc);
        *puVar16 = local_30;
        puVar16[1] = local_2c;
        puVar16[2] = local_28;
      }
      iVar6 = iVar6 + uVar14;
    }
    if ((local_dc & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_d8);
      return;
    }
  }
  return;
}

