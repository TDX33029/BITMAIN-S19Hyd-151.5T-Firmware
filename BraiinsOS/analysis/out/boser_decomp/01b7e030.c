// FUN_01b7e030 @ 01b7e030 size=144 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7e030(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_01b7dfc0(param_1);
  uVar2 = FUN_01b7dfc0(param_1 + 4);
  return CONCAT44(uVar2,uVar1);
}

