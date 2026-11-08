// FUN_0107ebb0 @ 0107ebb0 size=576 calls_out=9 calls_in=0
// strings: capacity overflow | capacity overflow

void FUN_0107ebb0(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r4;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  int local_28;
  uint local_24;
  
  uVar5 = param_1[0x42];
  uVar6 = uVar5;
  if ((uVar5 < 9) || (uVar6 = param_1[1], uVar6 != 0xffffffff)) {
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = 0xffffffff >> LZCOUNT(uVar6);
    }
    uVar6 = uVar7 + 1;
    if (uVar7 != 0xffffffff) {
      uVar9 = 8;
      puVar13 = param_1 + 2;
      uVar11 = uVar5;
      if (8 < uVar5) {
        uVar11 = param_1[1];
        puVar13 = (undefined4 *)param_1[2];
        uVar9 = uVar5;
      }
      if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_005660d0,0x20,&DAT_0188b970);
      }
      if (uVar7 < 8) {
        if (8 < uVar5) {
          *param_1 = 0;
          FUN_016dd1aa(param_1 + 2,puVar13,uVar11 << 5);
          bVar15 = 0x7fffffe < uVar9;
          if (uVar9 < 0x8000000) {
            bVar15 = 0x7ffffff8 < uVar9 << 5;
          }
          param_1[0x42] = uVar11;
          if (bVar15) {
            local_28 = 0;
            local_24 = uVar9 << 5;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01883c88,&DAT_0188b940);
          }
          if (puVar13 == (undefined4 *)0x0) {
            return;
          }
          iVar3 = FUN_016d3bc8();
          uVar6 = *(byte *)((int)puVar13 + -3) & 0x1f;
          if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
             (uVar5 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar4 = uVar5 - 0x10, uVar5 == 0)) {
            iVar4 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar5 = (uint)(*(byte *)((int)puVar13 + -3) >> 5);
          iVar12 = *(int *)(iVar3 + 8) + 0x10;
          iVar10 = iVar4 * uVar6 + iVar4 + -4;
          iVar4 = iVar12 + iVar10;
          if (4 < uVar5) {
            if (uVar5 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar5 = *(uint *)(iVar4 + -4);
            if (uVar5 < 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar1)();
            }
            if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar1)();
            }
          }
          if ((uint)(iVar4 - (int)puVar13) < uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar4 - uVar5) != '\0') {
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
          uVar5 = 1 << uVar6;
          *(undefined1 *)((int)puVar13 + -3) = 0xff;
          *(undefined2 *)((int)puVar13 + -2) = 0;
          do {
            uVar11 = *(uint *)(iVar3 + 0x10);
            uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
            if ((uVar5 & uVar7) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar11 == 0) || (uVar7 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&local_28,iVar3,uVar6);
              FUN_016dddc0(&DAT_018ddd48);
              if (local_24 == 0) {
                return;
              }
              puVar13 = (undefined4 *)FUN_016d2bc8();
              uVar8 = *puVar13;
              FUN_016d6ac4(local_28,local_24);
              *puVar13 = uVar8;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar3 + 0x10) = uVar5 + uVar11;
              return;
            }
            puVar14 = (uint *)(iVar3 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar14);
              uVar7 = *puVar14;
              if (uVar11 != uVar7) goto LAB_016d409c;
              bVar15 = (bool)hasExclusiveAccess(puVar14);
            } while (!bVar15);
            *puVar14 = uVar5 + uVar11;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar11 == uVar7) {
              return;
            }
          } while( true );
        }
      }
      else if (uVar6 != uVar9) {
        bVar16 = 0x7fffffd < uVar7;
        bVar15 = uVar7 == 0x7fffffe;
        if (uVar7 < 0x7ffffff) {
          unaff_r4 = uVar6 * 0x20;
          bVar16 = 0x7ffffff7 < unaff_r4;
          bVar15 = unaff_r4 == 0x7ffffff8;
        }
        if (!bVar16 || bVar15) {
          if (uVar5 < 9) {
            if (unaff_r4 == 0) {
              local_28 = 0;
              iVar3 = FUN_016d51b0(&local_28,8,0);
              if (iVar3 != 0) goto LAB_0107ede4;
              iVar3 = local_28;
            }
            else {
              iVar3 = thunk_FUN_016d4a50(unaff_r4);
            }
            if (iVar3 == 0) goto LAB_0107ede4;
            FUN_016dd1aa(iVar3,puVar13,uVar11 << 5);
            goto LAB_0107ed64;
          }
          bVar16 = 0x7fffffe < uVar9;
          bVar15 = uVar9 == 0x7ffffff;
          if (uVar9 < 0x8000000) {
            bVar16 = 0x7ffffff7 < uVar9 << 5;
            bVar15 = uVar9 << 5 == 0x7ffffff8;
          }
          if (!bVar16 || bVar15) {
            if (unaff_r4 == 0) {
              local_28 = 0;
              iVar4 = FUN_016d51b0(&local_28,8,0);
              iVar3 = local_28;
              if ((iVar4 != 0) || (local_28 == 0)) goto LAB_0107ede4;
              thunk_FUN_016d3fb4(puVar13);
            }
            else {
              iVar3 = thunk_FUN_016d4ea4(puVar13,unaff_r4);
              if (iVar3 == 0) {
LAB_0107ede4:
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,unaff_r4);
              }
            }
LAB_0107ed64:
            param_1[0x42] = uVar6;
            *param_1 = 1;
            param_1[1] = uVar11;
            param_1[2] = iVar3;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("capacity overflow",0x11,&DAT_0188b960);
}

