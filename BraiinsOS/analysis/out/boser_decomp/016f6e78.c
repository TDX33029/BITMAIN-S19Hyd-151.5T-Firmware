// FUN_016f6e78 @ 016f6e78 size=152 calls_out=3 calls_in=5
// strings: 

void FUN_016f6e78(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint local_18;
  uint local_14;
  
  local_20 = param_2;
  uStack_1c = param_4;
  FUN_019150ec(&local_18,param_3 + 500,&local_20,FUN_016f6f24);
  uVar2 = local_18 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    uVar1 = FUN_016f6c0c(local_14);
    uVar1 = uVar1 & 0xff;
    break;
  case 1:
    uVar1 = local_18 >> 8 & 0xff;
    break;
  case 2:
  case 3:
    uVar1 = (uint)*(byte *)(local_14 + 8);
    break;
  default:
    goto switchD_016f6eb8_default;
  }
  if (uVar1 == 0xd) {
    *(undefined1 *)param_1 = 5;
    FUN_00b9391c(uVar2,local_14);
  }
  else {
switchD_016f6eb8_default:
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

