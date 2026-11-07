// FUN_01412be4 @ 01412be4 size=216 calls_out=2 calls_in=0
// strings: 

void FUN_01412be4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 uVar7;
  undefined4 unaff_r5;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    local_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    iVar10 = param_1[9];
    FUN_010bbc94(iVar10,param_1[10]);
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar11 = param_1[0xc];
    iVar10 = 0;
    iVar13 = param_1[0xd] + 1;
    while (uStack_1c = local_18, iVar13 = iVar13 + -1, iVar13 != 0) {
      iVar4 = iVar11 + iVar10;
      iVar10 = iVar10 + 0x24;
      (**(code **)(*(int *)(iVar4 + 0x10) + 0x10))
                (iVar4 + 0x1c,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    }
    if (param_1[0xb] != 0) {
      if (iVar11 == 0) {
        return;
      }
      local_18 = uStack_14;
      iVar10 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar13 = uVar8 - 0x10, uVar8 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar11 + -3) >> 5);
      iVar12 = *(int *)(iVar10 + 8) + 0x10;
      iVar4 = iVar13 * uVar14 + iVar13 + -4;
      iVar13 = iVar12 + iVar4;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar13 + -4);
        if (uVar8 < 5) {
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
      if ((uint)(iVar13 - iVar11) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar10 + 0x14);
      uVar8 = 1 << uVar14;
      *(undefined1 *)(iVar11 + -3) = 0xff;
      *(undefined2 *)(iVar11 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar10 + 0x10);
        uVar6 = *(uint *)(iVar10 + 0xc) | uVar9;
        if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar9 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar8 + uVar9;
          return;
        }
        puVar15 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar9 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar8 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

