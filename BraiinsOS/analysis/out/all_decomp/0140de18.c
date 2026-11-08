// FUN_0140de18 @ 0140de18 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_0140de18(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = *param_1;
  uVar4 = param_1[1];
  uVar7 = 0;
  if (uVar6 != 6 || uVar4 != 0) {
    uVar7 = uVar6 ^ 5;
  }
  if (uVar4 != 0 || uVar6 != 6 && uVar7 != 0) {
    if (uVar6 != 4 || uVar4 != 0) {
      if (uVar6 == 3 && uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0140deb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
        return;
      }
      FUN_00a517d8();
      return;
    }
    if ((char)param_1[2] == '\x03') {
      puVar9 = (undefined4 *)param_1[3];
      uVar12 = *puVar9;
      puVar14 = (undefined4 *)puVar9[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (puVar9 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar7 = *(byte *)((int)puVar9 - 3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar8 = uVar4 - 0x10, uVar4 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar4 = (uint)(*(byte *)((int)puVar9 - 3) >> 5);
      iVar13 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar8 * uVar7 + iVar8 + -4;
      iVar8 = iVar13 + iVar10;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar4 = *(uint *)(iVar8 + -4);
        if (uVar4 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar8 - (int)puVar9) < uVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar8 - uVar4) != '\0') {
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
      uVar4 = 1 << uVar7;
      *(undefined1 *)((int)puVar9 - 3) = 0xff;
      *(undefined2 *)((int)puVar9 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar4 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar4 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar9;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar9 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar4 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar4 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

