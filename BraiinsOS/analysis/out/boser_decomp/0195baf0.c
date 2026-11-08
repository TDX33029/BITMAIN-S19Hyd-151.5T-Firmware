// FUN_0195baf0 @ 0195baf0 size=2176 calls_out=19 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0195baf0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int local_3bc;
  undefined4 **local_3a0;
  undefined1 *local_39c;
  undefined4 uStack_398;
  undefined4 *local_390;
  undefined1 local_38c;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined4 *local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  short local_2ac;
  undefined4 local_1a0;
  undefined *local_19c;
  int *local_198;
  undefined *local_194;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_138 [184];
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [20];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 **local_30;
  undefined1 *local_2c;
  
  iVar15 = param_3[1];
  if (*param_3 == -0x80000000) {
    iVar8 = param_3[2];
    FUN_01953bac(&local_2c8,param_2);
    uVar5 = (uint)local_2c4;
    puVar3 = local_2c8;
    if (local_2c8 != (undefined4 *)0x80000000) {
      local_188 = 0;
      FUN_01313b0c(&local_2c8,&local_188,local_2c4,local_2c0);
      local_390 = local_2c8;
      if (local_2c8 != (undefined4 *)0x80000000) {
        uVar4 = (undefined1)local_2c4;
        FUN_01bed4e2((uint)&local_390 | 5,(int)&local_2c4 + 1,0xb3);
        local_38c = uVar4;
        FUN_01ae1a9c(&local_2d8);
        FUN_0128e808(&local_40);
        FUN_01298334(auStack_54,param_4,&local_40);
        local_60 = local_40;
        uStack_5c = uStack_3c;
        uStack_58 = uStack_38;
        FUN_01a20054(&local_2c8,&local_390,&local_60);
        if (local_2ac == 0x255) {
          if ((undefined4 *)0x3 < local_2c8) {
            FUN_019bb7e0(local_2c4,local_2c0);
          }
          iVar9 = 0;
          local_3bc = 0;
        }
        else {
          iVar9 = FUN_012920c0();
          lVar1 = (longlong)iVar9 * 0x15180 + ZEXT48(local_2c4);
          uVar14 = (uint)lVar1;
          local_3bc = uVar14 + 0x886cb780;
          iVar9 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar14 < 0x77934880) + 0xe);
        }
        local_2c0 = 0;
        local_2c4 = (code *)0x1;
        local_2c8 = (undefined4 *)0x0;
        local_39c = &LAB_00632348;
        local_3a0 = &local_390;
        iVar10 = FUN_012fa178(&local_2c8,&DAT_01d26534,&DAT_00590e5f,&local_3a0);
        uVar6 = local_2c0;
        uVar13 = local_2c4;
        puVar12 = local_2c8;
        if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_30,&DAT_01d2654c,&DAT_01d30334);
        }
        uVar7 = FUN_01953b00(param_4);
        FUN_01bed4e2(auStack_138,&local_390,0xb8);
        uStack_62 = 0;
        local_80 = local_3bc;
        local_148 = uVar13;
        local_14c = puVar12;
        local_160 = 0;
        local_15c = 0;
        local_170 = 0;
        local_16c = 0;
        local_184 = 0;
        local_188 = 1;
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
        local_74 = 1;
        local_78 = 0;
        local_144 = uVar6;
        local_150 = 0;
        local_180 = local_2d4 << 0x18 | (local_2d4 >> 8 & 0xff) << 0x10 |
                    (local_2d4 >> 0x10 & 0xff) << 8 | local_2d4 >> 0x18;
        local_17c = local_2d8 << 0x18 | (local_2d8 >> 8 & 0xff) << 0x10 |
                    (local_2d8 >> 0x10 & 0xff) << 8 | local_2d8 >> 0x18;
        local_178 = local_2cc << 0x18 | (local_2cc >> 8 & 0xff) << 0x10 |
                    (local_2cc >> 0x10 & 0xff) << 8 | local_2cc >> 0x18;
        local_174 = local_2d0 << 0x18 | (local_2d0 >> 8 & 0xff) << 0x10 |
                    (local_2d0 >> 0x10 & 0xff) << 8 | local_2d0 >> 0x18;
        local_7c = iVar9;
        uStack_64 = uVar7;
        piVar11 = (int *)thunk_FUN_01be5118(8);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *piVar11 = iVar15;
        piVar11[1] = iVar8;
        FUN_01bed4e2(&local_2c8,&local_188,0x128);
        local_19c = &DAT_01d26484;
        local_190 = 1;
        local_194 = &DAT_01d2650c;
        local_1a0 = 1;
        local_198 = piVar11;
        iVar15 = thunk_FUN_01be5118(0x140);
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x140);
        }
        FUN_01bed4e2(iVar15,&local_2c8,0x140);
        puVar12 = (undefined4 *)thunk_FUN_01be5118(0x1c);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        *(undefined1 *)(puVar12 + 4) = 0;
        *puVar12 = 1;
        puVar12[1] = 1;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[5] = iVar15;
        puVar12[6] = &DAT_01d264ac;
        FUN_019bb7e0(puVar3,uVar5);
        param_1[3] = puVar12;
        *param_1 = 0x80000000;
        return;
      }
      if (3 < local_2c4) {
        FUN_019bb7e0(local_2c0,local_2bc);
      }
      FUN_019bb7e0(puVar3,uVar5);
      local_2c4._0_1_ = 0x17;
    }
    FUN_01443048(iVar15,iVar8);
    local_188 = CONCAT31(local_188._1_3_,(undefined1)local_2c4);
    local_2c4 = FUN_0195b534;
    local_2c8 = &local_188;
    uVar13 = FUN_00a57a98(&DAT_005afca1,&local_2c8);
    *param_1 = 0x80000001;
    param_1[1] = uVar13;
  }
  else {
    FUN_006666fc(&local_3a0,iVar15,param_3[2]);
    piVar11 = (int *)FUN_0195c5ec(param_3);
    FUN_01953bac(&local_2c8,param_2);
    uVar5 = (uint)local_2c4;
    puVar3 = local_2c8;
    if (local_2c8 != (undefined4 *)0x80000000) {
      local_188 = 0;
      FUN_01313b0c(&local_2c8,&local_188,local_2c4,local_2c0);
      local_390 = local_2c8;
      if (local_2c8 != (undefined4 *)0x80000000) {
        uVar4 = (undefined1)local_2c4;
        FUN_01bed4e2((uint)&local_390 | 5,(int)&local_2c4 + 1,0xb3);
        local_38c = uVar4;
        FUN_01ae1a9c(&local_2d8);
        FUN_0128e808(&local_40);
        FUN_01298334(auStack_54,param_4,&local_40);
        local_60 = local_40;
        uStack_5c = uStack_3c;
        uStack_58 = uStack_38;
        FUN_01a20054(&local_2c8,&local_390,&local_60);
        if (local_2ac == 0x255) {
          if ((undefined4 *)0x3 < local_2c8) {
            FUN_019bb7e0(local_2c4,local_2c0);
          }
          iVar15 = 0;
          local_3bc = 0;
        }
        else {
          iVar15 = FUN_012920c0();
          lVar1 = (longlong)iVar15 * 0x15180 + ZEXT48(local_2c4);
          uVar14 = (uint)lVar1;
          local_3bc = uVar14 + 0x886cb780;
          iVar15 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar14 < 0x77934880) + 0xe);
        }
        local_2c0 = 0;
        local_2c4 = (code *)0x1;
        local_2c8 = (undefined4 *)0x0;
        local_2c = &LAB_00632348;
        local_30 = &local_390;
        iVar8 = FUN_012fa178(&local_2c8,&DAT_01d26534,&DAT_00590e5f,&local_30);
        uVar6 = local_2c0;
        uVar13 = local_2c4;
        puVar12 = local_2c8;
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_30,&DAT_01d2654c,&DAT_01d30334);
        }
        uVar7 = FUN_01953b00(param_4);
        FUN_01bed4e2(auStack_138,&local_390,0xb8);
        uStack_62 = 0;
        local_80 = local_3bc;
        local_144 = uVar6;
        local_148 = uVar13;
        local_14c = puVar12;
        local_160 = 0;
        local_15c = 0;
        local_170 = 0;
        local_16c = 0;
        local_184 = 0;
        local_188 = 1;
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
        local_74 = 1;
        local_78 = 0;
        local_150 = 0;
        local_180 = local_2d4 << 0x18 | (local_2d4 >> 8 & 0xff) << 0x10 |
                    (local_2d4 >> 0x10 & 0xff) << 8 | local_2d4 >> 0x18;
        local_17c = local_2d8 << 0x18 | (local_2d8 >> 8 & 0xff) << 0x10 |
                    (local_2d8 >> 0x10 & 0xff) << 8 | local_2d8 >> 0x18;
        local_178 = local_2cc << 0x18 | (local_2cc >> 8 & 0xff) << 0x10 |
                    (local_2cc >> 0x10 & 0xff) << 8 | local_2cc >> 0x18;
        local_174 = local_2d0 << 0x18 | (local_2d0 >> 8 & 0xff) << 0x10 |
                    (local_2d0 >> 0x10 & 0xff) << 8 | local_2d0 >> 0x18;
        local_7c = iVar15;
        uStack_64 = uVar7;
        puVar12 = (undefined4 *)thunk_FUN_01be5118(4);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,4);
        }
        *puVar12 = piVar11;
        FUN_01bed4e2(&local_2c8,&local_188,0x128);
        local_19c = &DAT_01d26484;
        local_190 = 1;
        local_194 = &DAT_01d26498;
        local_1a0 = 1;
        local_198 = puVar12;
        iVar15 = thunk_FUN_01be5118(0x140);
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x140);
        }
        FUN_01bed4e2(iVar15,&local_2c8,0x140);
        puVar12 = (undefined4 *)thunk_FUN_01be5118(0x1c);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        puVar12[5] = iVar15;
        puVar12[6] = &DAT_01d264ac;
        *(undefined1 *)(puVar12 + 4) = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = 1;
        puVar12[1] = 1;
        FUN_019bb7e0(puVar3,uVar5);
        *param_1 = local_3a0;
        param_1[1] = local_39c;
        param_1[2] = uStack_398;
        param_1[3] = puVar12;
        return;
      }
      if (3 < local_2c4) {
        FUN_019bb7e0(local_2c0,local_2bc);
      }
      FUN_019bb7e0(puVar3,uVar5);
      local_2c4._0_1_ = 0x17;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b354(piVar11);
    }
    local_188 = CONCAT31(local_188._1_3_,(undefined1)local_2c4);
    local_2c4 = FUN_0195b534;
    local_2c8 = &local_188;
    uVar13 = FUN_00a57a98(&DAT_0058d384,&local_2c8);
    *param_1 = 0x80000001;
    param_1[1] = uVar13;
    FUN_019bb7e0(local_3a0,local_39c);
  }
  return;
}

