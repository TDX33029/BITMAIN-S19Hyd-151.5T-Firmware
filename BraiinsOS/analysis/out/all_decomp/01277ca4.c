// FUN_01277ca4 @ 01277ca4 size=728 calls_out=4 calls_in=1
// strings: 

void FUN_01277ca4(uint *param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_r4;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint *puVar16;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  cVar14 = (char)param_3[3];
  if (cVar14 == '\x01') {
    uVar15 = param_2[1];
    uVar9 = *param_3;
    uVar11 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar15;
    param_1[2] = uVar11;
    param_1[3] = uVar5;
    if (uVar9 == 0) {
      return;
    }
    uVar5 = param_3[1];
    goto LAB_014b47f4;
  }
  uVar5 = (uint)(byte)param_2[3];
  if (uVar5 == 0) {
    if (cVar14 == '\0') goto LAB_01277dac;
LAB_01277d44:
    uVar11 = *param_3;
    uVar9 = *param_2;
    if (uVar9 < uVar11) {
      uVar15 = param_2[1];
      local_30 = *param_3;
      local_2c = param_3[1];
      local_28 = param_3[2];
      FUN_012742e0(&local_40,&local_30,uVar15,param_2[2]);
    }
    else {
      local_30 = *param_2;
      local_2c = param_2[1];
      local_28 = param_2[2];
      uVar15 = param_3[1];
      FUN_012742e0(&local_40,&local_30,uVar15,param_3[2]);
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      thunk_FUN_016d3fb4(uVar15);
    }
LAB_01277f24:
    FUN_01277908(param_1,uVar5,&local_40);
  }
  else {
    if (uVar5 == 1) {
      uVar9 = *param_3;
      uVar15 = param_3[1];
      uVar11 = param_3[2];
      uVar5 = param_3[3];
      param_1[3] = uVar5;
      *param_1 = uVar9;
      param_1[1] = uVar15;
      param_1[2] = uVar11;
      *(char *)(param_1 + 3) = '\x02' - (char)uVar5;
    }
    else {
      if (cVar14 == '\0') goto LAB_01277d44;
LAB_01277dac:
      uVar9 = param_3[2];
      uVar11 = param_2[2];
      if (uVar11 != uVar9) {
        cVar14 = (uVar11 >= uVar9 && uVar11 != uVar9) - (uVar11 < uVar9);
      }
      else {
        iVar12 = uVar11 << 2;
        do {
          uVar15 = param_3[1] + iVar12;
          if (iVar12 == 0) {
            cVar14 = '\0';
            if (param_3[1] != uVar15) {
              cVar14 = -1;
            }
            goto joined_r0x01277e6c;
          }
          uVar7 = *(uint *)((param_2[1] - 4) + iVar12);
          iVar12 = iVar12 + -4;
          uVar15 = *(uint *)(uVar15 - 4);
        } while (uVar7 == uVar15);
        cVar14 = (uVar7 >= uVar15) - (uVar7 < uVar15);
      }
joined_r0x01277e6c:
      if (cVar14 != '\0') {
        if (cVar14 == -1) {
          local_30 = *param_3;
          local_2c = param_3[1];
          local_28 = param_3[2];
          uVar9 = *param_2;
          uVar15 = param_2[1];
          FUN_01273cac(&local_30,uVar15,uVar11);
          uVar5 = 2 - uVar5;
          local_40 = local_30;
          uStack_3c = local_2c;
          uStack_38 = local_28;
          if (uVar9 != 0) {
            thunk_FUN_016d3fb4(uVar15);
          }
        }
        else {
          uVar11 = *param_3;
          uVar15 = param_3[1];
          local_30 = *param_2;
          local_2c = param_2[1];
          local_28 = param_2[2];
          FUN_01273cac(&local_30,uVar15,uVar9);
          local_40 = local_30;
          uStack_3c = local_2c;
          uStack_38 = local_28;
          if (uVar11 != 0) {
            thunk_FUN_016d3fb4(uVar15);
          }
        }
        goto LAB_01277f24;
      }
      uVar5 = *param_3;
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 1;
      if (uVar5 != 0) {
        thunk_FUN_016d3fb4(param_3[1]);
      }
    }
    if (*param_2 != 0) {
      uVar5 = param_2[1];
LAB_014b47f4:
      if (uVar5 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar9 = *(byte *)(uVar5 - 3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(uVar5 - 3) >> 5);
      iVar13 = *(int *)(iVar12 + 8) + 0x10;
      iVar10 = iVar6 * uVar9 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar11 = *(uint *)(iVar6 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar6 - uVar5 < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar12 + 0x14);
      uVar11 = 1 << uVar9;
      *(undefined1 *)(uVar5 - 3) = 0xff;
      *(undefined2 *)(uVar5 - 2) = 0;
      do {
        uVar15 = *(uint *)(iVar12 + 0x10);
        uVar5 = *(uint *)(iVar12 + 0xc) | uVar15;
        if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar15 == 0) || (uVar5 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar12,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar11 + uVar15;
          return;
        }
        puVar16 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar5 = *puVar16;
          if (uVar15 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar11 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

