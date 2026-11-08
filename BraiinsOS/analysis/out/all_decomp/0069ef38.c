// FUN_0069ef38 @ 0069ef38 size=484 calls_out=7 calls_in=1
// strings: 

int FUN_0069ef38(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_248;
  undefined1 local_244;
  int local_240;
  int iStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int local_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  undefined1 local_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined1 auStack_198 [168];
  undefined1 auStack_f0 [168];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar8 = *param_2;
  iVar6 = param_2[1];
  iVar7 = param_2[2];
  if (iVar8 == 3 && iVar6 == 0) {
    return iVar7;
  }
  FUN_016dd1aa(&uStack_2bc,param_2 + 3,0x7c);
  local_48 = param_2[0x22];
  iStack_44 = param_2[0x23];
  iStack_40 = param_2[0x24];
  iStack_3c = param_2[0x25];
  local_38 = param_2[0x26];
  iStack_34 = param_2[0x27];
  iStack_30 = param_2[0x28];
  iStack_2c = param_2[0x29];
  FUN_010a55c4(auStack_f0);
  local_1b8 = param_2[0x22];
  iStack_1b4 = param_2[0x23];
  iStack_1b0 = param_2[0x24];
  iStack_1ac = param_2[0x25];
  local_1a8 = param_2[0x26];
  iStack_1a4 = param_2[0x27];
  iStack_1a0 = param_2[0x28];
  iStack_19c = param_2[0x29];
  FUN_016dd1aa(&local_240,auStack_f0,0x88);
  if ((9 < (byte)local_1d4) && (local_1cc != 0)) {
    thunk_FUN_016d3fb4(local_1d0);
  }
  local_1d4 = param_2[0x1b];
  local_1d0 = param_2[0x1c];
  local_1cc = param_2[0x1d];
  iStack_1c8 = param_2[0x1e];
  iStack_1c4 = param_2[0x1f];
  FUN_0145d5e0(&local_200);
  local_200 = param_2[0x10];
  iStack_1fc = param_2[0x11];
  iStack_1f8 = param_2[0x12];
  iStack_1f4 = param_2[0x13];
  iStack_1f0 = param_2[0x14];
  local_1ec = param_2[0x15];
  iStack_1e8 = param_2[0x16];
  iStack_1e4 = param_2[0x17];
  iStack_1e0 = param_2[0x18];
  iStack_1dc = param_2[0x19];
  iStack_1d8 = param_2[0x1a];
  FUN_01015c1c(&local_240);
  uStack_234 = uStack_2bc;
  uStack_230 = uStack_2b8;
  local_22c = local_2b4;
  uStack_228 = uStack_2b0;
  uStack_224 = uStack_2ac;
  uStack_220 = uStack_2a8;
  uStack_21c = uStack_2a4;
  local_218 = local_2a0;
  uStack_214 = uStack_29c;
  uStack_210 = uStack_298;
  uStack_20c = uStack_294;
  uStack_208 = uStack_290;
  uStack_204 = uStack_28c;
  local_1bc = local_244;
  local_240 = iVar8;
  iStack_23c = iVar6;
  iStack_238 = iVar7;
  if (local_1c0 != 0) {
    FUN_0148eea4(local_1c0);
    thunk_FUN_016d3fb4(local_1c0);
  }
  local_1c0 = local_248;
  FUN_016dd1aa(auStack_f0,&local_240,0xa8);
  piVar5 = (int *)param_1[1];
  piVar4 = (int *)param_1[2];
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + 1;
  if (-1 < iVar6) {
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (-1 < iVar6) {
      FUN_016dd1aa(auStack_198,auStack_f0,0xa8);
      piVar3 = (int *)*param_1;
      if (*piVar3 != 0 || piVar3[1] != 0) {
        FUN_006878dc(piVar3 + 2);
      }
      *piVar3 = 1;
      piVar3[1] = 0;
      FUN_016dd1aa(piVar3 + 2,auStack_198,0xa8);
      *(undefined1 *)(piVar3 + 0x2e) = 0;
      piVar3[0x2c] = (int)piVar4;
      piVar3[0x2d] = (int)piVar5;
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x69f118);
  (*pcVar1)();
}

