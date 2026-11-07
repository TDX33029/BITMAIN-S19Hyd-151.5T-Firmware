// FUN_00c56e30 @ 00c56e30 size=532 calls_out=9 calls_in=1
// strings: measured_power | estimated_power | fan_pwm | outlet_temp

int FUN_00c56e30(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_2c;
  undefined4 *local_28;
  undefined4 local_24 [3];
  
  piVar2 = (int *)*param_2;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00d653ec(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_2c = CONCAT22(local_2c._2_2_,0x100);
  local_28 = param_2;
  iVar1 = FUN_00cd4ab4(&local_2c,&DAT_0056aa60,uVar3,uVar4);
  if (iVar1 == 0) {
    if ((char)local_2c != '\0') {
LAB_00c56ff8:
      local_24[0] = 10;
      iVar1 = FUN_0157c50c(local_24,0,0);
      return iVar1;
    }
    iVar1 = FUN_00cd3ed8((int)*(undefined8 *)(param_1 + 0x10),&local_2c,&DAT_00355bfd,0xe);
    if (iVar1 == 0) {
      if ((char)local_2c != '\0') goto LAB_00c56ff8;
      iVar1 = FUN_00cd3218((int)*(undefined8 *)(param_1 + 0x18),&local_2c,"measured_power",0xe);
      if (iVar1 == 0) {
        if ((char)local_2c != '\0') goto LAB_00c56ff8;
        iVar1 = FUN_00cd3218((int)*(undefined8 *)(param_1 + 0x20),&local_2c,"estimated_power",0xf);
        if (iVar1 == 0) {
          if ((char)local_2c != '\0') goto LAB_00c56ff8;
          iVar1 = FUN_00cd2f2c(&local_2c,"fan_pwm",7,*(undefined4 *)(param_1 + 0x34));
          if (iVar1 == 0) {
            if ((char)local_2c != '\0') goto LAB_00c56ff8;
            iVar1 = FUN_00cd4894(*(undefined4 *)(param_1 + 0x38),&local_2c,&DAT_00355c0b,10);
            if (iVar1 == 0) {
              if ((char)local_2c != '\0') goto LAB_00c56ff8;
              iVar1 = FUN_00cd4894(*(undefined4 *)(param_1 + 0x3c),&local_2c,"outlet_temp",0xb);
              if ((iVar1 == 0) && (iVar1 = FUN_00c57064(&local_2c,param_1), iVar1 == 0)) {
                iVar1 = 0;
                if (((local_2c & 0xff00) != 0) && ((local_2c & 1) == 0)) {
                  FUN_00cde0e0(*local_28,"}",1);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

