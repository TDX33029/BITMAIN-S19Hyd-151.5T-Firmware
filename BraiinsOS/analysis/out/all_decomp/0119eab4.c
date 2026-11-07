// FUN_0119eab4 @ 0119eab4 size=300 calls_out=4 calls_in=1
// strings: additionalProperties

void FUN_0119eab4(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_011e50c8(&local_30,param_3,param_2);
  if (local_30 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_2c;
    if (*param_4 != 0) {
      iVar4 = param_4[1];
      if (iVar4 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar12 = *(int *)(iVar8 + 8) + 0x10;
      iVar10 = iVar13 * uVar14 + iVar13 + -4;
      iVar13 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar13 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar13 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar8 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar8 + 0x10);
        uVar7 = *(uint *)(iVar8 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar8,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar6;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar6 = uVar15;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar4 = param_4[1];
    iVar13 = *param_4;
    iVar8 = param_4[2];
    uVar15 = *(undefined4 *)(param_3 + 0x38);
    uVar16 = *(undefined4 *)(param_3 + 0x3c);
    uVar18 = FUN_0123ab30(uVar15,uVar16,"additionalProperties",0x14);
    uVar19 = FUN_0123ab30(uVar15,uVar16,&DAT_00569b28,8);
    piVar5 = (int *)thunk_FUN_016d4a50(0x28);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x28);
    }
    *piVar5 = local_30;
    piVar5[1] = local_2c;
    piVar5[2] = local_28;
    piVar5[3] = iVar13;
    piVar5[4] = iVar4;
    piVar5[5] = iVar8;
    *(undefined8 *)(piVar5 + 6) = uVar18;
    *(undefined8 *)(piVar5 + 8) = uVar19;
    *param_1 = (int)piVar5;
    param_1[1] = (int)&DAT_01889428;
  }
  return;
}

