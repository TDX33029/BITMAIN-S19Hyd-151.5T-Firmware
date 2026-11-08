// FUN_018f3c78 @ 018f3c78 size=148 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_018f3c78(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_e0 [128];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  param_1 = (undefined4 *)*param_1;
  FUN_01bed93e(auStack_e0,0,0x80);
  local_60 = *param_1;
  uStack_5c = param_1[1];
  uStack_58 = param_1[2];
  uStack_54 = param_1[3];
  uStack_50 = param_1[4];
  local_4c = param_1[5];
  uStack_48 = param_1[6];
  uStack_44 = param_1[7];
  uStack_40 = param_1[8];
  uStack_3c = param_1[9];
  local_38 = param_1[10];
  uStack_34 = param_1[0xb];
  uStack_30 = param_1[0xc];
  uStack_2c = param_1[0xd];
  uStack_28 = param_1[0xe];
  uStack_24 = param_1[0xf];
  iVar1 = thunk_FUN_01be5118(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd8);
  }
  FUN_01bed4e2(iVar1,auStack_e0,0xc0);
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 **)(iVar1 + 200) = param_1;
  return CONCAT44(&UNK_01d23f80,iVar1);
}

