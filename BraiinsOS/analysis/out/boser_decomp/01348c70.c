// FUN_01348c70 @ 01348c70 size=136 calls_out=2 calls_in=2
// strings: 

void FUN_01348c70(undefined4 *param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  FUN_019e7bb8(&local_28);
  if ((char)local_28 == '\x05') {
    *(undefined1 *)param_1 = 5;
  }
  else {
    if ((local_28 & 0xff) == 4) {
      local_30 = CONCAT31(local_30._1_3_,4);
    }
    else {
      local_20 = local_28;
      local_1c = local_24;
      FUN_01348b98(&local_30,&local_20,10,*(undefined4 *)(param_2 + 0x44),
                   *(undefined4 *)(param_2 + 0x48));
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  return;
}

