// FUN_0157789c @ 0157789c size=328 calls_out=2 calls_in=1
// strings: 

void FUN_0157789c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar13 = *(int *)(param_1 + 8);
  if (iVar13 != -0x80000000) {
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined4 *)(param_1 + 0x4c);
      local_44 = *(undefined4 *)(param_1 + 0x48);
      local_3c = 0;
      local_4c = 0;
      local_48 = iVar4;
      local_38 = iVar4;
      local_34 = local_44;
    }
    local_50 = (uint)(iVar4 != 0);
    local_40 = local_50;
    while (FUN_01577d58(&local_2c,&local_50), iVar7 = local_24, iVar4 = local_2c, local_2c != 0) {
      iVar5 = local_2c + local_24 * 0xc;
      if (*(int *)(iVar5 + 0x1bc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0x1c0));
      }
      iVar4 = iVar4 + iVar7 * 0x28;
      if (*(int *)(iVar4 + 0x18) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x1c));
      }
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    if ((*(uint *)(param_1 + 0x38) & 0x7fffffff) == 0) {
      iVar13 = *(int *)(param_1 + 0x14);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
      iVar13 = *(int *)(param_1 + 0x14);
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar13 = *(int *)(param_1 + 0x30);
      if (iVar13 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
      iVar12 = *(int *)(iVar4 + 8) + 0x10;
      iVar5 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar12 + iVar5;
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
      if ((uint)(iVar7 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(iVar13 + -3) = 0xff;
      *(undefined2 *)(iVar13 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,local_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

