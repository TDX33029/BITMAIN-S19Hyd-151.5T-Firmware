// FUN_010e6cd8 @ 010e6cd8 size=396 calls_out=3 calls_in=0
// strings: 

void FUN_010e6cd8(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  puVar15 = (undefined4 *)*param_2;
  iVar17 = param_2[1];
  if ((uint)(iVar17 - (int)puVar15) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar15;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_30[0] = 0x80000005;
  FUN_00f2cc28(local_30);
  puVar16 = puVar15 + 1;
  uVar13 = *puVar15;
  *param_2 = (int)puVar16;
  if ((uint)(iVar17 - (int)puVar16) < 2) {
    local_34 = 2;
    local_38 = puVar16;
    local_3c = -0x7ffffffb;
  }
  else {
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    uVar1 = *(undefined2 *)(puVar15 + 1);
    *param_2 = (int)puVar15 + 6;
    FUN_010e576c(&local_3c,param_2,uVar1);
    if (local_3c == -0x7ffffff6) {
      if (local_38 == (undefined4 *)0x0) {
        FUN_01613578(param_1 + 1,1,&DAT_01885c80,&DAT_018ab990);
        *param_1 = 0;
      }
      else {
        puVar16 = (undefined4 *)*param_2;
        puVar15 = puVar16;
        if (3 < (uint)(param_2[1] - (int)puVar16)) {
          local_30[0] = 0x80000005;
          FUN_00f2cc28(local_30);
          puVar15 = puVar16 + 1;
          uVar12 = *puVar16;
          *param_2 = (int)puVar15;
          if (3 < (uint)(param_2[1] - (int)puVar15)) {
            local_30[0] = 0x80000005;
            FUN_00f2cc28(local_30);
            uVar5 = *puVar15;
            *param_2 = (int)(puVar16 + 2);
            *param_1 = local_38;
            param_1[1] = local_34;
            param_1[2] = uVar13;
            param_1[3] = uVar12;
            param_1[4] = uVar5;
            return;
          }
        }
        *param_1 = 0;
        param_1[1] = 0x80000005;
        param_1[2] = puVar15;
        param_1[3] = 4;
        if (local_34 != 0) {
          if (local_38 == (undefined4 *)0x0) {
            return;
          }
          iVar17 = FUN_016d3bc8();
          uVar14 = *(byte *)((int)local_38 + -3) & 0x1f;
          if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
             (uVar8 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
            iVar6 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar8 = (uint)(*(byte *)((int)local_38 + -3) >> 5);
          iVar11 = *(int *)(iVar17 + 8) + 0x10;
          iVar9 = iVar6 * uVar14 + iVar6 + -4;
          iVar6 = iVar11 + iVar9;
          if (4 < uVar8) {
            if (uVar8 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar8 = *(uint *)(iVar6 + -4);
            if (uVar8 < 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar2)();
            }
            if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar2)();
            }
          }
          if ((uint)(iVar6 - (int)local_38) < uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar17 + 0x14);
          uVar8 = 1 << uVar14;
          *(undefined1 *)((int)local_38 + -3) = 0xff;
          *(undefined2 *)((int)local_38 + -2) = 0;
          do {
            uVar10 = *(uint *)(iVar17 + 0x10);
            uVar7 = *(uint *)(iVar17 + 0xc) | uVar10;
            if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar17,uVar14);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar15 = (undefined4 *)FUN_016d2bc8();
              uVar13 = *puVar15;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar15 = uVar13;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar17 + 0x10) = uVar8 + uVar10;
              return;
            }
            puVar18 = (uint *)(iVar17 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar18);
              uVar7 = *puVar18;
              if (uVar10 != uVar7) goto LAB_016d409c;
              bVar4 = (bool)hasExclusiveAccess(puVar18);
            } while (!bVar4);
            *puVar18 = uVar8 + uVar10;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar10 == uVar7) {
              return;
            }
          } while( true );
        }
      }
      return;
    }
  }
  param_1[2] = local_38;
  *param_1 = 0;
  param_1[1] = local_3c;
  param_1[3] = local_34;
  return;
}

