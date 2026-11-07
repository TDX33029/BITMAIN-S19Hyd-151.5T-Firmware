// FUN_01610444 @ 01610444 size=664 calls_out=5 calls_in=1
// strings: 

void FUN_01610444(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  undefined2 *puVar20;
  int iVar21;
  uint *puVar22;
  int local_68;
  undefined2 *local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_28;
  
  puVar13 = (undefined4 *)*param_2;
  iVar18 = param_2[1];
  if ((uint)(iVar18 - (int)puVar13) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar13;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar7 = puVar13 + 1;
  uVar17 = *puVar13;
  *param_2 = (int)puVar7;
  if ((uint)(iVar18 - (int)puVar7) < 4) {
    *param_1 = 0;
    param_1[1] = 0x80000005;
    param_1[2] = puVar7;
    param_1[3] = 4;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  uVar16 = puVar13[1];
  *param_2 = (int)(puVar13 + 2);
  FUN_0161f8fc(&local_48,param_2);
  if ((char)local_48 == '\x01') {
    param_1[3] = uStack_3c;
    param_1[2] = uStack_40;
    param_1[1] = local_44;
    *param_1 = 0;
    return;
  }
  FUN_016dd1aa(&local_68,(uint)&local_48 | 1,0x20);
  iVar9 = local_60;
  puVar6 = local_64;
  iVar18 = local_68;
  puVar20 = (undefined2 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar20) < 2) {
    param_1[3] = 2;
    *param_1 = 0;
    param_1[1] = 0x80000005;
    *(short *)(param_1 + 2) = (short)puVar20;
    *(short *)((int)param_1 + 10) = (short)((uint)puVar20 >> 0x10);
    return;
  }
  iVar21 = -0x7ffffffb;
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar14 = puVar20 + 1;
  uVar2 = *puVar20;
  *param_2 = (int)puVar14;
  if ((undefined2 *)param_2[1] == puVar14) {
    local_60 = 1;
  }
  else {
    local_48 = 0x80000005;
    FUN_00f2cc28(&local_48);
    uVar1 = *(undefined1 *)(puVar20 + 1);
    *param_2 = (int)puVar20 + 3;
    FUN_0161b9e4(&local_68,param_2,uVar1);
    puVar14 = local_64;
    iVar21 = local_68;
    if (local_68 == -0x7ffffff6) {
      if (local_64 == (undefined2 *)0x0) {
        FUN_01613578(param_1 + 1,4,&DAT_018aba00,&DAT_018ab990);
        *param_1 = 0;
        return;
      }
      puVar13 = (undefined4 *)*param_2;
      if ((uint)(param_2[1] - (int)puVar13) < 4) {
        *param_1 = 0;
        param_1[1] = 0x80000005;
        param_1[2] = puVar13;
        param_1[3] = 4;
        if (local_60 != 0) {
          if (local_64 == (undefined2 *)0x0) {
            return;
          }
          iVar18 = FUN_016d3bc8();
          uVar19 = *(byte *)((int)local_64 + -3) & 0x1f;
          if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
             (uVar11 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
            iVar9 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar11 = (uint)(*(byte *)((int)local_64 + -3) >> 5);
          iVar15 = *(int *)(iVar18 + 8) + 0x10;
          iVar21 = iVar9 * uVar19 + iVar9 + -4;
          iVar9 = iVar15 + iVar21;
          if (4 < uVar11) {
            if (uVar11 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar3)();
            }
            uVar11 = *(uint *)(iVar9 + -4);
            if (uVar11 < 5) {
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
          if ((uint)(iVar9 - (int)local_64) < uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar3)();
          }
          if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar3)();
          }
          if (*(char *)(iVar15 + iVar21) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar3)();
          }
          bVar4 = *(byte *)(iVar18 + 0x14);
          uVar11 = 1 << uVar19;
          *(undefined1 *)((int)local_64 + -3) = 0xff;
          local_64[-1] = 0;
          do {
            uVar12 = *(uint *)(iVar18 + 0x10);
            uVar10 = *(uint *)(iVar18 + 0xc) | uVar12;
            if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar3)();
            }
            if ((uVar12 == 0) || (uVar10 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar18,uVar19);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar13 = (undefined4 *)FUN_016d2bc8();
              uVar17 = *puVar13;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar13 = uVar17;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar18 + 0x10) = uVar11 + uVar12;
              return;
            }
            puVar22 = (uint *)(iVar18 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar22);
              uVar10 = *puVar22;
              if (uVar12 != uVar10) goto LAB_016d409c;
              bVar5 = (bool)hasExclusiveAccess(puVar22);
            } while (!bVar5);
            *puVar22 = uVar11 + uVar12;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar12 == uVar10) {
              return;
            }
          } while( true );
        }
      }
      else {
        local_48 = 0x80000005;
        FUN_00f2cc28(&local_48);
        uVar8 = *puVar13;
        *param_2 = (int)(puVar13 + 1);
        param_1[4] = iVar18;
        param_1[5] = puVar6;
        param_1[6] = iVar9;
        param_1[7] = uStack_5c;
        param_1[8] = local_58;
        param_1[9] = uStack_54;
        param_1[10] = uStack_50;
        param_1[0xb] = uStack_4c;
        param_1[0xc] = uVar8;
        *(undefined2 *)(param_1 + 0xd) = uVar2;
        *param_1 = local_64;
        param_1[1] = local_60;
        param_1[2] = uVar17;
        param_1[3] = uVar16;
      }
      return;
    }
  }
  param_1[2] = puVar14;
  *param_1 = 0;
  param_1[1] = iVar21;
  param_1[3] = local_60;
  return;
}

