// FUN_0132e8a8 @ 0132e8a8 size=240 calls_out=2 calls_in=15
// strings: 

void FUN_0132e8a8(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int local_38;
  int local_34;
  int iStack_30;
  int local_28;
  int local_24;
  int iStack_20;
  
  param_3[2] = 0;
  local_38 = *param_3;
  local_34 = param_3[1];
  iStack_30 = param_3[2];
  *param_3 = 0;
  param_3[1] = 1;
  param_3[2] = 0;
  FUN_0132d908(&local_28,param_2,&local_38);
  iVar7 = iStack_30;
  iVar4 = local_34;
  iVar5 = local_38;
  if (local_28 == 4) {
    FUN_00fab1e0(&local_28,local_34,iStack_30);
    iVar11 = iVar4;
    if (local_28 != 0) {
      if (iVar5 != -0x80000000) {
        *(undefined1 *)(param_1 + 1) = 5;
        *param_1 = 1;
        goto joined_r0x0132e954;
      }
      iVar11 = iVar7;
      iVar7 = local_24;
      iVar5 = iVar4;
    }
    *param_3 = iVar5;
    param_3[1] = iVar11;
    param_3[2] = iVar7;
    *param_1 = 4;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iStack_20;
joined_r0x0132e954:
    if (iVar5 != 0) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
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
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar5 + 0x10);
        uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar5,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(local_28,local_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

