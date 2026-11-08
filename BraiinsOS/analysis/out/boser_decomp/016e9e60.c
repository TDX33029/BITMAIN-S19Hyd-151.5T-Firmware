// FUN_016e9e60 @ 016e9e60 size=328 calls_out=9 calls_in=1
// strings: 

void FUN_016e9e60(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *local_28;
  code *local_24;
  
  uVar4 = *param_2;
  iVar1 = uVar4 - 7;
  if (uVar4 < 7) {
    iVar1 = 0;
  }
  if (iVar1 == 1) {
    uVar6 = FUN_016571c0();
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    if (uVar2 == 0) {
      uVar3 = FUN_016dee1c();
      *param_1 = 0;
    }
    else {
      uVar3 = FUN_016df13c((uint)uVar6,uVar2);
      param_1[2] = uVar2;
      *param_1 = 1;
      param_1[1] = (uint)uVar6;
    }
    param_1[6] = uVar3;
  }
  else {
    if (iVar1 != 0) {
      local_24 = FUN_016ea744;
      local_28 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005a3230,&local_28,&DAT_01d0a468);
    }
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar5 = param_2[6];
    param_1[3] = param_2[3];
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    param_1[6] = uVar5;
  }
  if (uVar4 < 9) {
    return;
  }
  iVar1 = *param_2 - 7;
  if (*param_2 < 7) {
    iVar1 = 0;
  }
  switch(iVar1) {
  case 0:
    FUN_016df204();
    FUN_016eada0(param_2);
    thunk_FUN_01be4678(param_2[6]);
    return;
  case 1:
    FUN_0134bd64(param_2[1],param_2[2]);
    return;
  case 2:
    FUN_0134aee0(param_2[1],param_2[2],4,8);
    return;
  case 3:
    FUN_0134aee0(param_2[1],param_2[2],1,2);
    return;
  default:
    return;
  }
}

