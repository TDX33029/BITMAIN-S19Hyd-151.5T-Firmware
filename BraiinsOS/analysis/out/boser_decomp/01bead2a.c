// FUN_01bead2a @ 01bead2a size=142 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01bead2a(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar1 = FUN_01bed93e(&local_68,0,0x58);
  software_interrupt(0);
  iVar2 = FUN_01be3b5a(param_1,0x58,uVar1);
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_01bed93e(param_2,0,0x60);
    if (local_2c == 0) {
      local_2c = local_64;
    }
    *param_2 = local_64;
    param_2[2] = local_60;
    param_2[3] = iStack_5c;
    param_2[1] = local_2c;
    param_2[4] = local_58;
    param_2[5] = iStack_54;
    param_2[8] = local_48;
    param_2[9] = iStack_44;
    param_2[10] = local_40;
    param_2[0xb] = iStack_3c;
    param_2[0xc] = local_40;
    param_2[0xd] = iStack_3c;
    param_2[0xe] = local_38;
    uVar1 = 0;
    param_2[0x10] = local_28;
    param_2[0x11] = local_30;
    param_2[0x12] = local_68;
    *(undefined8 *)(param_2 + 6) = local_50;
  }
  return uVar1;
}

