// FUN_0155f4c0 @ 0155f4c0 size=1548 calls_out=13 calls_in=0
// strings: 

void FUN_0155f4c0(int *param_1,uint *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int iVar12;
  int unaff_r4;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  uint local_154;
  uint local_150;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint uStack_120;
  undefined1 auStack_118 [96];
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b4;
  undefined1 local_b2;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  byte local_98;
  undefined2 local_97;
  undefined1 local_95;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int *local_84;
  undefined4 uStack_28;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0155f4f4;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0155f4f4:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    uVar19 = 0;
    if ((char)param_1[1] == '\0') goto LAB_0155f520;
  }
  else {
    uVar19 = FUN_015bf3f8();
    uVar19 = uVar19 ^ 1;
    if ((char)param_1[1] == '\0') {
LAB_0155f520:
      if ((char)*param_2 == '\0') {
        uVar16 = param_2[3];
        uVar5 = param_2[2];
        if (param_2[1] == 0x80000000) {
          local_12c = 0x80000000;
          uVar8 = uVar5;
        }
        else {
          if (uVar16 == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = thunk_FUN_016d4a50(uVar16);
            if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar16);
            }
          }
          FUN_016dd1aa(uVar8,uVar5,uVar16);
          local_12c = uVar16;
        }
        local_130 = local_130 & 0xffffff00;
        local_128 = uVar8;
        local_124 = uVar16;
      }
      else {
        local_130 = *param_2;
        local_12c = param_2[1];
        uStack_120 = param_2[4];
        local_128 = param_2[2];
        local_124 = param_2[3];
      }
      FUN_016dd1aa(auStack_118,param_3,0x60);
      FUN_01532be4(&local_a0,param_1 + 6,&local_130);
      uVar16 = local_a0;
      if (local_98 == 2) {
        iVar13 = local_a0 - 0x68;
        if (*(int *)(local_a0 - 0x44) != -0x80000000) {
          FUN_0155e9e8(iVar13);
          param_3 = auStack_118;
        }
        FUN_016dd1aa(iVar13,param_3,0x60);
      }
      else {
        local_b6 = local_95;
        local_b2 = local_95;
        local_b8 = local_97;
        local_b4 = local_97;
        bVar4 = local_a0._3_1_;
        if ((local_98 & 1) == 0) {
          uVar18 = 0;
          if (local_94 == 0x80000000) {
            local_150 = 0x80000000;
            local_154 = local_90;
          }
          else {
            if (local_8c == 0) {
              local_154 = 1;
            }
            else {
              local_154 = thunk_FUN_016d4a50(local_8c);
              if (local_154 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_8c);
              }
            }
            FUN_016dd1aa(local_154,local_90,local_8c);
            local_150 = local_8c;
          }
        }
        else {
          uVar18 = 1;
          local_154 = local_90;
          local_a0 = CONCAT22(CONCAT11(local_a0._3_1_,local_95),local_97);
          local_150 = local_94;
        }
        uVar5 = param_1[2];
        uVar8 = param_1[5];
        if (uVar8 == uVar5) {
          FUN_0155e8e0(param_1 + 2);
          uVar5 = param_1[2];
          uVar8 = param_1[5];
        }
        uVar9 = param_1[4] + uVar8;
        uVar20 = uVar9 - uVar5;
        if (uVar9 < uVar5) {
          uVar20 = uVar9;
        }
        param_1[5] = uVar8 + 1;
        puVar10 = (undefined1 *)(param_1[3] + uVar20 * 0x14);
        *puVar10 = uVar18;
        *(uint *)(puVar10 + 4) = local_150;
        *(uint *)(puVar10 + 8) = local_154;
        *(uint *)(puVar10 + 0xc) = local_8c;
        *(uint *)(puVar10 + 0x10) = local_88;
        *(undefined2 *)(puVar10 + 1) = (undefined2)local_a0;
        puVar10[3] = local_a0._2_1_;
        FUN_016dd1aa(&local_a0,param_3,0x60);
        uVar5 = thunk_FUN_016d4a50(0x240);
        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0x240);
        }
        puVar6 = (uint *)*local_84;
        uVar20 = local_84[1];
        uVar16 = uVar20 & uVar16;
        uVar8 = *(uint *)((int)puVar6 + uVar16) & 0x80808080;
        if (uVar8 == 0) {
          iVar13 = 4;
          do {
            uVar16 = uVar16 + iVar13;
            iVar13 = iVar13 + 4;
            uVar16 = uVar16 & uVar20;
            uVar8 = *(uint *)((int)puVar6 + uVar16) & 0x80808080;
          } while (uVar8 == 0);
        }
        uVar16 = uVar16 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar20
        ;
        uVar8 = (uint)*(char *)((int)puVar6 + uVar16);
        if (-1 < (int)uVar8) {
          uVar16 = *puVar6 & 0x80808080;
          uVar16 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar6 + (uVar16 >> 3));
          uVar16 = uVar16 >> 3;
        }
        iVar13 = local_84[2];
        *(byte *)((int)puVar6 + uVar16) = bVar4 >> 1;
        local_84[2] = iVar13 - (uVar8 & 1);
        *(byte *)((int)puVar6 + (uVar16 - 4 & uVar20) + 4) = bVar4 >> 1;
        puVar6[uVar16 * -0x24 + -0x20] = local_88;
        puVar6[uVar16 * -0x24 + -0x21] = local_8c;
        puVar6[uVar16 * -0x24 + -0x22] = local_90;
        puVar6[uVar16 * -0x24 + -0x23] = local_94;
        *(byte *)(puVar6 + uVar16 * -0x24 + -0x24) = local_98;
        puVar6[uVar16 * -0x24 + -0x11] = 0x80000000;
        *(undefined2 *)((int)puVar6 + uVar16 * -0x90 + -0x8f) = local_b4;
        *(undefined1 *)((int)puVar6 + uVar16 * -0x90 + -0x8d) = local_b2;
        puVar6[uVar16 * -0x24 + -0x1b] = 0;
        puVar6[uVar16 * -0x24 + -0x1c] = 0;
        puVar6[uVar16 * -0x24 + -0x1d] = uVar5;
        iVar13 = local_84[3];
        puVar6[uVar16 * -0x24 + -0x1e] = 8;
        local_84[3] = iVar13 + 1;
        *(undefined2 *)(puVar6 + uVar16 * -0x24 + -2) = 0x10;
        if (puVar6[uVar16 * -0x24 + -0x11] != 0x80000000) {
          FUN_0155e9e8(puVar6 + uVar16 * -0x24 + -0x1a);
        }
        FUN_016dd1aa(puVar6 + uVar16 * -0x24 + -0x1a,&local_a0,0x60);
        uVar16 = param_1[2];
        if ((uVar16 == param_1[5]) && (uVar16 != 0)) {
          param_1[5] = uVar16 - 1;
          uVar8 = param_1[4] + 1;
          uVar5 = uVar8 - uVar16;
          if (uVar8 < uVar16) {
            uVar5 = uVar8;
          }
          pcVar11 = (char *)(param_1[3] + param_1[4] * 0x14);
          cVar1 = *pcVar11;
          param_1[4] = uVar5;
          if (cVar1 != '\x02') {
            local_b4 = CONCAT11(local_b4._1_1_,cVar1);
            FUN_016dd1aa((uint)&local_b4 | 1,pcVar11 + 1,0x13);
            FUN_015337fc(&local_a0,param_1 + 6,&local_b4);
            FUN_0155e968(&local_a0);
            if ((cVar1 == '\0') && ((local_b0 & 0x7fffffff) != 0)) {
              thunk_FUN_016d3fb4(local_ac);
            }
          }
        }
      }
      if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *param_1;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = 0;
      if (iVar13 == 2) {
        FUN_016d6968(0xf0,param_1,0x81,1);
        cVar1 = (char)*param_2;
      }
      else {
        cVar1 = (char)*param_2;
      }
      if (cVar1 == '\0') {
        if ((param_2[1] & 0x7fffffff) != 0) {
          uVar19 = param_2[2];
          if (uVar19 == 0) {
            return;
          }
          iVar13 = FUN_016d3bc8();
          uVar16 = *(byte *)(uVar19 - 3) & 0x1f;
          if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
             (uVar5 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar12 = uVar5 - 0x10, uVar5 == 0)) {
            iVar12 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar5 = (uint)(*(byte *)(uVar19 - 3) >> 5);
          iVar17 = *(int *)(iVar13 + 8) + 0x10;
          iVar15 = iVar12 * uVar16 + iVar12 + -4;
          iVar12 = iVar17 + iVar15;
          if (4 < uVar5) {
            if (uVar5 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar3)();
            }
            uVar5 = *(uint *)(iVar12 + -4);
            if (uVar5 < 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar3)();
            }
            if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar3)();
            }
          }
          if (iVar12 - uVar19 < uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar3)();
          }
          if (*(char *)(iVar12 - uVar5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar3)();
          }
          if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar3)();
          }
          bVar4 = *(byte *)(iVar13 + 0x14);
          uVar5 = 1 << uVar16;
          *(undefined1 *)(uVar19 - 3) = 0xff;
          *(undefined2 *)(uVar19 - 2) = 0;
          do {
            uVar8 = *(uint *)(iVar13 + 0x10);
            uVar19 = *(uint *)(iVar13 + 0xc) | uVar8;
            if ((uVar5 & uVar19) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar3)();
            }
            if ((uVar8 == 0) || (uVar19 + uVar5 == (2 << (bVar4 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar13,uVar16);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar7 = (undefined4 *)FUN_016d2bc8();
              uVar14 = *puVar7;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar7 = uVar14;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar13 + 0x10) = uVar5 + uVar8;
              return;
            }
            puVar6 = (uint *)(iVar13 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar6);
              uVar19 = *puVar6;
              if (uVar8 != uVar19) goto LAB_016d409c;
              bVar2 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar2);
            *puVar6 = uVar5 + uVar8;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar8 == uVar19) {
              return;
            }
          } while( true );
        }
      }
      return;
    }
    if (uVar19 != 0) goto LAB_0155f9d8;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_0155f9d8:
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar13 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_018a8e6c);
}

