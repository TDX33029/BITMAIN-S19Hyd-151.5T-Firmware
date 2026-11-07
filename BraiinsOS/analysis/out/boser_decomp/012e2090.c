// FUN_012e2090 @ 012e2090 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_012e2090(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x012e20f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)param_1[2])();
        return;
      }
    }
    else {
      puVar3 = (undefined4 *)param_1[2];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(iVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(iVar2);
        return;
      }
    }
  }
  return;
}

