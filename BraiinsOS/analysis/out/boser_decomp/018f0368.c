// FUN_018f0368 @ 018f0368 size=1184 calls_out=12 calls_in=0
// strings: failed to parse RSA private key as either PKCS#1 or PKCS#8 | failed to parse ECDSA private key as PKCS#8 or SEC1

void FUN_018f0368(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *local_1b0;
  int local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 **local_190;
  undefined1 *local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 **local_168;
  undefined1 *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_118 [88];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  int local_a8;
  undefined1 **local_a4;
  undefined1 *local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  
  iVar4 = *param_3;
  if (iVar4 == 0) {
    FUN_0189828c(&local_140,param_3[2],param_3[3]);
LAB_018f03fc:
    if (local_140 == 0) {
      local_c0 = local_13c;
      local_b8 = &local_c0;
      local_bc = local_138;
      local_b4 = &LAB_01963080;
      FUN_00664898((uint)&local_b0 | 4,&DAT_005ac52e,&local_b8);
      local_b0 = &DAT_80000020;
      puVar6 = (undefined4 *)((uint)&local_168 | 4);
      *puVar6 = &DAT_80000020;
      puVar6[1] = local_ac;
      puVar6[2] = local_a8;
      puVar6[3] = local_a4;
      puVar6[4] = local_a0;
      puVar6[5] = uStack_9c;
      puVar6[6] = uStack_98;
      puVar6[7] = local_94;
      puVar2 = (undefined4 *)((uint)&local_190 | 4);
      uVar7 = puVar6[1];
      uVar5 = puVar6[2];
      uVar8 = puVar6[3];
      *puVar2 = *puVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar5;
      puVar2[3] = uVar8;
      uVar7 = puVar6[5];
      uVar5 = puVar6[6];
      uVar8 = puVar6[7];
      puVar2[4] = puVar6[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar5;
      puVar2[7] = uVar8;
      local_1b0 = (undefined1 *)*puVar2;
      local_1ac = puVar2[1];
      local_1a8 = puVar2[2];
      local_1a4 = puVar2[3];
      local_1a0 = puVar2[4];
      uStack_19c = puVar2[5];
      uStack_198 = puVar2[6];
      uStack_194 = puVar2[7];
      if (local_1b0 != (undefined1 *)0x80000029) goto LAB_018f0570;
    }
    else {
      puVar6 = (undefined4 *)((uint)&local_140 | 4);
      local_168 = (undefined1 **)*puVar6;
      local_164 = (undefined1 *)puVar6[1];
      local_160 = puVar6[2];
      local_15c = puVar6[3];
      local_158 = puVar6[4];
      uStack_154 = puVar6[5];
      uStack_150 = puVar6[6];
      uStack_14c = puVar6[7];
      uStack_148 = puVar6[8];
      FUN_01bed4e2(auStack_80,auStack_118,0x58);
      local_190 = local_168;
      local_18c = local_164;
      uStack_188 = local_160;
      uStack_184 = local_15c;
      local_180 = local_158;
      uStack_17c = uStack_154;
      uStack_178 = uStack_150;
      uStack_174 = uStack_14c;
      uStack_170 = uStack_148;
      local_a4 = local_168;
      local_a0 = local_164;
      uStack_9c = local_160;
      uStack_98 = local_15c;
      local_94 = local_158;
      uStack_90 = uStack_154;
      uStack_8c = uStack_150;
      uStack_88 = uStack_14c;
      uStack_84 = uStack_148;
      local_ac = (undefined1 *)0x1;
      local_b0 = (undefined1 *)0x1;
      local_a8 = local_140;
      iVar4 = thunk_FUN_01be5118(0x88);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x88);
      }
      FUN_01bed4e2(iVar4,&local_b0,0x88);
      local_1b0 = (undefined1 *)0x80000029;
      local_1ac = iVar4;
    }
    iVar4 = local_1ac;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar6 = 1;
    puVar3 = &DAT_01d23c70;
    puVar6[1] = 1;
    puVar6[2] = iVar4;
  }
  else {
    if (iVar4 != 1) {
      FUN_018920b0(&local_140,param_3[2],param_3[3]);
      goto LAB_018f03fc;
    }
    uVar7 = 0x3a;
    iVar1 = thunk_FUN_01be5118(0x3a);
    if (iVar1 == 0) goto LAB_018f0814;
    FUN_01bed4e2(iVar1,"failed to parse RSA private key as either PKCS#1 or PKCS#8",0x3a);
    local_1a4 = 0x3a;
    local_1ac = 0x3a;
    local_1b0 = &DAT_80000020;
    local_1a8 = iVar1;
LAB_018f0570:
    FUN_018f0940(&local_1b0);
    FUN_018f0a44(&local_140,param_3,3,&PTR_PTR_01d23bc8);
    uVar7 = local_13c;
    if ((short)local_140 == 0xe) {
      FUN_018f0a44(&local_140,param_3,5,&PTR_DAT_01d23c00);
      uVar7 = local_13c;
      if ((short)local_140 == 0xe) {
        uVar7 = 0x33;
        iVar1 = thunk_FUN_01be5118(0x33);
        if (iVar1 == 0) goto LAB_018f0814;
        FUN_01bed4e2(iVar1,"failed to parse ECDSA private key as PKCS#8 or SEC1",0x33);
        local_a4 = (undefined1 **)0x33;
        local_ac = (undefined1 *)0x33;
        local_b0 = &DAT_80000020;
        local_a8 = iVar1;
        FUN_018f0980(&local_b0);
        if (iVar4 == 2) {
          FUN_01897cc8(&local_b0,param_3[2],param_3[3]);
          if ((char)local_b0 == '\0') {
            puVar2 = (undefined4 *)thunk_FUN_01be5118(0x68);
            if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x68);
            }
            *puVar2 = 1;
            puVar2[1] = 1;
            FUN_01bed4e2(puVar2 + 2,(uint)&local_b0 | 1,0x60);
            local_13c = CONCAT22(local_13c._2_2_,0xb);
            uVar7 = local_13c;
            puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
            if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x10);
            }
            *puVar6 = 1;
            puVar3 = &DAT_01d23c1c;
            puVar6[1] = 1;
            puVar6[2] = uVar7;
            puVar6[3] = puVar2;
            goto LAB_018f0738;
          }
          puVar6 = (undefined4 *)((uint)&local_140 | 4);
          local_1ac = local_a8;
          local_1b0 = local_ac;
          local_18c = &LAB_01963080;
          local_190 = &local_1b0;
          FUN_00664898(puVar6,&DAT_0058ac26,&local_190);
          local_164 = (undefined1 *)*puVar6;
          local_160 = puVar6[1];
          local_15c = local_134;
          local_158 = uStack_130;
          uStack_154 = uStack_12c;
          uStack_150 = uStack_128;
          uStack_14c = uStack_124;
          local_168 = (undefined1 **)&DAT_80000020;
          FUN_018f0980();
        }
        uVar7 = 0x33;
        iVar4 = thunk_FUN_01be5118(0x33);
        if (iVar4 == 0) {
LAB_018f0814:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar7);
        }
        FUN_01bed4e2(iVar4,&DAT_00522558,0x33);
        param_1[3] = 0x33;
        *param_1 = &DAT_80000020;
        param_1[1] = 0x33;
        param_1[2] = iVar4;
        goto LAB_018f0748;
      }
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
    }
    else {
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
    }
    puVar6[2] = local_140;
    *puVar6 = 1;
    puVar6[1] = 1;
    puVar6[3] = uVar7;
    puVar3 = &DAT_01d23be4;
  }
LAB_018f0738:
  param_1[1] = puVar6;
  *param_1 = 0x80000029;
  param_1[2] = puVar3;
LAB_018f0748:
  if (param_3[1] != -0x80000000) {
    FUN_0134bd64(param_3[1],param_3[2]);
  }
  return;
}

