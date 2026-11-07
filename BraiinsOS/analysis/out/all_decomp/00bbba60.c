// FUN_00bbba60 @ 00bbba60 size=272 calls_out=2 calls_in=11
// strings: 

void FUN_00bbba60(int *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00408976,0x18,&DAT_018a4d54);
  }
  puVar13 = (undefined4 *)param_2[1];
  iVar3 = (*(code *)puVar13[3])(iVar7,param_3);
  if (iVar3 == 0) {
    pcVar4 = (code *)*puVar13;
    iVar3 = param_2[2];
    iVar5 = param_2[3];
    *param_2 = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    *param_1 = iVar3;
    param_1[1] = iVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar7);
    }
    if (puVar13[1] != 0) {
      if (iVar7 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar12 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar5 * uVar14 + iVar5 + -4;
      iVar5 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if ((uint)(iVar5 - iVar7) < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar1 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar3,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar13 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar13;
          FUN_016d6ac4(local_28,iStack_24);
          *puVar13 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar2);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar3 = param_2[2];
    puVar15 = (undefined4 *)param_2[3];
    (*(code *)puVar15[3])(&local_30,iVar3,param_3);
    if ((char)local_28 == '\x03') {
      *(undefined1 *)(param_1 + 2) = 4;
    }
    else {
      *param_2 = 0;
      pcVar4 = (code *)*puVar15;
      *param_1 = local_30;
      param_1[1] = iStack_2c;
      param_1[2] = local_28;
      param_1[3] = iVar7;
      param_1[4] = (int)puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar3);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
        return;
      }
    }
  }
  return;
}

