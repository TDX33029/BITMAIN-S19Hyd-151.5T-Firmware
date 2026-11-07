// FUN_015828a4 @ 015828a4 size=260 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_015828a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  uint local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  local_20 = 0;
  FUN_016dd606(auStack_58,0,0x23);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = FUN_016d6590(param_1,0x541e,auStack_58);
  if (iVar1 == -1) {
    uVar2 = FUN_0126ead8();
    puVar3 = &DAT_00565a10;
  }
  else {
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(local_3c,(byte)(in_fpscr >> 0x16) & 3);
    local_48 = local_48 & 0xffffcfcf | 0x2030;
    local_40 = 1;
    if (fVar4 < fVar5) {
      fVar4 = (float)FUN_016d6208(fVar5 / fVar4);
      local_40 = (int)fVar4;
    }
    uVar6 = FUN_016d6590(param_1,0x541f,auStack_58);
    if ((int)uVar6 != -1) {
      return 0;
    }
    uVar2 = FUN_0126ead8(0xffffffff,(int)((ulonglong)uVar6 >> 0x20));
    puVar3 = &DAT_005665f0;
  }
  FUN_01582a80(uVar2,puVar3,0x20);
  return 1;
}

