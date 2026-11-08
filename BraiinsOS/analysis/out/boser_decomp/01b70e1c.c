// FUN_01b70e1c @ 01b70e1c size=128 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01b70e1c(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  DAT_01d533e0 = 0;
  DAT_01d533e4 = 0;
  uVar1 = FUN_01b70cf4(&DAT_01d533e8);
  uVar1 = uVar1 ^ 1;
  iVar2 = FUN_01b70d9c(&DAT_01d533f0);
  if (iVar2 == 0) {
    uVar1 = uVar1 | 1;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_01b70810(&DAT_01d5344c,&LAB_01b70ccc,0,0);
  return uVar3;
}

