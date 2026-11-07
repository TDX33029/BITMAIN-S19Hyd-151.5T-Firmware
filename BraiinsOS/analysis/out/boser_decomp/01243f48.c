// FUN_01243f48 @ 01243f48 size=344 calls_out=7 calls_in=4
// strings: 

void FUN_01243f48(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_68;
  uint local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38 [4];
  uint local_34;
  uint local_30;
  undefined1 uStack_21;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0xc:
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    param_1[1] = param_2[1];
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    *param_1 = 2;
    break;
  case 0xd:
    FUN_01a410d4(param_1,param_2[1],param_2[2]);
    goto LAB_01244024;
  case 0xe:
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    FUN_012fbd94(&local_68,uVar2,uVar3);
    if (local_68 != 0) {
      if (uVar1 != 0x80000000) {
        local_38[0] = 6;
        local_34 = uVar2;
        local_30 = uVar3;
        FUN_0123bf08(&local_68,local_38,&uStack_21,&DAT_01cf9914);
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = iStack_3c;
        FUN_019bb7e0(uVar1,uVar2);
        return;
      }
      uVar1 = uVar2;
      uVar2 = uVar3;
      uVar3 = local_64;
    }
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_1 = 2;
    break;
  case 0xf:
    FUN_01243dec(param_1,param_2[1],param_2[2]);
LAB_01244024:
    FUN_012222e0(param_2);
    break;
  default:
    FUN_012223f8(param_1,param_2,&uStack_21,&DAT_01cf9914);
  }
  return;
}

