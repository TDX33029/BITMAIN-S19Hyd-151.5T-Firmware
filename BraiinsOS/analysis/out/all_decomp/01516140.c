// FUN_01516140 @ 01516140 size=1140 calls_out=9 calls_in=1
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffc4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01516140(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_r4;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint local_68;
  uint local_64;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined2 local_42;
  byte local_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  byte local_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  
  local_3c = CONCAT13(local_3c._3_1_,CONCAT21(local_3c._1_2_,(undefined1)local_3c));
  FUN_0152d84c(&local_40,&DAT_018a7720,param_2);
  if (local_40 != 0x18) {
    *(byte *)(param_1 + 1) = local_40;
    *(undefined1 *)((int)param_1 + 7) = uStack_3d;
    *(undefined2 *)((int)param_1 + 5) = uStack_3f;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    *param_1 = 1;
    return;
  }
  local_58 = local_3c;
  uVar19 = param_2[1];
  uVar15 = param_2[2];
  if (uVar19 - uVar15 < local_3c) {
    param_1[1] = 0xb;
    param_1[2] = local_3c;
    *param_1 = 1;
    param_1[3] = 0;
    return;
  }
  uVar11 = uVar15 + local_3c;
  param_2[2] = uVar11;
  if ((CARRY4(uVar15,local_3c)) || (uVar19 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar15,uVar11,uVar19,&DAT_018a78f8);
  }
  local_5c = *param_2 + uVar15;
  if (local_3c == 0) {
    uVar15 = 0x80000003;
  }
  else {
    uVar15 = 0x80000003;
    local_64 = 0;
    uVar11 = 0;
    do {
      if (local_58 == uVar11) {
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(char *)((int)param_1 + 5) = (char)uVar19;
        *(undefined1 *)(param_1 + 1) = 0xc;
        param_1[2] = &DAT_0040bd1b;
        param_1[3] = 0xe;
LAB_015164f8:
        *param_1 = 1;
        if (uVar15 == 0x80000003) {
          return;
        }
        goto LAB_0151654c;
      }
      local_54 = uVar11 + 1;
      if (local_58 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c();
      }
      if (*(char *)(local_5c + uVar11) != '\0') {
        if (local_58 < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(local_54,local_58,local_58,&DAT_018a78e8);
        }
        break;
      }
      FUN_015409a4(&local_40,&local_5c);
      uVar17 = local_34;
      uVar11 = local_38;
      uVar19 = local_3c;
      if (CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40)) != 0) {
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[3] = local_34;
        goto LAB_015164f8;
      }
      FUN_00fab1e0(&local_50,local_38,local_34);
      uVar4 = local_48;
      uVar5 = local_4c;
      if (local_50 == 0) {
        iVar13 = FUN_015746e4(local_4c,local_48);
        uVar8 = local_28;
        bVar2 = local_2c;
        if (iVar13 != 0) {
          local_28 = (undefined1)uVar4;
          uVar9 = local_28;
          local_2c = (byte)uVar5;
          bVar7 = local_2c;
          if (uVar4 < 0x10) {
            local_3c._1_2_ = (undefined2)(uVar4 >> 8);
            local_3c._3_1_ = (undefined1)(uVar4 >> 0x18);
            uStack_3f = (undefined2)(uVar5 >> 8);
            uStack_3d = (undefined1)(uVar5 >> 0x18);
            local_40 = local_2c;
            local_2c = bVar2;
            local_28 = uVar8;
            FUN_01572350(&local_2c,&local_40);
            if ((local_3c != 0) || ((local_2c & 1) == 0)) goto LAB_015162ec;
            uVar14 = CONCAT13(local_28,CONCAT21(uStack_2a,uStack_2b));
          }
          else {
LAB_015162ec:
            uStack_27 = (undefined1)(uVar4 >> 8);
            uStack_26 = (undefined2)(uVar4 >> 0x10);
            uStack_2b = (undefined1)(uVar5 >> 8);
            uStack_2a = (undefined2)(uVar5 >> 0x10);
            local_2c = bVar7;
            local_28 = uVar9;
            FUN_01572950(&local_40,&local_2c);
            if (local_40 != 0) goto LAB_015162b0;
            uVar14 = CONCAT13((undefined1)local_3c,CONCAT12(uStack_3d,uStack_3f));
            local_42 = local_3c._1_2_;
          }
          iVar13 = 1;
          local_2c = (byte)uVar14;
          uStack_2b = (undefined1)((uint)uVar14 >> 8);
          uStack_2a = (undefined2)((uint)uVar14 >> 0x10);
          local_28 = (undefined1)local_42;
          uStack_27 = (undefined1)((ushort)local_42 >> 8);
          goto joined_r0x015163e4;
        }
        uStack_2a = 0;
        local_28 = 0;
        uStack_27 = 0x80;
        local_50 = 0x80000000;
        local_4c = uVar5;
        local_48 = uVar4;
        FUN_01574b00(&local_40,&local_50);
        uVar17 = local_38;
        uVar6 = local_3c;
        uVar4 = CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40));
        if ((local_50 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        if (uVar19 != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
        bVar3 = true;
        iVar13 = 0;
        uVar19 = uVar4;
        uVar11 = uVar6;
        uVar5 = local_48;
      }
      else {
LAB_015162b0:
        iVar13 = 2;
joined_r0x015163e4:
        bVar3 = false;
        uVar5 = local_48;
      }
      local_48 = uVar17;
      if (uVar15 != 0x80000003) {
        *param_1 = 1;
        *(undefined1 *)(param_1 + 1) = 9;
        if (bVar3) {
          uVar19 = uVar19 & 0x7fffffff;
        }
        if (uVar19 != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
LAB_0151654c:
        uVar19 = uVar15;
        if (uVar15 < 0x80000001) {
          uVar19 = 0;
        }
        if ((uVar19 & 0x7fffffff) != 0) {
          return;
        }
        if ((uVar15 & 0x7fffffff) == 0) {
          return;
        }
        if (local_68 == 0) {
          return;
        }
        iVar13 = FUN_016d3bc8();
        uVar19 = *(byte *)(local_68 - 3) & 0x1f;
        if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
           (uVar15 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar12 = uVar15 - 0x10, uVar15 == 0)) {
          iVar12 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar15 = (uint)(*(byte *)(local_68 - 3) >> 5);
        iVar18 = *(int *)(iVar13 + 8) + 0x10;
        iVar16 = iVar12 * uVar19 + iVar12 + -4;
        iVar12 = iVar18 + iVar16;
        if (4 < uVar15) {
          if (uVar15 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar15 = *(uint *)(iVar12 + -4);
          if (uVar15 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if (iVar12 - local_68 < uVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 - uVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar18 + iVar16) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar13 + 0x14);
        uVar15 = 1 << uVar19;
        *(undefined1 *)(local_68 - 3) = 0xff;
        *(undefined2 *)(local_68 - 2) = 0;
        do {
          uVar17 = *(uint *)(iVar13 + 0x10);
          uVar11 = *(uint *)(iVar13 + 0xc) | uVar17;
          if ((uVar15 & uVar11) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar17 == 0) || (uVar11 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar13,uVar19);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar10 = (undefined4 *)FUN_016d2bc8();
            uVar14 = *puVar10;
            FUN_016d6ac4(CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)),unaff_r4);
            *puVar10 = uVar14;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar13 + 0x10) = uVar15 + uVar17;
            return;
          }
          puVar20 = (uint *)(iVar13 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar20);
            uVar11 = *puVar20;
            if (uVar17 != uVar11) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar20);
          } while (!bVar3);
          *puVar20 = uVar15 + uVar17;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar17 == uVar11) {
            return;
          }
        } while( true );
      }
      if (iVar13 == 0) {
        local_50 = uVar19;
        local_4c = uVar11;
        FUN_01574b00(&local_40,&local_50);
        uVar15 = CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40));
        uVar19 = uVar19 & 0x7fffffff;
        local_68 = local_3c;
        local_64 = local_38;
      }
      else {
        local_48 = uVar5;
        if (iVar13 == 1) {
          uVar15 = 0x80000001;
        }
        else {
          uVar15 = 0x80000002;
        }
      }
      if (uVar19 != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      uVar19 = 0;
      uVar11 = local_54;
    } while (local_54 < local_58);
  }
  if (uVar15 == 0x80000003) {
    uVar15 = 0x80000002;
  }
  *param_1 = 0;
  param_1[1] = uVar15;
  param_1[2] = local_68;
  param_1[3] = local_64;
  return;
}

