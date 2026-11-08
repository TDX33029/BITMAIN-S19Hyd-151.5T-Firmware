// FUN_016a50fc @ 016a50fc size=1172 calls_out=7 calls_in=4
// strings: 

void FUN_016a50fc(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  uVar9 = *(uint *)(*param_1 + 0x38);
  puVar3 = (uint *)(*param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    if ((uVar9 & 3) == 2) {
      local_30 = 2;
      local_28 = FUN_00facc48;
      local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
    }
    uVar10 = (uVar9 & 0x3fffffff) >> 2;
    uVar12 = uVar9 & 3 ^ 1;
    uVar13 = uVar9 & 0xc0000000 | 3;
    uVar11 = uVar10 ^ 1;
    if (uVar12 != 0 || uVar11 != 0) {
      uVar13 = uVar10 * 4 - 4 | uVar9 & 0xc0000003;
    }
    uVar10 = *puVar3;
    if (*puVar3 == uVar9) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar3);
        if (bVar2) {
          *puVar3 = uVar13;
          DataMemoryBarrier(0xb);
          if (uVar12 != 0 || uVar11 != 0) {
            return;
          }
          uVar17 = thunk_FUN_016de0ee(uVar12 == 0 && uVar11 == 0,0x29c);
          piVar4 = (int *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
          piVar15 = (int *)param_1[1];
          uVar9 = param_1[2];
          DataMemoryBarrier(0xb);
          if (((char)piVar4[2] == '\x01') || (piVar4 = (int *)FUN_016ac76c(), piVar4 != (int *)0x0))
          {
            if (*piVar4 == 1) {
              iVar5 = piVar4[1];
            }
            else {
              iVar5 = FUN_009ee868();
            }
            if (iVar5 != piVar15[4]) goto LAB_016a53cc;
          }
          else if (piVar15[4] != -1) {
LAB_016a53cc:
            uVar10 = 0x20 - LZCOUNT((uVar9 & 0x3fffff) + 0x20 >> 6);
            if ((uint)piVar15[3] <= uVar10) {
              return;
            }
            piVar4 = (int *)(piVar15[2] + uVar10 * 0x14);
            if (*piVar4 == 0) {
              return;
            }
            uVar10 = (uVar9 & 0x3fffff) - piVar4[4];
            if ((uint)piVar4[1] <= uVar10) {
              return;
            }
            iVar5 = *piVar4 + uVar10 * 0x40;
            uVar11 = uVar9 >> 0x1e;
            DataMemoryBarrier(0xb);
            if (uVar11 != *(uint *)(iVar5 + 0x38) >> 0x1e) {
              return;
            }
            puVar3 = (uint *)(piVar4 + 2);
            puVar14 = (uint *)(iVar5 + 0x38);
            uVar13 = 0;
            bVar2 = false;
            uVar12 = *(uint *)(iVar5 + 0x38);
            goto LAB_016a5450;
          }
          uVar10 = 0x20 - LZCOUNT((uVar9 & 0x3fffff) + 0x20 >> 6);
          if ((uint)piVar15[3] <= uVar10) {
            return;
          }
          if ((uint)piVar15[1] <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,piVar15[1],&DAT_018ae704);
          }
          piVar4 = (int *)(piVar15[2] + uVar10 * 0x14);
          if (*piVar4 == 0) {
            return;
          }
          uVar11 = (uVar9 & 0x3fffff) - piVar4[4];
          if ((uint)piVar4[1] <= uVar11) {
            return;
          }
          iVar5 = *piVar15;
          uVar12 = uVar9 >> 0x1e;
          iVar6 = *piVar4 + uVar11 * 0x40;
          DataMemoryBarrier(0xb);
          if (uVar12 != *(uint *)(iVar6 + 0x38) >> 0x1e) {
            return;
          }
          uVar16 = 0;
          puVar3 = (uint *)(iVar6 + 0x38);
          bVar2 = false;
          uVar13 = *(uint *)(iVar6 + 0x38);
          goto LAB_016a5298;
        }
        uVar10 = *puVar3;
      } while (*puVar3 == uVar9);
    }
    uVar9 = uVar10;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
LAB_016a5450:
  uVar16 = *puVar14;
  if (uVar16 == uVar12) {
    DataMemoryBarrier(0xb);
    while (bVar1 = (bool)hasExclusiveAccess(puVar14), !bVar1) {
      uVar16 = *puVar14;
      if (uVar16 != uVar12) goto LAB_016a5480;
    }
    *puVar14 = uVar12 & 0x3fffffff | (((int)uVar9 >> 0x1f ^ 1U) + uVar11) * 0x40000000;
    DataMemoryBarrier(0xb);
    if ((uVar16 & 0x3ffffffc) == 0) {
      FUN_016a1db0(iVar5);
      uVar9 = *puVar3;
      do {
        *(uint *)(iVar5 + 0x3c) = uVar9;
        uVar11 = *puVar3;
        if (*puVar3 == uVar9) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar3);
            if (bVar2) {
              *puVar3 = uVar10;
              return;
            }
            uVar11 = *puVar3;
          } while (*puVar3 == uVar9);
        }
        uVar9 = uVar11;
        ClearExclusiveLocal();
      } while( true );
    }
    if ((uVar13 & 0x1f) == 0x1f) goto LAB_016a54c8;
    iVar6 = 1 << (uVar13 & 0x1f);
    do {
      iVar6 = iVar6 + -1;
      HintYield();
    } while (iVar6 != 0);
    if (uVar13 < 8) {
      uVar13 = uVar13 + 1;
    }
    else {
LAB_016a54c8:
      FUN_016da3a8();
    }
    bVar2 = true;
    goto LAB_016a5450;
  }
LAB_016a5480:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  uVar12 = uVar16;
  if ((!bVar2) && (uVar13 = 0, uVar11 != uVar16 >> 0x1e)) {
    return;
  }
  goto LAB_016a5450;
LAB_016a5298:
  uVar8 = *puVar3;
  if (uVar8 == uVar13) {
    DataMemoryBarrier(0xb);
    while (bVar1 = (bool)hasExclusiveAccess(puVar3), !bVar1) {
      uVar8 = *puVar3;
      if (uVar8 != uVar13) goto LAB_016a52c8;
    }
    *puVar3 = uVar13 & 0x3fffffff | (((int)uVar9 >> 0x1f ^ 1U) + uVar12) * 0x40000000;
    DataMemoryBarrier(0xb);
    if ((uVar8 & 0x3ffffffc) == 0) {
      FUN_016a1db0(iVar6);
      *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(iVar5 + uVar10 * 4);
      *(uint *)(iVar5 + uVar10 * 4) = uVar11;
      return;
    }
    if ((uVar16 & 0x1f) == 0x1f) goto LAB_016a530c;
    iVar7 = 1 << (uVar16 & 0x1f);
    do {
      iVar7 = iVar7 + -1;
      HintYield();
    } while (iVar7 != 0);
    if (uVar16 < 8) {
      uVar16 = uVar16 + 1;
    }
    else {
LAB_016a530c:
      FUN_016da3a8();
    }
    bVar2 = true;
    goto LAB_016a5298;
  }
LAB_016a52c8:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar16 = 0;
  uVar13 = uVar8;
  if ((!bVar2) && (uVar16 = 0, uVar12 != uVar8 >> 0x1e)) {
    return;
  }
  goto LAB_016a5298;
}

