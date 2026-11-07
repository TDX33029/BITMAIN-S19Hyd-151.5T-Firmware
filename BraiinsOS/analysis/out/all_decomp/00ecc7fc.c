// FUN_00ecc7fc @ 00ecc7fc size=260 calls_out=3 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00ecc7fc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r4;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  int iVar22;
  uint *puVar23;
  int local_38 [2];
  int local_30;
  undefined4 uStack_28;
  
  pcVar21 = (char *)*param_2;
  FUN_00a40f64(local_38,pcVar21 + 0x18);
  if (local_38[0] != 0) {
    puVar8 = (undefined4 *)(local_38[0] + local_30 * 0x18);
    local_38[0] = local_38[0] + local_30 * 0xc;
    iVar22 = *(int *)(local_38[0] + 0x10c);
    iVar6 = *(int *)(local_38[0] + 0x110);
    uVar5 = *(undefined4 *)(local_38[0] + 0x114);
    uVar7 = *puVar8;
    uVar9 = puVar8[1];
    uVar12 = puVar8[2];
    uVar13 = puVar8[3];
    uVar17 = puVar8[4];
    uVar19 = puVar8[5];
    if (iVar22 != -0x80000000) {
      if (*pcVar21 != '\x06') {
        FUN_005c37bc(pcVar21);
      }
      *(undefined4 *)pcVar21 = uVar7;
      *(undefined4 *)(pcVar21 + 4) = uVar9;
      *(undefined4 *)(pcVar21 + 8) = uVar12;
      *(undefined4 *)(pcVar21 + 0xc) = uVar13;
      *(undefined4 *)(pcVar21 + 0x10) = uVar17;
      *(undefined4 *)(pcVar21 + 0x14) = uVar19;
      cVar1 = *pcVar21;
      *pcVar21 = '\x06';
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(cVar1) {
      case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = FUN_00e956c4(&DAT_00565810,0x10,6,uVar12,uVar5);
      *param_1 = 0x80000001;
      param_1[1] = uVar5;
      if (iVar22 == 0) {
        return;
      }
      if (iVar6 == 0) {
        return;
      }
      iVar22 = FUN_016d3bc8();
      uVar20 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar22 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar22 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar22 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar18 = *(int *)(iVar22 + 8) + 0x10;
      iVar15 = iVar10 * uVar20 + iVar10 + -4;
      iVar10 = iVar18 + iVar15;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar10 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar10 - iVar6) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar18 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar22 + 0x14);
      uVar14 = 1 << uVar20;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar16 = *(uint *)(iVar22 + 0x10);
        uVar11 = *(uint *)(iVar22 + 0xc) | uVar16;
        if ((uVar14 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar16 == 0) || (uVar11 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar22,uVar20);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar5 = *puVar8;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar8 = uVar5;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar22 + 0x10) = uVar14 + uVar16;
          return;
        }
        puVar23 = (uint *)(iVar22 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar23);
          uVar11 = *puVar23;
          if (uVar16 != uVar11) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar23);
        } while (!bVar4);
        *puVar23 = uVar14 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  *param_1 = 0x80000000;
  return;
}

