// FUN_0111d5a0 @ 0111d5a0 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_0111d5a0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_30;
  undefined1 local_2f;
  undefined1 uStack_11;
  
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 != *(char **)(param_2 + 0xc)) {
    cVar1 = *pcVar3;
    *(char **)(param_2 + 4) = pcVar3 + 0x18;
    if (cVar1 != '\x06') {
      local_30 = cVar1;
      FUN_016dd1aa((uint)&local_30 | 1,pcVar3 + 1,0x17);
      if (cVar1 == '\x01') {
        FUN_01111ad8(&local_30);
        param_1[1] = local_2f;
        *param_1 = 0;
        return;
      }
      uVar2 = FUN_00f36124(&local_30,&uStack_11,&DAT_01887588);
      FUN_01111ad8(&local_30);
      *(undefined4 *)(param_1 + 4) = uVar2;
      *param_1 = 1;
      return;
    }
  }
  param_1[1] = 2;
  *param_1 = 0;
  return;
}

