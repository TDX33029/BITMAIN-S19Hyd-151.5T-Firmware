// FUN_014f073c @ 014f073c size=168 calls_out=0 calls_in=7
// strings: 

void FUN_014f073c(byte *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = param_1[0x20] - 1;
  if (param_1[0x20] == 0 || iVar6 == 0) {
    iVar6 = 0;
  }
  switch(iVar6) {
  case 0:
    if (*(int *)param_1 != 0) {
      (**(code **)(*(int *)param_1 + 0x10))
                (param_1 + 0xc,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x014f07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
              (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    return;
  case 1:
  case 3:
  case 4:
  case 5:
                    /* WARNING: Could not recover jumptable at 0x014f0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1 + 0x10))
              (param_1 + 0xc,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case 2:
    if ((9 < *param_1) && (*(int *)(param_1 + 8) != 0)) {
      iVar6 = *(int *)(param_1 + 4);
      if (iVar6 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
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
      if ((uint)(iVar7 - iVar6) < uVar10) {
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
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
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

