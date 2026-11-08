// FUN_0161b9e4 @ 0161b9e4 size=392 calls_out=7 calls_in=3
// strings: 

void FUN_0161b9e4(undefined4 *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 unaff_r8;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  local_3c = 0;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(param_3);
    local_3c = param_3;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  iVar15 = *param_2;
  puVar16 = (undefined1 *)param_2[1];
  local_34 = 0;
  local_38 = iVar4;
  while (uVar14 = local_34, param_3 != local_34) {
    puVar5 = (undefined1 *)(iVar15 + local_34);
    if (puVar5 == puVar16) {
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined1 *)((int)param_1 + 5) = unaff_r8;
      *param_1 = 0x80000005;
      if (local_3c == 0) {
        return;
      }
      if (iVar4 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar13 = *(int *)(iVar15 + 8) + 0x10;
      iVar11 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar7 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar15 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar15 + 0x10);
        uVar8 = *(uint *)(iVar15 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar17 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar8 = *puVar17;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
    unaff_r8 = *puVar5;
    *param_2 = (int)(puVar5 + 1);
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    if (uVar14 == local_3c) {
      FUN_006029c0(&local_3c);
      iVar4 = local_38;
    }
    *(undefined1 *)(iVar4 + uVar14) = unaff_r8;
    local_34 = uVar14 + 1;
  }
  if (local_34 < local_3c) {
    if (local_34 == 0) {
      thunk_FUN_016d3fb4(iVar4);
      iVar4 = 1;
      goto LAB_0161bb20;
    }
    iVar4 = thunk_FUN_016d4ea4(iVar4,local_34);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar14);
    }
  }
  if (0x20 < uVar14) {
    thunk_FUN_016d3fb4();
    FUN_01613578(param_1,uVar14,"",&DAT_018abad0);
    return;
  }
LAB_0161bb20:
  param_1[1] = iVar4;
  param_1[2] = uVar14;
  *param_1 = 0x8000000a;
  return;
}

