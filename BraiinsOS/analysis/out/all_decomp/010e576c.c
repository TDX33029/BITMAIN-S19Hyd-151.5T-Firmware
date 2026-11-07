// FUN_010e576c @ 010e576c size=404 calls_out=7 calls_in=5
// strings: 

void FUN_010e576c(undefined4 *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  uVar12 = param_3 * 4;
  bVar16 = 0x3ffffffe < param_3;
  bVar15 = param_3 == 0x3fffffff;
  local_3c = 0;
  if (param_3 < 0x40000000) {
    bVar16 = 0x7ffffffb < uVar12;
    bVar15 = uVar12 == 0x7ffffffc;
  }
  if (bVar16 && !bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar7 = 0;
  if (uVar12 == 0) {
    iVar3 = 4;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar12);
    local_3c = param_3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar12);
    }
  }
  iVar11 = param_2[1];
  puVar4 = (undefined4 *)*param_2;
  local_38 = iVar3;
  for (; local_34 = uVar7, param_3 != 0; param_3 = param_3 - 1) {
    if ((uint)(iVar11 - (int)puVar4) < 4) {
      *param_1 = 0x80000005;
      param_1[1] = puVar4;
      param_1[2] = 4;
      if (local_3c == 0) {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar12 = *(byte *)(iVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar3 + -3) >> 5);
      iVar10 = *(int *)(iVar11 + 8) + 0x10;
      iVar8 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar10 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar5 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar5 - iVar3) < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar7 = 1 << uVar12;
      *(undefined1 *)(iVar3 + -3) = 0xff;
      *(undefined2 *)(iVar3 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar11 + 0x10);
        uVar6 = *(uint *)(iVar11 + 0xc) | uVar9;
        if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar14 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar9 != uVar6) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar6) {
          return;
        }
      } while( true );
    }
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    uVar13 = *puVar4;
    *param_2 = (int)(puVar4 + 1);
    if (uVar7 == local_3c) {
      FUN_010e54fc(&local_3c);
      iVar3 = local_38;
    }
    *(undefined4 *)(iVar3 + uVar7 * 4) = uVar13;
    uVar7 = uVar7 + 1;
    puVar4 = puVar4 + 1;
  }
  if (uVar7 < local_3c) {
    if (uVar7 == 0) {
      thunk_FUN_016d3fb4(iVar3);
      iVar3 = 4;
      goto LAB_010e58b4;
    }
    iVar3 = thunk_FUN_016d4ea4(iVar3,uVar7 << 2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar7 << 2);
    }
  }
  if (0xffff < uVar7) {
    thunk_FUN_016d3fb4();
    FUN_01613578(param_1,uVar7,"",&DAT_018abad0);
    return;
  }
LAB_010e58b4:
  param_1[1] = iVar3;
  param_1[2] = uVar7;
  *param_1 = 0x8000000a;
  return;
}

