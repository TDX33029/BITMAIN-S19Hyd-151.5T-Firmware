// FUN_00058648 @ 00058648  size=888  callers=0
// program: bmminer


undefined4 FUN_00058648(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long param4;
  undefined4 *__src;
  uint uVar8;
  int iVar9;
  int param5;
  undefined1 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *extraout_r12;
  bool bVar13;
  undefined1 auStackY_21f8 [128];
  uint local_212c;
  byte local_211c;
  undefined4 *local_2114;
  uint local_2110;
  int local_2104;
  int local_20f0;
  int local_20ec;
  int local_20e8;
  int local_20e4;
  undefined4 local_20e0 [24];
  undefined1 local_207e;
  undefined4 local_207c;
  uint local_2078;
  undefined4 local_2074;
  undefined4 uStack_2070;
  undefined4 uStack_206c;
  undefined4 local_2068 [16];
  undefined2 local_2028 [4098];
  
  local_20e0[0] = 0;
  local_20e0[1] = 0x40;
  local_20e0[2] = 0x80;
  local_20e0[3] = 0xc0;
  FUN_0004bd34(&local_20f0);
  if (3 < DAT_000be63c) {
    memset(local_2028,0,0x2000);
    local_2028[0] = 10;
    FUN_0004a3a4(3,local_2028,0);
    if (3 < DAT_000be63c) {
      snprintf((char *)local_2028,0x2000,">>>> Send work for chain %d.\n",param_1);
      FUN_0004948c(3,local_2028,0);
      iVar1 = FUN_0002a514();
      goto joined_r0x000589b4;
    }
  }
  iVar1 = FUN_0002a514();
joined_r0x000589b4:
  if (iVar1 == 0) {
    param5 = 0;
  }
  else {
    param5 = 0;
    uVar8 = 0;
    local_2104 = 0;
    do {
      local_2114 = *(undefined4 **)(DAT_00944b80 + (int)(&DAT_003fea2a + local_2104) * 4 + 4);
      uVar2 = FUN_0002a554();
      if (uVar2 != 0) {
        local_2110 = 0;
        local_211c = ~((byte)~(byte)((param_1 << 0x19) >> 0x18) >> 1);
        do {
          local_212c = 0;
          __src = local_2114;
          do {
            while (uVar3 = FUN_0006bc30(), (1 << (param_1 & 0xff) & uVar3) == 0) {
              param5 = param5 + 1;
              usleep(1000);
            }
            memcpy(local_20e0 + 4,__src,0x54);
            local_2074 = __src[2];
            local_2078 = uVar8 & 0x7f | local_212c;
            uStack_2070 = __src[3];
            uStack_206c = __src[4];
            local_207c = CONCAT31(CONCAT21(local_207c._2_2_,local_211c),1);
            puVar5 = local_2068;
            puVar11 = __src + 5;
            do {
              puVar12 = puVar11 + 4;
              uVar4 = puVar11[1];
              uVar6 = puVar11[2];
              uVar7 = puVar11[3];
              *puVar5 = *puVar11;
              puVar5[1] = uVar4;
              puVar5[2] = uVar6;
              puVar5[3] = uVar7;
              puVar5 = puVar5 + 4;
              puVar11 = puVar12;
            } while (puVar12 != __src + 0x15);
            uVar3 = 0;
            iVar9 = uVar8 * 0x54 + param_1 * 0x2a00 + 0xffacac;
            do {
              uVar10 = SUB41(puVar12,0);
              bVar13 = uVar3 != (local_2110 & 3);
              if (bVar13) {
                uVar10 = (undefined1)local_20e0[uVar3];
                puVar5 = local_20e0 + 4;
              }
              else {
                puVar5 = __src;
              }
              __dest = (void *)(DAT_00944b80 + iVar9);
              uVar3 = uVar3 + 1;
              iVar9 = iVar9 + 0x54;
              if (bVar13) {
                local_207e = uVar10;
              }
              memcpy(__dest,puVar5,0x54);
              puVar12 = extraout_r12;
            } while (uVar3 != 4);
            memcpy(auStackY_21f8 + 0x80,&uStack_206c,0x44);
            uVar8 = uVar8 + 8;
            local_212c = local_212c + 0x80;
            FUN_0002cce4(local_207c,local_2078,local_2074,uStack_2070);
            if (0x7f < uVar8) {
              uVar8 = 0;
            }
            __src = __src + 0x15;
          } while (local_212c != 0x400);
          local_2114 = local_2114 + 0xa8;
          local_2110 = local_2110 + 1;
        } while (uVar2 != local_2110);
      }
      local_2104 = local_2104 + 1;
    } while (iVar1 != local_2104);
  }
  FUN_0004bd34(&local_20e8);
  param4 = local_20e8 - local_20f0;
  if (local_20e4 - local_20ec < 0) {
    param4 = param4 + -1;
  }
  if (3 < DAT_000be63c) {
    snprintf((char *)local_2028,0x2000,
             "Send work for chain %d done, time cost %lds, sleep_count = %d\n",param_1,param4,param5
            );
    FUN_0004948c(3,local_2028,0);
  }
  return 0;
}

