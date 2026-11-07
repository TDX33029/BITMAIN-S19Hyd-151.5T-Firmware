// FUN_0179d33c @ 0179d33c size=112 calls_out=0 calls_in=1
// strings: 

undefined * FUN_0179d33c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 - 3;
  bVar2 = uVar1 == 2;
  if (uVar1 < 3) {
    bVar2 = param_2 == 1;
  }
  if (bVar2) {
    return (&PTR_FUN_018bc198)[param_3 * 3 + uVar1];
  }
  return (&PTR_FUN_018bc0f8)[param_3 * 10 + param_1];
}

