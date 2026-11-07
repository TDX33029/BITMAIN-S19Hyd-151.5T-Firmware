// FUN_01b8909c @ 01b8909c size=96 calls_out=0 calls_in=2
// strings: 

undefined * FUN_01b8909c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 - 3;
  bVar2 = uVar1 == 2;
  if (uVar1 < 3) {
    bVar2 = param_2 == 1;
  }
  if (bVar2) {
    return (&PTR_FUN_01d3b1b0)[param_3 * 3 + uVar1];
  }
  return (&PTR_FUN_01d3b110)[param_3 * 10 + param_1];
}

