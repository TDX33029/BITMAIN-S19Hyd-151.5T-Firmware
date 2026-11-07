// FUN_011cc6c4 @ 011cc6c4 size=148 calls_out=3 calls_in=0
// strings: 

undefined4 * FUN_011cc6c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 == 0) {
    return (undefined4 *)&DAT_00000001;
  }
  uVar2 = FUN_011f0338(iVar1,param_2,param_3,*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8));
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar3 = uVar2;
  return puVar3;
}

