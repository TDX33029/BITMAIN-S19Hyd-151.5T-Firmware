// FUN_006a1108 @ 006a1108 size=136 calls_out=3 calls_in=2
// strings: 

int * FUN_006a1108(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  iVar4 = *param_1;
  puVar5 = (undefined4 *)param_1[1];
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  if (iVar4 != 0) {
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_0185a554;
  return param_1;
}

