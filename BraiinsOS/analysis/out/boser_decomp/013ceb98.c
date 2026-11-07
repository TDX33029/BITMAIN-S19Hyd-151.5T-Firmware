// FUN_013ceb98 @ 013ceb98 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_013ceb98(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  puVar1[2] = param_1[2];
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  uVar2 = param_1[7];
  uVar3 = param_1[8];
  uVar4 = param_1[9];
  uVar5 = param_1[10];
  puVar1[6] = param_1[6];
  puVar1[7] = uVar2;
  puVar1[8] = uVar3;
  puVar1[9] = uVar4;
  puVar1[10] = uVar5;
  puVar1[0xb] = 0;
  return;
}

