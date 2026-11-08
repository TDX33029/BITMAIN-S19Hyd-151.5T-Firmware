// FUN_00605a08 @ 00605a08 size=344 calls_out=11 calls_in=0
// strings: 

undefined4
FUN_00605a08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_3c;
  undefined4 local_38;
  undefined4 local_24;
  
  FUN_006050bc(&local_3c);
  if (local_3c != 0) {
    return 1;
  }
  iVar5 = *param_1;
  bVar1 = *(byte *)param_1[1];
  uVar3 = FUN_0173a6d0(local_38);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_3c,&DAT_01857708,&DAT_01857748);
  }
  uVar4 = 1;
  if ((uint)param_1[3] <= uVar3) {
    if ((char)param_1[5] == '\0') {
      if ((uint)param_1[4] < uVar3) goto LAB_00605b24;
    }
    else if ((uint)param_1[4] <= uVar3) goto LAB_00605b24;
    FUN_0172aab0(&local_3c);
    uVar4 = FUN_00605900(iVar5 + 0x18);
    local_24 = 0;
    iVar5 = FUN_0173e7c4(&local_3c,&local_24,uVar4,0,local_38);
    uVar2 = local_24;
    uVar4 = 1;
    if ((iVar5 == 1) &&
       (((bVar1 & 1) == 0 ||
        ((iVar5 = FUN_0173d550(local_24,6), iVar5 == 1 &&
         (iVar5 = FUN_0173d59c(uVar2,0xffffffff), iVar5 == 1)))))) {
      iVar5 = FUN_0173ce50(&local_3c,param_6,param_7,param_4,param_5);
      uVar4 = 0;
      if (iVar5 != 1) {
        uVar4 = 1;
      }
    }
    FUN_0172aae8(&local_3c);
  }
LAB_00605b24:
  FUN_01739ee4(local_38);
  return uVar4;
}

