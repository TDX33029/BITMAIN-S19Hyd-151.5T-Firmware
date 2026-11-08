// FUN_008c9d90 @ 008c9d90 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_008c9d90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_016d4a50(0x8c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  uVar2 = *(undefined4 *)((int)param_2 + 3);
  *(undefined4 *)(iVar1 + 0x84) = *param_2;
  *(undefined1 *)(iVar1 + 0x83) = 0;
  *(undefined4 *)(iVar1 + 0x78) = param_1;
  *(undefined4 *)(iVar1 + 0x87) = uVar2;
  return;
}

