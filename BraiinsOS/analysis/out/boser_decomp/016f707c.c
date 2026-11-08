// FUN_016f707c @ 016f707c size=308 calls_out=6 calls_in=2
// strings: 

void FUN_016f707c(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  uint local_54;
  char local_50;
  int local_48 [8];
  byte local_28 [4];
  undefined4 local_24;
  
  local_60 = param_2;
  uStack_5c = param_4;
  FUN_0191d45c(&local_58,param_3,&local_60,FUN_016f7288);
  uVar2 = local_54;
  uVar3 = local_58 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    uVar2 = FUN_016f6c0c(local_54);
    uVar2 = uVar2 & 0xff;
    break;
  case 1:
    uVar2 = local_58 >> 8 & 0xff;
    break;
  case 2:
  case 3:
    uVar2 = (uint)*(byte *)(local_54 + 8);
    break;
  default:
    FUN_01919aec(local_48,param_3,param_3 + 0x2a0,param_3 + 0x2b0);
    if (local_48[0] == -0x7fffffd7) {
      puVar1 = (uint *)((uint)local_48 | 4);
      local_58 = *puVar1;
      local_54 = puVar1[1];
      local_50 = (char)puVar1[2];
      if (local_50 != '\x02') {
        param_1[1] = uVar2;
        *(undefined1 *)param_1 = 4;
        return;
      }
    }
    else {
      FUN_016f71dc(local_28,param_2,param_3,param_4);
      if ((local_28[0] & 6) != 4) {
        FUN_00b9391c(local_28[0],local_24);
      }
      FUN_01753bb8(&local_58,0x15,local_48);
    }
    goto LAB_016f71ac;
  }
  if (uVar2 == 0xd) {
    *(undefined1 *)param_1 = 5;
    FUN_00b9391c(uVar3,local_54);
  }
  else {
LAB_016f71ac:
    *param_1 = local_58;
    param_1[1] = local_54;
  }
  return;
}

