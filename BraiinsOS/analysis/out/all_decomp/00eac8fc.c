// FUN_00eac8fc @ 00eac8fc size=196 calls_out=2 calls_in=1
// strings: 

void FUN_00eac8fc(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x14) == '\x03') {
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      if (*(char *)(param_1 + 0x48) == '\x03') {
        if (*(short *)(param_1 + 0x28) != 3) {
          return;
        }
        piVar5 = *(int **)(param_1 + 0x2c);
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = 0x84;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
                    /* WARNING: Could not recover jumptable at 0x00eac9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar5[2] + 0x10))();
        return;
      }
      if ((*(char *)(param_1 + 0x48) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
        iVar4 = *(int *)(param_1 + 0x20);
        goto LAB_014b47f4;
      }
    }
  }
  else if (*(char *)(param_1 + 0x14) == '\x04') {
    FUN_00ead754(param_1 + 0x38);
    FUN_00d971fc(param_1 + 0x2a0);
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar4 = *(int *)(param_1 + 0x30);
LAB_014b47f4:
      if (iVar4 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar14 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar8 * uVar15 + iVar8 + -4;
      iVar8 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar8 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar8 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar11 = 1 << uVar15;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar9 = *puVar16;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

