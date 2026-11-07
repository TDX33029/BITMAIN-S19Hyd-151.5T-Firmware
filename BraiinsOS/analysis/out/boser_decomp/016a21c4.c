// FUN_016a21c4 @ 016a21c4 size=136 calls_out=1 calls_in=2
// strings: 

void FUN_016a21c4(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  uint *local_18;
  code *local_14;
  uint *local_10;
  code *local_c;
  
  local_1c = param_2[3];
  bVar5 = param_4 + 1 <= param_3;
  bVar4 = param_3 == param_4 + 1;
  if (!bVar5 || bVar4) {
    bVar5 = local_1c <= param_4;
    bVar4 = param_4 == local_1c;
  }
  if (bVar5 && !bVar4) {
    local_14 = FUN_0065fd28;
    local_18 = &uStack_24;
    local_c = FUN_012fd02c;
    local_10 = &local_1c;
    uStack_24 = param_3;
    uStack_20 = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005a4e9e,&local_18,&DAT_01d08154);
  }
  param_2[4] = param_3;
  param_2[5] = param_4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return;
}

