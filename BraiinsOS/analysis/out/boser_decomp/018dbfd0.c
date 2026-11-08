// FUN_018dbfd0 @ 018dbfd0 size=212 calls_out=4 calls_in=1
// strings: 

void FUN_018dbfd0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_100 [128];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_30;
  
  FUN_01bed93e(auStack_100,0,0x80);
  local_80 = *param_3;
  uStack_7c = param_3[1];
  uStack_78 = param_3[2];
  uStack_74 = param_3[3];
  uStack_70 = param_3[4];
  local_6c = param_3[5];
  uStack_68 = param_3[6];
  uStack_64 = param_3[7];
  uStack_60 = param_3[8];
  uStack_5c = param_3[9];
  local_58 = param_3[10];
  uStack_54 = param_3[0xb];
  uStack_50 = param_3[0xc];
  uStack_4c = param_3[0xd];
  uStack_48 = param_3[0xe];
  uStack_44 = param_3[0xf];
  uVar3 = param_2[1];
  local_3c = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = param_3;
  FUN_018900dc(auStack_100,uVar3,param_2[2]);
  if (*(char *)(param_2 + 3) == '\0') {
    FUN_01bed4e2(param_1,auStack_100,0xd8);
    FUN_0134bd64(*param_2,uVar3);
    uVar3 = 0x80000000;
  }
  else {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = *param_2;
    FUN_01bed4e2(param_1,auStack_100,0xd8);
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  return;
}

