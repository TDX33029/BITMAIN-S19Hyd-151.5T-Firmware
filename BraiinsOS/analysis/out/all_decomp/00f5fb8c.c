// FUN_00f5fb8c @ 00f5fb8c size=704 calls_out=4 calls_in=2
// strings: 

void FUN_00f5fb8c(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  bool bVar17;
  uint local_28;
  int *local_24;
  uint local_20;
  uint local_1c;
  
  iVar14 = param_1[1];
  if (iVar14 != 0) {
    iVar6 = param_2[2];
    if (iVar6 == 0) {
      piVar4 = (int *)param_2[3];
      if (((uint)piVar4 & 1) == 0) {
        piVar7 = piVar4 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar7;
          bVar17 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar17);
        *piVar7 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar4 != 0) {
            thunk_FUN_016d3fb4(piVar4[1]);
          }
          goto LAB_014b47f4;
        }
      }
      else if (&DAT_0000001f < piVar4) {
        piVar4 = (int *)(*param_2 - ((uint)piVar4 >> 5));
LAB_014b47f4:
        if (piVar4 == (int *)0x0) {
          return;
        }
        iVar14 = FUN_016d3bc8();
        uVar12 = *(byte *)((int)piVar4 + -3) & 0x1f;
        if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)((int)piVar4 + -3) >> 5);
        iVar13 = *(int *)(iVar14 + 8) + 0x10;
        iVar3 = iVar6 * uVar12 + iVar6 + -4;
        iVar6 = iVar13 + iVar3;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar10 = *(uint *)(iVar6 + -4);
          if (uVar10 < 5) {
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
        if ((uint)(iVar6 - (int)piVar4) < uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + iVar3) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar14 + 0x14);
        uVar10 = 1 << uVar12;
        *(undefined1 *)((int)piVar4 + -3) = 0xff;
        *(undefined2 *)((int)piVar4 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar14 + 0x10);
          uVar8 = *(uint *)(iVar14 + 0xc) | uVar11;
          if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar14,uVar12);
            FUN_016dddc0(&DAT_018ddd48);
            if (local_24 == (int *)0x0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar5;
            FUN_016d6ac4(local_28,local_24);
            *puVar5 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar14 + 0x10) = uVar10 + uVar11;
            return;
          }
          puVar16 = (uint *)(iVar14 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar8 = *puVar16;
            if (uVar11 != uVar8) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar17);
          *puVar16 = uVar10 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar8) {
            return;
          }
        } while( true );
      }
    }
    else {
      iVar3 = *param_1;
      piVar15 = (int *)*param_2;
      piVar7 = (int *)(iVar3 + iVar14);
      bVar17 = piVar7 == piVar15;
      if (bVar17) {
        piVar7 = (int *)param_1[3];
      }
      if ((!(bVar17 && ((uint)piVar7 & 1) == 0)) ||
         (piVar4 = (int *)param_2[3], !(piVar7 == piVar4 && ((uint)piVar4 & 1) == 0))) {
        uVar12 = param_2[1];
        local_1c = param_1[2] - iVar14;
        local_28 = param_2[2];
        local_24 = (int *)param_2[3];
        if (local_1c < uVar12) {
          FUN_00f5f538(param_1,uVar12,local_28,param_1[2],piVar15,uVar12);
          iVar3 = *param_1;
          iVar14 = param_1[1];
          local_1c = param_1[2] - iVar14;
        }
        FUN_016dd1aa(iVar3 + iVar14,piVar15,uVar12);
        piVar4 = local_24;
        if (local_1c < uVar12) {
          local_20 = uVar12;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_20);
        }
        param_1[1] = iVar14 + uVar12;
        if (((uint)local_24 & 1) == 0) {
          piVar7 = local_24 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar7;
            bVar17 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar17);
          *piVar7 = iVar14 + -1;
          if (iVar14 != 1) {
            return;
          }
          DataMemoryBarrier(0xb);
          if (*local_24 != 0) {
            thunk_FUN_016d3fb4(local_24[1]);
          }
        }
        else {
          if (local_28 + ((uint)local_24 >> 5) == 0) {
            return;
          }
          piVar4 = (int *)((int)piVar15 - ((uint)local_24 >> 5));
        }
        thunk_FUN_016d3fb4(piVar4);
      }
      else {
        param_1[1] = param_2[1] + iVar14;
        param_1[2] = param_1[2] + iVar6;
        piVar7 = piVar4 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar7;
          bVar17 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar17);
        *piVar7 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar4 != 0) {
            thunk_FUN_016d3fb4(piVar4[1]);
          }
          goto LAB_014b47f4;
        }
      }
    }
    return;
  }
  piVar4 = (int *)param_1[3];
  if (((uint)piVar4 & 1) == 0) {
    piVar7 = piVar4 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar7;
      bVar17 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar17);
    *piVar7 = iVar14 + -1;
    if (iVar14 != 1) goto LAB_00f5fd08;
    DataMemoryBarrier(0xb);
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
  }
  else {
    if (param_1[2] + ((uint)piVar4 >> 5) == 0) goto LAB_00f5fd08;
    piVar4 = (int *)(*param_1 - ((uint)piVar4 >> 5));
  }
  thunk_FUN_016d3fb4(piVar4);
LAB_00f5fd08:
  iVar6 = param_2[1];
  iVar3 = param_2[2];
  iVar14 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar6;
  param_1[2] = iVar3;
  param_1[3] = iVar14;
  return;
}

