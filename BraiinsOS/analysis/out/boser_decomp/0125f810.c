// FUN_0125f810 @ 0125f810 size=104 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_0125f810(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar5;
  if (iVar2 == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&UNK_01c25088,puVar1);
}

