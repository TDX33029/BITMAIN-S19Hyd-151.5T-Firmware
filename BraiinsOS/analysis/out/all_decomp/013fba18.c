// FUN_013fba18 @ 013fba18 size=368 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013fba18(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_30 [3];
  byte local_24;
  byte local_23;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  iVar1 = (*pcVar2)(param_2,0x27);
  uVar3 = 1;
  if (iVar1 == 0) {
    FUN_00fa9bcc(local_30,*param_1,0x101);
    if (local_23 < 0x81) {
      iVar1 = (**(code **)(param_3 + 0xc))
                        (param_2,(int)local_30 + (uint)local_24,(uint)local_23 - (uint)local_24);
    }
    else {
      iVar1 = (*pcVar2)(param_2,local_30[0]);
    }
    if ((iVar1 == 0) && (iVar1 = (*pcVar2)(param_2,0x27), iVar1 == 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
      iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,"..=",3);
      if ((iVar1 == 0) && (iVar1 = (*pcVar2)(param_2,0x27), iVar1 == 0)) {
        FUN_00fa9bcc(local_30,param_1[1],0x101);
        if (local_23 < 0x81) {
          iVar1 = (*UNRECOVERED_JUMPTABLE)
                            (param_2,(int)local_30 + (uint)local_24,(uint)local_23 - (uint)local_24)
          ;
        }
        else {
          iVar1 = (*pcVar2)(param_2,local_30[0]);
        }
        if (((iVar1 == 0) && (iVar1 = (*pcVar2)(param_2,0x27), iVar1 == 0)) &&
           (uVar3 = 0, *(char *)(param_1 + 2) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x013fbb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE)(param_2," (exhausted)Scriptcfsclc",0xc);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

