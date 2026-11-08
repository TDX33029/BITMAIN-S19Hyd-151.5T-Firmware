// FUN_015337fc @ 015337fc size=668 calls_out=4 calls_in=3
// strings: 

void FUN_015337fc(undefined4 *param_1,int *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  uint uVar19;
  int unaff_r4;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int local_44;
  undefined4 *local_28;
  
  local_28 = param_1;
  uVar9 = FUN_0156d824(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar17 = uVar9 >> 0x19;
  iVar23 = *param_2;
  uVar19 = param_2[1];
  local_44 = 0;
  cVar1 = *param_3;
  cVar2 = param_3[1];
  iVar16 = *(int *)(param_3 + 2);
LAB_01533878:
  uVar9 = uVar19 & uVar9;
  uVar10 = *(uint *)(iVar23 + uVar9);
  uVar11 = uVar10 ^ uVar17 * 0x1010101;
  uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
LAB_01533894:
  do {
    if (uVar11 == 0) break;
    uVar24 = uVar11 >> 8;
    uVar3 = uVar11 >> 0x10;
    uVar4 = uVar11 >> 0x18;
    uVar5 = uVar11 << 0x18;
    uVar11 = uVar11 - 1 & uVar11;
    uVar24 = uVar9 + ((uint)LZCOUNT(uVar5 | (uVar24 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4)
                     >> 3) & uVar19;
    pcVar12 = (char *)(iVar23 + -0x90 + uVar24 * -0x90);
    if (cVar1 == *pcVar12) {
      if (cVar1 == '\0') {
        iVar13 = FUN_0157531c(param_3 + 4,pcVar12 + 4);
        if (iVar13 == 0) goto LAB_01533894;
      }
      else {
        if (cVar2 != pcVar12[1]) goto LAB_01533894;
        if (cVar2 == '\0') {
          if (iVar16 != *(int *)(pcVar12 + 2)) goto LAB_01533894;
        }
        else {
          iVar13 = thunk_FUN_016dd50a(param_3 + 2,pcVar12 + 2,0x10);
          if (iVar13 != 0) goto LAB_01533894;
        }
      }
      iVar13 = ((int)(uVar24 * 0x90) >> 4) * 0x38e38e39;
      puVar15 = (uint *)(iVar23 + (iVar13 - 4U & uVar19));
      uVar9 = *puVar15;
      uVar17 = *(uint *)(iVar23 + iVar13) & 0x80808080 & *(uint *)(iVar23 + iVar13) << 1;
      uVar17 = ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                              (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) +
               ((uint)LZCOUNT(uVar9 & 0x80808080 & uVar9 << 1) >> 3);
      iVar16 = 0x80;
      if (uVar17 < 4) {
        iVar16 = param_2[2] + 1;
        param_2[2] = iVar16;
      }
      uVar18 = (undefined1)iVar16;
      iVar16 = iVar23 + uVar24 * -0x90;
      if (uVar17 < 4) {
        uVar18 = 0xff;
      }
      *(undefined1 *)(iVar23 + iVar13) = uVar18;
      *(undefined1 *)(puVar15 + 1) = uVar18;
      iVar23 = *(int *)(iVar16 + -0x78);
      uVar17 = *(uint *)(iVar16 + -0x8c);
      iVar13 = *(int *)(iVar16 + -0x88);
      param_2[3] = param_2[3] + -1;
      if (iVar23 == -0x80000000) goto LAB_01533a48;
      cVar1 = *(char *)(iVar16 + -0x90);
      FUN_016dd1aa(local_28,(int *)(iVar16 + -0x78),0x78);
      if ((cVar1 != '\0') || ((uVar17 & 0x7fffffff) == 0)) {
        return;
      }
      if (iVar13 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar13 + -3) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar23 = uVar9 - 0x10, uVar9 == 0)) {
        iVar23 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar13 + -3) >> 5);
      iVar22 = *(int *)(iVar16 + 8) + 0x10;
      iVar21 = iVar23 * uVar17 + iVar23 + -4;
      iVar23 = iVar22 + iVar21;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar9 = *(uint *)(iVar23 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar23 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar23 - iVar13) < uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar23 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar22 + iVar21) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar7 = *(byte *)(iVar16 + 0x14);
      uVar9 = 1 << uVar17;
      *(undefined1 *)(iVar13 + -3) = 0xff;
      *(undefined2 *)(iVar13 + -2) = 0;
      goto LAB_016d4066;
    }
  } while( true );
  if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
LAB_01533a48:
    *local_28 = 0x80000000;
    return;
  }
  local_44 = local_44 + 4;
  uVar9 = uVar9 + local_44;
  goto LAB_01533878;
LAB_016d4066:
  uVar10 = *(uint *)(iVar16 + 0x10);
  uVar19 = *(uint *)(iVar16 + 0xc) | uVar10;
  if ((uVar9 & uVar19) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar6)();
  }
  if ((uVar10 == 0) || (uVar19 + uVar9 == (2 << (bVar7 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&local_28,iVar16,uVar17);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar14 = (undefined4 *)FUN_016d2bc8();
    uVar20 = *puVar14;
    FUN_016d6ac4(local_28,unaff_r4);
    *puVar14 = uVar20;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar16 + 0x10) = uVar9 + uVar10;
    return;
  }
  puVar15 = (uint *)(iVar16 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar15);
    uVar19 = *puVar15;
    if (uVar10 != uVar19) goto LAB_016d409c;
    bVar8 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar8);
  *puVar15 = uVar9 + uVar10;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar10 == uVar19) {
    return;
  }
  goto LAB_016d4066;
}

