// FUN_009b18f8 @ 009b18f8 size=692 calls_out=8 calls_in=0
// strings: 

void FUN_009b18f8(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  undefined4 extraout_s1;
  undefined8 unaff_d8;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  FUN_009b1c38(&local_54,param_2,param_3,&DAT_00349894,10,param_4,param_5);
  uVar10 = local_4c;
  iVar6 = local_50;
  uVar3 = 0;
  bVar17 = 0x1ffffffe < local_4c;
  bVar16 = local_4c == 0x1fffffff;
  uVar9 = local_4c * 8;
  if (local_4c < 0x20000000) {
    bVar17 = 0x7ffffffb < uVar9;
    bVar16 = uVar9 == 0x7ffffffc;
  }
  if (!bVar17 || bVar16) {
    uVar7 = 0;
    if (uVar9 == 0) {
      iVar4 = 4;
      uVar12 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(uVar9);
      uVar12 = uVar10;
      if (iVar4 == 0) {
        uVar3 = 4;
        goto LAB_009b1948;
      }
    }
    if (uVar10 != 0) {
      puVar13 = (undefined4 *)(iVar4 + 4);
      puVar5 = (undefined4 *)(iVar6 + 4);
      uVar9 = uVar10;
      do {
        uVar3 = *puVar5;
        uVar8 = puVar5[1];
        puVar5 = puVar5 + 3;
        puVar13[-1] = uVar3;
        *puVar13 = uVar8;
        puVar13 = puVar13 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uVar7 = uVar10;
    }
    if ((param_6 & 1) == 0) {
      FUN_009b4e0c(&local_48,DAT_018d7ff0 + 8,iVar4,uVar7);
      if (local_48 != 5) {
        local_2c = local_3c;
        local_38 = local_48;
        piStack_34 = local_44;
        uStack_30 = uStack_40;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01869dec,&DAT_01886b2c);
      }
      do {
        bVar16 = (bool)hasExclusiveAccess(local_44 + 2);
      } while (!bVar16);
      local_44[2] = 0;
      local_44[3] = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *local_44;
        bVar16 = (bool)hasExclusiveAccess(local_44);
      } while (!bVar16);
      *local_44 = iVar6 + -1;
    }
    else {
      FUN_009b4e0c(&local_48,DAT_018d7ff0 + 8,iVar4,uVar7);
      if (local_48 != 5) {
        local_2c = local_3c;
        local_38 = local_48;
        piStack_34 = local_44;
        uStack_30 = uStack_40;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01869dec,&DAT_01886b2c);
      }
      uVar3 = FUN_016d6168(SUB84((double)param_1 * 10.0,0));
      do {
        bVar16 = (bool)hasExclusiveAccess(local_44 + 2);
      } while (!bVar16);
      *(double *)(local_44 + 2) = (double)CONCAT44(extraout_s1,uVar3) / 10.0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *local_44;
        bVar16 = (bool)hasExclusiveAccess(local_44);
      } while (!bVar16);
      *local_44 = iVar6 + -1;
    }
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fa50();
    }
    if (uVar12 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    if (local_4c != 0) {
      puVar13 = (undefined4 *)(local_50 + 4);
      uVar9 = local_4c;
      do {
        if ((puVar13[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar13);
        }
        puVar13 = puVar13 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (local_54 == 0) {
      return;
    }
    if (local_50 == 0) {
      return;
    }
    iVar6 = FUN_016d3bc8();
    uVar9 = *(byte *)(local_50 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
      iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)(local_50 + -3) >> 5);
    iVar14 = *(int *)(iVar6 + 8) + 0x10;
    iVar11 = iVar4 * uVar9 + iVar4 + -4;
    iVar4 = iVar14 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar10 = *(uint *)(iVar4 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar4 - local_50) < uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar6 + 0x14);
    uVar10 = 1 << uVar9;
    *(undefined1 *)(local_50 + -3) = 0xff;
    *(undefined2 *)(local_50 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar6 + 0x10);
      uVar7 = *(uint *)(iVar6 + 0xc) | uVar12;
      if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8((int)register0x00000054 + -0x28,iVar6,uVar9);
        iVar6 = (int)((ulonglong)unaff_d8 >> 0x20);
        FUN_016dddc0(&DAT_018ddd48);
        if (iVar6 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar3 = *puVar13;
        FUN_016d6ac4((int)unaff_d8,iVar6);
        *puVar13 = uVar3;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar7 = *puVar15;
        if (uVar12 != uVar7) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar16);
      *puVar15 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar7) {
        return;
      }
    } while( true );
  }
LAB_009b1948:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar3,uVar9);
}

