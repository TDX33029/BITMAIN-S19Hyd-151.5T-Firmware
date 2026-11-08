// FUN_01316074 @ 01316074 size=80 calls_out=2 calls_in=1
// strings: 

uint FUN_01316074(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_18;
  uint local_14;
  undefined4 uStack_10;
  
  FUN_013160c4(&local_18,param_1,param_3,*param_2);
  if (local_18 == 7) {
    uVar1 = local_14 & 0xff;
  }
  else {
    uVar1 = 0;
    if (3 < local_18) {
      FUN_0134bd64(local_14,uStack_10);
    }
  }
  return uVar1 & 1;
}

