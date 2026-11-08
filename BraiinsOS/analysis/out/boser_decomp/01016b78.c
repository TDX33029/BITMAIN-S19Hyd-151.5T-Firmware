// FUN_01016b78 @ 01016b78 size=236 calls_out=5 calls_in=0
// strings: 

int FUN_01016b78(char param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_36;
  char local_35;
  undefined1 auStack_34 [12];
  char *local_28;
  code *local_24;
  undefined1 *local_20;
  code *local_1c;
  
  local_36 = 2;
  local_35 = param_1;
  if (param_1 == '\x02') {
    local_20 = (undefined1 *)0x0;
    local_24 = (code *)0x1;
    local_28 = (char *)0x0;
    iVar4 = FUN_01016c90(2,&local_28);
    puVar3 = local_20;
    pcVar2 = local_24;
    pcVar1 = local_28;
    if (iVar4 == 0) {
      iVar6 = param_2[2];
      if (iVar6 == *param_2) {
        FUN_019abd3c(param_2);
      }
      param_2[2] = iVar6 + 1;
      iVar4 = 0;
      puVar5 = (undefined4 *)(param_2[1] + iVar6 * 0xc);
      *puVar5 = pcVar1;
      puVar5[1] = pcVar2;
      puVar5[2] = puVar3;
    }
    else {
      FUN_019bb7e0(local_28,local_24);
    }
  }
  else {
    local_20 = &local_36;
    local_1c = FUN_00ef7f4c;
    local_24 = FUN_00ef7f4c;
    local_28 = &local_35;
    FUN_01a924e8(auStack_34,&local_28);
    iVar4 = FUN_01aa428c(auStack_34);
  }
  return iVar4;
}

