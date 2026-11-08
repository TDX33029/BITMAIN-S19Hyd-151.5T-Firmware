// FUN_018cb508 @ 018cb508 size=172 calls_out=6 calls_in=3
// strings: 

void FUN_018cb508(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_260 [544];
  undefined1 auStack_40 [28];
  int local_24;
  
  FUN_018cb1d8(auStack_260,param_2,param_1);
  FUN_018cb3c4(auStack_40,param_2);
  local_24 = 0;
  iVar2 = FUN_01be5878(&local_24,0x10,0x230);
  iVar1 = local_24;
  if ((iVar2 != 0) || (local_24 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  FUN_01bed4e2(local_24,auStack_260,0x230);
  FUN_01443048(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 0x28) = 2;
  *(int *)(param_3 + 8) = iVar1;
  *(undefined **)(param_3 + 0xc) = &DAT_01d22c0c;
  return;
}

