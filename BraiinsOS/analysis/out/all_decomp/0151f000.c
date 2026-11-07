// FUN_0151f000 @ 0151f000 size=160 calls_out=0 calls_in=1
// strings: 

void FUN_0151f000(int *param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 uStack_28;
  
  uVar16 = (**(code **)(param_4 + 0xc))(param_3);
  iVar14 = param_2[1];
  (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0x18))((int)uVar16,iVar14,param_2[2]);
  if ((char)param_2[3] == '\0') {
    iVar5 = *param_2;
    param_1[3] = param_3;
    param_1[4] = param_4;
    *(undefined8 *)(param_1 + 5) = uVar16;
    *param_1 = -0x80000000;
    if (iVar5 != 0) {
      if (iVar14 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar6 * uVar13 + iVar6 + -4;
      iVar6 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar6 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar13;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar14 = param_2[1];
    iVar5 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar14;
    param_1[2] = iVar5;
    param_1[3] = param_3;
    param_1[4] = param_4;
    *(undefined8 *)(param_1 + 5) = uVar16;
  }
  return;
}

