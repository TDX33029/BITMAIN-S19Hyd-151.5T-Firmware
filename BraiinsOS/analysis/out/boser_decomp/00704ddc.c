// FUN_00704ddc @ 00704ddc size=284 calls_out=10 calls_in=0
// strings: 

undefined4
FUN_00704ddc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int local_3c;
  undefined4 local_38;
  undefined4 local_24;
  
  FUN_007045e4(&local_3c);
  if (local_3c != 0) {
    return 1;
  }
  iVar5 = *param_1;
  pcVar6 = (char *)param_1[1];
  uVar3 = FUN_00703d88(local_38);
  uVar4 = 1;
  if ((uint)param_1[3] <= uVar3) {
    if ((char)param_1[5] == '\0') {
      if ((uint)param_1[4] < uVar3) goto LAB_00704ee4;
    }
    else if ((uint)param_1[4] <= uVar3) goto LAB_00704ee4;
    cVar1 = *pcVar6;
    FUN_01b3b838(&local_3c);
    uVar4 = FUN_00705838(iVar5 + 0x18);
    local_24 = 0;
    iVar5 = FUN_01b4af08(&local_3c,&local_24,uVar4,0,local_38);
    uVar2 = local_24;
    uVar4 = 1;
    if ((iVar5 == 1) &&
       ((cVar1 == '\0' ||
        ((iVar5 = FUN_01b49f08(local_24,6), iVar5 == 1 &&
         (iVar5 = FUN_01b49f54(uVar2,0xffffffff), iVar5 == 1)))))) {
      iVar5 = FUN_01b498d8(&local_3c,param_6,param_7,param_4,param_5);
      uVar4 = 0;
      if (iVar5 != 1) {
        uVar4 = 1;
      }
    }
    FUN_01b3b854(&local_3c);
  }
LAB_00704ee4:
  FUN_01b46fd8(local_38);
  return uVar4;
}

