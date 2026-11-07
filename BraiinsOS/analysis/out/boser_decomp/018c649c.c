// FUN_018c649c @ 018c649c size=1344 calls_out=12 calls_in=0
// strings: rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve | rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve

void FUN_018c649c(char *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *local_2f4;
  int local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  undefined1 auStack_2e0 [116];
  undefined1 *local_26c;
  undefined1 **local_268;
  code *local_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined1 *local_24c;
  char *local_248;
  undefined4 local_244;
  undefined *local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [96];
  undefined1 **local_1b0;
  code *pcStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_198 [208];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  if ((*param_4 < 0) || (param_4[3] != -0x7ffffff9)) {
    if (param_2[0x5e] != -0x80000000) {
      FUN_0134bd64(param_2[0x5e],param_2[0x5f]);
    }
    param_2[0x5e] = 0x80000000;
    uVar2 = param_2[0x6b];
    FUN_01bed4e2(auStack_210,param_2 + 0x10,0x60);
    local_b0 = param_2[0x62];
    uStack_ac = param_2[99];
    uStack_a8 = param_2[100];
    local_a4 = param_2[0x65];
    local_a0 = param_2[0x66];
    local_9c = param_2[0x67];
    uStack_98 = param_2[0x68];
    uStack_94 = param_2[0x69];
    uStack_90 = param_2[0x6a];
    local_84 = param_2[0x6d];
    uStack_80 = param_2[0x6e];
    uStack_7c = param_2[0x6f];
    local_78 = param_2[0x70];
    uStack_74 = param_2[0x71];
    local_250 = (char *)*param_2;
    local_24c = (undefined1 *)param_2[1];
    local_248 = (char *)param_2[2];
    local_244 = param_2[3];
    local_240 = (undefined *)param_2[4];
    local_23c = param_2[5];
    uStack_238 = param_2[6];
    uStack_234 = param_2[7];
    uStack_230 = param_2[8];
    uStack_22c = param_2[9];
    local_228 = param_2[10];
    uStack_224 = param_2[0xb];
    uStack_220 = param_2[0xc];
    uStack_21c = param_2[0xd];
    uStack_218 = param_2[0xe];
    uStack_214 = param_2[0xf];
    uVar1 = *(undefined1 *)(param_2 + 0x82);
    FUN_01bed4e2(auStack_198,param_2 + 0x28,0xe8);
    local_88 = param_2[0x6c];
    local_70 = param_2[0x72];
    uStack_6c = param_2[0x73];
    uStack_68 = param_2[0x74];
    local_64 = param_2[0x75];
    local_60 = param_2[0x76];
    uStack_5c = param_2[0x77];
    local_58 = param_2[0x78];
    uStack_54 = param_2[0x79];
    uStack_50 = param_2[0x7a];
    local_4c = param_2[0x7b];
    local_48 = param_2[0x7c];
    uStack_44 = param_2[0x7d];
    local_40 = param_2[0x7e];
    uStack_3c = param_2[0x7f];
    uStack_38 = param_2[0x80];
    uStack_34 = param_2[0x81];
    local_2f = *(undefined1 *)((int)param_2 + 0x209);
    local_1b0 = (undefined1 **)0x80000002;
    local_8c = uVar2;
    local_30 = uVar1;
    iVar4 = thunk_FUN_01be5118(0x228);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x228);
    }
    FUN_01bed4e2(iVar4,&local_250,0x228);
    FUN_018c6d20(param_1,iVar4,param_3,param_4);
    goto LAB_018c69a8;
  }
  uVar2 = param_2[0x6b];
  FUN_01bed4e2(auStack_210,param_2 + 0x10,0x60);
  local_c8 = param_2[0x62];
  uStack_c4 = param_2[99];
  uStack_c0 = param_2[100];
  uStack_bc = param_2[0x65];
  local_b8 = param_2[0x66];
  uStack_b4 = param_2[0x67];
  local_b0 = param_2[0x68];
  uStack_ac = param_2[0x69];
  uStack_a8 = param_2[0x6a];
  local_9c = param_2[0x6d];
  uStack_98 = param_2[0x6e];
  uStack_94 = param_2[0x6f];
  uStack_90 = param_2[0x70];
  local_8c = param_2[0x71];
  local_250 = (char *)*param_2;
  local_24c = (undefined1 *)param_2[1];
  local_248 = (char *)param_2[2];
  local_244 = param_2[3];
  local_240 = (undefined *)param_2[4];
  local_23c = param_2[5];
  uStack_238 = param_2[6];
  uStack_234 = param_2[7];
  uStack_230 = param_2[8];
  uStack_22c = param_2[9];
  local_228 = param_2[10];
  uStack_224 = param_2[0xb];
  uStack_220 = param_2[0xc];
  uStack_21c = param_2[0xd];
  uStack_218 = param_2[0xe];
  uStack_214 = param_2[0xf];
  uVar1 = *(undefined1 *)(param_2 + 0x82);
  FUN_01bed4e2(&local_1b0,param_2 + 0x28,0xe8);
  local_a0 = param_2[0x6c];
  local_88 = param_2[0x72];
  local_84 = param_2[0x73];
  uStack_80 = param_2[0x74];
  uStack_7c = param_2[0x75];
  local_78 = param_2[0x76];
  uStack_74 = param_2[0x77];
  local_70 = param_2[0x78];
  uStack_6c = param_2[0x79];
  uStack_68 = param_2[0x7a];
  local_64 = param_2[0x7b];
  local_60 = param_2[0x7c];
  uStack_5c = param_2[0x7d];
  local_58 = param_2[0x7e];
  uStack_54 = param_2[0x7f];
  uStack_50 = param_2[0x80];
  local_4c = param_2[0x81];
  local_48 = CONCAT31(CONCAT21(local_48._2_2_,*(undefined1 *)((int)param_2 + 0x209)),uVar1);
  local_a4 = uVar2;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x210);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x210);
  }
  FUN_01bed4e2(puVar3,&local_250,0x210);
  FUN_01bed4e2(&local_2f0,param_4,0x80);
  if ((local_2f0 < 0) || (local_2e4 != -0x7ffffff9)) {
    FUN_018c5504(&local_250,&local_2f0,&DAT_0052389f,1,&DAT_0052383d,1);
    local_268._0_3_ = (undefined3)((uint)local_250 >> 8);
    if ((char)local_250 == '\x14') {
      local_26c = local_24c;
      puVar5 = local_24c;
      if (-1 < local_2f0) goto LAB_018c6784;
      goto LAB_018c6794;
    }
    param_1[3] = local_250._3_1_;
    *(undefined2 *)(param_1 + 1) = local_250._1_2_;
    *(undefined1 **)(param_1 + 4) = local_24c;
    *(char **)(param_1 + 8) = local_248;
    *(undefined4 *)(param_1 + 0xc) = local_244;
    *param_1 = (char)local_250;
    FUN_018c4ac4(&local_2f0);
    FUN_018c6b28(puVar3);
  }
  else {
    local_26c = auStack_2e0;
LAB_018c6784:
    puVar5 = local_26c;
    local_2f4 = puVar3 + 0x28;
    FUN_018dc0bc(local_2f4,local_2ec,local_2e8);
LAB_018c6794:
    local_2f4 = puVar3 + 0x28;
    if (3 < DAT_01d51b00) {
      local_268 = &local_26c;
      local_264 = FUN_018b14f8;
      local_240 = &DAT_01d22b84;
      local_244 = 0x15;
      local_248 = "rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve";
      local_24c = &DAT_00000015;
      local_250 = "rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve";
      FUN_0193b350(&DAT_0058461c,&local_268,4,&local_250);
    }
    iVar4 = *(int *)(puVar3[0x6b] + 0x44);
    FUN_018cea48(&local_268,
                 *(int *)(puVar3[0x6b] + 0x40) + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8,
                 *(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(puVar5 + 0x1c),
                 *(undefined4 *)(puVar5 + 0x20),*(undefined4 *)(puVar5 + 0x10),
                 *(undefined4 *)(puVar5 + 0x14),&DAT_005234a0);
    uVar2 = puVar3[0x6b];
    FUN_01bed4e2(auStack_210,puVar3 + 0x10,0x60);
    local_b0 = puVar3[0x62];
    uStack_ac = puVar3[99];
    uStack_a8 = puVar3[100];
    local_a4 = puVar3[0x65];
    local_a0 = puVar3[0x66];
    local_9c = puVar3[0x67];
    uStack_98 = puVar3[0x68];
    uStack_94 = puVar3[0x69];
    uStack_90 = puVar3[0x6a];
    local_84 = puVar3[0x6d];
    uStack_80 = puVar3[0x6e];
    uStack_7c = puVar3[0x6f];
    local_78 = puVar3[0x70];
    uStack_74 = puVar3[0x71];
    local_250 = (char *)*puVar3;
    local_24c = (undefined1 *)puVar3[1];
    local_248 = (char *)puVar3[2];
    local_244 = puVar3[3];
    local_240 = (undefined *)puVar3[4];
    local_23c = puVar3[5];
    uStack_238 = puVar3[6];
    uStack_234 = puVar3[7];
    uStack_230 = puVar3[8];
    uStack_22c = puVar3[9];
    local_228 = puVar3[10];
    uStack_224 = puVar3[0xb];
    uStack_220 = puVar3[0xc];
    uStack_21c = puVar3[0xd];
    uStack_218 = puVar3[0xe];
    uStack_214 = puVar3[0xf];
    uVar1 = *(undefined1 *)(puVar3 + 0x82);
    FUN_01bed4e2(auStack_198,local_2f4,0xe8);
    local_88 = puVar3[0x6c];
    local_70 = puVar3[0x72];
    uStack_6c = puVar3[0x73];
    uStack_68 = puVar3[0x74];
    local_64 = puVar3[0x75];
    local_60 = puVar3[0x76];
    uStack_5c = puVar3[0x77];
    local_58 = puVar3[0x78];
    uStack_54 = puVar3[0x79];
    uStack_50 = puVar3[0x7a];
    local_4c = puVar3[0x7b];
    local_48 = puVar3[0x7c];
    uStack_44 = puVar3[0x7d];
    local_40 = puVar3[0x7e];
    uStack_3c = puVar3[0x7f];
    uStack_38 = puVar3[0x80];
    uStack_34 = puVar3[0x81];
    local_1b0 = local_268;
    pcStack_1ac = local_264;
    uStack_1a8 = uStack_260;
    uStack_1a4 = uStack_25c;
    uStack_1a0 = uStack_258;
    uStack_19c = uStack_254;
    local_2f = *(undefined1 *)((int)puVar3 + 0x209);
    local_8c = uVar2;
    local_30 = uVar1;
    iVar4 = thunk_FUN_01be5118(0x228);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x228);
    }
    FUN_01bed4e2(iVar4,&local_250,0x228);
    *(int *)(param_1 + 4) = iVar4;
    *(undefined **)(param_1 + 8) = &DAT_01d22b94;
    *param_1 = '\x14';
    FUN_018c4ac4(&local_2f0);
  }
  thunk_FUN_01be4678(puVar3);
LAB_018c69a8:
  thunk_FUN_01be4678(param_2);
  return;
}

