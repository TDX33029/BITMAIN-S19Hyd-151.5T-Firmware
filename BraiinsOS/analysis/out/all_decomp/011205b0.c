// FUN_011205b0 @ 011205b0 size=356 calls_out=7 calls_in=1
// strings: BUG: response handled as request

void FUN_011205b0(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint local_38;
  uint uStack_34;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  if ((*param_2 & 1) == 0) {
    uVar5 = param_2[2];
    uVar7 = param_2[3];
    local_38 = param_2[10];
    uStack_34 = param_2[0xb];
    if ((char)local_38 != '\n') {
      FUN_0111fd7c(&local_38,&DAT_0041950e,&DAT_0188710c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1120714);
      (*pcVar1)();
    }
    FUN_01125d9c(&local_2c,param_2 + 4);
    if (local_2c == -0x80000000) {
      *param_1 = 0x80000003;
      param_1[1] = local_28;
      return;
    }
    *param_1 = &DAT_8000000c;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    param_1[3] = local_2c;
    param_1[4] = local_28;
    param_1[5] = local_24;
    return;
  }
  iVar4 = thunk_FUN_016d4a50(0x20);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x20);
  }
  FUN_016dd1aa(iVar4,"BUG: response handled as request",0x20);
  uVar5 = param_2[2];
  *param_1 = 0x80000006;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = iVar4;
  param_1[4] = 0x20;
  if ((char)uVar5 != '\x06') {
    FUN_01120384();
  }
  if (param_2[8] != 0x80000000) {
    if (param_2[8] != 0) {
      thunk_FUN_016d3fb4(param_2[9]);
    }
    if ((param_2[0xb] & 0x7fffffff) != 0) {
      uVar5 = param_2[0xc];
      if (uVar5 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar7 = *(byte *)(uVar5 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar5 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar11 = iVar8 * uVar7 + iVar8 + -4;
      iVar8 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar8 - uVar5 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
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
      uVar10 = 1 << uVar7;
      *(undefined1 *)(uVar5 - 3) = 0xff;
      *(undefined2 *)(uVar5 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar5 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar5 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(local_28,local_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar14 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar5 = *puVar14;
          if (uVar12 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

