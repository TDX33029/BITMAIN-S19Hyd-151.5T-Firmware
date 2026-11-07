// FUN_0075c560 @ 0075c560 size=308 calls_out=2 calls_in=3
// strings: 

void FUN_0075c560(int param_1,undefined1 *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  code *local_24;
  undefined1 **local_20;
  code *local_1c;
  
  cVar1 = *(char *)(param_1 + 0x1a);
  cVar2 = *(char *)(param_1 + 0x1b);
  local_2c = *(undefined1 **)(param_1 + 8);
  puVar4 = (undefined1 *)(uint)(byte)(cVar2 - cVar1);
  puVar3 = puVar4 + (int)local_2c;
  if (CARRY4((uint)puVar4,(uint)local_2c)) {
    puVar3 = (undefined1 *)0xffffffff;
  }
  if (puVar3 == (undefined1 *)0x0) {
LAB_0075c654:
    local_24 = *(code **)(param_1 + 0x20);
    if (local_24 < param_2) {
      local_28 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_28);
    }
    *(undefined1 **)(param_1 + 0x1c) = param_2 + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x20) = (int)local_24 - (int)param_2;
    return;
  }
  if (puVar3 < param_2) {
    puVar5 = puVar3;
    if (cVar2 != cVar1) {
      if (puVar3 <= puVar4) {
        *(char *)(param_1 + 0x1a) = cVar1 + (char)puVar3;
        param_2 = param_2 + -(int)puVar3;
        goto LAB_0075c654;
      }
      *(char *)(param_1 + 0x1a) = cVar2;
      puVar5 = puVar3 + -(int)puVar4;
    }
    local_30 = puVar5;
    if (puVar5 <= local_2c) {
      param_2 = param_2 + -(int)puVar3;
      *(undefined1 **)(param_1 + 4) = puVar5 + *(int *)(param_1 + 4);
      *(int *)(param_1 + 8) = (int)local_2c - (int)puVar5;
      goto LAB_0075c654;
    }
  }
  else {
    if (cVar2 != cVar1) {
      if (param_2 <= puVar4) {
        *(char *)(param_1 + 0x1a) = cVar1 + (char)param_2;
        return;
      }
      *(char *)(param_1 + 0x1a) = cVar2;
      param_2 = param_2 + -(int)puVar4;
    }
    local_30 = param_2;
    if (param_2 <= local_2c) {
      *(undefined1 **)(param_1 + 4) = param_2 + *(int *)(param_1 + 4);
      *(int *)(param_1 + 8) = (int)local_2c - (int)param_2;
      return;
    }
  }
  local_28 = (undefined1 *)&local_30;
  local_20 = &local_2c;
  local_1c = FUN_007883b8;
  local_24 = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00584155,&local_28,&DAT_018a6700);
}

