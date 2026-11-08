// FUN_011dc17c @ 011dc17c size=672 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_011dc17c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011dc1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_00569804,4);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar4,"(",1);
      if (iVar1 == 0) {
        local_38 = (undefined4 *)(iVar3 + 0xa8);
        iVar3 = FUN_00fb34b0(param_2,&DAT_0038bd95,0x15,&DAT_0038bdaa,9,iVar3 + 0x1f8,FUN_011dc99c,
                             &DAT_0038bdb3,3,iVar3 + 0x150,FUN_011dc854,&DAT_0038bdb6,5,iVar3,
                             FUN_011dc480,&DAT_0038bdbb,5,&local_38,FUN_0123da38);
        if (iVar3 == 0) {
          uVar4 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_011dc3f8:
          uVar4 = (*pcVar2)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar4,"(\n",2);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_38 = &local_48;
        local_39 = 1;
        local_28 = iVar3 + 0xa8;
        local_34 = &DAT_01880dc4;
        local_48 = uVar4;
        local_44 = iVar5;
        iVar3 = FUN_00fb34b0(&local_38,&DAT_0038bd95,0x15,&DAT_0038bdaa,9,iVar3 + 0x1f8,FUN_011dc99c
                             ,&DAT_0038bdb3,3,iVar3 + 0x150,FUN_011dc854,&DAT_0038bdb6,5,iVar3,
                             FUN_011dc480,&DAT_0038bdbb,5,&local_28,FUN_0123da38);
        if ((iVar3 == 0) &&
           (iVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar3 == 0))
        goto LAB_011dc3f8;
      }
    }
  }
  return 1;
}

