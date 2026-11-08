// FUN_016d2e84 @ 016d2e84 size=1152 calls_out=3 calls_in=3
// strings: 

undefined8
FUN_016d2e84(int param_1,uint param_2,int param_3,undefined4 param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  
  if (0x24 < param_2 || param_2 == 1) {
LAB_016d302c:
    param_5 = (byte *)0x0;
    puVar4 = (undefined4 *)FUN_016d2bc8();
    param_6 = (byte *)0x0;
    *puVar4 = 0x16;
    goto LAB_016d303a;
  }
  do {
    while( true ) {
      pbVar10 = *(byte **)(param_1 + 4);
      if (pbVar10 == *(byte **)(param_1 + 0x68)) break;
      *(byte **)(param_1 + 4) = pbVar10 + 1;
      puVar3 = (undefined1 *)(uint)*pbVar10;
      uVar18 = CONCAT44(*(byte **)(param_1 + 0x68),puVar3);
      bVar17 = &DAT_0000001f < puVar3;
      if (puVar3 != &DAT_00000020) {
        bVar17 = (undefined1 *)0x3 < puVar3 + -9;
      }
      if (bVar17 && (puVar3 != &DAT_00000020 && puVar3 + -9 != &DAT_00000004)) goto LAB_016d2edc;
    }
    uVar18 = FUN_016d33e8(param_1);
    puVar3 = (undefined1 *)uVar18;
    bVar17 = &DAT_0000001f < puVar3;
    if (puVar3 != &DAT_00000020) {
      bVar17 = (undefined1 *)0x3 < puVar3 + -9;
    }
  } while (!bVar17 || (puVar3 == &DAT_00000020 || puVar3 + -9 == &DAT_00000004));
LAB_016d2edc:
  if (((uint)((undefined1 *)uVar18 + -0x2b) & 0xfffffffd) == 0) {
    pbVar10 = *(byte **)(param_1 + 4);
    uVar15 = 0xffffffff;
    if ((undefined1 *)uVar18 != &DAT_0000002d) {
      uVar15 = 0;
    }
    if (pbVar10 == *(byte **)(param_1 + 0x68)) {
      uVar18 = FUN_016d33e8(param_1);
    }
    else {
      *(byte **)(param_1 + 4) = pbVar10 + 1;
      uVar18 = CONCAT44(*(byte **)(param_1 + 0x68),(uint)*pbVar10);
    }
  }
  else {
    uVar15 = 0;
  }
  uVar5 = (undefined4)((ulonglong)uVar18 >> 0x20);
  pbVar10 = (byte *)uVar18;
  if (pbVar10 == &DAT_00000030 && (param_2 & 0xffffffef) == 0) {
    pbVar10 = *(byte **)(param_1 + 4);
    if (pbVar10 == *(byte **)(param_1 + 0x68)) {
      uVar18 = FUN_016d33e8(param_1);
    }
    else {
      *(byte **)(param_1 + 4) = pbVar10 + 1;
      uVar18 = CONCAT44(uVar5,(uint)*pbVar10);
    }
    if (((uint)uVar18 | 0x20) == 0x78) {
      pbVar10 = *(byte **)(param_1 + 4);
      if (pbVar10 == *(byte **)(param_1 + 0x68)) {
        uVar18 = FUN_016d33e8(param_1);
      }
      else {
        *(byte **)(param_1 + 4) = pbVar10 + 1;
        uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),(uint)*pbVar10);
      }
      uVar11 = (uint)(byte)(&DAT_00425579)[(int)uVar18];
      if (0xf < uVar11) {
        if (*(int *)(param_1 + 0x74) < 0) {
          param_5 = (byte *)0x0;
          param_6 = (byte *)0x0;
          if (param_3 != 0) goto LAB_016d303a;
        }
        else {
          if (param_3 != 0) {
            param_5 = (byte *)0x0;
            param_6 = (byte *)0x0;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -2;
            goto LAB_016d303a;
          }
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
          param_6 = (byte *)((ulonglong)uVar18 >> 0x20);
        }
        param_5 = (byte *)0x0;
        FUN_016d33b4(param_1,param_6,0,0);
        param_6 = (byte *)0x0;
        goto LAB_016d303a;
      }
LAB_016d2fb2:
      uVar13 = 3;
      param_2 = 0x10;
    }
    else {
      uVar11 = (uint)(byte)(&DAT_00425579)[(uint)uVar18];
      if (param_2 != 0) goto LAB_016d2fb2;
      uVar13 = 5;
      param_2 = 8;
    }
LAB_016d30d2:
    pbVar12 = (byte *)0x0;
    uVar13 = (uint)(byte)(&DAT_0042556c)[uVar13];
    while( true ) {
      bVar17 = (byte *)0x7fffffe < pbVar12;
      if (pbVar12 < (byte *)0x8000000) {
        bVar17 = param_2 <= uVar11;
      }
      if (bVar17) break;
      pbVar10 = *(byte **)(param_1 + 4);
      pbVar12 = (byte *)((int)pbVar12 << uVar13 | uVar11);
      if (pbVar10 == *(byte **)(param_1 + 0x68)) {
        uVar11 = FUN_016d33e8(param_1);
      }
      else {
        *(byte **)(param_1 + 4) = pbVar10 + 1;
        uVar11 = (uint)*pbVar10;
      }
      uVar11 = (uint)(byte)(&DAT_00425579)[uVar11];
    }
    pbVar14 = (byte *)0x0;
    uVar8 = 0x20 - uVar13;
    pbVar7 = (byte *)(uVar13 - 0x20);
    pbVar10 = &DAT_00425578;
    pbVar6 = pbVar7;
    while (uVar11 < param_2) {
      if ((byte *)(0xffffffffU >> uVar13) <= pbVar14 &&
          (uint)(pbVar12 <=
                (byte *)(0xffffffffU >> uVar13 | -1 << (uVar8 & 0xff) |
                        0xffffffffU >> ((uint)pbVar7 & 0xff))) <=
          (uint)((int)(0xffffffffU >> uVar13) - (int)pbVar14)) goto LAB_016d326c;
      pbVar10 = *(byte **)(param_1 + 4);
      uVar9 = (int)pbVar12 << ((uint)pbVar7 & 0xff);
      uVar16 = (uint)pbVar12 >> (uVar8 & 0xff);
      pbVar12 = (byte *)((int)pbVar12 << uVar13 | uVar11);
      pbVar14 = (byte *)((int)pbVar14 << uVar13 | uVar9 | uVar16);
      if (pbVar10 == *(byte **)(param_1 + 0x68)) {
        uVar18 = FUN_016d33e8(param_1);
      }
      else {
        *(byte **)(param_1 + 4) = pbVar10 + 1;
        uVar18 = CONCAT44(uVar8,(uint)*pbVar10);
      }
      pbVar6 = (byte *)((ulonglong)uVar18 >> 0x20);
      pbVar10 = &DAT_00425578 + (int)uVar18;
      uVar11 = (uint)(byte)(&DAT_00425579)[(int)uVar18];
    }
  }
  else {
    pbVar12 = (byte *)0x0;
    uVar11 = (uint)pbVar10[0x425579];
    if (param_2 == 0) {
      if (9 < uVar11) goto LAB_016d3014;
LAB_016d2f28:
      pbVar12 = (byte *)0x0;
      while( true ) {
        pbVar6 = pbVar10 + -0x30;
        bVar17 = &DAT_00000008 < pbVar6;
        if (pbVar6 < &DAT_0000000a) {
          bVar17 = (byte *)0x19999998 < pbVar12;
        }
        if (bVar17) break;
        pbVar6 = *(byte **)(param_1 + 4);
        pbVar12 = pbVar10 + (int)pbVar12 * 10 + -0x30;
        if (pbVar6 == *(byte **)(param_1 + 0x68)) {
          pbVar10 = (byte *)FUN_016d33e8(param_1);
        }
        else {
          *(byte **)(param_1 + 4) = pbVar6 + 1;
          pbVar10 = (byte *)(uint)*pbVar6;
        }
      }
      pbVar14 = (byte *)0x0;
      while (uVar11 = (int)pbVar6 >> 0x1f, pbVar6 < &DAT_0000000a) {
        if ((byte *)0x19999998 < pbVar14 &&
            (uint)(pbVar12 < (byte *)0x9999999a) <= 0x19999999U - (int)pbVar14) {
          bVar1 = pbVar10[0x425579];
LAB_016d3236:
          uVar11 = (uint)bVar1;
          if (uVar11 < 10) {
            param_2 = 10;
            goto LAB_016d326c;
          }
          break;
        }
        uVar13 = (int)pbVar12 * 10;
        uVar8 = ((int)pbVar14 * 5 + (uint)CARRY4((uint)pbVar12,(uint)pbVar12) * 2 +
                 (uint)CARRY4((int)pbVar12 * 2,(int)pbVar12 * 2) +
                (uint)CARRY4((int)pbVar12 * 4,(uint)pbVar12)) * 2 +
                (uint)CARRY4((int)pbVar12 * 5,(int)pbVar12 * 5);
        if (CARRY4(uVar11,uVar8) || CARRY4(uVar11 + uVar8,(uint)CARRY4((uint)pbVar6,uVar13))) {
          bVar1 = pbVar10[0x425579];
          goto LAB_016d3236;
        }
        pbVar12 = pbVar6 + uVar13;
        pbVar14 = (byte *)(uVar11 + uVar8 + CARRY4(uVar13,(uint)pbVar6));
        pbVar10 = *(byte **)(param_1 + 4);
        if (pbVar10 == *(byte **)(param_1 + 0x68)) {
          pbVar10 = (byte *)FUN_016d33e8(param_1);
        }
        else {
          *(byte **)(param_1 + 4) = pbVar10 + 1;
          pbVar10 = (byte *)(uint)*pbVar10;
        }
        pbVar6 = pbVar10 + -0x30;
      }
    }
    else {
      if (param_2 <= uVar11) {
LAB_016d3014:
        if (-1 < *(int *)(param_1 + 0x74)) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
        FUN_016d33b4(param_1,uVar5,0,0);
        goto LAB_016d302c;
      }
      if (param_2 == 10) goto LAB_016d2f28;
      if ((param_2 - 1 & param_2) == 0) {
        uVar13 = param_2 * 0x17000000 >> 0x1d;
        goto LAB_016d30d2;
      }
      pbVar6 = *(byte **)(param_1 + 0x68);
      do {
        while( true ) {
          pbVar14 = *(byte **)(param_1 + 4);
          pbVar12 = (byte *)((int)pbVar12 * param_2 + uVar11);
          if (pbVar14 != pbVar6) break;
          uVar18 = FUN_016d33e8(param_1);
          pbVar6 = (byte *)((ulonglong)uVar18 >> 0x20);
          pbVar10 = &DAT_00425578 + (int)uVar18;
          uVar11 = (uint)(byte)(&DAT_00425579)[(int)uVar18];
          bVar17 = (byte *)0x71c71c5 < pbVar12;
          if (pbVar12 < (byte *)0x71c71c7) {
            bVar17 = param_2 <= uVar11;
          }
          if (bVar17) goto LAB_016d31cc;
          pbVar6 = *(byte **)(param_1 + 0x68);
        }
        *(byte **)(param_1 + 4) = pbVar14 + 1;
        uVar11 = (uint)(byte)(&DAT_00425579)[*pbVar14];
        bVar17 = (byte *)0x71c71c5 < pbVar12;
        if (pbVar12 < (byte *)0x71c71c7) {
          bVar17 = param_2 <= uVar11;
        }
      } while (!bVar17);
LAB_016d31cc:
      pbVar14 = (byte *)0x0;
      while (uVar11 < param_2) {
        bVar17 = false;
        if (pbVar14 != (byte *)0x0) {
          pbVar10 = (byte *)(ZEXT48(pbVar12) * (ulonglong)param_2 >> 0x20);
          lVar2 = (ulonglong)param_2 * ZEXT48(pbVar14) + ZEXT48(pbVar10);
          pbVar6 = (byte *)lVar2;
          bVar17 = (int)((ulonglong)lVar2 >> 0x20) != 0;
        }
        if (bVar17) goto LAB_016d326c;
        uVar13 = (uint)((ulonglong)param_2 * ZEXT48(pbVar12));
        pbVar6 = (byte *)(param_2 * (int)pbVar14 +
                         (int)((ulonglong)param_2 * ZEXT48(pbVar12) >> 0x20));
        pbVar10 = pbVar6 + CARRY4(uVar11,uVar13);
        if (CARRY4((uint)pbVar6,(uint)CARRY4(uVar11,uVar13))) goto LAB_016d326c;
        pbVar12 = (byte *)(uVar13 + uVar11);
        pbVar10 = *(byte **)(param_1 + 4);
        pbVar14 = pbVar6 + CARRY4(uVar13,uVar11);
        if (pbVar10 == *(byte **)(param_1 + 0x68)) {
          uVar18 = FUN_016d33e8(param_1);
        }
        else {
          *(byte **)(param_1 + 4) = pbVar10 + 1;
          uVar18 = CONCAT44(pbVar6,(uint)*pbVar10);
        }
        pbVar6 = (byte *)((ulonglong)uVar18 >> 0x20);
        pbVar10 = &DAT_00425578 + (int)uVar18;
        uVar11 = (uint)(byte)(&DAT_00425579)[(int)uVar18];
      }
    }
  }
  if (-1 < *(int *)(param_1 + 0x74)) {
LAB_016d3240:
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if (param_6 < pbVar14 || (uint)((int)pbVar14 - (int)param_6) < (uint)(param_5 <= pbVar12)) {
    if ((int)((uVar15 + 1 & ~(uint)param_5) << 0x1f) < 0) {
      puVar4 = (undefined4 *)FUN_016d2bc8();
      goto LAB_016d32c8;
    }
    if (param_6 <= pbVar14 && (uint)(pbVar12 <= param_5) <= (uint)((int)param_6 - (int)pbVar14)) {
      puVar4 = (undefined4 *)FUN_016d2bc8();
      *puVar4 = 0x22;
      goto LAB_016d303a;
    }
  }
  goto LAB_016d3250;
LAB_016d326c:
  while (uVar11 < param_2) {
    pbVar10 = *(byte **)(param_1 + 4);
    if (pbVar10 == *(byte **)(param_1 + 0x68)) {
      uVar18 = FUN_016d33e8(param_1);
    }
    else {
      *(byte **)(param_1 + 4) = pbVar10 + 1;
      uVar18 = CONCAT44(pbVar10 + 1,(uint)*pbVar10);
    }
    pbVar6 = (byte *)((ulonglong)uVar18 >> 0x20);
    pbVar10 = &DAT_00425578 + (int)uVar18;
    uVar11 = (uint)(byte)(&DAT_00425579)[(int)uVar18];
  }
  puVar4 = (undefined4 *)FUN_016d2bc8(pbVar10,pbVar6);
  *puVar4 = 0x22;
  pbVar12 = param_5;
  pbVar14 = param_6;
  if (((uint)param_5 & 1) == 0) {
    if (-1 < *(int *)(param_1 + 0x74)) goto LAB_016d3240;
    if (uVar15 != 0) goto LAB_016d3250;
LAB_016d32c8:
    bVar17 = param_5 != (byte *)0x0;
    param_5 = param_5 + -1;
    *puVar4 = 0x22;
    param_6 = param_6 + (bVar17 - 1);
    goto LAB_016d303a;
  }
  uVar15 = 0;
  if (-1 < *(int *)(param_1 + 0x74)) goto LAB_016d3240;
LAB_016d3250:
  param_5 = (byte *)((uVar15 ^ (uint)pbVar12) - uVar15);
  param_6 = (byte *)(((uVar15 ^ (uint)pbVar14) - uVar15) - (uint)((uVar15 ^ (uint)pbVar12) < uVar15)
                    );
LAB_016d303a:
  return CONCAT44(param_6,param_5);
}

