// FUN_00e9d738 @ 00e9d738 size=204 calls_out=3 calls_in=0
// strings: fatal runtime error: thread local panicked on drop; aborting  | a formatting trait implementation returned an error when the underlying stream did not

void FUN_00e9d738(uint *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint local_28;
  undefined4 *local_24;
  undefined4 uStack_20;
  
  local_24 = (undefined4 *)param_1[1];
  *(undefined1 *)param_1 = 4;
  local_28 = *param_1;
  uStack_20 = param_2;
  iVar4 = FUN_008a2080(&local_28,"fatal runtime error: thread local panicked on drop, aborting\n",
                       0x3d);
  puVar3 = local_24;
  uVar5 = local_28 & 0xff;
  if (iVar4 == 0) {
    if ((uVar5 != 4) && (uVar5 == 3)) {
      uVar12 = *local_24;
      puVar14 = (undefined4 *)local_24[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar5 = *(byte *)((int)puVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)puVar3 + -3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar7 * uVar5 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar9 = *(uint *)(iVar7 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar7 - (int)puVar3) < uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar1 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar5;
      *(undefined1 *)((int)puVar3 + -3) = 0xff;
      *(undefined2 *)((int)puVar3 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar5);
          puVar3 = local_24;
          FUN_016dddc0(&DAT_018ddd48);
          if (puVar3 == (undefined4 *)0x0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar14;
          FUN_016d6ac4(local_28,puVar3);
          *puVar14 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (uVar5 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_018ac994);
    }
    *param_1 = local_28;
    param_1[1] = (uint)local_24;
  }
  return;
}

