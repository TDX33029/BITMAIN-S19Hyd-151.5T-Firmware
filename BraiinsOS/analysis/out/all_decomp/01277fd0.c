// FUN_01277fd0 @ 01277fd0 size=628 calls_out=7 calls_in=1
// strings: 

void FUN_01277fd0(uint *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int unaff_r4;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  cVar5 = *(char *)(param_3 + 0xc);
  if (cVar5 == '\x01') {
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar12 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar12;
    return;
  }
  uVar7 = (uint)(byte)param_2[3];
  if (uVar7 == 0) {
    if (cVar5 == '\0') goto LAB_01278080;
LAB_0127803c:
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    FUN_012742e0(&local_40,&local_30,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
LAB_01278188:
    FUN_01277908(param_1,uVar7,&local_40);
  }
  else {
    if (uVar7 == 1) {
      uVar8 = *(uint *)(param_3 + 8);
      uVar6 = 0;
      bVar16 = 0x3ffffffe < uVar8;
      bVar15 = uVar8 == 0x3fffffff;
      uVar7 = uVar8 * 4;
      if (uVar8 < 0x40000000) {
        bVar16 = 0x7ffffffb < uVar7;
        bVar15 = uVar7 == 0x7ffffffc;
      }
      if (bVar16 && !bVar15) {
LAB_01278024:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,uVar7);
      }
      uVar6 = *(undefined4 *)(param_3 + 4);
      if (uVar7 == 0) {
        uVar3 = 4;
        uVar12 = 0;
      }
      else {
        uVar3 = thunk_FUN_016d4a50(uVar7);
        uVar12 = uVar8;
        if (uVar3 == 0) {
          uVar6 = 4;
          goto LAB_01278024;
        }
      }
      FUN_016dd1aa(uVar3,uVar6,uVar7);
      *(char *)(param_1 + 3) = '\x02' - cVar5;
      *param_1 = uVar12;
      param_1[1] = uVar3;
      param_1[2] = uVar8;
      uVar7 = *param_2;
    }
    else {
      if (cVar5 == '\0') goto LAB_0127803c;
LAB_01278080:
      uVar12 = *(uint *)(param_3 + 8);
      uVar8 = param_2[2];
      if (uVar8 != uVar12) {
        cVar5 = (uVar8 >= uVar12 && uVar8 != uVar12) - (uVar8 < uVar12);
      }
      else {
        iVar9 = uVar8 << 2;
        do {
          iVar13 = *(int *)(param_3 + 4) + iVar9;
          if (iVar9 == 0) {
            cVar5 = '\0';
            if (*(int *)(param_3 + 4) != iVar13) {
              cVar5 = -1;
            }
            goto joined_r0x01278100;
          }
          uVar8 = *(uint *)((param_2[1] - 4) + iVar9);
          iVar9 = iVar9 + -4;
          uVar3 = *(uint *)(iVar13 + -4);
        } while (uVar8 == uVar3);
        cVar5 = (uVar8 >= uVar3) - (uVar8 < uVar3);
      }
joined_r0x01278100:
      if (cVar5 != '\0') {
        if (cVar5 == -1) {
          local_30 = *param_2;
          local_2c = param_2[1];
          local_28 = param_2[2];
          FUN_01273ebc(&local_40,*(undefined4 *)(param_3 + 4),uVar12,&local_30);
          uVar7 = 2 - uVar7;
        }
        else {
          local_30 = *param_2;
          local_2c = param_2[1];
          local_28 = param_2[2];
          FUN_01273cac(&local_30,*(undefined4 *)(param_3 + 4),uVar12);
          local_40 = local_30;
          uStack_3c = local_2c;
          uStack_38 = local_28;
        }
        goto LAB_01278188;
      }
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 1;
      uVar7 = *param_2;
    }
    if (uVar7 != 0) {
      uVar7 = param_2[1];
      if (uVar7 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar8 = *(byte *)(uVar7 - 3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar13 = uVar12 - 0x10, uVar12 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar12 = (uint)(*(byte *)(uVar7 - 3) >> 5);
      iVar11 = *(int *)(iVar9 + 8) + 0x10;
      iVar10 = iVar13 * uVar8 + iVar13 + -4;
      iVar13 = iVar11 + iVar10;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar13 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar13 - uVar7 < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar9 + 0x14);
      uVar12 = 1 << uVar8;
      *(undefined1 *)(uVar7 - 3) = 0xff;
      *(undefined2 *)(uVar7 - 2) = 0;
      do {
        uVar3 = *(uint *)(iVar9 + 0x10);
        uVar7 = *(uint *)(iVar9 + 0xc) | uVar3;
        if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar3 == 0) || (uVar7 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar9,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar4;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar4 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar12 + uVar3;
          return;
        }
        puVar14 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar7 = *puVar14;
          if (uVar3 != uVar7) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar12 + uVar3;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar3 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

