// FUN_0103cb2c @ 0103cb2c size=696 calls_out=5 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

bool FUN_0103cb2c(undefined4 *******param_1,undefined4 param_2,int param_3)

{
  undefined4 ******ppppppuVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 *******local_78;
  undefined4 local_74;
  undefined4 *******local_70;
  int local_6c;
  undefined4 *******local_68;
  undefined4 ******local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *******local_48;
  undefined4 ******local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *******local_28;
  
  if (*(short *)(param_1 + 9) == 1) {
    uVar2 = SUB41(param_1[0xc],0);
  }
  else {
    uVar2 = (undefined1)*(undefined2 *)((int)param_1 + 0x26);
  }
  local_74 = (uint)CONCAT21(local_74._2_2_,uVar2) << 8;
  local_78 = param_1;
  uVar5 = FUN_01039230(&local_78);
  if ((int)uVar5 != 0) {
    FUN_01049718(&local_48,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if ((short)local_48 == 2) {
      local_68 = (undefined4 *******)local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018832c8,&DAT_018832a8);
    }
    local_70 = &local_68;
    local_68 = local_48;
    local_64 = local_44;
    local_60 = uStack_40;
    local_5c = local_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    local_44 = (undefined4 ******)FUN_01049898;
    local_48 = &local_70;
    iVar3 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_48);
    if (iVar3 != 0) {
      if ((short)local_68 == 0 || local_64 == (undefined4 ******)0x0) {
        return true;
      }
      goto LAB_0103cd18;
    }
    if ((short)local_68 != 0 && local_64 != (undefined4 ******)0x0) {
      thunk_FUN_016d3fb4(local_60);
    }
  }
  local_6c = local_74;
  local_70 = local_78;
  while( true ) {
    uVar5 = FUN_01039230(&local_70);
    if ((int)uVar5 == 0) {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        iVar3 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00418eb7,1);
        return iVar3 != 0;
      }
      return false;
    }
    FUN_01049718(&local_48,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if ((short)local_48 == 2) {
      local_68 = (undefined4 *******)local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018832c8,&DAT_018832a8);
    }
    local_68 = local_48;
    local_64 = local_44;
    local_60 = uStack_40;
    local_5c = local_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    iVar3 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00418eb7,1);
    if (iVar3 != 0) break;
    local_44 = (undefined4 ******)FUN_01049898;
    local_48 = &local_28;
    local_28 = &local_68;
    iVar3 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_48);
    if (iVar3 != 0) break;
    bVar4 = ((uint)local_68 & 0xffff) != 0;
    ppppppuVar1 = (undefined4 ******)0x0;
    if (bVar4) {
      ppppppuVar1 = local_64;
    }
    if (bVar4 && ppppppuVar1 != (undefined4 ******)0x0) {
      thunk_FUN_016d3fb4(local_60);
    }
  }
  if (((short)local_68 == 0) || (local_64 == (undefined4 ******)0x0)) {
    return true;
  }
LAB_0103cd18:
  thunk_FUN_016d3fb4(local_60);
  return true;
}

