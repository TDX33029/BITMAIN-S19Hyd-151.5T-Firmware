// FUN_01017378 @ 01017378 size=76 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01017378(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 auStack_28 [24];
  
  bVar1 = param_1 == 0;
  if (bVar1) {
    FUN_019b9f84(auStack_28);
    param_1 = FUN_00783ce8(param_2,0x10,auStack_28);
  }
  return CONCAT44(param_1,(uint)bVar1);
}

