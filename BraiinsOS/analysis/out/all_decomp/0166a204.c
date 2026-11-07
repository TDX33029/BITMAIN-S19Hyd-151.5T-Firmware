// FUN_0166a204 @ 0166a204 size=236 calls_out=2 calls_in=2
// strings: 

void FUN_0166a204(int *param_1,undefined4 param_2,int param_3)

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
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  undefined4 *local_24;
  
  iVar13 = *(int *)(param_3 + 0xc);
  while( true ) {
    uVar12 = *(undefined4 *)(param_3 + 8);
    FUN_0167b734(&local_38,param_2,param_3);
    if (local_38 != 3) break;
    if (*(int *)(param_3 + 0xc) == iVar13) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    iVar13 = *(int *)(param_3 + 0xc);
  }
  if (local_38 != 1) {
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    param_1[3] = iStack_2c;
    param_1[4] = local_28;
    param_1[5] = (int)local_24;
    return;
  }
  *(undefined4 *)(param_3 + 8) = uVar12;
  *(int *)(param_3 + 0xc) = iVar13;
  *param_1 = 3;
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  puVar5 = local_24;
  iVar13 = local_28;
  if (local_28 != 0) {
    if ((code *)*local_24 != (code *)0x0) {
      (*(code *)*local_24)(local_28);
    }
    if (puVar5[1] != 0) {
      if (iVar13 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar8 = (uint)(*(byte *)(iVar13 + -3) >> 5);
      iVar11 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar6 * uVar14 + iVar6 + -4;
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
      if ((uint)(iVar6 - iVar13) < uVar8) {
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
      uVar8 = 1 << uVar14;
      *(undefined1 *)(iVar13 + -3) = 0xff;
      *(undefined2 *)(iVar13 + -2) = 0;
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
          FUN_016d3ca8(&local_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == (undefined4 *)0x0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar5;
          FUN_016d6ac4(local_28,local_24);
          *puVar5 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar10 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar8 + uVar10;
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

