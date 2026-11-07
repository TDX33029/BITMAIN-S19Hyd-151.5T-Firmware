// FUN_018c5c90 @ 018c5c90 size=1168 calls_out=14 calls_in=0
// strings: rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve | rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve

void FUN_018c5c90(char *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  char *local_2a8;
  char *local_2a4;
  undefined *local_2a0;
  char *local_298;
  char *local_294;
  int *local_290;
  undefined1 local_28c;
  undefined4 local_28b;
  undefined2 local_287;
  undefined1 local_285;
  undefined *local_284;
  char *local_280;
  int *local_27c;
  char *local_278;
  int *local_274;
  int local_270;
  uint local_26c;
  uint local_268;
  int local_260;
  uint local_25c;
  uint local_258;
  char *local_254;
  int *piStack_250;
  char *pcStack_24c;
  int *piStack_248;
  int local_240;
  code *local_23c;
  undefined4 local_238;
  int *local_234;
  char *local_230;
  int *local_22c;
  undefined *local_228;
  int local_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined1 auStack_1f8 [60];
  undefined2 local_1bc;
  undefined1 auStack_198 [232];
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  uint uStack_48;
  uint uStack_44;
  char *pcStack_40;
  int *piStack_3c;
  char *pcStack_38;
  int *piStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  iVar7 = *param_4;
  if ((iVar7 < 0) || (param_4[3] != -0x7ffffffa)) {
    FUN_018c5504(&local_238,param_4,&DAT_0052389f,1,&DAT_0052348a,1);
    local_294._0_3_ = (undefined3)((uint)local_238 >> 8);
    if ((char)local_238 == '\x14') {
      piVar5 = local_234;
      if (-1 < iVar7) goto LAB_018c5d28;
      goto LAB_018c5d3c;
    }
    param_1[3] = local_238._3_1_;
    *(undefined2 *)(param_1 + 1) = local_238._1_2_;
    *(int **)(param_1 + 4) = local_234;
    *(char **)(param_1 + 8) = local_230;
    *(int **)(param_1 + 0xc) = local_22c;
    *param_1 = (char)local_238;
  }
  else {
    piVar5 = param_4 + 4;
LAB_018c5d28:
    FUN_018dc0bc(param_2 + 0x28,param_4[1],param_4[2]);
LAB_018c5d3c:
    if (*piVar5 == -0x80000000) {
      local_260 = piVar5[2];
      local_25c = piVar5[3];
      local_258 = 0;
      if (*(char *)(param_2[0x6c] + 0x28) == '\x05') {
        piVar11 = (int *)0x18c5d78;
        FUN_018b5d9c(&local_238,&local_260);
        piVar5 = local_22c;
        pcVar9 = local_230;
        local_290 = local_234;
        pcVar2 = local_238;
        if (local_238 == (char *)0x80000000) {
          uVar10 = (uint)local_230 >> 8 | (int)local_22c << 0x18;
          piVar4 = local_234;
          piVar6 = local_22c;
          pcVar8 = local_230;
          piVar1 = local_22c;
LAB_018c5e20:
          local_298 = (char *)0x80000000;
          local_290 = piVar4;
          pcVar9 = pcVar8;
          piVar5 = piVar1;
        }
        else {
          local_298 = local_238;
          local_2a0 = local_228;
          FUN_018d17a4(&local_238,&local_260);
          piVar1 = local_22c;
          pcVar8 = local_230;
          piVar4 = local_234;
          if (local_238 == (char *)0x80000000) {
            piVar11 = (int *)0x18c5e08;
            FUN_0134bd64(pcVar2);
            uVar10 = (uint)pcVar8 >> 8 | (int)piVar1 << 0x18;
            piVar6 = piVar4;
            goto LAB_018c5e20;
          }
          local_2a4 = local_238;
          uVar10 = (uint)pcVar9 >> 8 | (int)piVar5 << 0x18;
          local_2a8 = local_230;
          piVar6 = local_234;
          piVar11 = local_22c;
        }
        if (local_258 < local_25c) {
          if (local_298 != (char *)0x80000000) {
            FUN_0134bd64();
            FUN_0134bd64(local_2a4,piVar6);
          }
        }
        else if (local_298 != (char *)0x80000000) {
          local_287 = (undefined2)((uint)piVar5 >> 8);
          local_285 = (undefined1)((uint)piVar5 >> 0x18);
          local_284 = local_2a0;
          local_278 = local_2a8;
          local_280 = local_2a4;
          local_28c = SUB41(pcVar9,0);
          local_294 = local_298;
          local_268 = 0;
          local_26c = 1;
          local_270 = 0;
          local_28b = uVar10;
          local_27c = piVar6;
          local_274 = piVar11;
          FUN_018b3db4(&local_294,&local_270);
          local_260 = local_270;
          local_25c = local_26c;
          local_258 = local_268;
          local_254 = local_280;
          piStack_250 = local_27c;
          pcStack_24c = local_278;
          piStack_248 = local_274;
          if (3 < DAT_01d51b00) {
            local_240 = (int)&local_28b + 3;
            local_23c = FUN_018aee54;
            local_228 = &DAT_01d22a90;
            local_22c = (int *)&DAT_00000015;
            local_230 = "rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve";
            local_234 = (int *)&DAT_00000015;
            local_238 = "rustls::client::tls12ExplicitPrimeExplicitChar2NamedCurve";
            FUN_0193b350(&DAT_00598ab2,&local_240,4,&local_238);
          }
          iVar3 = param_2[0x6b];
          FUN_01bed4e2(auStack_1f8,param_2 + 0x10,0x60);
          local_b0 = param_2[0x62];
          iStack_ac = param_2[99];
          iStack_a8 = param_2[100];
          iStack_a4 = param_2[0x65];
          local_a0 = param_2[0x66];
          iStack_9c = param_2[0x67];
          iStack_98 = param_2[0x68];
          iStack_94 = param_2[0x69];
          iStack_90 = param_2[0x6a];
          local_84 = param_2[0x6d];
          iStack_80 = param_2[0x6e];
          iStack_7c = param_2[0x6f];
          iStack_78 = param_2[0x70];
          iStack_74 = param_2[0x71];
          local_238 = (char *)*param_2;
          local_234 = (int *)param_2[1];
          local_230 = (char *)param_2[2];
          local_22c = (int *)param_2[3];
          local_228 = (undefined *)param_2[4];
          local_224 = param_2[5];
          iStack_220 = param_2[6];
          iStack_21c = param_2[7];
          iStack_218 = param_2[8];
          iStack_214 = param_2[9];
          local_210 = param_2[10];
          iStack_20c = param_2[0xb];
          iStack_208 = param_2[0xc];
          iStack_204 = param_2[0xd];
          iStack_200 = param_2[0xe];
          iStack_1fc = param_2[0xf];
          iVar7 = param_2[0x7b];
          FUN_01bed4e2(auStack_198,param_2 + 0x28,0xe8);
          local_88 = param_2[0x6c];
          local_70 = param_2[0x72];
          iStack_6c = param_2[0x73];
          iStack_68 = param_2[0x74];
          iStack_64 = param_2[0x75];
          local_60 = param_2[0x76];
          iStack_5c = param_2[0x77];
          iStack_58 = param_2[0x78];
          iStack_54 = param_2[0x79];
          iStack_50 = param_2[0x7a];
          local_4c = local_260;
          uStack_48 = local_25c;
          uStack_44 = local_258;
          pcStack_40 = local_254;
          piStack_3c = piStack_250;
          pcStack_38 = pcStack_24c;
          piStack_34 = piStack_248;
          local_2f = *(undefined1 *)((int)param_2 + 0x1ed);
          local_8c = iVar3;
          local_30 = (char)iVar7;
          iVar7 = thunk_FUN_01be5118(0x210);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x210);
          }
          FUN_01bed4e2(iVar7,&local_238,0x210);
          *param_1 = '\x14';
          *(int *)(param_1 + 4) = iVar7;
          *(undefined **)(param_1 + 8) = &DAT_01d22aa0;
          FUN_0134bd64(local_294,local_290);
          FUN_018c4ac4(param_4);
          goto LAB_018c5ee0;
        }
      }
    }
    iVar7 = *param_3;
    local_1bc = 4;
    local_234 = (int *)0x100001;
    local_238 = (char *)0x80000000;
    FUN_018e077c(iVar7,&local_238,*(char *)(iVar7 + 0x28) == '\x02');
    param_1[4] = '\f';
    *param_1 = '\x02';
    *(undefined1 *)(iVar7 + 0xb1) = 1;
  }
  FUN_018c4ac4(param_4);
  FUN_018c6360(param_2);
LAB_018c5ee0:
  thunk_FUN_01be4678(param_2);
  return;
}

