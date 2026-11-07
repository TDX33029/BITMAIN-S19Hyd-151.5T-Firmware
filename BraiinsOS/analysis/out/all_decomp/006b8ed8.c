// FUN_006b8ed8 @ 006b8ed8 size=596 calls_out=9 calls_in=1
// strings: capacity overflow | capacity overflow

void FUN_006b8ed8(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  int local_28;
  int local_24;
  
  puVar7 = (undefined1 *)param_1[0x7a];
  puVar8 = puVar7;
  if ((puVar7 < (undefined1 *)0x3) ||
     (puVar8 = (undefined1 *)param_1[1], puVar8 != (undefined1 *)0xffffffff)) {
    puVar9 = (undefined1 *)0x0;
    if (puVar8 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(0xffffffff >> LZCOUNT(puVar8));
    }
    puVar8 = puVar9 + 1;
    if (puVar9 != (undefined1 *)0xffffffff) {
      puVar12 = (undefined1 *)0x2;
      puVar17 = param_1 + 2;
      puVar15 = puVar7;
      if ((undefined1 *)0x2 < puVar7) {
        puVar15 = (undefined1 *)param_1[1];
        puVar17 = (undefined4 *)param_1[2];
        puVar12 = puVar7;
      }
      if (puVar8 < puVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_005660d0,0x20,&DAT_0188b970);
      }
      if (puVar9 < (undefined1 *)0x2) {
        if ((undefined1 *)0x2 < puVar7) {
          *param_1 = 0;
          FUN_016dd1aa(param_1 + 2,puVar17,(int)puVar15 * 0xf0);
          param_1[0x7a] = puVar15;
          if (&LAB_00888888 < puVar12) {
            local_24 = (int)puVar12 * 0xf0;
            local_28 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018589b8,&DAT_0188b940);
          }
          if (puVar17 == (undefined4 *)0x0) {
            return;
          }
          iVar6 = FUN_016d3bc8();
          uVar18 = *(byte *)((int)puVar17 + -3) & 0x1f;
          if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
             (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar4 = uVar13 - 0x10, uVar13 == 0)) {
            iVar4 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar13 = (uint)(*(byte *)((int)puVar17 + -3) >> 5);
          iVar16 = *(int *)(iVar6 + 8) + 0x10;
          iVar5 = iVar4 * uVar18 + iVar4 + -4;
          iVar4 = iVar16 + iVar5;
          if (4 < uVar13) {
            if (uVar13 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar13 = *(uint *)(iVar4 + -4);
            if (uVar13 < 5) {
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
          if ((uint)(iVar4 - (int)puVar17) < uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar4 - uVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar16 + iVar5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar6 + 0x14);
          uVar13 = 1 << uVar18;
          *(undefined1 *)((int)puVar17 + -3) = 0xff;
          *(undefined2 *)((int)puVar17 + -2) = 0;
          do {
            uVar14 = *(uint *)(iVar6 + 0x10);
            uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
            if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar14 == 0) || (uVar10 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&local_28,iVar6,uVar18);
              FUN_016dddc0(&DAT_018ddd48);
              if (local_24 == 0) {
                return;
              }
              puVar17 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar17;
              FUN_016d6ac4(local_28,local_24);
              *puVar17 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar6 + 0x10) = uVar13 + uVar14;
              return;
            }
            puVar19 = (uint *)(iVar6 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar19);
              uVar10 = *puVar19;
              if (uVar14 != uVar10) goto LAB_016d409c;
              bVar3 = (bool)hasExclusiveAccess(puVar19);
            } while (!bVar3);
            *puVar19 = uVar13 + uVar14;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar14 == uVar10) {
              return;
            }
          } while( true );
        }
      }
      else if (puVar8 != puVar12) {
        if (puVar9 < &LAB_00888888) {
          iVar6 = (int)puVar8 * 0xf0;
          if (puVar7 < (undefined1 *)0x3) {
            if (iVar6 == 0) {
              local_28 = 0;
              iVar4 = FUN_016d51b0(&local_28,8,0);
              if (iVar4 != 0) goto LAB_006b9120;
              iVar4 = local_28;
            }
            else {
              iVar4 = thunk_FUN_016d4a50(iVar6);
            }
            if (iVar4 == 0) goto LAB_006b9120;
            FUN_016dd1aa(iVar4,puVar17,(int)puVar15 * 0xf0);
            goto LAB_006b90a0;
          }
          if (puVar12 < (undefined1 *)0x888889) {
            if (iVar6 == 0) {
              local_28 = 0;
              iVar5 = FUN_016d51b0(&local_28,8,0);
              iVar4 = local_28;
              if ((iVar5 != 0) || (local_28 == 0)) goto LAB_006b9120;
              thunk_FUN_016d3fb4(puVar17);
            }
            else {
              iVar4 = thunk_FUN_016d4ea4(puVar17,iVar6);
              if (iVar4 == 0) {
LAB_006b9120:
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,iVar6);
              }
            }
LAB_006b90a0:
            param_1[0x7a] = puVar8;
            *param_1 = 1;
            param_1[1] = puVar15;
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

