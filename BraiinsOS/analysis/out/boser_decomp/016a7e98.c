// FUN_016a7e98 @ 016a7e98 size=192 calls_out=2 calls_in=0
// strings: invalid match span

void FUN_016a7e98(undefined4 *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_4[4];
  uVar3 = 0;
  if ((uint)param_4[5] < uVar1) goto LAB_016a7f34;
  if (*param_4 - 1U < 2) {
    if ((uint)param_4[3] <= uVar1) goto LAB_016a7f34;
    uVar2 = (uint)*(byte *)(param_4[2] + uVar1);
    bVar4 = *(byte *)(param_2 + 4) != uVar2;
    if (bVar4) {
      param_2 = (uint)*(byte *)(param_2 + 5);
    }
    if (bVar4 && param_2 != uVar2) goto LAB_016a7f34;
    local_14 = uVar1 + 1;
  }
  else {
    FUN_0167cbd8(&local_1c,param_2 + 4,param_4[2],param_4[3],uVar1,param_4[5]);
    if (local_1c != 1) goto LAB_016a7f34;
    if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
  }
  uVar3 = 1;
  param_1[1] = 0;
  param_1[2] = local_14;
LAB_016a7f34:
  *param_1 = uVar3;
  return;
}

