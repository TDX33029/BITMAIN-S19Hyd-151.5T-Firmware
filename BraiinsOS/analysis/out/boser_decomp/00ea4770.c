// FUN_00ea4770 @ 00ea4770 size=212 calls_out=4 calls_in=1
// strings: exact | maxfrom_wildcardinput_offset

int FUN_00ea4770(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((*param_1 & 1) == 0) {
    FUN_01ac6cbc(*param_2,"{",1);
    uVar2 = *param_2;
    uVar4 = 3;
    pcVar3 = "maxfrom_wildcardinput_offset";
  }
  else {
    FUN_01ac6cbc(*param_2,"{",1);
    uVar2 = *param_2;
    uVar4 = 5;
    pcVar3 = "exact";
  }
  FUN_012650dc(&local_18,uVar2,pcVar3,uVar4);
  if ((char)local_18 != '\x04') {
    iVar1 = FUN_01966f50(local_18,uStack_14);
    return iVar1;
  }
  FUN_01ac6cbc(*param_2,":",1);
  iVar1 = FUN_00d580bc(param_1[2],param_1[3],param_1[4],param_2);
  if (iVar1 == 0) {
    FUN_01ac6cbc(*param_2,"}",1);
    iVar1 = 0;
  }
  return iVar1;
}

