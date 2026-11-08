// FUN_007d4260 @ 007d4260 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_007d4260(undefined4 *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = '\0';
  for (; param_3 != 0; param_3 = param_3 + -1) {
    cVar2 = *param_2 + cVar2;
    param_2 = param_2 + 1;
  }
  pcVar1 = (char *)thunk_FUN_016d4a50(1);
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *param_1 = 1;
  param_1[1] = pcVar1;
  param_1[2] = 1;
  *pcVar1 = cVar2;
  return;
}

