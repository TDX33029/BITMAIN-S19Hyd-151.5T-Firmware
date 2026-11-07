// FUN_019db1a0 @ 019db1a0 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_019db1a0(int *param_1)

{
  code *pcVar1;
  int unaff_r4;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    unaff_r4 = param_1[1];
  }
  if (*param_1 != 0 && unaff_r4 != 0) {
    puVar2 = (undefined4 *)param_1[2];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(unaff_r4);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_01be4678(unaff_r4);
      return;
    }
  }
  return;
}

