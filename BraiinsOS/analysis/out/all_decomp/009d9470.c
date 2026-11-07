// FUN_009d9470 @ 009d9470 size=640 calls_out=4 calls_in=2
// strings: 

void FUN_009d9470(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int unaff_r4;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint local_2c;
  uint local_28;
  
  uVar17 = param_3 * 4;
  if (param_3 == 0) {
    uVar3 = *(uint *)(param_4 + 0x18);
    puVar4 = (uint *)&DAT_00000004;
    FUN_016dd1aa(4,param_2,0);
    uVar18 = 0;
    uVar9 = 0;
    local_2c = 0;
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_4 + 0x1c);
    uVar9 = 0;
    uVar18 = 0;
    uVar7 = uVar3 - *(uint *)(param_4 + 0x20);
    if (uVar3 < *(uint *)(param_4 + 0x20)) {
      uVar7 = 0;
    }
    do {
      puVar4 = param_2 + uVar9;
      uVar9 = uVar9 + 1;
      if (uVar7 < *puVar4) {
        uVar18 = uVar18 + 1;
      }
    } while (param_3 != uVar9);
    uVar7 = 0;
    uVar9 = 0;
    do {
      puVar4 = param_2 + uVar7;
      uVar7 = uVar7 + 1;
      if (uVar3 < *puVar4) {
        uVar9 = uVar9 + 1;
      }
    } while (param_3 != uVar7);
    bVar21 = 0x3ffffffe < param_3;
    bVar20 = param_3 == 0x3fffffff;
    if (param_3 < 0x40000000) {
      bVar21 = 0x7ffffffb < uVar17;
      bVar20 = uVar17 == 0x7ffffffc;
    }
    if (bVar21 && !bVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar17);
    }
    local_28 = *(uint *)(param_4 + 0x18);
    if (uVar17 == 0) {
      puVar4 = (uint *)&DAT_00000004;
      local_2c = 0;
    }
    else {
      puVar4 = (uint *)thunk_FUN_016d4a50(uVar17);
      local_2c = param_3;
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar17);
      }
    }
    FUN_016dd1aa(puVar4,param_2,uVar17);
    if (1 < param_3) {
      if (param_3 < 0x15) {
        puVar16 = puVar4 + 1;
        iVar19 = 0;
        puVar8 = puVar16;
        do {
          uVar3 = puVar8[-1];
          uVar7 = *puVar8;
          if (uVar3 < uVar7) {
            iVar12 = iVar19;
            do {
              *(uint *)((int)puVar16 + iVar12) = uVar3;
              if (iVar12 == 0) {
                puVar5 = puVar4;
                goto LAB_009d968c;
              }
              iVar10 = iVar12 + -4;
              uVar3 = *(uint *)((int)puVar16 + iVar12 + -8);
              iVar12 = iVar10;
            } while (uVar3 < uVar7);
            puVar5 = (uint *)((int)puVar16 + iVar10);
LAB_009d968c:
            *puVar5 = uVar7;
          }
          puVar8 = puVar8 + 1;
          iVar19 = iVar19 + 4;
        } while (puVar8 != puVar4 + param_3);
      }
      else {
        FUN_009ba0c8(puVar4,param_3);
      }
    }
    uVar7 = 0;
    if (local_28 != 0 && param_3 != 0) {
      uVar7 = param_3 - 1 & 0x3fffffff;
      uVar3 = local_28 - 1;
      if (uVar7 < local_28 - 1) {
        uVar3 = uVar7;
      }
      puVar8 = puVar4;
      if (uVar3 != 0) {
        uVar7 = *puVar4;
        puVar16 = puVar4;
        do {
          puVar16 = puVar16 + 1;
          uVar14 = *puVar16;
          if (uVar14 < uVar7) {
            puVar8 = puVar16;
          }
          if (uVar14 <= uVar7) {
            uVar7 = uVar14;
          }
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = *puVar8;
    }
    uVar3 = local_28;
  }
  do {
    uVar14 = uVar17;
    if (uVar14 == 0) break;
    uVar11 = *param_2;
    param_2 = param_2 + 1;
    uVar17 = uVar14 - 4;
  } while (uVar11 <= *(uint *)(param_4 + 0x20));
  *param_1 = uVar18;
  param_1[1] = uVar7;
  *(bool *)((int)param_1 + 9) = uVar3 <= uVar9;
  *(bool *)(param_1 + 2) = uVar3 <= uVar18;
  *(bool *)((int)param_1 + 10) = uVar14 == 0;
  if (local_2c == 0) {
    return;
  }
  if (puVar4 == (uint *)0x0) {
    return;
  }
  iVar19 = FUN_016d3bc8();
  uVar17 = *(byte *)((int)puVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar19 + 0x14) & 0x1f) != 0) ||
     (uVar3 = *(uint *)(iVar19 + 0x14) & 0xfffff000, iVar12 = uVar3 - 0x10, uVar3 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar19 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar3 = (uint)(*(byte *)((int)puVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar19 + 8) + 0x10;
  iVar10 = iVar12 * uVar17 + iVar12 + -4;
  iVar12 = iVar15 + iVar10;
  if (4 < uVar3) {
    if (uVar3 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar3 = *(uint *)(iVar12 + -4);
    if (uVar3 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - (int)puVar4) < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar19 + 0x14);
  uVar3 = 1 << uVar17;
  *(undefined1 *)((int)puVar4 + -3) = 0xff;
  *(undefined2 *)((int)puVar4 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar19 + 0x10);
    uVar7 = *(uint *)(iVar19 + 0xc) | uVar9;
    if ((uVar3 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar7 + uVar3 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar19,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar19 + 0x10) = uVar3 + uVar9;
      return;
    }
    puVar4 = (uint *)(iVar19 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar4);
      uVar7 = *puVar4;
      if (uVar9 != uVar7) goto LAB_016d409c;
      bVar20 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar20);
    *puVar4 = uVar3 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar7) {
      return;
    }
  } while( true );
}

