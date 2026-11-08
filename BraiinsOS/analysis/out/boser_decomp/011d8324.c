// FUN_011d8324 @ 011d8324 size=112 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d8324(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(param_1[1] + 0xc))(*param_1);
  uVar3 = (**(code **)(param_1[3] + 0x10))(param_1[2]);
  puVar1 = (undefined8 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

