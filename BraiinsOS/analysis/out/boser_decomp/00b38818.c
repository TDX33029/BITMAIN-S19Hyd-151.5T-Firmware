// FUN_00b38818 @ 00b38818 size=132 calls_out=3 calls_in=0
// strings: 

void FUN_00b38818(int *param_1,int param_2)

{
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  char local_44;
  undefined1 auStack_43 [43];
  
  local_58 = *(int *)(param_2 + 0x10);
  local_50 = *(undefined4 *)(param_2 + 0xc);
  local_4c = local_58 + *(int *)(param_2 + 0x14) * 0x70;
  local_54 = local_58;
  FUN_0124a420(&local_48,&local_58);
  if (local_48 == 2) {
    if (local_44 == '\x03') {
      local_44 = '\x02';
    }
  }
  else {
    FUN_01bed4e2((int)param_1 + 5,auStack_43,0x2b);
  }
  *param_1 = local_48;
  *(char *)(param_1 + 1) = local_44;
  FUN_01a53260(&local_58);
  return;
}

