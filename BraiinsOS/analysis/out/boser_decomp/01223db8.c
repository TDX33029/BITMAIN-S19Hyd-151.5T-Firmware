// FUN_01223db8 @ 01223db8 size=72 calls_out=1 calls_in=6
// strings: 

void FUN_01223db8(undefined4 *param_1,int *param_2)

{
  int local_c;
  
  if (param_2[1] == *param_2) {
    *param_1 = 2;
  }
  else {
    local_c = param_2[3];
    FUN_0123c028(param_1,local_c + ((uint)(param_2[1] - *param_2) >> 5),&local_c,&DAT_01cfa00c);
  }
  return;
}

