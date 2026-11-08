// FUN_0125dacc @ 0125dacc size=264 calls_out=4 calls_in=1
// strings: 

void FUN_0125dacc(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *local_34;
  code *local_30;
  undefined4 local_2c;
  char local_25;
  undefined4 local_24;
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
      local_34 = &local_25;
      local_30 = FUN_012fcbac;
      iVar3 = *param_2;
      FUN_00664898(&local_24,&DAT_005727b3,&local_34);
      FUN_014b73c4(&local_34,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),local_20,local_1c
                  );
      FUN_0134bd64(local_24,local_20);
      pcVar2 = local_30;
      pcVar1 = local_34;
      if (local_34 != &DAT_80000000) {
        iVar3 = FUN_01982d98(local_30,local_2c);
        if (iVar3 != 0) {
          *param_1 = pcVar1;
          param_1[1] = pcVar2;
          param_1[2] = local_2c;
          return;
        }
        *(undefined1 *)(param_2 + 2) = 1;
        FUN_0134bd64(pcVar1,pcVar2);
      }
    }
  }
  *param_1 = 0x80000000;
  return;
}

