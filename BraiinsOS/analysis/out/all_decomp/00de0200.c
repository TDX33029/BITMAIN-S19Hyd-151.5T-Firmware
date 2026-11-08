// FUN_00de0200 @ 00de0200 size=436 calls_out=8 calls_in=2
// strings: 

void FUN_00de0200(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar9 = (undefined4 *)param_1[4];
      if (param_1[2] == 0 && param_1[3] == 0) {
        if (puVar9 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de02ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar9)(puVar9);
          return;
        }
      }
      else if (puVar9 != (undefined4 *)0x0) {
        puVar13 = (undefined4 *)param_1[5];
        pcVar4 = (code *)*puVar13;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(puVar9);
        }
        if (puVar13[1] != 0) {
          if (puVar9 == (undefined4 *)0x0) {
            return;
          }
          iVar14 = FUN_016d3bc8();
          uVar16 = *(byte *)((int)puVar9 + -3) & 0x1f;
          if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
             (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar3 = uVar10 - 0x10, uVar10 == 0)) {
            iVar3 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar10 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
          iVar15 = *(int *)(iVar14 + 8) + 0x10;
          iVar11 = iVar3 * uVar16 + iVar3 + -4;
          iVar3 = iVar15 + iVar11;
          if (4 < uVar10) {
            if (uVar10 != 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar4)();
            }
            uVar10 = *(uint *)(iVar3 + -4);
            if (uVar10 < 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar4)();
            }
            if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar4)();
            }
          }
          if ((uint)(iVar3 - (int)puVar9) < uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar4)();
          }
          if (*(char *)(iVar3 - uVar10) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar4)();
          }
          if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar4)();
          }
          bVar2 = *(byte *)(iVar14 + 0x14);
          uVar10 = 1 << uVar16;
          *(undefined1 *)((int)puVar9 + -3) = 0xff;
          *(undefined2 *)((int)puVar9 + -2) = 0;
          do {
            uVar12 = *(uint *)(iVar14 + 0x10);
            uVar6 = *(uint *)(iVar14 + 0xc) | uVar12;
            if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar4)();
            }
            if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar14,uVar16);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar9 = (undefined4 *)FUN_016d2bc8();
              uVar8 = *puVar9;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar9 = uVar8;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar14 + 0x10) = uVar10 + uVar12;
              return;
            }
            puVar17 = (uint *)(iVar14 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar17);
              uVar6 = *puVar17;
              if (uVar12 != uVar6) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar17);
            } while (!bVar1);
            *puVar17 = uVar10 + uVar12;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar12 == uVar6) {
              return;
            }
          } while( true );
        }
      }
    }
    return;
  }
  if ((char)param_1[0x38] == '\x03') {
    FUN_00de0458(param_1 + 7);
    return;
  }
  if ((char)param_1[0x38] != '\0') {
    return;
  }
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(param_1[3]);
  }
  iVar14 = param_1[5];
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar14 + 0x44);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 != 1) goto LAB_00de0334;
  pcVar7 = (char *)(iVar14 + 0x10);
  if (*pcVar7 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar7);
    if (!bVar1) goto LAB_00de0310;
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00de0310:
    FUN_01280da8(pcVar7);
  }
  FUN_0128236c(pcVar7);
  *(undefined1 *)(iVar14 + 0x2c) = 1;
  FUN_0072a978(iVar14 + 8,pcVar7);
LAB_00de0334:
  piVar5 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(param_1[5]);
  }
  param_1 = param_1 + 6;
  FUN_01663cc4(*param_1);
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1);
    return;
  }
  return;
}

