// FUN_01499168 @ 01499168 size=184 calls_out=1 calls_in=3
// strings: 

void FUN_01499168(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (1 < (byte)param_1[6]) {
    piVar13 = (int *)param_1[7];
    (**(code **)(*piVar13 + 0x10))(piVar13 + 3,piVar13[1],piVar13[2]);
    thunk_FUN_016d3fb4(piVar13);
  }
  (**(code **)(param_1[8] + 0x10))(param_1 + 0xb,param_1[9],param_1[10]);
  (**(code **)(param_1[0xc] + 0x10))(param_1 + 0xf,param_1[0xd],param_1[0xe]);
  uVar4 = *param_1;
  uVar7 = 2;
  if ((int)uVar4 < 0) {
    uVar7 = uVar4 ^ 0x80000000;
  }
  if (uVar7 != 0) {
    if (uVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x014991f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] != 0) {
      uVar4 = param_1[4];
      if (uVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar7 = *(byte *)(uVar4 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar4 - 3) >> 5);
      iVar14 = *(int *)(iVar5 + 8) + 0x10;
      iVar11 = iVar8 * uVar7 + iVar8 + -4;
      iVar8 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar8 - uVar4 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar7;
      *(undefined1 *)(uVar4 - 3) = 0xff;
      *(undefined2 *)(uVar4 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar5 + 0x10);
        uVar4 = *(uint *)(iVar5 + 0xc) | uVar12;
        if ((uVar10 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar4 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar4 = *puVar15;
          if (uVar12 != uVar4) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
}

