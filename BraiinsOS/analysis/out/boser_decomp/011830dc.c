// FUN_011830dc @ 011830dc size=420 calls_out=8 calls_in=1
// strings: 

int FUN_011830dc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_22c;
  int local_228;
  int iStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int local_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  byte local_1bc;
  undefined2 local_1bb;
  undefined1 local_1b9;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined1 auStack_180 [168];
  undefined1 auStack_d8 [180];
  
  iVar4 = *param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  if (iVar4 != 3 || iVar1 != 0) {
    FUN_01bed4e2(&uStack_2a4,param_2 + 3,0x7c);
    FUN_01413d40(auStack_d8);
    local_1a0 = param_2[0x22];
    iStack_19c = param_2[0x23];
    iStack_198 = param_2[0x24];
    iStack_194 = param_2[0x25];
    local_190 = param_2[0x26];
    iStack_18c = param_2[0x27];
    iStack_188 = param_2[0x28];
    iStack_184 = param_2[0x29];
    FUN_01bed4e2(&local_228,auStack_d8,0x88);
    if ((9 < local_1bc) && (local_1b4 != 0)) {
      thunk_FUN_01be4678(local_1b8);
    }
    local_1b9 = *(undefined1 *)((int)param_2 + 0x6f);
    local_1bb = *(undefined2 *)((int)param_2 + 0x6d);
    local_1b0 = local_238;
    local_1bc = local_244;
    local_1b4 = local_23c;
    local_1b8 = local_240;
    local_1ac = local_234;
    FUN_01139c30(&local_1e8);
    local_1e8 = param_2[0x10];
    iStack_1e4 = param_2[0x11];
    iStack_1e0 = param_2[0x12];
    iStack_1dc = param_2[0x13];
    iStack_1d8 = param_2[0x14];
    local_1d4 = param_2[0x15];
    iStack_1d0 = param_2[0x16];
    iStack_1cc = param_2[0x17];
    iStack_1c8 = param_2[0x18];
    iStack_1c4 = param_2[0x19];
    iStack_1c0 = param_2[0x1a];
    FUN_01139cd4(&local_228);
    uStack_21c = uStack_2a4;
    uStack_218 = uStack_2a0;
    local_214 = local_29c;
    uStack_210 = uStack_298;
    uStack_20c = uStack_294;
    uStack_208 = uStack_290;
    uStack_204 = uStack_28c;
    local_200 = local_288;
    uStack_1fc = uStack_284;
    uStack_1f8 = uStack_280;
    uStack_1f4 = uStack_27c;
    uStack_1f0 = uStack_278;
    uStack_1ec = uStack_274;
    local_1a4 = local_22c;
    local_228 = iVar4;
    iStack_224 = iVar1;
    iStack_220 = iVar3;
    FUN_0178e884(local_1a8);
    local_1a8 = local_230;
    FUN_01bed4e2(auStack_180,&local_228,0xa8);
    FUN_01141974(auStack_d8,param_1[1],*(undefined4 *)(param_1[2] + 0x14),auStack_180);
    piVar2 = (int *)*param_1;
    if (*piVar2 != 6 || piVar2[1] != 0) {
      FUN_01139a6c(piVar2);
    }
    FUN_01bed4e2(piVar2,auStack_d8,0xb0);
    iVar3 = 0;
  }
  return iVar3;
}

