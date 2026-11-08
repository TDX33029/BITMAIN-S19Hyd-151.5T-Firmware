// FUN_014ed8bc @ 014ed8bc size=140 calls_out=1 calls_in=5
// strings: 

void FUN_014ed8bc(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = (uint)*param_1;
  if ((1 < uVar4 - 2) && (uVar4 != 0)) {
    if (uVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x014ed8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 8) + 0x10))
                (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      return;
    }
    if (param_1[4] == 3) {
      puVar8 = *(undefined4 **)(param_1 + 8);
      uVar12 = *puVar8;
      puVar14 = (undefined4 *)puVar8[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar4 = *(byte *)((int)puVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
      iVar13 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar6 * uVar4 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar6 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar1 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar4;
      *(undefined1 *)((int)puVar8 + -3) = 0xff;
      *(undefined2 *)((int)puVar8 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar4);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

