// FUN_010ca804 @ 010ca804 size=204 calls_out=2 calls_in=2
// strings: 

void FUN_010ca804(undefined1 *param_1,char *param_2,uint param_3,int *param_4)

{
  char cVar1;
  undefined1 auStack_80 [48];
  uint local_50;
  int *local_4c;
  
  cVar1 = *param_2;
  FUN_016dd1aa(auStack_80,param_2 + 1,0x2b);
  if (cVar1 == '\x04') {
    if ((param_3 & 0xfe) != 0) {
      (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
      thunk_FUN_016d3fb4(param_4);
    }
    param_3 = 4;
  }
  else {
    FUN_016dd1aa((uint)&local_50 | 1,param_2 + 1,0x2b);
    if (cVar1 == '\x02') {
      (**(code **)(*local_4c + 0x10))(local_4c + 3,local_4c[1],local_4c[2]);
      thunk_FUN_016d3fb4(local_4c);
    }
    local_50 = param_3;
    local_4c = param_4;
    FUN_016dd1aa(auStack_80,(uint)&local_50 | 1,0x2b);
  }
  *param_1 = (char)param_3;
  FUN_016dd1aa(param_1 + 1,auStack_80,0x2b);
  return;
}

