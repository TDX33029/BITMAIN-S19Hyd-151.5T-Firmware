// FUN_01340f5c @ 01340f5c size=228 calls_out=5 calls_in=2
// strings: 

void FUN_01340f5c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    do {
      if (*(int *)(param_2 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce6864);
      }
      uVar1 = FUN_01bf053e(*(int *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
      if (uVar1 == 0) {
        *param_1 = 0x1701;
        param_1[1] = 0;
        return;
      }
      if (uVar1 == 0xffffffff) {
        puVar2 = (undefined4 *)FUN_01be3244();
        uVar4 = *puVar2;
        *param_1 = 0;
        param_1[1] = uVar4;
        return;
      }
      uVar3 = *(uint *)(param_2 + 0x24);
      if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar1,uVar3,&DAT_01d2fe30);
      }
      local_1c = uVar3 - uVar1;
      local_2c = *(int *)(param_2 + 0x20);
      local_28 = local_2c + uVar1;
      *(undefined4 *)(param_2 + 0x24) = 0;
      local_24 = param_2 + 0x1c;
      local_20 = uVar1;
      FUN_01445cc0(&local_2c);
    } while (*(int *)(param_2 + 0x24) != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

