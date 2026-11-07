// FUN_010dab88 @ 010dab88 size=596 calls_out=9 calls_in=1
// strings: capacity overflow | capacity overflow

void FUN_010dab88(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int local_28;
  int local_24;
  
  uVar7 = param_1[0x19];
  uVar8 = uVar7;
  if ((uVar7 < 9) || (uVar8 = param_1[1], uVar8 != 0xffffffff)) {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = 0xffffffff >> LZCOUNT(uVar8);
    }
    uVar8 = uVar9 + 1;
    if (uVar9 != 0xffffffff) {
      uVar11 = 8;
      puVar14 = param_1 + 1;
      uVar12 = uVar7;
      if (8 < uVar7) {
        uVar12 = param_1[1];
        puVar14 = (undefined4 *)param_1[2];
        uVar11 = uVar7;
      }
      if (uVar8 < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_005660d0,0x20,&DAT_0188b970);
      }
      if (uVar9 < 8) {
        if (8 < uVar7) {
          *param_1 = 0;
          FUN_016dd1aa(param_1 + 1,puVar14,uVar12 * 0xc);
          param_1[0x19] = uVar12;
          if (0xaaaaaaa < uVar11) {
            local_24 = uVar11 * 0xc;
            local_28 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018857c8,&DAT_0188b940);
          }
          if (puVar14 == (undefined4 *)0x0) {
            return;
          }
          iVar6 = FUN_016d3bc8();
          uVar8 = *(byte *)((int)puVar14 + -3) & 0x1f;
          if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
             (uVar7 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar4 = uVar7 - 0x10, uVar7 == 0)) {
            iVar4 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar7 = (uint)(*(byte *)((int)puVar14 + -3) >> 5);
          iVar13 = *(int *)(iVar6 + 8) + 0x10;
          iVar5 = iVar4 * uVar8 + iVar4 + -4;
          iVar4 = iVar13 + iVar5;
          if (4 < uVar7) {
            if (uVar7 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar7 = *(uint *)(iVar4 + -4);
            if (uVar7 < 5) {
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
          if ((uint)(iVar4 - (int)puVar14) < uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar4 - uVar7) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar13 + iVar5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar6 + 0x14);
          uVar7 = 1 << uVar8;
          *(undefined1 *)((int)puVar14 + -3) = 0xff;
          *(undefined2 *)((int)puVar14 + -2) = 0;
          do {
            uVar12 = *(uint *)(iVar6 + 0x10);
            uVar9 = *(uint *)(iVar6 + 0xc) | uVar12;
            if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar12 == 0) || (uVar9 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&local_28,iVar6,uVar8);
              FUN_016dddc0(&DAT_018ddd48);
              if (local_24 == 0) {
                return;
              }
              puVar14 = (undefined4 *)FUN_016d2bc8();
              uVar10 = *puVar14;
              FUN_016d6ac4(local_28,local_24);
              *puVar14 = uVar10;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar6 + 0x10) = uVar7 + uVar12;
              return;
            }
            puVar15 = (uint *)(iVar6 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar15);
              uVar9 = *puVar15;
              if (uVar12 != uVar9) goto LAB_016d409c;
              bVar3 = (bool)hasExclusiveAccess(puVar15);
            } while (!bVar3);
            *puVar15 = uVar7 + uVar12;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar12 == uVar9) {
              return;
            }
          } while( true );
        }
      }
      else if (uVar8 != uVar11) {
        if (uVar9 < 0xaaaaaaa) {
          iVar6 = uVar8 * 0xc;
          if (uVar7 < 9) {
            if (iVar6 == 0) {
              local_28 = 0;
              iVar4 = FUN_016d51b0(&local_28,4,0);
              if (iVar4 != 0) goto LAB_010dadd0;
              iVar4 = local_28;
            }
            else {
              iVar4 = thunk_FUN_016d4a50(iVar6);
            }
            if (iVar4 == 0) goto LAB_010dadd0;
            FUN_016dd1aa(iVar4,puVar14,uVar12 * 0xc);
            goto LAB_010dad50;
          }
          if (uVar11 < 0xaaaaaab) {
            if (iVar6 == 0) {
              local_28 = 0;
              iVar5 = FUN_016d51b0(&local_28,4,0);
              iVar4 = local_28;
              if ((iVar5 != 0) || (local_28 == 0)) goto LAB_010dadd0;
              thunk_FUN_016d3fb4(puVar14);
            }
            else {
              iVar4 = thunk_FUN_016d4ea4(puVar14,iVar6);
              if (iVar4 == 0) {
LAB_010dadd0:
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,iVar6);
              }
            }
LAB_010dad50:
            param_1[0x19] = uVar8;
            *param_1 = 1;
            param_1[1] = uVar12;
            param_1[2] = iVar4;
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

