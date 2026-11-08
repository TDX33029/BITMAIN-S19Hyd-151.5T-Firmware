// FUN_00a9d0cc @ 00a9d0cc size=308 calls_out=5 calls_in=2
// strings: overflow deserializing SystemTime epoch offsetevent open/boser/boser/src/api/grpc/performance.rs:1154 | overflow deserializing SystemTimeevent open/boser/boser/src/web/grpc.rs:70struct CfgDatastruct CfgRootstruct CfgAutotuningstruct CfgPoolConfigstruct CfgGroupConfigstruct CfgHashChainGlobalstruct ConfigVersionvariant index 0 <= i < 6

void FUN_00a9d0cc(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_2c;
  uint local_28;
  uint local_24;
  undefined1 uStack_19;
  
  local_34 = 1;
  local_38 = param_2;
  FUN_009c98e8(&local_30);
  if ((local_30 == 0) && (FUN_0094e544(&local_30,&local_38), local_30 != 2)) {
    if ((local_30 & 1) == 0) {
      local_2c = (undefined1 *)FUN_00a9d070(1,&uStack_19,&DAT_01c0f8c4);
    }
    else {
      uVar1 = (uint)((ulonglong)((uint)local_2c >> 9) * 0x44b83 >> 0x20);
      bVar4 = CARRY4(local_28,uVar1 >> 7);
      bVar2 = CARRY4(local_24,(uint)bVar4);
      iVar3 = local_24 + bVar4;
      if (!bVar2) {
        if (&DAT_3b9ac9ff < local_2c) {
          uVar1 = uVar1 >> 7;
          bVar4 = CARRY4(local_28,uVar1);
          local_28 = local_28 + uVar1;
          bVar2 = CARRY4(local_24,(uint)bVar4);
          local_24 = local_24 + bVar4;
          if (bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_005310af,0x19,&DAT_01d2e3ac);
          }
          local_2c = local_2c + uVar1 * -1000000000;
          bVar2 = false;
        }
        if ((int)local_24 < 0) {
          uVar1 = FUN_00a9d214("overflow deserializing SystemTimeevent open/boser/boser/src/web/grpc.rs:70struct CfgDatastruct CfgRootstruct CfgAutotuningstruct CfgPoolConfigstruct CfgGroupConfigstruct CfgHashChainGlobalstruct ConfigVersionvariant index 0 <= i < 6"
                               ,0x21,bVar2,iVar3);
          *param_1 = uVar1;
          local_2c = &DAT_3b9aca00;
        }
        else {
          *param_1 = local_28;
          param_1[1] = local_24;
        }
        goto LAB_00a9d194;
      }
      local_2c = (undefined1 *)
                 FUN_00a9d214("overflow deserializing SystemTime epoch offsetevent open/boser/boser/src/api/grpc/performance.rs:1154"
                              ,0x2e,bVar2,iVar3);
    }
  }
  *param_1 = (uint)local_2c;
  local_2c = &DAT_3b9aca00;
LAB_00a9d194:
  param_1[2] = (uint)local_2c;
  return;
}

