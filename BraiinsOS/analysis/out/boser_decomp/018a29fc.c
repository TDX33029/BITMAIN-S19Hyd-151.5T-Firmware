// FUN_018a29fc @ 018a29fc size=152 calls_out=1 calls_in=4
// strings: 

void FUN_018a29fc(undefined1 *param_1,int *param_2,char param_3)

{
  uint uVar1;
  char local_18;
  undefined1 local_17;
  uint local_10;
  uint local_c;
  
  uVar1 = param_2[2];
  if ((uVar1 < (uint)param_2[1]) && (*(char *)(*param_2 + uVar1) == param_3)) {
    param_2[2] = uVar1 + 1;
    FUN_018a40c8(&local_18);
    if (local_18 == '\0') {
      local_17 = 0;
      if (!CARRY4(local_c,(uint)(0xfffffffe < local_10))) {
        *(uint *)(param_1 + 8) = local_10 + 1;
        *(uint *)(param_1 + 0xc) = local_c + (0xfffffffe < local_10);
        goto LAB_018a2a64;
      }
    }
    param_1[1] = local_17;
    local_17 = 1;
  }
  else {
    local_17 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_018a2a64:
  *param_1 = local_17;
  return;
}

