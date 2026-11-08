// FUN_0141253c @ 0141253c size=156 calls_out=2 calls_in=1
// strings: 

void FUN_0141253c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r4;
  undefined4 uVar9;
  undefined4 unaff_r5;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_0145d5e0(param_1 + 0x1c);
  uVar4 = param_1[0x16];
  uVar7 = 2;
  if ((int)uVar4 < 0) {
    uVar7 = uVar4 ^ 0x80000000;
  }
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      (**(code **)(param_1[0x17] + 0x10))(param_1 + 0x1a,param_1[0x18],param_1[0x19]);
    }
    else {
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(param_1[0x17]);
      }
      if (param_1[0x19] != 0) {
        thunk_FUN_016d3fb4(param_1[0x1a]);
      }
    }
  }
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    iVar11 = param_1[9];
    FUN_010bbc94(iVar11,param_1[10]);
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
    iVar12 = param_1[0xc];
    iVar11 = 0;
    iVar14 = param_1[0xd] + 1;
    while (uStack_1c = uStack_18, iVar14 = iVar14 + -1, iVar14 != 0) {
      iVar5 = iVar12 + iVar11;
      iVar11 = iVar11 + 0x24;
      (**(code **)(*(int *)(iVar5 + 0x10) + 0x10))
                (iVar5 + 0x1c,*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
    }
    if (param_1[0xb] != 0) {
      if (iVar12 == 0) {
        return;
      }
      uStack_18 = uStack_14;
      iVar11 = FUN_016d3bc8();
      uVar4 = *(byte *)(iVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar7 - 0x10, uVar7 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar12 + -3) >> 5);
      iVar13 = *(int *)(iVar11 + 8) + 0x10;
      iVar5 = iVar14 * uVar4 + iVar14 + -4;
      iVar14 = iVar13 + iVar5;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar14 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar14 - iVar12) < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar7 = 1 << uVar4;
      *(undefined1 *)(iVar12 + -3) = 0xff;
      *(undefined2 *)(iVar12 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar11 + 0x10);
        uVar8 = *(uint *)(iVar11 + 0xc) | uVar10;
        if ((uVar7 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar8 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar4);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar7 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar10 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar7 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

