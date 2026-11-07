// FUN_00c3fdf4 @ 00c3fdf4 size=316 calls_out=5 calls_in=2
// strings: 

void FUN_00c3fdf4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint local_40;
  int *local_3c;
  uint uStack_38;
  uint local_30;
  int *local_2c;
  undefined4 local_28;
  
  uVar14 = param_2[1] - *param_2;
  iVar9 = uVar14 * 0x18;
  uVar4 = 0;
  if (0x5555555 < uVar14) {
LAB_00c3fe2c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,iVar9);
  }
  uVar19 = 0;
  if (iVar9 == 0) {
    piVar5 = (int *)&DAT_00000004;
    uVar14 = 0;
  }
  else {
    piVar5 = (int *)thunk_FUN_016d4a50(iVar9);
    if (piVar5 == (int *)0x0) {
      uVar4 = 4;
      goto LAB_00c3fe2c;
    }
  }
  iVar9 = *param_2;
  iVar11 = param_2[1];
  local_28 = 0;
  if (iVar9 != iVar11) {
    uVar19 = 0;
    param_2 = param_2 + iVar9 * 6 + 2;
    piVar6 = piVar5;
    do {
      iVar8 = *param_2;
      iVar10 = param_2[1];
      iVar12 = param_2[2];
      iVar15 = param_2[3];
      iVar16 = param_2[4];
      iVar18 = param_2[5];
      uVar19 = uVar19 + 1;
      param_2 = param_2 + 6;
      *piVar6 = iVar8;
      piVar6[1] = iVar10;
      piVar6[2] = iVar12;
      piVar6[3] = iVar15;
      piVar6[4] = iVar16;
      piVar6[5] = iVar18;
      piVar6 = piVar6 + 6;
    } while ((iVar9 - iVar11) + uVar19 != 0);
  }
  local_40 = uVar14;
  local_3c = piVar5;
  uStack_38 = uVar19;
  local_30 = uVar14;
  local_2c = piVar5;
  if (uVar19 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    if (uVar14 != 0) {
      if (piVar5 == (int *)0x0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar14 = *(byte *)((int)piVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar19 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar19 - 0x10, uVar19 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar19 = (uint)(*(byte *)((int)piVar5 + -3) >> 5);
      iVar10 = *(int *)(iVar9 + 8) + 0x10;
      iVar8 = iVar11 * uVar14 + iVar11 + -4;
      iVar11 = iVar10 + iVar8;
      if (4 < uVar19) {
        if (uVar19 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar19 = *(uint *)(iVar11 + -4);
        if (uVar19 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar11 - (int)piVar5) < uVar19) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 - uVar19) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar9 + 0x14);
      uVar19 = 1 << uVar14;
      *(undefined1 *)((int)piVar5 + -3) = 0xff;
      *(undefined2 *)((int)piVar5 + -2) = 0;
      do {
        uVar17 = *(uint *)(iVar9 + 0x10);
        uVar13 = *(uint *)(iVar9 + 0xc) | uVar17;
        if ((uVar19 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar17 == 0) || (uVar13 + uVar19 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar9,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar4 = *puVar7;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar7 = uVar4;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar19 + uVar17;
          return;
        }
        puVar20 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar20);
          uVar13 = *puVar20;
          if (uVar17 != uVar13) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar3);
        *puVar20 = uVar19 + uVar17;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar17 == uVar13) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (uVar19 != 1) {
      if (uVar19 < 0x15) {
        FUN_00b5d634(piVar5,uVar19);
      }
      else {
        FUN_00cda20c(piVar5,uVar19);
      }
    }
    FUN_00c3e990(param_1,&local_40);
  }
  return;
}

