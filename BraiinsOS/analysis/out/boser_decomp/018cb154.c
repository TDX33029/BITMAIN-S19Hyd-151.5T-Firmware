// FUN_018cb154 @ 018cb154 size=132 calls_out=5 calls_in=3
// strings: 

int FUN_018cb154(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_250 [544];
  undefined1 auStack_30 [20];
  int local_1c;
  
  FUN_018cb1d8(auStack_250,param_2,param_1);
  FUN_018cb3c4(auStack_30,param_2);
  local_1c = 0;
  iVar2 = FUN_01be5878(&local_1c,0x10,0x230);
  iVar1 = local_1c;
  if ((iVar2 != 0) || (local_1c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  FUN_01bed4e2(local_1c,auStack_250,0x230);
  return iVar1;
}

