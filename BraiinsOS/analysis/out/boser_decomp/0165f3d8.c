// FUN_0165f3d8 @ 0165f3d8 size=220 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_0165f3d8(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  if (uVar4 < uVar5) {
    local_20 = 0;
  }
  else {
    uVar2 = param_1[1];
    uVar1 = uVar5;
    if (uVar5 < uVar4) {
      uVar3 = uVar2;
      if (uVar2 < uVar5) {
        uVar3 = uVar5;
      }
      do {
        if (uVar3 == uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar2,&DAT_01d06da4);
        }
        if ((uint)*(byte *)(*param_1 + uVar1) == (param_2 & 0xff)) goto LAB_0165f444;
        uVar1 = uVar1 + 1;
      } while (uVar4 != uVar1);
      uVar1 = uVar4;
    }
LAB_0165f444:
    param_1[3] = uVar1 + 1;
    if ((uVar1 < uVar5) || (uVar2 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar1,uVar2,&DAT_01d06db4);
    }
    FUN_012fbd94(&local_24,*param_1 + uVar5,uVar1 - uVar5);
    param_2 = local_1c;
    if (local_24 != 0) {
      local_20 = 0;
    }
  }
  return CONCAT44(param_2,local_20);
}

