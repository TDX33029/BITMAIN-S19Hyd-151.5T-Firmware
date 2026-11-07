// FUN_005c28e8 @ 005c28e8 size=192 calls_out=0 calls_in=2
// strings: 

void FUN_005c28e8(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0xcc) {
        ClearExclusiveLocal();
                    /* WARNING: Could not recover jumptable at 0x005c29a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar2[2] + 0x10))();
        return;
      }
      DataMemoryBarrier(0xb);
      bVar15 = (bool)hasExclusiveAccess(piVar2);
      if (!bVar15) {
                    /* WARNING: Could not recover jumptable at 0x005c298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar2[2] + 0x10))();
        return;
      }
      *piVar2 = 0x84;
    }
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    if (param_1[2] != 0 || param_1[3] != 0) {
      bVar15 = param_1[4] == 0 && param_1[5] == 0;
      if (param_1[4] != 0 || param_1[5] != 0) {
        unaff_r4 = param_1[6];
        bVar15 = unaff_r4 == 0;
      }
      if (!bVar15) {
        puVar11 = (undefined4 *)param_1[7];
        pcVar4 = (code *)*puVar11;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(unaff_r4);
        }
        if (puVar11[1] != 0) {
          if (unaff_r4 == 0) {
            return;
          }
          iVar3 = FUN_016d3bc8();
          uVar13 = *(byte *)(unaff_r4 + -3) & 0x1f;
          if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
             (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
            iVar5 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar8 = (uint)(*(byte *)(unaff_r4 + -3) >> 5);
          iVar12 = *(int *)(iVar3 + 8) + 0x10;
          iVar9 = iVar5 * uVar13 + iVar5 + -4;
          iVar5 = iVar12 + iVar9;
          if (4 < uVar8) {
            if (uVar8 != 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar4)();
            }
            uVar8 = *(uint *)(iVar5 + -4);
            if (uVar8 < 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar4)();
            }
            if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar4)();
            }
          }
          if ((uint)(iVar5 - unaff_r4) < uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar4)();
          }
          if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar4)();
          }
          if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar4)();
          }
          bVar1 = *(byte *)(iVar3 + 0x14);
          uVar8 = 1 << uVar13;
          *(undefined1 *)(unaff_r4 + -3) = 0xff;
          *(undefined2 *)(unaff_r4 + -2) = 0;
          do {
            uVar10 = *(uint *)(iVar3 + 0x10);
            uVar6 = *(uint *)(iVar3 + 0xc) | uVar10;
            if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar4)();
            }
            if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar3,uVar13);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar11 = (undefined4 *)FUN_016d2bc8();
              uVar7 = *puVar11;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar11 = uVar7;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar3 + 0x10) = uVar8 + uVar10;
              return;
            }
            puVar14 = (uint *)(iVar3 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar14);
              uVar6 = *puVar14;
              if (uVar10 != uVar6) goto LAB_016d409c;
              bVar15 = (bool)hasExclusiveAccess(puVar14);
            } while (!bVar15);
            *puVar14 = uVar8 + uVar10;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar10 == uVar6) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

