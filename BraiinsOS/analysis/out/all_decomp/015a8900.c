// FUN_015a8900 @ 015a8900 size=444 calls_out=4 calls_in=1
// strings: 

void FUN_015a8900(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_4c;
  uint *local_48;
  int local_44;
  uint local_40;
  uint *local_3c;
  int local_38;
  uint local_30;
  uint *local_2c;
  int local_28;
  
  uVar13 = *param_4;
  if (param_3 < uVar13) {
    param_3 = uVar13;
  }
  puVar12 = (uint *)&DAT_00000004;
  uVar14 = 0;
  iVar4 = 0;
  do {
    if (param_3 == uVar13) {
      *param_1 = 1;
      param_1[1] = &DAT_80000008;
      if (uVar14 == 0) {
        return;
      }
      if (puVar12 == (uint *)0x0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar13 = *(byte *)((int)puVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar14 - 0x10, uVar14 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar14 = (uint)(*(byte *)((int)puVar12 + -3) >> 5);
      iVar11 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar7 * uVar13 + iVar7 + -4;
      iVar7 = iVar11 + iVar9;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar7 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - (int)puVar12) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(iVar4 + 0x14);
      uVar14 = 1 << uVar13;
      *(undefined1 *)((int)puVar12 + -3) = 0xff;
      *(undefined2 *)((int)puVar12 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar10;
        if ((uVar14 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar10 == 0) || (uVar8 + uVar14 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar14 + uVar10;
          return;
        }
        puVar12 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar12);
          uVar8 = *puVar12;
          if (uVar10 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar3);
        *puVar12 = uVar14 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar8) {
          return;
        }
      } while( true );
    }
    bVar1 = *(byte *)(param_2 + uVar13);
    uVar13 = uVar13 + 1;
    *param_4 = uVar13;
    if (uVar14 == 0x80000000) {
      if (puVar12[2] == 0) {
        local_38 = 0;
        local_3c = (uint *)&DAT_00000004;
        local_40 = 0;
      }
      else {
LAB_015a8998:
        local_30 = uVar14;
        local_2c = puVar12;
        local_28 = iVar4;
        FUN_0127ae58(&local_40,&local_30,0,7);
      }
    }
    else {
      if (iVar4 != 0) goto LAB_015a8998;
      local_38 = 0;
      local_40 = uVar14;
      local_3c = puVar12;
    }
    local_28 = 0;
    local_2c = (uint *)&DAT_00000004;
    local_30 = 0;
    if ((bVar1 & 0x7f) == 0) {
      puVar12 = (uint *)&DAT_00000004;
      uVar14 = 0;
      uVar6 = 0;
LAB_015a8a44:
      local_30 = local_40;
      local_2c = local_3c;
      local_28 = local_38;
      FUN_012742e0(&local_4c,&local_30,puVar12,uVar6);
    }
    else {
      FUN_0127ac28(&local_30);
      puVar12 = local_3c;
      uVar14 = local_40;
      uVar6 = 1;
      *local_2c = bVar1 & 0x7f;
      if (local_30 <= local_40) {
        puVar12 = local_2c;
        uVar14 = local_30;
        goto LAB_015a8a44;
      }
      local_28 = 1;
      FUN_012742e0(&local_4c,&local_30,local_3c,local_38);
    }
    if (uVar14 != 0) {
      thunk_FUN_016d3fb4(puVar12);
    }
    puVar12 = local_48;
    uVar14 = local_4c;
    iVar4 = local_44;
    if ((uint)(int)(char)bVar1 < 0x80000000) {
      *param_1 = 0;
      param_1[1] = local_4c;
      param_1[2] = local_48;
      param_1[3] = local_44;
      return;
    }
  } while( true );
}

