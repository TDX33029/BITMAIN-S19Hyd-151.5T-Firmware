// FUN_01669328 @ 01669328 size=232 calls_out=2 calls_in=1
// strings: 

void FUN_01669328(int *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  undefined4 *local_1c;
  
  iVar4 = *(int *)(param_2 + 0xc);
  while( true ) {
    uVar12 = *(undefined4 *)(param_2 + 8);
    FUN_0166a610(&local_30,param_2);
    if (local_30 != 3) break;
    if (*(int *)(param_2 + 0xc) == iVar4) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    iVar4 = *(int *)(param_2 + 0xc);
  }
  if (local_30 != 1) {
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    param_1[3] = iStack_24;
    param_1[4] = local_20;
    param_1[5] = (int)local_1c;
    return;
  }
  *(undefined4 *)(param_2 + 8) = uVar12;
  *(int *)(param_2 + 0xc) = iVar4;
  *param_1 = 3;
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(local_28);
  }
  if (local_20 != 0) {
    if ((code *)*local_1c != (code *)0x0) {
      (*(code *)*local_1c)(local_20);
    }
    if (local_1c[1] != 0) {
      if (local_20 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar13 = *(byte *)(local_20 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar8 = (uint)(*(byte *)(local_20 + -3) >> 5);
      iVar11 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar6 * uVar13 + iVar6 + -4;
      iVar6 = iVar11 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar6 + -4);
        if (uVar8 < 5) {
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
      if ((uint)(iVar6 - local_20) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar8 = 1 << uVar13;
      *(undefined1 *)(local_20 + -3) = 0xff;
      *(undefined2 *)(local_20 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
        if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar5;
          FUN_016d6ac4(local_28,iStack_24);
          *puVar5 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar7 = *puVar14;
          if (uVar10 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

