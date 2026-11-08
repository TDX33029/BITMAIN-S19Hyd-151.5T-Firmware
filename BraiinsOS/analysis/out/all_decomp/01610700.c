// FUN_01610700 @ 01610700 size=560 calls_out=5 calls_in=1
// strings: 

void FUN_01610700(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  int local_68;
  undefined1 *puStack_64;
  int iStack_60;
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
  iVar17 = param_2[1];
  if ((uint)(iVar17 - (int)puVar13) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar13;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar6 = puVar13 + 1;
  uVar16 = *puVar13;
  *param_2 = (int)puVar6;
  if ((uint)(iVar17 - (int)puVar6) < 4) {
    *param_1 = 0;
    param_1[1] = 0x80000005;
    param_1[2] = puVar6;
    param_1[3] = 4;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  uVar19 = puVar13[1];
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
  iVar9 = iStack_60;
  puVar5 = puStack_64;
  iVar17 = local_68;
  iVar7 = -0x7ffffffb;
  puVar14 = (undefined1 *)*param_2;
  if ((undefined1 *)param_2[1] == puVar14) {
    iStack_60 = 1;
  }
  else {
    local_48 = 0x80000005;
    FUN_00f2cc28(&local_48);
    uVar1 = *puVar14;
    *param_2 = (int)(puVar14 + 1);
    FUN_0161b9e4(&local_68,param_2,uVar1);
    iVar7 = local_68;
    puVar14 = puStack_64;
    if (local_68 == -0x7ffffff6) {
      if (puStack_64 == (undefined1 *)0x0) {
        FUN_01613578(param_1 + 1,3,&DAT_018aba08,&DAT_018ab990);
        *param_1 = 0;
        return;
      }
      puVar13 = (undefined4 *)*param_2;
      if ((uint)(param_2[1] - (int)puVar13) < 4) {
        *param_1 = 0;
        param_1[1] = 0x80000005;
        param_1[2] = puVar13;
        param_1[3] = 4;
        if (iStack_60 != 0) {
          if (puStack_64 == (undefined1 *)0x0) {
            return;
          }
          iVar17 = FUN_016d3bc8();
          uVar18 = (byte)puStack_64[-3] & 0x1f;
          if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
             (uVar11 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
            iVar9 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar11 = (uint)((byte)puStack_64[-3] >> 5);
          iVar15 = *(int *)(iVar17 + 8) + 0x10;
          iVar7 = iVar9 * uVar18 + iVar9 + -4;
          iVar9 = iVar15 + iVar7;
          if (4 < uVar11) {
            if (uVar11 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar11 = *(uint *)(iVar9 + -4);
            if (uVar11 < 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar2)();
            }
            if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar2)();
            }
          }
          if ((uint)(iVar9 - (int)puStack_64) < uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar15 + iVar7) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar17 + 0x14);
          uVar11 = 1 << uVar18;
          puStack_64[-3] = 0xff;
          *(undefined2 *)(puStack_64 + -2) = 0;
          do {
            uVar12 = *(uint *)(iVar17 + 0x10);
            uVar10 = *(uint *)(iVar17 + 0xc) | uVar12;
            if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar12 == 0) || (uVar10 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar17,uVar18);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar13 = (undefined4 *)FUN_016d2bc8();
              uVar16 = *puVar13;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar13 = uVar16;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar17 + 0x10) = uVar11 + uVar12;
              return;
            }
            puVar20 = (uint *)(iVar17 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar20);
              uVar10 = *puVar20;
              if (uVar12 != uVar10) goto LAB_016d409c;
              bVar4 = (bool)hasExclusiveAccess(puVar20);
            } while (!bVar4);
            *puVar20 = uVar11 + uVar12;
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
        param_1[4] = iVar17;
        param_1[5] = puVar5;
        param_1[6] = iVar9;
        param_1[7] = uStack_5c;
        param_1[8] = local_58;
        param_1[9] = uStack_54;
        param_1[10] = uStack_50;
        param_1[0xb] = uStack_4c;
        param_1[0xc] = uVar8;
        *param_1 = puStack_64;
        param_1[1] = iStack_60;
        param_1[2] = uVar16;
        param_1[3] = uVar19;
      }
      return;
    }
  }
  param_1[1] = iVar7;
  param_1[2] = puVar14;
  param_1[3] = iStack_60;
  *param_1 = 0;
  return;
}

