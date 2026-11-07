// FUN_00e7e67c @ 00e7e67c size=508 calls_out=5 calls_in=1
// strings: 

void FUN_00e7e67c(int param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == 0) {
    puVar16 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar16;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      puVar16 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar1 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar1);
      *puVar16 = uVar5 | param_2[0x12];
      DataMemoryBarrier(0xb);
      if ((param_2[0x12] & uVar5) == 0) {
        FUN_00e9d178(param_2 + 0x13);
        FUN_00e9d178(param_2 + 0x1c);
      }
      puVar16 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar1 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar1);
      *(char *)puVar16 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        if (param_2[0x26] != 0) {
          thunk_FUN_016d3fb4(param_2[0x25]);
        }
        FUN_00e7e584(param_2 + 0x15);
        FUN_00e7e584(param_2 + 0x1e);
        goto LAB_00e7e868;
      }
    }
  }
  else if (param_1 == 1) {
    puVar16 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar16;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      FUN_00eaee08(param_2);
      puVar16 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar1 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar1);
      *(char *)puVar16 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        uVar8 = param_2[8];
        piVar4 = (int *)param_2[1];
        for (uVar5 = *param_2 & 0xfffffffe; uVar5 != (uVar8 & 0xfffffffe); uVar5 = uVar5 + 2) {
          piVar15 = piVar4;
          if ((~uVar5 & 0x3e) == 0) {
            piVar15 = (int *)*piVar4;
            thunk_FUN_016d3fb4(piVar4);
          }
          piVar4 = piVar15;
        }
        if (piVar4 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar4);
        }
        FUN_00e7e584(param_2 + 0x12);
LAB_00e7e868:
        if (param_2 == (uint *)0x0) {
          return;
        }
        iVar6 = FUN_016d3bc8();
        uVar5 = *(byte *)((int)param_2 + -3) & 0x1f;
        if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar8 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
        iVar14 = *(int *)(iVar6 + 8) + 0x10;
        iVar12 = iVar9 * uVar5 + iVar9 + -4;
        iVar9 = iVar14 + iVar12;
        if (4 < uVar8) {
          if (uVar8 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar8 = *(uint *)(iVar9 + -4);
          if (uVar8 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar9 - (int)param_2) < uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 - uVar8) != '\0') {
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
        uVar8 = 1 << uVar5;
        *(undefined1 *)((int)param_2 + -3) = 0xff;
        *(undefined2 *)((int)param_2 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar6 + 0x10);
          uVar10 = *(uint *)(iVar6 + 0xc) | uVar13;
          if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar13 == 0) || (uVar10 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar6,uVar5);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar11 = *puVar7;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar7 = uVar11;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar6 + 0x10) = uVar8 + uVar13;
            return;
          }
          puVar16 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar10 = *puVar16;
            if (uVar13 != uVar10) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar1);
          *puVar16 = uVar8 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar10) {
            return;
          }
        } while( true );
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      FUN_00eaf174(param_2 + 2);
      puVar16 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar1 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar1);
      *(char *)puVar16 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        FUN_00e7e584(param_2 + 4);
        FUN_00e7e584(param_2 + 10);
        goto LAB_00e7e868;
      }
    }
  }
  return;
}

