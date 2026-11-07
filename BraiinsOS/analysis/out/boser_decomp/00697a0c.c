// FUN_00697a0c @ 00697a0c size=276 calls_out=6 calls_in=2
// strings: 

void FUN_00697a0c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char local_24;
  char local_23;
  char local_22;
  int local_20;
  undefined4 local_1c [3];
  
  FUN_00677900(&local_24);
  if (local_24 == '\x01') {
LAB_00697aa8:
    *(int *)(param_1 + 4) = local_20;
    *param_1 = 1;
    return;
  }
  if (local_23 != '\x01') {
    local_1c[0] = 5;
    local_20 = FUN_01966fbc(local_1c,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                           );
    goto LAB_00697aa8;
  }
  if (local_22 == 'f') {
    FUN_0157653c(param_2 + 0xc);
    local_20 = FUN_00677b98(param_2,&DAT_0056efac,4);
    if (local_20 != 0) goto LAB_00697aa8;
    uVar1 = 0;
  }
  else {
    if (local_22 != 't') {
      uVar2 = FUN_00678df8(param_2,local_1c,&DAT_01c25830);
      uVar2 = FUN_012c6694(uVar2,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
      *(undefined4 *)(param_1 + 4) = uVar2;
      uVar1 = 1;
      goto LAB_00697ac8;
    }
    FUN_0157653c(param_2 + 0xc);
    local_20 = FUN_00677b98(param_2,"rue",3);
    if (local_20 != 0) goto LAB_00697aa8;
    uVar1 = 1;
  }
  param_1[1] = uVar1;
  uVar1 = 0;
LAB_00697ac8:
  *param_1 = uVar1;
  return;
}

