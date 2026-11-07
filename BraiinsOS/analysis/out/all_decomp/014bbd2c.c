// FUN_014bbd2c @ 014bbd2c size=288 calls_out=2 calls_in=1
// strings: 

void FUN_014bbd2c(char *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  char local_28 [4];
  int local_24;
  
  iVar2 = *(int *)(param_3 + 0x208);
  while (iVar2 != 0) {
    FUN_014bb9e8(local_28,param_2,param_3,param_4);
    if (local_28[0] == '\x05') goto LAB_014bbe0c;
    if (local_28[0] != '\x04') goto LAB_014bbe1c;
    if (local_24 == 0) goto LAB_014bbe3c;
    iVar2 = *(int *)(param_3 + 0x208);
  }
  iVar2 = *param_2;
  bVar3 = iVar2 != 2;
  if (bVar3) {
    iVar2 = param_2[0x86];
  }
  if (bVar3 && iVar2 != 0) {
    do {
      FUN_014bd878(local_28,param_2,param_2 + 4,param_4);
      if (local_28[0] == '\x05') {
LAB_014bbe0c:
        *param_1 = '\x05';
        return;
      }
      if (local_28[0] != '\x04') {
LAB_014bbe1c:
        *(int *)(param_1 + 4) = local_24;
        uVar1 = *(undefined2 *)((uint)local_28 | 1);
        param_1[3] = *(char *)((undefined2 *)((uint)local_28 | 1) + 1);
        *param_1 = local_28[0];
        *(undefined2 *)(param_1 + 1) = uVar1;
        return;
      }
      if (local_24 == 0) {
LAB_014bbe3c:
        param_1[0] = '\x01';
        param_1[1] = '\x17';
        return;
      }
    } while (param_2[0x86] != 0);
  }
  *param_1 = '\x04';
  return;
}

