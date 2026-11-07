// FUN_014bfa80 @ 014bfa80 size=200 calls_out=1 calls_in=0
// strings: 

void FUN_014bfa80(char *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  char local_28 [4];
  int local_24;
  
  if ((*param_2 != 2) && (param_2[0x86] != 0)) {
    do {
      FUN_014bd320(local_28,param_2,param_2 + 4,param_3);
      if (local_28[0] == '\x05') {
        *param_1 = '\x05';
        return;
      }
      if (local_28[0] != '\x04') {
        uVar2 = *(undefined2 *)((uint)local_28 | 1);
        *(int *)(param_1 + 4) = local_24;
        cVar1 = *(char *)((undefined2 *)((uint)local_28 | 1) + 1);
        *param_1 = local_28[0];
        param_1[3] = cVar1;
        *(undefined2 *)(param_1 + 1) = uVar2;
        return;
      }
      if (local_24 == 0) {
        param_1[0] = '\x01';
        param_1[1] = '\x17';
        return;
      }
    } while (param_2[0x86] != 0);
  }
  *param_1 = '\x04';
  return;
}

