// FUN_01674bcc @ 01674bcc size=212 calls_out=2 calls_in=2
// strings: 

int FUN_01674bcc(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = 0;
  if (*param_1 != 3) {
    piVar2 = param_1 + 10;
    while( true ) {
      if (*piVar2 != 5) {
        iVar1 = FUN_01674ca0(piVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        *piVar2 = 5;
      }
      if (*param_1 == 2) break;
      uVar3 = FUN_01a41998(param_1);
      if (((int)uVar3 == 0) ||
         ((*(code *)param_1[9])(&local_48,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20)), local_48 == 5
         )) break;
      *piVar2 = local_48;
      param_1[0xb] = iStack_44;
      param_1[0xc] = iStack_40;
      param_1[0xd] = iStack_3c;
      param_1[0xe] = iStack_38;
      param_1[0xf] = local_34;
      param_1[0x10] = iStack_30;
      param_1[0x11] = iStack_2c;
      param_1[0x12] = iStack_28;
      param_1[0x13] = iStack_24;
    }
    param_1 = param_1 + 0x14;
    iVar1 = 0;
    if ((*param_1 != 5) && (iVar1 = FUN_01674ca0(param_1), iVar1 == 0)) {
      *param_1 = 5;
      iVar1 = 0;
    }
  }
  return iVar1;
}

