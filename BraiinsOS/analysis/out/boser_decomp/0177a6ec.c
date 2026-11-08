// FUN_0177a6ec @ 0177a6ec size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0177a6ec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 2) {
    switch((char)param_1[2]) {
    case '\0':
      if (param_1[4] == 1) {
        if (param_1[7] == 0) {
          return;
        }
        thunk_FUN_01be4678(param_1[6]);
        return;
      }
      if (param_1[4] == 0) {
        iVar3 = param_1[5];
        iVar1 = param_1[6];
        iVar2 = param_1[7];
        param_1 = param_1 + 8;
        goto LAB_0177a770;
      }
      break;
    case '\x01':
    case '\x03':
      FUN_017793c0();
      FUN_008e1044(param_1 + 0x14);
      return;
    case '\x06':
      iVar3 = param_1[3];
      iVar1 = param_1[4];
      iVar2 = param_1[5];
      param_1 = param_1 + 6;
LAB_0177a770:
                    /* WARNING: Could not recover jumptable at 0x0177a774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0x10))(param_1,iVar1,iVar2);
      return;
    }
  }
  return;
}

