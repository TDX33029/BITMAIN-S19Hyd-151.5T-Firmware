// FUN_0118583c @ 0118583c size=408 calls_out=8 calls_in=1
// strings: 

int FUN_0118583c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  int local_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int local_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  byte local_1f4;
  undefined2 local_1f3;
  undefined1 local_1f1;
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined1 auStack_1b8 [168];
  undefined1 auStack_110 [236];
  
  iVar4 = *param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  if (iVar4 != 3 || iVar1 != 0) {
    FUN_01bed4e2(&uStack_2dc,param_2 + 3,0x7c);
    FUN_01413d40(auStack_110);
    local_1d8 = param_2[0x22];
    iStack_1d4 = param_2[0x23];
    iStack_1d0 = param_2[0x24];
    iStack_1cc = param_2[0x25];
    local_1c8 = param_2[0x26];
    iStack_1c4 = param_2[0x27];
    iStack_1c0 = param_2[0x28];
    iStack_1bc = param_2[0x29];
    FUN_01bed4e2(&local_260,auStack_110,0x88);
    if ((9 < local_1f4) && (local_1ec != 0)) {
      thunk_FUN_01be4678(local_1f0);
    }
    local_1f1 = *(undefined1 *)((int)param_2 + 0x6f);
    local_1f3 = *(undefined2 *)((int)param_2 + 0x6d);
    local_1e8 = local_270;
    local_1f4 = local_27c;
    local_1ec = local_274;
    local_1f0 = local_278;
    local_1e4 = local_26c;
    FUN_01139c30(&local_220);
    local_220 = param_2[0x10];
    iStack_21c = param_2[0x11];
    iStack_218 = param_2[0x12];
    iStack_214 = param_2[0x13];
    iStack_210 = param_2[0x14];
    local_20c = param_2[0x15];
    iStack_208 = param_2[0x16];
    iStack_204 = param_2[0x17];
    iStack_200 = param_2[0x18];
    iStack_1fc = param_2[0x19];
    iStack_1f8 = param_2[0x1a];
    FUN_01139cd4(&local_260);
    uStack_254 = uStack_2dc;
    uStack_250 = uStack_2d8;
    local_24c = local_2d4;
    uStack_248 = uStack_2d0;
    uStack_244 = uStack_2cc;
    uStack_240 = uStack_2c8;
    uStack_23c = uStack_2c4;
    local_238 = local_2c0;
    uStack_234 = uStack_2bc;
    uStack_230 = uStack_2b8;
    uStack_22c = uStack_2b4;
    uStack_228 = uStack_2b0;
    uStack_224 = uStack_2ac;
    local_1dc = local_264;
    local_260 = iVar4;
    iStack_25c = iVar1;
    iStack_258 = iVar3;
    FUN_0178e884(local_1e0);
    local_1e0 = local_268;
    FUN_01bed4e2(auStack_1b8,&local_260,0xa8);
    FUN_0113dd08(auStack_110,param_1,auStack_1b8);
    piVar2 = *(int **)(param_1 + 0x40);
    if (*piVar2 != 6 || piVar2[1] != 0) {
      FUN_01139d78(piVar2);
    }
    FUN_01bed4e2(piVar2,auStack_110,0xe8);
    iVar3 = 0;
  }
  return iVar3;
}

