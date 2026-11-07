// FUN_01515818 @ 01515818 size=856 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01515818(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int unaff_r4;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 uVar20;
  undefined *puVar21;
  uint *puVar22;
  bool bVar23;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  uint local_28;
  
  FUN_0152d84c(&local_34,&DAT_018a7650,param_2);
  puVar21 = local_30;
  puVar8 = (undefined *)((uint)local_34 & 0xff);
  if (puVar8 == (undefined *)0x18) {
    puVar8 = (undefined *)param_2[1];
    uVar11 = param_2[2];
    if (puVar8 + -uVar11 < local_30) {
      bVar4 = true;
      uVar11 = 0;
      uVar13 = 0;
      uVar12 = 0;
      puVar8 = (undefined *)0xb;
      puVar9 = (undefined *)0x0;
      puVar21 = &DAT_0040bafa;
    }
    else {
      puVar9 = local_30 + uVar11;
      param_2[2] = (int)puVar9;
      if ((CARRY4(uVar11,(uint)local_30)) || (puVar8 < puVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,puVar9,puVar8,&DAT_018a78f8);
      }
      iVar10 = *param_2;
      bVar4 = false;
      bVar23 = local_30 != (undefined *)0x0;
      local_2c = (undefined *)0x0;
      local_30 = (undefined *)0x1;
      local_34 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
      if (bVar23) {
        puVar8 = (undefined *)0x1;
        do {
          puVar9 = local_2c;
          uVar1 = local_2c[iVar10 + uVar11];
          uVar20 = 10;
          switch(uVar1) {
          case 1:
            uVar20 = 0;
            break;
          case 2:
            uVar20 = 1;
            break;
          case 3:
            uVar20 = 2;
            break;
          case 4:
            uVar20 = 3;
            break;
          case 5:
            uVar20 = 4;
            break;
          case 6:
            uVar20 = 5;
            break;
          case 0x14:
            uVar20 = 6;
            break;
          case 0x40:
            uVar20 = 7;
            break;
          case 0x41:
            uVar20 = 8;
            break;
          case 0x42:
            uVar20 = 9;
          default:
          }
          if (local_2c == local_34) {
            FUN_0154e058(&local_34);
            puVar8 = local_30;
          }
          local_2c = puVar9 + 1;
          puVar8[(int)puVar9 * 2] = uVar20;
          (puVar8 + (int)puVar9 * 2)[1] = uVar1;
        } while (puVar21 != local_2c);
        puVar9 = puVar21;
      }
      uVar11 = (uint)local_34 >> 0x18;
      uVar13 = (uint)local_34 >> 0x10;
      uVar12 = (uint)local_34 >> 8;
      puVar8 = local_34;
      puVar21 = local_30;
    }
  }
  else {
    uVar12 = (uint)local_34 >> 8 & 0xff;
    bVar4 = true;
    uVar13 = (uint)local_34 >> 0x10 & 0xff;
    uVar11 = (uint)local_34 >> 0x18;
    puVar9 = local_2c;
  }
  uVar11 = uVar11 << 0x18 | (uVar13 & 0xff) << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar8 & 0xff;
  if (bVar4) {
    param_1[3] = (uint)puVar9;
    *param_1 = 0x80000000;
    param_1[1] = uVar11;
    param_1[2] = (uint)puVar21;
    return;
  }
  FUN_0150a0ec(&local_34,param_2);
  uVar13 = local_28;
  puVar6 = local_2c;
  puVar8 = local_30;
  if (local_34 == (undefined *)0x1) {
    param_1[3] = local_28;
    *param_1 = 0x80000000;
    param_1[1] = (uint)local_30;
    param_1[2] = (uint)local_2c;
  }
  else {
    FUN_01509810(&local_34,param_2);
    puVar7 = local_2c;
    puVar5 = local_30;
    if (local_34 == (undefined *)0x1) {
      param_1[2] = (uint)local_2c;
      *param_1 = 0x80000000;
      param_1[1] = (uint)local_30;
      param_1[3] = local_28;
    }
    else {
      if (uVar13 != 0) {
        param_1[8] = local_28;
        *param_1 = uVar11;
        param_1[1] = (uint)puVar21;
        param_1[2] = (uint)puVar9;
        param_1[3] = (uint)puVar8;
        param_1[4] = (uint)puVar6;
        param_1[5] = uVar13;
        param_1[6] = (uint)local_30;
        param_1[7] = (uint)local_2c;
        return;
      }
      puVar15 = (undefined4 *)(local_2c + 4);
      *param_1 = 0x80000000;
      *(undefined1 *)(param_1 + 1) = 0xe;
      for (uVar13 = local_28; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (puVar15[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar15);
        }
        puVar15 = puVar15 + 3;
      }
      if (puVar5 != (undefined *)0x0) {
        thunk_FUN_016d3fb4(puVar7);
      }
    }
    if (puVar8 != (undefined *)0x0) {
      thunk_FUN_016d3fb4(puVar6);
    }
  }
  if (uVar11 == 0) {
    return;
  }
  if (puVar21 == (undefined *)0x0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar11 = (byte)puVar21[-3] & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar14 = uVar13 - 0x10, uVar13 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)((byte)puVar21[-3] >> 5);
  iVar19 = *(int *)(iVar10 + 8) + 0x10;
  iVar17 = iVar14 * uVar11 + iVar14 + -4;
  iVar14 = iVar19 + iVar17;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar14 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - (int)puVar21) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar19 + iVar17) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar13 = 1 << uVar11;
  puVar21[-3] = 0xff;
  *(undefined2 *)(puVar21 + -2) = 0;
  do {
    uVar18 = *(uint *)(iVar10 + 0x10);
    uVar12 = *(uint *)(iVar10 + 0xc) | uVar18;
    if ((uVar13 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar18 == 0) || (uVar12 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar15;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar15 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar13 + uVar18;
      return;
    }
    puVar22 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar22);
      uVar12 = *puVar22;
      if (uVar18 != uVar12) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar22);
    } while (!bVar4);
    *puVar22 = uVar13 + uVar18;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar18 == uVar12) {
      return;
    }
  } while( true );
}

