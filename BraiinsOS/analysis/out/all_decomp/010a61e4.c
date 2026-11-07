// FUN_010a61e4 @ 010a61e4 size=532 calls_out=5 calls_in=7
// strings: 

undefined8 FUN_010a61e4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c;
  uint local_28;
  uint local_24;
  undefined2 local_20;
  int local_1c;
  int local_18;
  
  local_38 = 0;
  local_20 = 1;
  local_2c = 1;
  local_28 = 0;
  local_30 = 0x40;
  local_44 = 0x40;
  local_40._0_4_ = param_1;
  local_40._4_4_ = param_2;
  local_34 = param_2;
  local_24 = param_2;
  uVar4 = FUN_010a6418(&local_44);
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  pcVar1 = (char *)uVar4;
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00566870,0x20,&DAT_0188453c);
  }
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_0188454c);
  }
  local_34 = uVar2;
  local_40 = uVar4;
  if (*pcVar1 != '[') {
    local_20 = 1;
    local_2c = 1;
    local_30 = 0x3a;
    local_44 = 0x3a;
    local_28 = 0;
    local_38 = 0;
    local_24 = uVar2;
    FUN_010a64d4(&local_1c,&local_44);
    if (local_1c != 0) {
      return CONCAT44(local_18 - local_28,pcVar1 + local_28);
    }
    if ((local_20._1_1_ != '\0') || (((char)local_20 != '\x01' && (local_24 == local_28)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00566870,0x20,&DAT_0188457c);
    }
    return CONCAT44(local_24 - local_28,(int)local_40 + local_28);
  }
  local_38 = 0;
  local_2c = 1;
  local_44 = 0x5d;
  local_30 = 0x5d;
  FUN_010a64d4(&local_1c,&local_44);
  if (local_1c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_005665b0,0x20,&DAT_0188455c);
  }
  uVar3 = local_18 + 1;
  if (local_18 == -1) {
    uVar2 = 0;
LAB_010a6298:
    return CONCAT44(uVar2,pcVar1);
  }
  if (uVar3 < uVar2) {
    if (-0x41 < pcVar1[uVar3]) {
      return CONCAT44(uVar3,pcVar1);
    }
  }
  else if (uVar3 == uVar2) goto LAB_010a6298;
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(pcVar1,uVar2,0,uVar3,&DAT_0188456c);
}

