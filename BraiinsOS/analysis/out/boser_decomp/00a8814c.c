// FUN_00a8814c @ 00a8814c size=276 calls_out=5 calls_in=3
// strings: overflow deserializing Duration

void FUN_00a8814c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  local_2c = 1;
  local_30 = param_2;
  FUN_009c98e8(&local_28);
  if ((local_28 == 0) && (FUN_0094e544(&local_28,&local_30), local_28 != 2)) {
    if ((local_28 & 1) == 0) {
      local_24 = (undefined1 *)FUN_00a9d070(1,&uStack_11,&DAT_01c0f8b4);
    }
    else {
      uVar1 = (uint)((ulonglong)((uint)local_24 >> 9) * 0x44b83 >> 0x20);
      bVar2 = CARRY4(local_20,uVar1 >> 7);
      if (!CARRY4(local_1c,(uint)bVar2)) {
        if (&DAT_3b9ac9ff < local_24) {
          uVar1 = uVar1 >> 7;
          bVar3 = CARRY4(local_20,uVar1);
          local_20 = local_20 + uVar1;
          bVar2 = CARRY4(local_1c,(uint)bVar3);
          local_1c = local_1c + bVar3;
          if (bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_005310af,0x19,&DAT_01d2e3ac);
          }
          local_24 = local_24 + uVar1 * -1000000000;
        }
        *param_1 = local_20;
        param_1[1] = local_1c;
        param_1[2] = (uint)local_24;
        return;
      }
      local_24 = (undefined1 *)
                 FUN_00a9d214("overflow deserializing Duration",0x1f,uVar1,local_1c + bVar2);
    }
  }
  *param_1 = (uint)local_24;
  param_1[2] = (uint)&DAT_3b9aca00;
  return;
}

