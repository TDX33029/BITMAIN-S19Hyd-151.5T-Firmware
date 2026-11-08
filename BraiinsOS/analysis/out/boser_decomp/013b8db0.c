// FUN_013b8db0 @ 013b8db0 size=208 calls_out=1 calls_in=23
// strings: 

void FUN_013b8db0(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 unaff_r9;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*param_2 == '\0') {
    cVar1 = param_2[1];
    local_30 = *(undefined4 *)(param_2 + 4);
    unaff_r9 = *(undefined4 *)(param_2 + 8);
    uVar2 = 0;
  }
  else if (*param_2 == '\x01') {
    unaff_r9 = *(undefined4 *)(param_2 + 8);
    local_28 = *(int *)(param_2 + 0xc);
    local_24 = *(undefined4 *)(param_2 + 0x10);
    local_20 = *(undefined4 *)(param_2 + 0x14);
    cVar1 = param_2[1];
    local_30 = *(undefined4 *)(param_2 + 4);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_2 + 4) == -0x80000000) {
      cVar1 = '\x01';
      local_30 = CONCAT31(CONCAT21(local_30._2_2_,param_2[1]),1);
    }
    else {
      local_24 = *(undefined4 *)(param_2 + 8);
      local_20 = *(undefined4 *)(param_2 + 0xc);
      local_28 = *(int *)(param_2 + 4);
      cVar1 = FUN_019ecaa4(&local_30,param_2[1],&local_28);
      unaff_r9 = local_2c;
    }
    uVar2 = 4;
  }
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 4) = local_30;
  param_1[1] = cVar1;
  *(undefined4 *)(param_1 + 8) = unaff_r9;
  *(int *)(param_1 + 0xc) = local_28;
  *(undefined4 *)(param_1 + 0x10) = local_24;
  *(undefined4 *)(param_1 + 0x14) = local_20;
  return;
}

