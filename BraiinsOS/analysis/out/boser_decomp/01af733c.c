// FUN_01af733c @ 01af733c size=124 calls_out=3 calls_in=1
// strings: 

void FUN_01af733c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char local_24 [12];
  char *local_18;
  code *local_14;
  
  if (*param_2 == -0x7fffffd3) {
    iVar1 = param_2[1];
    if ((char)iVar1 != '\x05') {
      FUN_01bed4e2((uint)local_24 | 1,(int)param_2 + 5,0xb);
      local_14 = FUN_01af6444;
      local_24[0] = (char)iVar1;
      local_18 = local_24;
      FUN_00664898(param_1,&DAT_00590e5f,&local_18);
      return;
    }
  }
  else {
    FUN_01af73c0(param_2);
  }
  *param_1 = 0x80000000;
  return;
}

