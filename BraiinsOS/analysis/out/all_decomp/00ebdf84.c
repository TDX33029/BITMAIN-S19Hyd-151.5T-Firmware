// FUN_00ebdf84 @ 00ebdf84 size=288 calls_out=3 calls_in=0
// strings: 

void FUN_00ebdf84(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  uint local_178;
  int local_174;
  int local_b8;
  undefined4 local_b4;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_98;
  int iStack_94;
  int local_38;
  int local_34;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_016dd1aa(&local_178,param_4,0x158);
  uVar5 = extraout_r1;
  if (param_2 != 0) {
    uVar5 = local_178 ^ 2;
  }
  if (param_2 != 0 && (uVar5 != 0 || local_174 != 0)) {
    FUN_016dd1aa(param_1 + 2,param_4,0x158);
    *param_1 = param_2;
    param_1[1] = (int)param_3;
    return;
  }
  param_1[2] = 2;
  param_1[3] = 0;
  if (param_2 != 0) {
    if ((code *)*param_3 != (code *)0x0) {
      (*(code *)*param_3)(param_2);
    }
    if (param_3[1] != 0) {
      thunk_FUN_016d3fb4(param_2);
    }
  }
  if (local_178 != 2 || local_174 != 0) {
    if (local_b8 != 0) {
      thunk_FUN_016d3fb4(local_b4);
    }
    FUN_00f24ed8(local_a8,local_a4);
    if (local_ac != 0) {
      thunk_FUN_016d3fb4(local_a8);
    }
    bVar14 = local_98 != 5 || iStack_94 != 0;
    iVar3 = 0;
    if (bVar14) {
      iVar3 = local_38;
    }
    if (bVar14 && iVar3 != 0) {
      if (local_34 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar5 = *(byte *)(local_34 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(local_34 + -3) >> 5);
      iVar12 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar6 * uVar5 + iVar6 + -4;
      iVar6 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar6 - local_34) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar5;
      *(undefined1 *)(local_34 + -3) = 0xff;
      *(undefined2 *)(local_34 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar13 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar13);
          uVar7 = *puVar13;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar14 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar14);
        *puVar13 = uVar9 + uVar11;
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

