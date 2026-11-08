// FUN_0177fea8 @ 0177fea8 size=156 calls_out=3 calls_in=5
// strings: 

void FUN_0177fea8(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint local_18;
  uint local_14;
  
  local_20 = param_2;
  uStack_1c = param_4;
  FUN_017dbe94(&local_18,param_3,&local_20,FUN_0177ff58);
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
    goto switchD_0177feec_default;
  }
  if (uVar1 == 0xd) {
    *(undefined1 *)param_1 = 5;
    FUN_0069263c(uVar2,local_14);
  }
  else {
switchD_0177feec_default:
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

