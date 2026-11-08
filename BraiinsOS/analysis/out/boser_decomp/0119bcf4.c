// FUN_0119bcf4 @ 0119bcf4 size=164 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0119bcf4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_1b8 [128];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 local_14;
  
  local_128 = param_1[0xd];
  local_124 = param_1[0xe];
  local_44 = param_1[0xf];
  local_48 = *(undefined4 *)param_1[0xb];
  local_4c = *(undefined4 *)param_1[0xc];
  local_138 = *param_2;
  uStack_134 = param_2[1];
  uStack_130 = param_2[2];
  uStack_12c = param_2[3];
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uStack_38 = param_1[2];
  uStack_34 = param_1[3];
  uStack_30 = param_1[4];
  local_2c = param_1[5];
  uStack_28 = param_1[6];
  uStack_24 = param_1[7];
  uStack_20 = param_1[8];
  uStack_1c = param_1[9];
  uStack_18 = param_1[10];
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x1a8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1a8);
  }
  FUN_01bed4e2(iVar1,auStack_1b8,0x1a8);
  return CONCAT44(&UNK_01c217cc,iVar1);
}

