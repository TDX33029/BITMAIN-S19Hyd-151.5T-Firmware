// FUN_00edccf4 @ 00edccf4 size=292 calls_out=4 calls_in=1
// strings: FIRMWARE_AND_PACKAGESREALIZING

undefined4 FUN_00edccf4(char *param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*param_1 != '\0') {
    local_20 = 10;
    uVar1 = FUN_01966fbc(&local_20,0,0);
    return uVar1;
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar4,",",1);
  }
  uVar1 = *puVar4;
  param_1[1] = '\x02';
  FUN_012650dc(&local_20,uVar1,&DAT_0056f2ec,4);
  if ((char)local_20 != '\x04') {
    uVar1 = FUN_01966f50(local_20,uStack_1c);
    return uVar1;
  }
  FUN_01ac6cbc(*puVar4,":",1);
  if (param_2 == '\0') {
    uVar1 = *puVar4;
    pcVar2 = &DAT_00571118;
  }
  else {
    if (param_2 == '\x01') {
      uVar1 = *puVar4;
      uVar3 = 0x15;
      pcVar2 = "FIRMWARE_AND_PACKAGESREALIZING";
      goto LAB_00edcdc4;
    }
    uVar1 = *puVar4;
    pcVar2 = &DAT_0056fb20;
  }
  uVar3 = 8;
LAB_00edcdc4:
  FUN_012650dc(&local_20,uVar1,pcVar2,uVar3);
  uVar1 = 0;
  if ((char)local_20 != '\x04') {
    uVar1 = FUN_01966f50(local_20,uStack_1c);
  }
  return uVar1;
}

