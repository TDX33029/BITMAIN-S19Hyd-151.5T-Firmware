// FUN_0003caf4 @ 0003caf4  size=1136  callers=0
// program: bmminer


undefined4 FUN_0003caf4(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long param4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int param5;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStackY_a50 [128];
  uint local_940;
  uint local_93c;
  uint local_928;
  undefined4 *local_924;
  byte local_920;
  int local_914;
  int local_900;
  int local_8fc;
  int local_8f8;
  int local_8f4;
  undefined4 local_8f0 [5];
  undefined4 local_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 local_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 local_8bc;
  uint local_8b8;
  undefined4 local_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 local_8a8 [32];
  undefined2 local_828 [1026];
  
  FUN_00034828(&local_900);
  if (3 < DAT_00087bbc) {
    local_828[0] = 10;
    FUN_00032eb0(3,local_828,0);
    if (3 < DAT_00087bbc) {
      snprintf((char *)local_828,0x800,">>>> Send work for chain %d.\n",param_1);
      FUN_00032218(3,local_828,0);
      iVar1 = FUN_0002002c();
      goto joined_r0x0003cf58;
    }
  }
  iVar1 = FUN_0002002c();
joined_r0x0003cf58:
  if (iVar1 == 0) {
    param5 = 0;
  }
  else {
    param5 = 0;
    local_93c = 0;
    local_914 = 0;
    do {
      iVar8 = *(int *)(DAT_00507488 + (int)(&DAT_00202a2a + local_914) * 4 + 4);
      uVar2 = FUN_0002006c();
      if (uVar2 != 0) {
        local_924 = (undefined4 *)(iVar8 + 0x14);
        local_928 = 0;
        local_920 = ~((byte)~(byte)((param_1 << 0x19) >> 0x18) >> 1);
        do {
          local_940 = 0;
          puVar10 = local_924;
          do {
            while (uVar3 = FUN_0004a83c(), (1 << (param_1 & 0xff) & uVar3) == 0) {
              param5 = param5 + 1;
              usleep(1000);
            }
            puVar6 = local_8f0;
            puVar12 = puVar10 + -5;
            do {
              puVar11 = puVar12 + 4;
              uVar4 = puVar12[1];
              uVar5 = puVar12[2];
              puVar9 = puVar6 + 4;
              uVar7 = puVar12[3];
              *puVar6 = *puVar12;
              puVar6[1] = uVar4;
              puVar6[2] = uVar5;
              puVar6[3] = uVar7;
              puVar6 = puVar9;
              puVar12 = puVar11;
            } while (puVar11 != puVar10 + 7);
            uVar3 = 0;
            *puVar9 = *puVar11;
            memset((void *)((int)&local_8bc + 2),0,0x92);
            iVar8 = local_93c * 0x34 + param_1 * 0x1a00 + 0x80acac;
            local_8dc = CONCAT31(local_8dc._1_3_,(char)local_8dc + '\x01');
            local_8b4 = puVar10[-3];
            uStack_8b0 = puVar10[-2];
            uStack_8ac = puVar10[-1];
            local_8b8 = local_93c & 0x7f | local_940;
            local_8bc = CONCAT31(CONCAT21(local_8bc._2_2_,local_920),1);
            do {
              if (uVar3 == (local_928 & 3)) {
                uVar5 = puVar10[1];
                uVar7 = puVar10[2];
                local_8a8[uVar3 * 8] = *puVar10;
                uVar4 = puVar10[3];
                local_8a8[uVar3 * 8 + 1] = uVar5;
                local_8a8[uVar3 * 8 + 3] = uVar4;
                uVar4 = puVar10[4];
                local_8a8[uVar3 * 8 + 2] = uVar7;
                uVar5 = puVar10[5];
                uVar7 = puVar10[6];
                local_8a8[uVar3 * 8 + 4] = uVar4;
                uVar4 = puVar10[7];
                local_8a8[uVar3 * 8 + 5] = uVar5;
                local_8a8[uVar3 * 8 + 6] = uVar7;
                local_8a8[uVar3 * 8 + 7] = uVar4;
                puVar6 = puVar10 + -5;
                puVar12 = (undefined4 *)(DAT_00507488 + iVar8);
                do {
                  puVar9 = puVar6 + 4;
                  puVar11 = puVar12 + 4;
                  uVar4 = puVar6[1];
                  uVar5 = puVar6[2];
                  uVar7 = puVar6[3];
                  *puVar12 = *puVar6;
                  puVar12[1] = uVar4;
                  puVar12[2] = uVar5;
                  puVar12[3] = uVar7;
                  puVar6 = puVar9;
                  puVar12 = puVar11;
                } while (puVar9 != puVar10 + 7);
                *puVar11 = puVar10[7];
              }
              else {
                local_8a8[uVar3 * 8] = local_8dc;
                local_8a8[uVar3 * 8 + 1] = uStack_8d8;
                local_8a8[uVar3 * 8 + 2] = uStack_8d4;
                local_8a8[uVar3 * 8 + 3] = uStack_8d0;
                local_8a8[uVar3 * 8 + 4] = local_8cc;
                local_8a8[uVar3 * 8 + 5] = uStack_8c8;
                local_8a8[uVar3 * 8 + 6] = uStack_8c4;
                local_8a8[uVar3 * 8 + 7] = uStack_8c0;
                puVar6 = local_8f0;
                puVar12 = (undefined4 *)(DAT_00507488 + iVar8);
                do {
                  puVar9 = puVar6 + 4;
                  puVar11 = puVar12 + 4;
                  uVar4 = puVar6[1];
                  uVar5 = puVar6[2];
                  uVar7 = puVar6[3];
                  puVar13 = puVar6 + 4;
                  *puVar12 = *puVar6;
                  puVar12[1] = uVar4;
                  puVar12[2] = uVar5;
                  puVar12[3] = uVar7;
                  puVar6 = puVar9;
                  puVar12 = puVar11;
                } while (puVar13 != &uStack_8c0);
                *puVar11 = *puVar9;
              }
              uVar3 = uVar3 + 1;
              iVar8 = iVar8 + 0x34;
            } while (uVar3 != 4);
            puVar10 = puVar10 + 0xd;
            local_93c = local_93c + 4;
            memcpy(auStackY_a50 + 0x80,&uStack_8ac,0x84);
            local_940 = local_940 + 0x80;
            FUN_00020e38(local_8bc,local_8b8,local_8b4,uStack_8b0);
            if (0x7f < local_93c) {
              local_93c = 0;
            }
          } while (local_940 != 0x400);
          local_924 = local_924 + 0x68;
          local_928 = local_928 + 1;
        } while (uVar2 != local_928);
      }
      local_914 = local_914 + 1;
    } while (iVar1 != local_914);
  }
  FUN_00034828(&local_8f8);
  param4 = local_8f8 - local_900;
  if (local_8f4 - local_8fc < 0) {
    param4 = param4 + -1;
  }
  if (3 < DAT_00087bbc) {
    snprintf((char *)local_828,0x800,
             "Send work for chain %d done, time cost %lds, sleep_count = %d\n",param_1,param4,param5
            );
    FUN_00032218(3,local_828,0);
  }
  return 0;
}

