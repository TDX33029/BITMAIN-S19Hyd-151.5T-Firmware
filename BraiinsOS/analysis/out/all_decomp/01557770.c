// FUN_01557770 @ 01557770 size=400 calls_out=3 calls_in=1
// strings: 

void FUN_01557770(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 local_64 [68];
  
  FUN_01556ce0(local_64,param_1,~*(byte *)(param_2 + 0x94) & 1);
  uVar4 = FUN_01557a30(*(undefined4 *)(param_1 + 8),local_64);
  uVar2 = param_2[4];
  puVar3 = (undefined4 *)param_2[5];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)((int)param_2 + 0x32) = 2;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *param_2 = 0;
  return;
}

