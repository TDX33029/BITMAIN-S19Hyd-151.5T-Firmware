// FUN_0082f790 @ 0082f790 size=428 calls_out=4 calls_in=0
// strings: 

void FUN_0082f790(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar6;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  undefined1 local_4c;
  uint local_48;
  uint local_44 [3];
  uint *local_38;
  undefined1 *local_34;
  uint *local_30;
  undefined1 *local_2c;
  
  uVar4 = param_3 * (uint)*(byte *)(param_2 + 0x145);
  dVar6 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = FUN_016d6168(SUB84(25000000.0 / (dVar6 * 0.5) + -1.0,0));
  uVar1 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar5)) *
          (int)(longlong)(double)CONCAT44(extraout_s1,uVar5);
  dVar6 = (double)VectorUnsignedToFloat(uVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = FUN_016d6168(SUB84(25000000.0 / (dVar6 * 0.5),0));
  uVar2 = (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar5)) *
          (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar5);
  uVar3 = uVar2 - uVar4;
  if (uVar2 < uVar4 || uVar3 == 0) {
    uVar3 = uVar4 - uVar2;
  }
  local_44[0] = uVar2;
  if ((uVar4 * 5) / 100 < uVar3) {
    local_30 = local_44;
    local_38 = &local_48;
    local_2c = &LAB_00fac484;
    local_34 = &LAB_00fac484;
    local_48 = uVar4;
    FUN_00600d2c(&local_58,&DAT_0057df74,&local_38);
    uVar5 = FUN_008c8bc8(&local_58);
    param_1[3] = uVar5;
    *(undefined1 *)(param_1 + 2) = 9;
  }
  else {
    local_48 = uVar1;
    if (uVar1 < 0x1b) {
      local_4c = 5;
      local_51 = 0xf00;
      local_55 = 0x100;
      local_58 = 0x100;
      local_56 = 1;
      local_4d = (undefined1)uVar1;
      FUN_0080ba10(param_1 + 1,&local_58);
      param_1[6] = uVar2;
      *param_1 = 0;
      return;
    }
    local_38 = &local_48;
    local_30 = (uint *)&DAT_00568550;
    local_2c = &LAB_00fac484;
    local_34 = &LAB_00fac484;
    FUN_00600d2c(local_44,&DAT_0058e7aa,&local_38);
    uVar5 = FUN_008c8bc8(local_44);
    *(undefined1 *)((int)param_1 + 0x15) = 5;
    param_1[3] = uVar5;
    param_1[2] = 0x1010009;
    param_1[4] = 0xf00;
  }
  *param_1 = 1;
  return;
}

