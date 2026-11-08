// FUN_00604fc8 @ 00604fc8 size=64 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_00604fc8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0172ca8c();
  if (iVar1 == 0) {
    return 0xf0040c738;
  }
  iVar1 = FUN_0172c684();
  puVar2 = (undefined *)0x0;
  if (iVar1 != param_2) {
    puVar2 = &DAT_0033d8d2;
  }
  return CONCAT44(0xe,puVar2);
}

