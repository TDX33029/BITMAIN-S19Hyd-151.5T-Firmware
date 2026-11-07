// FUN_0093a464 @ 0093a464 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_0093a464(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [12];
  int *local_20;
  undefined4 *local_1c;
  
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iStack_34 = iVar3;
  iStack_30 = iVar4;
  cVar1 = FUN_0092f7cc(iVar3,iVar4);
  if (cVar1 == ')') {
    cVar1 = FUN_0093a570(iVar3,iVar4);
    if (cVar1 == '\x05') {
      local_20 = &iStack_34;
      local_1c = &DAT_0157d360;
      FUN_00600d2c(auStack_2c,&DAT_0057dbd7,&local_20);
      uVar2 = FUN_009337e4(auStack_2c);
      *(undefined4 *)(param_1 + 4) = uVar2;
      *param_1 = 1;
      iVar4 = *param_2;
    }
    else {
      param_1[2] = cVar1;
      param_1[1] = 1;
      *param_1 = 0;
      iVar4 = *param_2;
    }
  }
  else {
    param_1[2] = cVar1;
    param_1[1] = 0;
    *param_1 = 0;
    iVar4 = *param_2;
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  return;
}

