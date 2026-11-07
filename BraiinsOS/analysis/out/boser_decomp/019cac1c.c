// FUN_019cac1c @ 019cac1c size=132 calls_out=2 calls_in=1
// strings: 

void FUN_019cac1c(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_28;
  int local_24;
  undefined4 *local_20;
  
  FUN_019ae210(&local_28);
  if (local_28 == -0x80000000) {
    *param_1 = -0x80000000;
    if ((char)local_24 == '\x03') {
      uVar2 = *local_20;
      puVar3 = (undefined4 *)local_20[1];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(uVar2);
      }
      thunk_FUN_01be4678(local_20);
    }
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = (int)local_20;
  }
  return;
}

