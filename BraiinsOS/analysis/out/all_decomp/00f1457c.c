// FUN_00f1457c @ 00f1457c size=288 calls_out=5 calls_in=6
// strings: overflow deserializing Duration

void FUN_00f1457c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  local_2c = 1;
  local_30 = param_2;
  FUN_00efbe38(&local_28);
  if ((local_28 == 0) && (FUN_00efeb8c(&local_28,&local_30), local_28 != 2)) {
    if ((local_28 & 1) == 0) {
      local_24 = FUN_00e94830(1,&uStack_11,&DAT_0187aa1c);
    }
    else {
      uVar2 = (uint)((ulonglong)(local_24 >> 9) * 0x44b83 >> 0x20);
      bVar3 = CARRY4(local_20,uVar2 >> 7);
      bVar1 = CARRY4(local_1c,(uint)bVar3);
      if (!bVar1) {
        if (999999999 < local_24) {
          uVar2 = uVar2 >> 7;
          bVar3 = CARRY4(local_20,uVar2);
          local_20 = local_20 + uVar2;
          bVar1 = CARRY4(local_1c,(uint)bVar3);
          local_1c = local_1c + bVar3;
          if (bVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
          }
          local_24 = uVar2 * -1000000000 + local_24;
        }
        *param_1 = local_20;
        param_1[1] = local_1c;
        param_1[2] = local_24;
        return;
      }
      local_24 = FUN_00e94a7c("overflow deserializing Duration",0x1f,bVar1,local_1c + bVar3);
    }
  }
  *param_1 = local_24;
  param_1[2] = (uint)&DAT_3b9aca00;
  return;
}

