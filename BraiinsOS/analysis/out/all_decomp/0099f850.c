// FUN_0099f850 @ 0099f850 size=280 calls_out=4 calls_in=1
// strings: 

void FUN_0099f850(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *local_34;
  code *local_30;
  undefined4 local_2c;
  char local_25;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((char)param_2[2] == '\0') && ((char)param_2[1] == '\0')) {
    local_25 = *(char *)((int)param_2 + 5);
    if (local_25 <= *(char *)((int)param_2 + 6)) {
      if (local_25 < *(char *)((int)param_2 + 6)) {
        *(char *)((int)param_2 + 5) = local_25 + '\x01';
      }
      else {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      iVar3 = *param_2;
      local_34 = &local_25;
      local_30 = FUN_00fac004;
      FUN_00600d2c(&local_24,&DAT_0056cd8f,&local_34);
      FUN_0113d324(&local_34,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),local_20,local_1c
                  );
      if (local_24 != 0) {
        thunk_FUN_016d3fb4(local_20);
      }
      pcVar2 = local_30;
      pcVar1 = local_34;
      if (local_34 != &DAT_80000000) {
        iVar3 = FUN_015c7ac8(local_30,local_2c);
        if (iVar3 != 0) {
          *param_1 = pcVar1;
          param_1[1] = pcVar2;
          param_1[2] = local_2c;
          return;
        }
        *(undefined1 *)(param_2 + 2) = 1;
        if (pcVar1 != (char *)0x0) {
          thunk_FUN_016d3fb4(pcVar2);
        }
      }
    }
  }
  *param_1 = 0x80000000;
  return;
}

