// FUN_0061637c @ 0061637c size=808 calls_out=8 calls_in=1
// strings: 

void FUN_0061637c(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_288;
  undefined *local_270;
  undefined1 *local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined4 local_234;
  undefined1 local_230;
  undefined4 uStack_22f;
  undefined3 uStack_22b;
  ushort local_228;
  undefined4 local_226;
  undefined1 local_222;
  undefined2 local_221;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined *local_1f0;
  undefined4 uStack_1ec;
  undefined1 *puStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  uint local_1cc;
  undefined2 uStack_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 *local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined *local_198;
  code *local_194;
  undefined1 *local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  uint uStack_174;
  
  FUN_018766d4(&local_198,1);
  local_218 = *param_3;
  uStack_214 = param_3[1];
  uStack_210 = param_3[2];
  uStack_20c = param_3[3];
  local_208 = param_3[4];
  uStack_204 = param_3[5];
  uStack_200 = param_3[6];
  uStack_1fc = param_3[7];
  local_1f0 = local_198;
  uStack_1ec = local_194;
  puStack_1e8 = local_190;
  uStack_1e4 = uStack_18c;
  uStack_1e0 = uStack_188;
  local_1dc = local_184;
  uStack_1d8 = uStack_180;
  uStack_1d4 = uStack_17c;
  local_1d0 = uStack_178;
  local_1cc = uStack_174;
  local_1ac = 0;
  uStack_1c8 = 0;
  local_1c0 = 0x66000;
  piVar7 = *(int **)(param_2 + 0x28);
  local_1c4 = 0x2000;
  local_228 = 0x100;
  local_318 = 3;
  local_288 = 3;
  uStack_22f = *(undefined4 *)(param_2 + 0x30);
  uStack_22b = (undefined3)((uint)*(undefined4 *)(param_2 + 0x33) >> 8);
  local_1f8 = 0;
  local_1b0 = 1;
  local_1b4 = 0;
  local_1b8 = 0;
  local_1bc = 1;
  local_314 = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  local_230 = 0;
  local_234 = 0;
  local_248 = 0xb;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = &DAT_3b9aca00;
  local_290 = 0;
  local_298 = 0;
  local_222 = 0;
  local_226 = 0;
  local_221 = 0x201;
  uVar6 = uStack_22f;
  if (piVar7 != (int *)0x0) {
    do {
      iVar3 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6166a8);
      (*pcVar1)();
    }
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
  }
  FUN_01182ee4(&local_318,piVar7,uVar6);
  if (*(char *)(param_2 + 0x38) == '\0') {
    if ((char)local_221 == '\0') {
      FUN_01421814(&local_318);
    }
    else {
      local_221 = CONCAT11(local_221._1_1_,2);
    }
  }
  if (*(char *)(param_2 + 0x37) != '\0') {
    local_230 = 1;
  }
  if (*(char *)(param_2 + 0x39) != '\0') {
    local_226._0_2_ = CONCAT11(1,(undefined1)local_226);
  }
  if (*(char *)(param_2 + 0x3a) != '\0') {
    local_226 = CONCAT31(local_226._1_3_,1);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    local_294 = *(undefined4 *)(param_2 + 0x1c);
    local_298 = 1;
  }
  FUN_01421a5c(&local_198,piVar7,param_2);
  if (local_190 != &DAT_3b9aca00) {
    local_268 = local_190;
  }
  if (local_190 != &DAT_3b9aca00) {
    local_270 = local_198;
  }
  if (*(char *)(param_2 + 0x3d) != '\x02') {
    local_1cc = CONCAT31(local_1cc._1_3_,*(char *)(param_2 + 0x3d)) & 0xffffff01;
  }
  local_1ac = CONCAT11(local_1ac._1_1_,*(char *)(param_2 + 0x3b));
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    local_1cc = local_1cc & 0xffffff00;
  }
  if (*(int *)(param_2 + 0x20) == 1) {
    uVar4 = *(uint *)(param_2 + 0x24);
    if (uVar4 >> 0xd == 0) {
      local_194 = FUN_012fd02c;
      local_198 = &DAT_0056d0ac;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005766d9,&local_198,&DAT_01d20af8);
    }
    uStack_1c8 = 0;
    local_1c4 = 0x2000;
    local_1d0 = uVar4;
    local_1c0 = uVar4;
  }
  if (*(char *)(param_2 + 0x3c) == '\0') {
    local_228 = local_228 & 0xff;
  }
  local_1a8 = (undefined4 *)thunk_FUN_01be5118(0xb0);
  if (local_1a8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xb0);
  }
  local_1a0 = param_5;
  *local_1a8 = 6;
  local_1a8[1] = 0;
  local_1a4 = param_4;
  FUN_01bed4e2(&local_198,&local_318,0x170);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar5 = 0;
  FUN_01bed4e2(param_1,&local_318,0x170);
  *(undefined4 **)(param_1 + 0x184) = local_1a8;
  *(undefined4 *)(param_1 + 0x188) = local_1a4;
  *(undefined4 *)(param_1 + 0x18c) = local_1a0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined4 **)(param_1 + 400) = puVar5;
  *(undefined1 *)(param_1 + 0x180) = 3;
  return;
}

