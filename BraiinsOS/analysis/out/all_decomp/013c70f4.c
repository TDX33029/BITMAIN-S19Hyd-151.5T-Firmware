// FUN_013c70f4 @ 013c70f4 size=164 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_013c70f4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_013c4434(&local_30,0,9,1,1);
  puVar3 = (undefined4 *)(local_2c + local_28);
  *puVar3 = 0;
  local_20 = local_30;
  local_18 = local_28 + 9;
  local_1c = local_2c;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  FUN_013c6f70(&local_30,&local_20);
  iVar1 = local_2c;
  uVar2 = FUN_011e1508(local_2c,local_28);
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  return uVar2;
}

