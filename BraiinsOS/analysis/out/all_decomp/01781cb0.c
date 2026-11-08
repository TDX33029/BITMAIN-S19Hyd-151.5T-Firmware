// FUN_01781cb0 @ 01781cb0 size=352 calls_out=3 calls_in=0
// strings: 

uint FUN_01781cb0(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  if ((param_1 == (undefined4 *)0x0) ||
     (iVar5 = FUN_016dedc0(&DAT_018dfec4,param_2,&PTR_018bc3f4,0), iVar5 != 0)) {
    if (local_1c == DAT_018ddaf8) {
      return 0;
    }
  }
  else {
    if ((local_3c < &DAT_018dfea4 && (int *)((int)&DAT_018dfea4 + 1U) <= &local_1c) ||
       (local_3c <= (undefined4 *)((int)&DAT_018dfec0 + 3) &&
        (undefined4 *)((int)&DAT_018dfea4 + 1) <= local_3c)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1781e0c);
      (*pcVar1)();
    }
    local_3c[0] = DAT_018dfea4;
    local_3c[1] = DAT_018dfea8;
    local_3c[2] = DAT_018dfeac;
    local_3c[3] = DAT_018dfeb0;
    local_2c = DAT_018dfeb4;
    uStack_28 = DAT_018dfeb8;
    iStack_24 = DAT_018dfebc;
    uStack_20 = DAT_018dfec0;
    FUN_016df192(&DAT_018dfec4);
    puVar4 = param_1;
    puVar12 = local_3c;
    do {
      if ((code *)*puVar12 != (code *)0x0) {
        (*(code *)*puVar12)(*puVar4);
      }
      puVar4 = puVar4 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar4 != param_1 + 8);
    if (local_1c == DAT_018ddaf8) {
      if (param_1 == (undefined4 *)0x0) {
        return 0;
      }
      iVar5 = FUN_016d3bc8();
      uVar14 = *(byte *)((int)param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
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
      if ((uint)(iVar6 - (int)param_1) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)((int)param_1 + -3) = 0xff;
      *(undefined2 *)((int)param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar14);
          iVar5 = iStack_24;
          uVar14 = FUN_016dddc0(&DAT_018ddd48);
          if (iVar5 == 0) {
            return uVar14;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          uVar14 = FUN_016d6ac4(uStack_28,iVar5);
          *puVar4 = uVar8;
          return uVar14;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return uVar9;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return uVar9;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

