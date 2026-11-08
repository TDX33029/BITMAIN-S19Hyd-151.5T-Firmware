// FUN_014f504c @ 014f504c size=584 calls_out=5 calls_in=3
// strings: 

void FUN_014f504c(undefined4 param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int unaff_r10;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int local_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int local_300 [6];
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined2 local_2c8;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int local_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_254;
  undefined2 local_253;
  undefined1 local_251;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240;
  int *local_238;
  int local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined1 auStack_224 [12];
  int local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 auStack_208 [208];
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined2 local_127;
  undefined1 local_125;
  int local_120;
  int local_11c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  
  if ((char)param_3[0xd] == '\0') {
    local_300[2] = FUN_017f06bc(param_3);
  }
  else {
    unaff_r10 = *param_3;
    local_300[2] = param_3[1];
    if (unaff_r10 != 2) {
      local_340 = param_3[2];
      iStack_33c = param_3[3];
      iStack_338 = param_3[4];
      iStack_334 = param_3[5];
      iStack_330 = param_3[6];
      local_32c = param_3[7];
      iStack_328 = param_3[8];
      iStack_324 = param_3[9];
      iStack_320 = param_3[10];
      iStack_31c = param_3[0xb];
      local_318 = param_3[0xc];
      iStack_314 = param_3[0xd];
      iStack_310 = param_3[0xe];
      iStack_30c = param_3[0xf];
      iStack_308 = param_3[0x10];
      iStack_304 = param_3[0x11];
      bVar3 = false;
      local_300[0] = 0;
      goto LAB_014f50bc;
    }
  }
  local_300[0] = 3;
  bVar3 = true;
LAB_014f50bc:
  do {
    iVar5 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x14f5290);
    (*pcVar1)();
  }
  local_251 = 0;
  local_253 = 0;
  local_300[1] = 0;
  local_2c8 = 0;
  local_2cc = 0;
  local_2d0 = 4;
  local_2d4 = 0;
  local_2d8 = 0;
  local_2dc = 4;
  local_2e0 = 0;
  local_2e4 = 0;
  local_2e8 = 2;
  local_2b8 = local_340;
  iStack_2b4 = iStack_33c;
  iStack_2b0 = iStack_338;
  iStack_2ac = iStack_334;
  iStack_2a8 = iStack_330;
  local_2a4 = local_32c;
  iStack_2a0 = iStack_328;
  iStack_29c = iStack_324;
  iStack_298 = iStack_320;
  iStack_294 = iStack_31c;
  local_290 = local_318;
  iStack_28c = iStack_314;
  iStack_288 = iStack_310;
  iStack_284 = iStack_30c;
  iStack_280 = iStack_308;
  iStack_27c = iStack_304;
  local_254 = 1;
  local_250 = 0;
  local_268 = 0;
  local_270 = &DAT_3b9aca00;
  local_24c = 0;
  local_248 = 0;
  local_244 = 0;
  local_240 = 2;
  local_2c0 = unaff_r10;
  local_2bc = local_300[2];
  local_238 = param_2;
  if ((bVar3) || (FUN_017f0268(&local_230,&local_2c0), local_230 == -0x80000000)) {
    piVar4 = local_300;
  }
  else {
    local_218 = local_230;
    uStack_214 = uStack_22c;
    uStack_210 = uStack_228;
    FUN_01bed4e2(auStack_208,local_300,0xd0);
    FUN_017c1af4(&local_138,&local_218,auStack_224);
    FUN_01bed4e2(&local_120,auStack_208,0xd0);
    if (local_120 == 3 && local_11c == 0) {
      FUN_01bed4e2(param_1,auStack_208,0xd0);
      (**(code **)(local_138 + 0x10))(&uStack_12c,uStack_134,uStack_130);
      return;
    }
    local_50 = 0;
    uStack_4c = 0x10;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = local_138;
    uStack_3c = uStack_134;
    uStack_38 = uStack_130;
    uStack_34 = uStack_12c;
    local_30 = 1;
    local_2f = local_127;
    local_2d = local_125;
    FUN_013b45a4(&local_120);
    piVar4 = &local_120;
  }
  FUN_01bed4e2(param_1,piVar4,0xd0);
  return;
}

