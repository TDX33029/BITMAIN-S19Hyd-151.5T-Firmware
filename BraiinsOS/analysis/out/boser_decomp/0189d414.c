// FUN_0189d414 @ 0189d414 size=156 calls_out=1 calls_in=4
// strings: 

void FUN_0189d414(undefined1 *param_1,int *param_2,char param_3)

{
  uint uVar1;
  char local_20;
  undefined1 local_1f;
  uint local_18;
  uint local_14;
  
  uVar1 = param_2[2];
  if ((uVar1 < (uint)param_2[1]) && (*(char *)(*param_2 + uVar1) == param_3)) {
    param_2[2] = uVar1 + 1;
    FUN_0189e3f8(&local_20);
    if (local_20 == '\0') {
      local_1f = 0;
      if (!CARRY4(local_14,(uint)(0xfffffffe < local_18))) {
        *(uint *)(param_1 + 8) = local_18 + 1;
        *(uint *)(param_1 + 0xc) = local_14 + (0xfffffffe < local_18);
        goto LAB_0189d480;
      }
    }
    param_1[1] = local_1f;
    local_1f = 1;
  }
  else {
    local_1f = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_0189d480:
  *param_1 = local_1f;
  return;
}

