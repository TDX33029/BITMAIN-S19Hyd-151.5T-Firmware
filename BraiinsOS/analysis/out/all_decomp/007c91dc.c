// FUN_007c91dc @ 007c91dc size=628 calls_out=5 calls_in=20
// strings: a Display implementation returned an error unexpectedly

void FUN_007c91dc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,undefined4 *param_11,undefined1 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 *param_15,undefined1 param_16,undefined4 *param_17,
                 undefined1 param_18,undefined4 param_19,undefined1 param_20)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 auStack_240 [96];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [248];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_2c = 1;
  local_15c = &DAT_0185eb10;
  local_160 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_154 = 0;
  local_158 = &DAT_60000020;
  iVar1 = FUN_00934088(param_2,&local_160);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_258,
                 &DAT_0185eb38,&DAT_018af130);
  }
  local_1b8 = local_30;
  uStack_1b4 = local_2c;
  uStack_1b0 = local_28;
  FUN_016dd1aa(auStack_240,param_10,0x60);
  local_164 = param_11[2];
  local_258 = 5;
  local_174 = param_17[1];
  uStack_170 = param_17[2];
  local_1cc = 0xc082c000;
  iVar4 = 0;
  local_17f = param_20;
  local_180 = param_18;
  local_184 = 100;
  local_1c8 = 0x14;
  local_188 = 0x14;
  local_18c = 0x100;
  local_190 = 0x100;
  local_194 = param_6;
  local_198 = param_5;
  local_1a4 = 600;
  local_1a8 = 2000;
  uStack_16c = *param_11;
  local_1ac = param_14;
  uStack_168 = param_11[1];
  local_178 = *param_17;
  iVar1 = param_9 << 3;
  local_1c4 = 0;
  local_254 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1d8 = 0xbff0000000000000;
  local_1e0 = 0xc024000000000000;
  local_1a0 = param_4;
  local_19c = param_3;
  if (param_9 == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    iVar4 = param_9;
  }
  FUN_016dd1aa(iVar2,param_8,iVar1);
  FUN_016dd1aa(auStack_128,&local_258,0xf8);
  local_160 = (undefined4 *)*param_15;
  local_15c = (undefined *)param_15[1];
  local_158 = (undefined1 *)param_15[2];
  local_154 = param_15[3];
  local_150 = param_15[4];
  uStack_14c = param_15[5];
  uStack_148 = param_15[6];
  uStack_144 = param_15[7];
  uStack_140 = param_15[8];
  local_13c = param_15[9];
  uStack_138 = param_15[10];
  uStack_134 = param_15[0xb];
  uStack_130 = param_15[0xc];
  uStack_12c = param_15[0xd];
  FUN_016dd1aa(param_1,&local_160,0x130);
  *(int *)(param_1 + 0x130) = iVar4;
  *(int *)(param_1 + 0x134) = iVar2;
  uVar3 = *(undefined4 *)(&DAT_018afae4 + (param_2 & 0xff) * 4);
  *(short *)(param_1 + 0x140) = (short)param_19;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined1 *)(param_1 + 0x145) = param_12;
  *(undefined1 *)(param_1 + 0x144) = param_7;
  *(undefined1 *)(param_1 + 0x143) = param_16;
  *(char *)(param_1 + 0x142) = (char)((uint)param_19 >> 0x10);
  *(int *)(param_1 + 0x138) = param_9;
  *(undefined4 *)(param_1 + 0x13c) = param_13;
  return;
}

