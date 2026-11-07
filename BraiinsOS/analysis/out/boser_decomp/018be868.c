// FUN_018be868 @ 018be868 size=176 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_018be868(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_250 [544];
  undefined1 auStack_30 [20];
  int local_1c;
  
  if (param_4 != 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0xc,param_4,&DAT_01d228b0);
  }
  FUN_01bed4e2(auStack_30,param_3,0xc);
  FUN_01bed4e2(auStack_250,param_2,0x220);
  local_1c = 0;
  iVar2 = FUN_01be5878(&local_1c,0x10,0x230);
  iVar1 = local_1c;
  if ((iVar2 != 0) || (local_1c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  FUN_01bed4e2(local_1c,auStack_250,0x230);
  return CONCAT44(&UNK_01d228c0,iVar1);
}

