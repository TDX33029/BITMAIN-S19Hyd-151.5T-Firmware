// FUN_0140465c @ 0140465c size=708 calls_out=3 calls_in=0
// strings: MsgParseIpAddrLoopbackV4LoopbackV6 | Protoevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/name_server/name_server_pool.rs:214 | ProtoError | ProtoError

undefined4 FUN_0140465c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  code *pcVar5;
  uint *******pppppppuVar6;
  undefined *puVar7;
  int iVar8;
  uint *******local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  uint *******local_34;
  undefined *local_30;
  uint *******local_2c;
  undefined4 local_28;
  uint *******local_24;
  
  puVar4 = (uint *)*param_1;
  uVar1 = 1;
  if ((int)*puVar4 < 0) {
    uVar1 = *puVar4 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    pppppppuVar6 = (uint *******)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    iVar2 = (*pcVar5)(pppppppuVar6,&DAT_00520d25,7);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) goto LAB_0140470c;
LAB_014047d8:
    iVar2 = (*pcVar5)(pppppppuVar6,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_2c = (uint *******)&local_44;
    local_44 = (uint *******)CONCAT31(local_44._1_3_,1);
    local_34 = pppppppuVar6;
    local_30 = puVar7;
    iVar2 = FUN_012fb170(puVar4[1],puVar4[2],&local_34,&DAT_01ce45f8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01302620(&local_34,&DAT_005312e2,2);
  }
  else if (uVar1 == 1) {
    pppppppuVar6 = (uint *******)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    iVar2 = (*pcVar5)(pppppppuVar6,"MsgParseIpAddrLoopbackV4LoopbackV6",3);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) goto LAB_014047d8;
LAB_0140470c:
    iVar2 = (*pcVar5)(pppppppuVar6,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_012fb170(puVar4[1],puVar4[2],pppppppuVar6,puVar7);
  }
  else {
    pppppppuVar6 = (uint *******)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar2 = (*pcVar5)(pppppppuVar6,
                      "Protoevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/name_server/name_server_pool.rs:214"
                      ,5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(pppppppuVar6,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_34 = (uint *******)(puVar4 + 1);
      iVar2 = FUN_01303cdc(param_2,"ProtoError",10,&DAT_0056f2ec,4,&local_34,FUN_013d19cc);
      if (iVar2 != 0) {
        return 1;
      }
      pppppppuVar6 = (uint *******)*param_2;
      pcVar5 = *(code **)(param_2[1] + 0xc);
      goto LAB_014048fc;
    }
    iVar2 = (*pcVar5)(pppppppuVar6,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_2c = (uint *******)param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = (uint *******)&local_44;
    local_35 = 1;
    local_44 = pppppppuVar6;
    local_40 = iVar8;
    local_24 = (uint *******)(puVar4 + 1);
    iVar2 = FUN_01303cdc(&local_34,"ProtoError",10,&DAT_0056f2ec,4,&local_24,FUN_013d19cc);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_014048fc:
  uVar3 = (*pcVar5)(pppppppuVar6,&DAT_0053341b,1);
  return uVar3;
}

