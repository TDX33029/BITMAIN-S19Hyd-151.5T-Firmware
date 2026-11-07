// FUN_00682d50 @ 00682d50 size=200 calls_out=5 calls_in=3
// strings: 

int * FUN_00682d50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 extraout_r3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = param_1;
  iVar1 = thunk_FUN_016d4a50(param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar1,param_2,param_3,extraout_r3,piVar6);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  iVar4 = *param_1;
  puVar5 = (undefined4 *)param_1[1];
  *puVar2 = param_3;
  puVar2[1] = iVar1;
  puVar2[2] = param_3;
  if (iVar4 != 0) {
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  *param_1 = (int)puVar2;
  param_1[1] = (int)&DAT_018587c0;
  return param_1;
}

