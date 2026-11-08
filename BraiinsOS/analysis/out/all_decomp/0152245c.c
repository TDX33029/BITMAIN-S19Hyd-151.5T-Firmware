// FUN_0152245c @ 0152245c size=320 calls_out=5 calls_in=3
// strings: 

void FUN_0152245c(uint *param_1,uint *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar8 = *param_2;
  iVar10 = 1;
  if (0x80000000 < uVar8) {
    iVar10 = uVar8 + 0x7fffffff;
  }
  uVar1 = (&DAT_004225ea)[iVar10];
  if (uVar8 == 0x80000005) {
    uVar8 = param_2[3];
    uVar15 = param_2[2];
    if (param_2[1] == 0x80000000) {
      uVar5 = 0;
      if ((int)uVar8 < 0) {
LAB_015224b0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,uVar8);
      }
      if (uVar8 == 0) {
        uVar6 = 1;
        uVar13 = 0;
      }
      else {
        uVar6 = thunk_FUN_016d4a50(uVar8);
        uVar13 = uVar8;
        if (uVar6 == 0) {
          uVar5 = 1;
          goto LAB_015224b0;
        }
      }
      FUN_016dd1aa(uVar6,uVar15,uVar8);
      uVar15 = uVar6;
    }
    else {
      uVar13 = param_2[1];
    }
  }
  else {
    local_28 = 1;
    local_24 = 0;
    local_2c = 0;
    FUN_01522638(param_2,&local_2c);
    uVar8 = local_24;
    uVar13 = local_2c;
    uVar15 = local_28;
  }
  uVar6 = *param_2;
  uVar9 = param_2[0x1e];
  *(undefined1 *)(param_1 + 4) = uVar1;
  *param_1 = uVar13;
  param_1[1] = uVar15;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  if (uVar6 != 0x80000005) {
    iVar10 = 1;
    if (0x80000000 < uVar6) {
      iVar10 = uVar6 + 0x7fffffff;
    }
    switch(iVar10) {
    case 0:
    case 3:
      goto switchD_01522564_caseD_0;
    case 1:
      FUN_01522a2c(param_2 + 3);
      uVar8 = *param_2;
      break;
    default:
      param_2 = param_2 + 1;
      uVar8 = *param_2;
    }
    if (uVar8 != 0x80000000 && uVar8 != 0) {
      uVar8 = param_2[1];
      if (uVar8 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar13 = *(byte *)(uVar8 - 3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar15 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar15 = (uint)(*(byte *)(uVar8 - 3) >> 5);
      iVar14 = *(int *)(iVar10 + 8) + 0x10;
      iVar12 = iVar11 * uVar13 + iVar11 + -4;
      iVar11 = iVar14 + iVar12;
      if (4 < uVar15) {
        if (uVar15 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar15 = *(uint *)(iVar11 + -4);
        if (uVar15 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar11 - uVar8 < uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar10 + 0x14);
      uVar15 = 1 << uVar13;
      *(undefined1 *)(uVar8 - 3) = 0xff;
      *(undefined2 *)(uVar8 - 2) = 0;
      do {
        uVar6 = *(uint *)(iVar10 + 0x10);
        uVar8 = *(uint *)(iVar10 + 0xc) | uVar6;
        if ((uVar15 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar6 == 0) || (uVar8 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar10,uVar13);
          uVar8 = local_24;
          FUN_016dddc0(&DAT_018ddd48);
          if (uVar8 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar5 = *puVar7;
          FUN_016d6ac4(local_28,uVar8);
          *puVar7 = uVar5;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar15 + uVar6;
          return;
        }
        puVar16 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar6 != uVar8) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar4);
        *puVar16 = uVar15 + uVar6;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar6 == uVar8) {
          return;
        }
      } while( true );
    }
  }
switchD_01522564_caseD_0:
  return;
}

