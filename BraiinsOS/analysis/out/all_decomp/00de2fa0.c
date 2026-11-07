// FUN_00de2fa0 @ 00de2fa0 size=184 calls_out=3 calls_in=2
// strings: 

void FUN_00de2fa0(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int unaff_r5;
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
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      bVar15 = param_1[2] == 0 && param_1[3] == 0;
      if (param_1[2] != 0 || param_1[3] != 0) {
        unaff_r5 = param_1[4];
        bVar15 = unaff_r5 == 0;
      }
      if (!bVar15) {
        puVar11 = (undefined4 *)param_1[5];
        pcVar4 = (code *)*puVar11;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(unaff_r5);
        }
        if (puVar11[1] != 0) {
          if (unaff_r5 == 0) {
            return;
          }
          iVar3 = FUN_016d3bc8();
          uVar13 = *(byte *)(unaff_r5 + -3) & 0x1f;
          if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
             (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
            iVar5 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar8 = (uint)(*(byte *)(unaff_r5 + -3) >> 5);
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
          if ((uint)(iVar5 - unaff_r5) < uVar8) {
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
          bVar2 = *(byte *)(iVar3 + 0x14);
          uVar8 = 1 << uVar13;
          *(undefined1 *)(unaff_r5 + -3) = 0xff;
          *(undefined2 *)(unaff_r5 + -2) = 0;
          do {
            uVar10 = *(uint *)(iVar3 + 0x10);
            uVar6 = *(uint *)(iVar3 + 0xc) | uVar10;
            if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar4)();
            }
            if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
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
    return;
  }
  cVar1 = *(char *)((int)param_1 + 0xf9);
  if (cVar1 == '\x04') {
    FUN_00de30a8(param_1 + 0x40);
    FUN_005c33e4(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  else if (cVar1 != '\x03') {
    iVar3 = 0xe4;
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_00de2ff0;
  }
  iVar3 = 0xd8;
LAB_00de2ff0:
  FUN_005c3b6c((int)param_1 + iVar3 + 8);
  return;
}

