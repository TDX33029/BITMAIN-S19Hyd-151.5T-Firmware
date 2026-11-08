// FUN_01527dcc @ 01527dcc size=888 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01527dcc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,short *param_7,int param_8)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int unaff_r4;
  int iVar14;
  undefined4 uVar15;
  undefined1 **ppuVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  code *pcVar26;
  code *pcVar27;
  uint *puVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined1 *local_1c8;
  uint local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 *local_148;
  uint local_144;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [128];
  undefined1 *local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_28;
  
  if (param_8 != 0) {
    param_8 = param_8 * 0xc;
    if (*(short *)(param_6 + 0xc) == 0xd) {
      do {
        sVar1 = *param_7;
        bVar29 = sVar1 == 0xd;
        if (bVar29) {
          sVar1 = param_7[1];
        }
        if (bVar29 && sVar1 == *(short *)(param_6 + 0xe)) goto LAB_01528070;
        param_8 = param_8 + -0xc;
        param_7 = param_7 + 6;
      } while (param_8 != 0);
    }
    else {
      do {
        if (*param_7 == *(short *)(param_6 + 0xc)) goto LAB_01528070;
        param_7 = param_7 + 6;
        param_8 = param_8 + -0xc;
      } while (param_8 != 0);
    }
  }
  goto LAB_0152807c;
LAB_01528070:
  puVar10 = *(undefined4 **)(param_7 + 2);
  iVar14 = *(int *)(param_7 + 4);
  if (puVar10 != (undefined4 *)0x0) {
    FUN_016cce5c(&local_a8,param_4,param_5);
    if (local_a8 == (undefined1 *)0x1) {
      puVar10 = (undefined4 *)((uint)auStack_128 | 4);
      *puVar10 = local_a0;
      puVar10[1] = uStack_9c;
      puVar10[2] = local_98;
      puVar10[3] = uStack_94;
      puVar10[4] = local_90;
      puVar10[5] = uStack_8c;
      puVar10[6] = uStack_88;
      puVar10[7] = uStack_84;
      local_1c0 = *puVar10;
      local_1bc = puVar10[1];
      local_1b8 = puVar10[2];
      local_1b4 = puVar10[3];
      local_1b0 = puVar10[4];
      uStack_1ac = puVar10[5];
      uStack_1a8 = puVar10[6];
      uStack_1a4 = puVar10[7];
      local_1c8 = (undefined1 *)0x1;
      FUN_0152f154(&local_a8);
      piVar5 = (int *)((uint)&local_a8 | 4);
      iVar17 = *piVar5;
      iVar21 = piVar5[1];
      iVar23 = piVar5[2];
      iVar14 = piVar5[3];
      iVar18 = piVar5[4];
      iVar22 = piVar5[5];
      iVar24 = piVar5[6];
      *param_1 = (int)local_a8;
      param_1[1] = iVar17;
      param_1[2] = iVar21;
      param_1[3] = iVar23;
      param_1[4] = iVar14;
      param_1[5] = iVar18;
      param_1[6] = iVar22;
      param_1[7] = iVar24;
      return;
    }
    FUN_016dd1aa(auStack_128,(uint)&local_a8 | 4,0x7c);
    FUN_016dd1aa((uint)&local_1c8 | 4,auStack_128,0x7c);
    iVar17 = local_1c0;
    uVar25 = local_1c4;
    if (iVar14 != 0) {
      puVar6 = puVar10 + iVar14 * 2;
      uVar8 = *(undefined4 *)(param_6 + 4);
      uVar7 = *(undefined4 *)(param_6 + 8);
      do {
        uVar15 = *puVar10;
        pcVar26 = *(code **)(puVar10[1] + 0x10);
        pcVar27 = *(code **)(puVar10[1] + 0x14);
        local_a8 = &DAT_8000001d;
        local_a4 = 0x11;
        FUN_016c3b5c(&local_1c8,local_180,local_17c,&local_a8);
        uVar4 = local_1b8;
        uVar3 = local_1bc;
        iVar14 = local_1c0;
        uVar19 = local_1c4;
        if (local_1c8 == (undefined1 *)0x8000002d) {
          uVar30 = (*pcVar27)(uVar15);
          if (((int)((ulonglong)uVar30 >> 0x20) == iVar14) &&
             (iVar14 = thunk_FUN_016dd50a((int)uVar30,uVar19,iVar14), iVar14 == 0)) {
            iVar14 = (*pcVar26)(uVar15,uVar3,uVar4,param_2,param_3,uVar8,uVar7);
            if (iVar14 == 0) {
              *param_1 = -0x7fffffd7;
              goto joined_r0x01528130;
            }
            local_148 = (undefined1 *)0x8000000f;
LAB_0152805c:
            ppuVar16 = &local_a8;
            FUN_0152f154(ppuVar16,&local_148);
            goto LAB_015280ac;
          }
          local_148 = (undefined1 *)0x8000002c;
        }
        else {
          local_138 = local_1b8;
          local_13c = local_1bc;
          local_134 = local_1b4;
          uStack_130 = local_1b0;
          uStack_12c = uStack_1ac;
          local_140 = local_1c0;
          local_144 = local_1c4;
          local_148 = local_1c8;
          if (local_1c8 != (undefined1 *)0x8000002c) goto LAB_0152805c;
        }
        FUN_01523a20(&local_148);
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar6);
    }
    local_a8 = (undefined1 *)0x8000002c;
    ppuVar16 = &local_1c8;
    FUN_0152f154(ppuVar16,&local_a8);
LAB_015280ac:
    puVar9 = ppuVar16[1];
    puVar11 = ppuVar16[2];
    puVar12 = ppuVar16[3];
    *param_1 = (int)*ppuVar16;
    param_1[1] = (int)puVar9;
    param_1[2] = (int)puVar11;
    param_1[3] = (int)puVar12;
    puVar9 = ppuVar16[5];
    puVar11 = ppuVar16[6];
    puVar12 = ppuVar16[7];
    param_1[4] = (int)ppuVar16[4];
    param_1[5] = (int)puVar9;
    param_1[6] = (int)puVar11;
    param_1[7] = (int)puVar12;
joined_r0x01528130:
    if ((uVar25 & 0x7fffffff) == 0) {
      return;
    }
    if (iVar17 == 0) {
      return;
    }
    iVar14 = FUN_016d3bc8();
    uVar25 = *(byte *)(iVar17 + -3) & 0x1f;
    if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
       (uVar19 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar18 = uVar19 - 0x10, uVar19 == 0)) {
      iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar19 = (uint)(*(byte *)(iVar17 + -3) >> 5);
    iVar22 = *(int *)(iVar14 + 8) + 0x10;
    iVar21 = iVar18 * uVar25 + iVar18 + -4;
    iVar18 = iVar22 + iVar21;
    if (4 < uVar19) {
      if (uVar19 != 5) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar26)();
      }
      uVar19 = *(uint *)(iVar18 + -4);
      if (uVar19 < 5) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar26)();
      }
      if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar26 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar26)();
      }
    }
    if ((uint)(iVar18 - iVar17) < uVar19) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar26)();
    }
    if (*(char *)(iVar18 - uVar19) != '\0') {
                    /* WARNING: Does not return */
      pcVar26 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar26)();
    }
    if (*(char *)(iVar22 + iVar21) != '\0') {
                    /* WARNING: Does not return */
      pcVar26 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar26)();
    }
    bVar2 = *(byte *)(iVar14 + 0x14);
    uVar19 = 1 << uVar25;
    *(undefined1 *)(iVar17 + -3) = 0xff;
    *(undefined2 *)(iVar17 + -2) = 0;
    do {
      uVar20 = *(uint *)(iVar14 + 0x10);
      uVar13 = *(uint *)(iVar14 + 0xc) | uVar20;
      if ((uVar19 & uVar13) != 0) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar26)();
      }
      if ((uVar20 == 0) || (uVar13 + uVar19 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar14,uVar25);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar10 = (undefined4 *)FUN_016d2bc8();
        uVar7 = *puVar10;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar10 = uVar7;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar14 + 0x10) = uVar19 + uVar20;
        return;
      }
      puVar28 = (uint *)(iVar14 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar28);
        uVar13 = *puVar28;
        if (uVar20 != uVar13) goto LAB_016d409c;
        bVar29 = (bool)hasExclusiveAccess(puVar28);
      } while (!bVar29);
      *puVar28 = uVar19 + uVar20;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar20 == uVar13) {
        return;
      }
    } while( true );
  }
LAB_0152807c:
  *param_1 = (int)&DAT_8000001c;
  param_1[1] = 0x3e;
  return;
}

