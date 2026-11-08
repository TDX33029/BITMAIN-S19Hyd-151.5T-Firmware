// FUN_019d1c10 @ 019d1c10 size=252 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_019d1c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_130;
  undefined1 *puStack_12c;
  int local_128;
  int local_2c [3];
  
  FUN_00666814(&local_130,param_1,param_2);
  if (local_130 == -0x80000000) {
    if (param_4 < 0x100) {
      FUN_01bed4e2(&local_130,param_3,param_4);
      *(undefined1 *)((int)&local_130 + param_4) = 0;
      FUN_012fbc58(local_2c,&local_130,param_4 + 1);
      if (local_2c[0] == 0) {
        software_interrupt(0);
        uVar1 = 0xffffff9c;
        uVar3 = CONCAT44(puStack_12c,1);
      }
      else {
        uVar3 = CONCAT44(extraout_r1,1);
        uVar1 = 0xffea;
      }
    }
    else {
      uVar3 = FUN_019d1b84(param_3,param_4,puStack_12c);
      uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    uVar2 = (undefined4)uVar3;
    *puStack_12c = 0;
    if (local_128 != 0) {
      thunk_FUN_01be4678(puStack_12c,(int)((ulonglong)uVar3 >> 0x20));
    }
  }
  else {
    FUN_0134bd64(local_130,puStack_12c);
    uVar2 = 1;
    uVar1 = 0xffea;
  }
  return CONCAT44(uVar1,uVar2);
}

