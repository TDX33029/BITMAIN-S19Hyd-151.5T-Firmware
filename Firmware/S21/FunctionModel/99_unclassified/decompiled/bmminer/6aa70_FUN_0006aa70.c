// FUN_0006aa70 @ 0006aa70  size=1316  callers=1
// program: bmminer


undefined4 FUN_0006aa70(undefined4 *param_1)

{
  undefined4 uVar1;
  uint local_4c [8];
  uint local_2c;
  uint local_28;
  void *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  size_t local_c;
  
  memset(local_4c,0,0x20);
  local_20 = FUN_0006a7f8();
  if ((param_1[3] & 0x3f) < 0x38) {
    local_c = (param_1[3] & 0xffffffc0) + 0x40;
  }
  else {
    local_c = (param_1[3] & 0xffffffc0) + 0x80;
  }
  local_24 = malloc(local_c);
  if (local_24 == (void *)0x0) {
    uVar1 = 0xfffffffc;
  }
  else {
    memset(local_24,0,local_c);
    memcpy(local_24,(void *)param_1[2],param_1[3]);
    *(undefined1 *)((int)local_24 + param_1[3]) = 0x80;
    *(uint *)((int)local_24 + (local_c - 4 & 0xfffffffc)) =
         (param_1[3] & 0x1fffffff) >> 0x15 | (param_1[3] & 0x1fffffff) >> 5 & 0xff00 |
         (param_1[3] & 0x1fe0) << 0xb | param_1[3] << 0x1b;
    *(undefined4 *)((int)local_24 + (local_c - 8 & 0xfffffffc)) = 0;
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      *(undefined1 *)(local_20 + local_10) = *(undefined1 *)((int)local_24 + local_10);
    }
    for (local_14 = 0; local_14 < local_c; local_14 = local_14 + 1) {
      if (*(char *)(local_20 + local_14) != *(char *)((int)local_24 + local_14)) {
        printf("%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
               "dhash_send_job",local_14,(uint)*(byte *)(local_20 + local_14),local_14,
               (uint)*(byte *)((int)local_24 + local_14));
      }
    }
    local_18 = 0;
    while( true ) {
      if ((uint)param_1[5] <= local_18) break;
      memcpy((void *)(local_20 + local_18 * 0x20 + local_c),(void *)(param_1[4] + local_18 * 0x20),
             0x20);
      local_18 = local_18 + 1;
    }
    FUN_0006a9e8();
    uVar1 = FUN_0006a84c(local_20);
    FUN_0006b788(uVar1);
    FUN_0006bb94(param_1[8]);
    FUN_0006a8a8(*param_1,param_1[9],param_1[1],param_1[10]);
    memset(local_4c,0,0x20);
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      local_4c[local_1c] =
           (uint)*(byte *)(param_1[0xb] + local_1c * 4 + 3) << 0x18 |
           (uint)*(byte *)(param_1[0xb] + local_1c * 4 + 2) << 0x10 |
           (uint)*(byte *)(param_1[0xb] + local_1c * 4 + 1) << 8 |
           (uint)*(byte *)(param_1[0xb] + local_1c * 4);
    }
    FUN_0006c0d8(local_4c);
    FUN_0006c03c(param_1[6]);
    FUN_0006c0a0(param_1[7]);
    local_28 = param_1[0xd] << 0x10 | (param_1[0xe] & 0xff) << 8 | local_c >> 6 & 0xff;
    FUN_0006c140(local_28);
    local_4c[0] = param_1[0x10];
    local_4c[1] = param_1[0x11];
    FUN_0006c264(local_4c);
    FUN_0006c2cc(param_1[5]);
    local_2c = local_c + param_1[5] * 0x20;
    FUN_0006bbf8(local_2c & 0xffff);
    usleep(1000);
    FUN_0006b86c(param_1[0x12]);
    FUN_0006a900(*param_1,param_1[1],param_1[0x13]);
    if (local_24 != (void *)0x0) {
      free(local_24);
    }
    DAT_009451b8 = local_20;
    uVar1 = 0;
  }
  return uVar1;
}

