// FUN_008f2028 @ 008f2028 size=280 calls_out=2 calls_in=3
// strings: 

void FUN_008f2028(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint local_50 [2];
  byte local_48;
  undefined4 local_44 [7];
  undefined4 uStack_28;
  int iStack_24;
  
LAB_008f205c:
  do {
    FUN_008e6b9c(local_50,param_1 + 0x70,param_1 + 0x20);
    if ((local_50[0] & 0xe) == 8) {
      iVar4 = *(int *)(param_1 + 0x74);
      do {
        iVar4 = *(int *)(iVar4 + 0x304);
        thunk_FUN_016d3fb4();
      } while (iVar4 != 0);
      if (*(int *)(param_1 + 0x40) != 0) {
        (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
      }
      if (param_1 != -1) {
        piVar5 = (int *)(param_1 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (param_1 == 0) {
            return;
          }
          iVar4 = FUN_016d3bc8();
          uVar15 = *(byte *)(param_1 + -3) & 0x1f;
          if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
             (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
            iVar8 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
          iVar14 = *(int *)(iVar4 + 8) + 0x10;
          iVar12 = iVar8 * uVar15 + iVar8 + -4;
          iVar8 = iVar14 + iVar12;
          if (4 < uVar11) {
            if (uVar11 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar11 = *(uint *)(iVar8 + -4);
            if (uVar11 < 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar2)();
            }
            if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar2)();
            }
          }
          if ((uint)(iVar8 - param_1) < uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar4 + 0x14);
          uVar11 = 1 << uVar15;
          *(undefined1 *)(param_1 + -3) = 0xff;
          *(undefined2 *)(param_1 + -2) = 0;
          do {
            uVar13 = *(uint *)(iVar4 + 0x10);
            uVar9 = *(uint *)(iVar4 + 0xc) | uVar13;
            if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar4,uVar15);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar6 = (undefined4 *)FUN_016d2bc8();
              uVar10 = *puVar6;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar6 = uVar10;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
              return;
            }
            puVar16 = (uint *)(iVar4 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar16);
              uVar9 = *puVar16;
              if (uVar13 != uVar9) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar1);
            *puVar16 = uVar11 + uVar13;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar13 == uVar9) {
              return;
            }
          } while( true );
        }
      }
      return;
    }
    if (local_50[0] == 0) goto LAB_008f2094;
    puVar6 = (undefined4 *)((uint)local_50 | 4);
  } while (local_50[0] != 2);
  goto LAB_008f204c;
LAB_008f2094:
  cVar7 = local_48 - 4;
  if (local_48 < 4) {
    cVar7 = '\x04';
  }
  puVar6 = local_44;
  if ((cVar7 == '\x05') || ((cVar7 == '\x04' && (local_48 == 3)))) {
LAB_008f204c:
    (*(code *)**(undefined4 **)*puVar6)();
  }
  goto LAB_008f205c;
}

