// FUN_01926bcc @ 01926bcc size=92 calls_out=1 calls_in=1
// strings: 

void FUN_01926bcc(char *param_1,int param_2)

{
  char cVar1;
  undefined1 *local_84 [30];
  undefined2 local_c;
  
  if (*(char *)(param_2 + 0x259) != '\0') {
    return;
  }
  cVar1 = *param_1;
  *param_1 = '\x01';
  if (cVar1 == '\0') {
    local_84[0] = &DAT_80000004;
    local_c = 4;
    FUN_018f1fc4(param_2,local_84,0);
    return;
  }
  return;
}

