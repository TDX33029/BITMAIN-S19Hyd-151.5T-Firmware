// FUN_00c95aac @ 00c95aac size=272 calls_out=4 calls_in=1
// strings: 

void FUN_00c95aac(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x2f] == '\x03') {
      FUN_009722ec(param_1 + 4);
      return;
    }
    if ((char)param_1[0x2f] == '\0') {
      piVar3 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fa8e94(param_1[2]);
      }
      param_1 = param_1 + 3;
      FUN_01663cc4(*param_1);
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(param_1);
        return;
      }
      return;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] == 0 && param_1[3] == 0) {
      if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c95ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)param_1[4])();
        return;
      }
    }
    else {
      iVar8 = param_1[4];
      if (iVar8 != 0) {
        puVar13 = (undefined4 *)param_1[5];
        pcVar5 = (code *)*puVar13;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar8);
        }
        if (puVar13[1] != 0) {
          if (iVar8 == 0) {
            return;
          }
          iVar4 = FUN_016d3bc8();
          uVar15 = *(byte *)(iVar8 + -3) & 0x1f;
          if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
             (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
            iVar6 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar10 = (uint)(*(byte *)(iVar8 + -3) >> 5);
          iVar14 = *(int *)(iVar4 + 8) + 0x10;
          iVar11 = iVar6 * uVar15 + iVar6 + -4;
          iVar6 = iVar14 + iVar11;
          if (4 < uVar10) {
            if (uVar10 != 5) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar5)();
            }
            uVar10 = *(uint *)(iVar6 + -4);
            if (uVar10 < 5) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar5)();
            }
            if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar5 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar5)();
            }
          }
          if ((uint)(iVar6 - iVar8) < uVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar5)();
          }
          if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar5)();
          }
          if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar5)();
          }
          bVar2 = *(byte *)(iVar4 + 0x14);
          uVar10 = 1 << uVar15;
          *(undefined1 *)(iVar8 + -3) = 0xff;
          *(undefined2 *)(iVar8 + -2) = 0;
          do {
            uVar12 = *(uint *)(iVar4 + 0x10);
            uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
            if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar5)();
            }
            if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar4,uVar15);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar13 = (undefined4 *)FUN_016d2bc8();
              uVar9 = *puVar13;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar13 = uVar9;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
              return;
            }
            puVar16 = (uint *)(iVar4 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar16);
              uVar7 = *puVar16;
              if (uVar12 != uVar7) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar1);
            *puVar16 = uVar10 + uVar12;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar12 == uVar7) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

