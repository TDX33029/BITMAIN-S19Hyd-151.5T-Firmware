// FUN_019d1ae0 @ 019d1ae0 size=124 calls_out=2 calls_in=2
// strings: 

void FUN_019d1ae0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char local_20 [4];
  undefined4 *local_1c;
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_019ac798(local_20,*param_1,param_1[1]);
    if ((local_20[0] != '\x04') && (local_20[0] == '\x03')) {
      uVar2 = *local_1c;
      puVar3 = (undefined4 *)local_1c[1];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(uVar2);
      }
      thunk_FUN_01be4678(local_1c);
    }
  }
  return;
}

