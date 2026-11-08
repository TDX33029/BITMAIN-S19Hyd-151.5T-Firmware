// FUN_00dee074 @ 00dee074 size=496 calls_out=9 calls_in=1
// strings: chunk_index | total_chunks | event_created_at | action_uuid

int FUN_00dee074(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = *param_1;
  FUN_01ac6cbc(*param_2,"{",1);
  local_30 = 0x100;
  local_2c = param_2;
  iVar2 = FUN_006e6c44(&local_30,"chunk_index",0xb,param_1[0xb]);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iVar3 != 0) {
    if ((char)local_30 != '\0') goto LAB_00dee234;
    iVar2 = FUN_01ad5300(&local_30,"total_chunks",0xc,iVar3,param_1[1]);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if ((char)local_30 == '\0') {
    iVar2 = FUN_006e6e30(&local_30,&DAT_00532588,7,param_1[9],param_1[10]);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_30 == '\0') {
      iVar2 = FUN_00697b64(&local_30,"event_created_at",0x10,param_1[3],param_1[2],param_1[3]);
      puVar1 = local_2c;
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((char)local_30 == '\0') {
        if (local_30._1_1_ != '\x01') {
          FUN_01ac6cbc(*local_2c,",",1);
        }
        local_30._0_2_ = CONCAT11(2,(char)local_30);
        FUN_012650dc(&local_28,*puVar1,"action_uuid",0xb);
        if ((char)local_28 != '\x04') {
          iVar2 = FUN_01966f50(local_28,local_24);
          return iVar2;
        }
        FUN_01ac6cbc(*puVar1,":",1);
        iVar2 = FUN_00eaa4ac(param_1 + 4,*puVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((local_30 & 0xff00) == 0) {
          return 0;
        }
        if ((local_30 & 1) == 0) {
          FUN_01ac6cbc(*puVar1,"}",1);
          return 0;
        }
        return 0;
      }
    }
  }
LAB_00dee234:
  local_28 = 10;
  iVar2 = FUN_01966fbc(&local_28,0,0);
  return iVar2;
}

