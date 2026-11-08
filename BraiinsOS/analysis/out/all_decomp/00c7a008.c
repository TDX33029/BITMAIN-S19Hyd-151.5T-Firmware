// FUN_00c7a008 @ 00c7a008 size=104 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00c7a008(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = uVar3;
  uVar6 = uVar4;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8,extraout_r2,extraout_r3,uVar5,uVar6);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  if (iVar2 == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01874740,puVar1);
}

