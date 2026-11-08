// FUN_01277980 @ 01277980 size=720 calls_out=4 calls_in=1
// strings: 

void FUN_01277980(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  cVar1 = (char)param_3[3];
  if (cVar1 == '\x01') {
    uVar16 = param_2[1];
    uVar11 = *param_3;
    uVar13 = param_2[2];
    uVar7 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar16;
    param_1[2] = uVar13;
    param_1[3] = uVar7;
    if (uVar11 == 0) {
      return;
    }
    uVar7 = param_3[1];
    goto LAB_014b47f4;
  }
  cVar6 = (char)param_2[3];
  if (cVar6 == '\0') {
    if (cVar1 != '\0') {
LAB_01277a18:
      uVar7 = param_3[2];
      uVar11 = param_2[2];
      if (uVar11 != uVar7) {
        cVar8 = (uVar11 >= uVar7 && uVar11 != uVar7) - (uVar11 < uVar7);
      }
      else {
        iVar14 = uVar11 << 2;
        do {
          uVar13 = param_3[1] + iVar14;
          if (iVar14 == 0) {
            cVar8 = '\0';
            if (param_3[1] != uVar13) {
              cVar8 = -1;
            }
            goto joined_r0x01277b00;
          }
          uVar16 = *(uint *)((param_2[1] - 4) + iVar14);
          iVar14 = iVar14 + -4;
          uVar13 = *(uint *)(uVar13 - 4);
        } while (uVar16 == uVar13);
        cVar8 = (uVar16 >= uVar13) - (uVar16 < uVar13);
      }
joined_r0x01277b00:
      if (cVar8 != '\0') {
        if (cVar8 == -1) {
          local_30 = *param_3;
          local_2c = param_3[1];
          local_28 = param_3[2];
          uVar7 = *param_2;
          uVar13 = param_2[1];
          FUN_01273cac(&local_30,uVar13,uVar11);
          local_40 = local_30;
          uStack_3c = local_2c;
          uStack_38 = local_28;
          cVar6 = cVar1;
          if (uVar7 != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
        }
        else {
          uVar11 = *param_3;
          uVar13 = param_3[1];
          local_30 = *param_2;
          local_2c = param_2[1];
          local_28 = param_2[2];
          FUN_01273cac(&local_30,uVar13,uVar7);
          local_40 = local_30;
          uStack_3c = local_2c;
          uStack_38 = local_28;
          if (uVar11 != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
        }
        goto LAB_01277bf8;
      }
      uVar7 = *param_3;
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 1;
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(param_3[1]);
      }
      goto LAB_012779f4;
    }
  }
  else {
    if (cVar6 == '\x01') {
      uVar13 = param_3[1];
      uVar11 = param_3[2];
      uVar7 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar13;
      param_1[2] = uVar11;
      param_1[3] = uVar7;
LAB_012779f4:
      if (*param_2 == 0) {
        return;
      }
      uVar7 = param_2[1];
LAB_014b47f4:
      if (uVar7 == 0) {
        return;
      }
      iVar14 = FUN_016d3bc8();
      uVar11 = *(byte *)(uVar7 - 3) & 0x1f;
      if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar13 = (uint)(*(byte *)(uVar7 - 3) >> 5);
      iVar15 = *(int *)(iVar14 + 8) + 0x10;
      iVar12 = iVar9 * uVar11 + iVar9 + -4;
      iVar9 = iVar15 + iVar12;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar13 = *(uint *)(iVar9 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar9 - uVar7 < uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar13) != '\0') {
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
      uVar13 = 1 << uVar11;
      *(undefined1 *)(uVar7 - 3) = 0xff;
      *(undefined2 *)(uVar7 - 2) = 0;
      do {
        uVar16 = *(uint *)(iVar14 + 0x10);
        uVar7 = *(uint *)(iVar14 + 0xc) | uVar16;
        if ((uVar13 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar16 == 0) || (uVar7 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar14,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar14 + 0x10) = uVar13 + uVar16;
          return;
        }
        puVar17 = (uint *)(iVar14 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar16 != uVar7) goto LAB_016d409c;
          bVar4 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar4);
        *puVar17 = uVar13 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar7) {
          return;
        }
      } while( true );
    }
    if (cVar1 == '\0') goto LAB_01277a18;
  }
  uVar11 = *param_3;
  uVar7 = *param_2;
  if (uVar7 < uVar11) {
    uVar13 = param_2[1];
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    FUN_012742e0(&local_40,&local_30,uVar13,param_2[2]);
  }
  else {
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    uVar13 = param_3[1];
    FUN_012742e0(&local_40,&local_30,uVar13,param_3[2]);
    uVar7 = uVar11;
  }
  if (uVar7 != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
LAB_01277bf8:
  FUN_01277908(param_1,cVar6,&local_40);
  return;
}

