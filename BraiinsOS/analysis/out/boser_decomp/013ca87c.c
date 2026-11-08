// FUN_013ca87c @ 013ca87c size=648 calls_out=6 calls_in=1
// strings: 

bool FUN_013ca87c(code **param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  code **local_70;
  undefined4 local_6c;
  code **local_68;
  int local_64;
  code *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  code ***local_44;
  code *local_40;
  code **local_28;
  
  if (*(short *)(param_1 + 9) == 1) {
    uVar2 = SUB41(param_1[0xc],0);
  }
  else {
    uVar2 = (undefined1)*(undefined2 *)((int)param_1 + 0x26);
  }
  local_6c = (uint)CONCAT21(local_6c._2_2_,uVar2) << 8;
  local_70 = param_1;
  uVar5 = FUN_013c7a64(&local_70);
  if ((int)uVar5 != 0) {
    FUN_013d9ca0(&local_44,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if ((short)local_44 == 2) {
      local_60 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01cf1f7c,&DAT_01cf1f3c);
    }
    FUN_01bed4e2((uint)&local_60 | 2,(uint)&local_44 | 2,0x1a);
    local_60 = (code *)CONCAT22(local_60._2_2_,(short)local_44);
    local_40 = FUN_013d9eb8;
    local_44 = &local_68;
    local_68 = &local_60;
    iVar3 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_44);
    if (iVar3 != 0) {
      if (((uint)local_60 & 0xffff) == 0) {
        return true;
      }
      goto LAB_013caa48;
    }
    if (((uint)local_60 & 0xffff) != 0) {
      FUN_019bb7e0(local_5c,local_58);
    }
  }
  local_68 = local_70;
  local_64 = local_6c;
  while( true ) {
    uVar5 = FUN_013c7a64(&local_68);
    if ((int)uVar5 == 0) {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        iVar3 = (**(code **)(param_3 + 0xc))(param_2,".",1);
        bVar4 = iVar3 != 0;
      }
      else {
        bVar4 = false;
      }
      return bVar4;
    }
    FUN_013d9ca0(&local_44,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    sVar1 = (short)local_44;
    if ((short)local_44 == 2) {
      local_60 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01cf1f7c,&DAT_01cf1f3c);
    }
    FUN_01bed4e2((uint)&local_60 | 2,(uint)&local_44 | 2,0x1a);
    local_60 = (code *)CONCAT22(local_60._2_2_,sVar1);
    iVar3 = (**(code **)(param_3 + 0xc))(param_2,".",1);
    if (iVar3 != 0) break;
    local_28 = &local_60;
    local_40 = FUN_013d9eb8;
    local_44 = &local_28;
    iVar3 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_44);
    if (iVar3 != 0) break;
    if ((short)local_60 != 0) {
      FUN_019bb7e0(local_5c,local_58);
    }
  }
  if ((short)local_60 == 0) {
    return true;
  }
LAB_013caa48:
  FUN_019bb7e0(local_5c,local_58);
  return true;
}

