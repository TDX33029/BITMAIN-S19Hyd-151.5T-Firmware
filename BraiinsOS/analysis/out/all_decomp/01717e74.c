// FUN_01717e74 @ 01717e74 size=108 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01717e74(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0;
  }
  iVar1 = FUN_01717e5c();
  *(uint *)(param_1 + 0xc) = (uint)(iVar1 == 0);
  return 0;
}

