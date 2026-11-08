// FUN_00d580bc @ 00d580bc size=272 calls_out=5 calls_in=2
// strings: seconds | nanos

int FUN_00d580bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar2 = *param_4;
  FUN_01ac6cbc(uVar2,"{",1);
  local_48 = 0x200;
  local_44 = param_4;
  FUN_012650dc(&local_40,uVar2,"seconds",7);
  if ((char)local_40 != '\x04') {
    iVar1 = FUN_01966f50(local_40,local_3c);
    return iVar1;
  }
  FUN_01ac6cbc(*param_4,":",1);
  uVar3 = FUN_0196bd9c(&local_40,extraout_r1,param_1,param_2);
  FUN_01ac6cbc(*param_4,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  iVar1 = FUN_014ad148(&local_48,"nanos",5,param_3);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (((local_48 & 0xff00) != 0) && ((local_48 & 1) == 0)) {
      FUN_01ac6cbc(*local_44,"}",1);
    }
  }
  return iVar1;
}

