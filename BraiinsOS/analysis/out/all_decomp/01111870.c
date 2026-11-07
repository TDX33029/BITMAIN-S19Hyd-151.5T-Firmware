// FUN_01111870 @ 01111870 size=288 calls_out=4 calls_in=2
// strings: BUG: non-monotonic clock

void FUN_01111870(undefined4 param_1,undefined4 param_2,double *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  double *pdVar3;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_015f3b0c(&local_38,1);
  uVar2 = local_30;
  uVar1 = local_38;
  pdVar3 = param_3 + 3;
  local_40 = *(undefined1 **)(param_3 + 4);
  local_58 = local_38;
  uStack_54 = local_34;
  local_50 = local_30;
  if (local_40 == &DAT_3b9aca00) {
    *(undefined4 *)(param_3 + 4) = local_30;
    param_3[2] = (double)CONCAT44(param_2,param_1);
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    *(uint *)pdVar3 = local_38;
    *(undefined4 *)((int)param_3 + 0x1c) = local_34;
    return;
  }
  local_48 = *(undefined4 *)pdVar3;
  local_44 = *(undefined4 *)((int)param_3 + 0x1c);
  FUN_015f3c24(&local_38,&local_58,&local_48);
  if ((local_38 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: non-monotonic clock",0x18,&DAT_018870ec);
  }
  dVar5 = (double)FUN_01845f30(local_30,local_2c);
  dVar4 = (double)VectorUnsignedToFloat(local_28,(byte)(in_fpscr >> 0x16) & 3);
  dVar5 = dVar4 / 1000000000.0 + dVar5;
  if (*param_3 <= dVar5) {
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(uint *)pdVar3 = uVar1;
    *(undefined4 *)((int)param_3 + 0x1c) = local_34;
    dVar4 = 0.0;
    param_3[1] = param_3[2] / (dVar5 / *param_3);
  }
  else {
    dVar4 = param_3[2];
  }
  param_3[2] = (double)CONCAT44(param_2,param_1) + dVar4;
  return;
}

