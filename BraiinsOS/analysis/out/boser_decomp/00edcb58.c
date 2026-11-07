// FUN_00edcb58 @ 00edcb58 size=384 calls_out=6 calls_in=1
// strings: total_bytes

int FUN_00edcb58(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined8 uVar4;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_01ac6cbc(*param_2,"{",1);
  local_40 = 0x100;
  local_3c = param_2;
  iVar2 = FUN_00697b64(&local_40,&DAT_00569de8,0x10,param_1[5],param_1[4],param_1[5]);
  puVar1 = local_3c;
  if (iVar2 == 0) {
    if ((char)local_40 == '\0') {
      if (local_40._1_1_ != '\x01') {
        FUN_01ac6cbc(*local_3c,",",1);
      }
      local_40._0_2_ = CONCAT11(2,(char)local_40);
      FUN_012650dc(&local_38,*puVar1,"total_bytes",0xb);
      if ((char)local_38 != '\x04') {
        iVar2 = FUN_01966f50(local_38,local_34);
        return iVar2;
      }
      FUN_01ac6cbc(*puVar1,":",1);
      if ((*param_1 & 1) == 0) {
        uVar3 = *puVar1;
        uVar4 = 0x40056d030;
      }
      else {
        uVar4 = FUN_01415f98(&local_38,extraout_r1,param_1[2],param_1[3]);
        uVar3 = *puVar1;
      }
      FUN_01ac6cbc(uVar3,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      iVar2 = 0;
      if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
        FUN_01ac6cbc(*puVar1,"}",1);
      }
    }
    else {
      local_38 = 10;
      iVar2 = FUN_01966fbc(&local_38,0,0);
    }
  }
  return iVar2;
}

