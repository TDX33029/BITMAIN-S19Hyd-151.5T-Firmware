// FUN_0160f418 @ 0160f418 size=948 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160f418(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 local_4c;
  int *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 *puStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar18 = (undefined4 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar18) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar18;
    *param_1 = 2;
    param_1[3] = 4;
    return;
  }
  uVar11 = 0x80000005;
  local_30 = -0x7ffffffb;
  local_44 = param_2;
  FUN_00f2cc28(&local_30);
  puVar5 = puVar18 + 1;
  uVar17 = *puVar18;
  *param_2 = (int)puVar5;
  if ((uint)(param_2[1] - (int)puVar5) < 4) {
    *param_1 = 2;
    param_1[1] = 0x80000005;
    param_1[2] = puVar5;
    param_1[3] = 4;
    return;
  }
  local_30 = -0x7ffffffb;
  FUN_00f2cc28(&local_30);
  *param_2 = (int)(puVar18 + 2);
  puVar5 = (undefined4 *)0x0;
  if (puVar18 + 2 != (undefined4 *)param_2[1]) {
    uVar19 = puVar18[1];
    puVar20 = (undefined4 *)((int)puVar18 + 9);
    *param_2 = (int)puVar20;
    uVar11 = 0x80000007;
    if (*(byte *)(puVar18 + 2) < 2) {
      if ((*(byte *)(puVar18 + 2) & 1) == 0) {
        uVar11 = 0;
        uVar6 = param_2[1] - (int)puVar20;
      }
      else {
        if ((uint)(param_2[1] - (int)puVar20) < 4) {
          uVar11 = 0x80000005;
          puVar5 = puVar20;
          goto LAB_0160f508;
        }
        local_30 = -0x7ffffffb;
        FUN_00f2cc28(&local_30);
        puVar20 = (undefined4 *)((int)puVar18 + 0xd);
        *param_2 = (int)puVar20;
        local_4c = *(undefined4 *)((int)puVar18 + 9);
        uVar11 = 1;
        uVar6 = param_2[1] - (int)puVar20;
      }
      if (uVar6 < 4) {
        *param_1 = 2;
        param_1[1] = 0x80000005;
        param_1[2] = puVar20;
        param_1[3] = 4;
        return;
      }
      uVar12 = 0x80000005;
      local_30 = -0x7ffffffb;
      FUN_00f2cc28(&local_30);
      uVar8 = *puVar20;
      *param_2 = (int)(puVar20 + 1);
      if (puVar20 + 1 != (undefined4 *)param_2[1]) {
        bVar1 = *(byte *)(puVar20 + 1);
        puVar18 = (undefined4 *)((int)puVar20 + 5);
        uVar12 = 0x80000007;
        *param_2 = (int)puVar18;
        if (bVar1 < 2) {
          local_40 = 2;
          if ((undefined4 *)param_2[1] == puVar18) {
            local_3c = -0x7ffffffb;
            iStack_34 = 1;
          }
          else {
            local_30 = -0x7ffffffb;
            FUN_00f2cc28(&local_30);
            uVar2 = *(undefined1 *)((int)puVar20 + 5);
            *param_2 = (int)puVar20 + 6;
            FUN_0161bba4(&local_3c,param_2,uVar2);
            puVar18 = puStack_38;
            if (local_3c == -0x7ffffff6) {
              if (puStack_38 == (undefined4 *)0x0) {
                FUN_01613578(param_1 + 1,5,&DAT_018ab9d0,&DAT_018ab990);
                *param_1 = 2;
                return;
              }
              FUN_0161391c(&local_30,&local_44);
              iVar9 = local_28;
              iVar7 = local_2c;
              if (local_30 == -0x7ffffff6) {
                if (local_2c == 0) {
                  FUN_01613578(&local_30,6,&DAT_018ab9d0,&DAT_018ab990);
                  *param_1 = 2;
                  param_1[1] = local_30;
                  param_1[2] = local_2c;
                  param_1[3] = local_28;
                }
                else {
                  FUN_0161391c(&local_30,&local_44);
                  if (local_30 == -0x7ffffff6) {
                    if (local_2c != 0) {
                      param_1[10] = uVar8;
                      *(byte *)(param_1 + 0xb) = bVar1;
                      param_1[1] = local_4c;
                      param_1[2] = puStack_38;
                      param_1[3] = iStack_34;
                      param_1[8] = uVar17;
                      param_1[9] = uVar19;
                      *param_1 = uVar11;
                      param_1[4] = iVar7;
                      param_1[5] = iVar9;
                      param_1[6] = local_2c;
                      param_1[7] = local_28;
                      return;
                    }
                    FUN_01613578(&local_30,7,&DAT_018ab9d0,&DAT_018ab990);
                    *param_1 = 2;
                    param_1[1] = local_30;
                    param_1[2] = local_2c;
                    param_1[3] = local_28;
                  }
                  else {
                    param_1[1] = local_30;
                    *param_1 = 2;
                    param_1[2] = local_2c;
                    param_1[3] = local_28;
                  }
                  if (iVar9 != 0) {
                    thunk_FUN_016d3fb4(iVar7);
                  }
                }
              }
              else {
                param_1[1] = local_30;
                param_1[2] = local_2c;
                param_1[3] = local_28;
                *param_1 = 2;
              }
              if (iStack_34 == 0) {
                return;
              }
              if (puStack_38 == (undefined4 *)0x0) {
                return;
              }
              iVar7 = FUN_016d3bc8();
              uVar6 = *(byte *)((int)puStack_38 + -3) & 0x1f;
              if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
                 (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)
                 ) {
                iVar9 = (uint)*(ushort *)
                               (&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4
                ;
              }
              uVar13 = (uint)(*(byte *)((int)puStack_38 + -3) >> 5);
              iVar16 = *(int *)(iVar7 + 8) + 0x10;
              iVar14 = iVar9 * uVar6 + iVar9 + -4;
              iVar9 = iVar16 + iVar14;
              if (4 < uVar13) {
                if (uVar13 != 5) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)software_udf(0xff,0x16d4018);
                  (*pcVar3)();
                }
                uVar13 = *(uint *)(iVar9 + -4);
                if (uVar13 < 5) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)software_udf(0xff,0x16d4022);
                  (*pcVar3)();
                }
                if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)software_udf(0xff,0x16d402a);
                  (*pcVar3)();
                }
              }
              if ((uint)(iVar9 - (int)puStack_38) < uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d4032);
                (*pcVar3)();
              }
              if (*(char *)(iVar9 - uVar13) != '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d403a);
                (*pcVar3)();
              }
              if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d4040);
                (*pcVar3)();
              }
              bVar1 = *(byte *)(iVar7 + 0x14);
              uVar13 = 1 << uVar6;
              *(undefined1 *)((int)puStack_38 + -3) = 0xff;
              *(undefined2 *)((int)puStack_38 + -2) = 0;
              do {
                uVar15 = *(uint *)(iVar7 + 0x10);
                uVar10 = *(uint *)(iVar7 + 0xc) | uVar15;
                if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)software_udf(0xff,0x16d4074);
                  (*pcVar3)();
                }
                if ((uVar15 == 0) || (uVar10 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
                  if (DAT_018ddb0b != '\0') {
                    FUN_016ddcc0(&DAT_018ddd48);
                  }
                  FUN_016d3ca8(&local_28,iVar7,uVar6);
                  FUN_016dddc0(&DAT_018ddd48);
                  if (unaff_r4 == 0) {
                    return;
                  }
                  puVar18 = (undefined4 *)FUN_016d2bc8();
                  uVar11 = *puVar18;
                  FUN_016d6ac4(local_28,unaff_r4);
                  *puVar18 = uVar11;
                  return;
                }
                if (DAT_018ddb0b == '\0') {
                  *(uint *)(iVar7 + 0x10) = uVar13 + uVar15;
                  return;
                }
                puVar21 = (uint *)(iVar7 + 0x10);
                DataMemoryBarrier(0x1b);
                do {
                  ExclusiveAccess(puVar21);
                  uVar10 = *puVar21;
                  if (uVar15 != uVar10) goto LAB_016d409c;
                  bVar4 = (bool)hasExclusiveAccess(puVar21);
                } while (!bVar4);
                *puVar21 = uVar13 + uVar15;
LAB_016d409c:
                DataMemoryBarrier(0x1b);
                if (uVar15 == uVar10) {
                  return;
                }
              } while( true );
            }
          }
          param_1[1] = local_3c;
          param_1[2] = puVar18;
          param_1[3] = iStack_34;
          *param_1 = 2;
          return;
        }
      }
      *param_1 = 2;
      param_1[1] = uVar12;
      return;
    }
  }
LAB_0160f508:
  *param_1 = 2;
  param_1[1] = uVar11;
  param_1[2] = puVar5;
  param_1[3] = 4;
  return;
}

