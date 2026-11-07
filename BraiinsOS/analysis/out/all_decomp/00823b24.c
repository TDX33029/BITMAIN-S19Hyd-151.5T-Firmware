// FUN_00823b24 @ 00823b24 size=512 calls_out=4 calls_in=1
// strings: 

void FUN_00823b24(uint *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 local_48;
  ushort *local_44;
  uint local_40;
  char local_38;
  undefined1 local_30;
  char local_2f;
  char local_2e;
  undefined4 uStack_28;
  
  FUN_00873008(&local_48);
  uVar11 = local_40;
  puVar5 = local_44;
  uVar17 = local_48;
  if (local_48 == 0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = (uint)local_44;
    return;
  }
  FUN_00822058(&local_48);
  if ((char)local_48 == '\x01') {
    puVar6 = local_44;
  }
  else {
    if (local_38 == local_48._1_1_) {
      if (param_4 == '\0') {
        puVar6 = (ushort *)&DAT_00000004;
        local_40 = 0;
        local_44 = (ushort *)&DAT_00000004;
        local_48 = 0;
        if ((uVar11 & 0x7ffffffe) != 0) {
          iVar14 = -(uVar11 & 0x7ffffffe);
          puVar16 = puVar5;
          do {
            uVar11 = local_40;
            uVar1 = *puVar16;
            if (local_40 == local_48) {
              FUN_005fd37c(&local_48);
              puVar6 = local_44;
            }
            *(uint *)(puVar6 + uVar11 * 2) = (uint)uVar1;
            local_40 = uVar11 + 1;
            iVar14 = iVar14 + 2;
            puVar16 = puVar16 + 1;
          } while (iVar14 != 0);
        }
      }
      else if (param_4 == '\x01') {
        puVar6 = (ushort *)&DAT_00000004;
        local_40 = 0;
        local_44 = (ushort *)&DAT_00000004;
        local_48 = 0;
        if ((uVar11 & 0x7ffffffc) != 0) {
          iVar14 = -(uVar11 & 0x7ffffffc);
          do {
            uVar11 = local_40;
            uVar10 = *(undefined4 *)(puVar5 + local_40 * 2);
            if (local_40 == local_48) {
              FUN_005fd37c(&local_48);
              puVar6 = local_44;
            }
            *(undefined4 *)(puVar6 + uVar11 * 2) = uVar10;
            local_40 = uVar11 + 1;
            iVar14 = iVar14 + 4;
          } while (iVar14 != 0);
        }
      }
      else {
        puVar6 = (ushort *)&DAT_00000004;
        local_40 = 0;
        local_44 = (ushort *)&DAT_00000004;
        local_48 = 0;
        if ((uVar11 & 0x7ffffffe) != 0) {
          iVar14 = -(uVar11 & 0x7ffffffe);
          puVar16 = puVar5;
          do {
            uVar11 = local_40;
            uVar1 = *puVar16;
            if (local_40 == local_48) {
              FUN_005fd37c(&local_48);
              puVar6 = local_44;
            }
            *(uint *)(puVar6 + uVar11 * 2) = (uint)uVar1;
            local_40 = uVar11 + 1;
            iVar14 = iVar14 + 2;
            puVar16 = puVar16 + 1;
          } while (iVar14 != 0);
        }
      }
      *param_1 = local_48;
      param_1[1] = (uint)local_44;
      param_1[2] = local_40;
      goto joined_r0x00823cf8;
    }
    local_2e = local_48._1_1_;
    local_2f = local_38;
    local_30 = 4;
    puVar6 = (ushort *)FUN_0080b0cc(&local_30);
  }
  *param_1 = 0x80000000;
  param_1[1] = (uint)puVar6;
joined_r0x00823cf8:
  if (uVar17 == 0) {
    return;
  }
  if (puVar5 == (ushort *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar17 = *(byte *)((int)puVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
  iVar15 = *(int *)(iVar14 + 8) + 0x10;
  iVar12 = iVar8 * uVar17 + iVar8 + -4;
  iVar8 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - (int)puVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar14 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)((int)puVar5 + -3) = 0xff;
  puVar5[-1] = 0;
  do {
    uVar13 = *(uint *)(iVar14 + 0x10);
    uVar9 = *(uint *)(iVar14 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar18 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar9 = *puVar18;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar4);
    *puVar18 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

