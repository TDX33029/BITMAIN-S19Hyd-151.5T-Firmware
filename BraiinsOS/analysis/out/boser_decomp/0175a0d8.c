// FUN_0175a0d8 @ 0175a0d8 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_0175a0d8(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = (**(code **)(param_1[1] + 0x14))(*param_1);
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  puVar1 = (undefined8 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x18);
  }
  *puVar1 = uVar5;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  *(undefined4 *)((int)puVar1 + 0xc) = uVar2;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  return;
}

