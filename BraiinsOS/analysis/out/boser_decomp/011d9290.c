// FUN_011d9290 @ 011d9290 size=148 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d9290(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = puVar1;
  puVar2[3] = &DAT_01c22090;
  return;
}

