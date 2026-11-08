// FUN_019d1b84 @ 019d1b84 size=140 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_019d1b84(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_20;
  undefined1 *puStack_1c;
  int local_18;
  
  FUN_00666814(&local_20,param_1,param_2);
  if (local_20 == -0x80000000) {
    software_interrupt(0);
    uVar1 = 0xffffff9c;
    *puStack_1c = 0;
    if (local_18 != 0) {
      thunk_FUN_01be4678(puStack_1c,param_3,0xffffff9c);
    }
  }
  else {
    FUN_0134bd64(local_20,puStack_1c);
    uVar1 = 0xffea;
  }
  return CONCAT44(uVar1,1);
}

