// FUN_011dd5e4 @ 011dd5e4 size=676 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_011dd5e4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  int *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011dd650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar2;
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(iVar4,&DAT_00569804,4);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(iVar4,"(",1);
      if (iVar1 == 0) {
        local_38 = param_1 + 3;
        iVar1 = FUN_00fb34b0(param_2,&DAT_0038bde8,10,&DAT_0038bdf2,10,param_1,&LAB_011dd55c,
                             &DAT_0056a088,8,param_1 + 1,FUN_011cadf8,&DAT_0038bdfc,0xd,param_1 + 4,
                             FUN_011cac74,&DAT_0038be09,0x19,&local_38,FUN_011dca7c);
        if (iVar1 == 0) {
          iVar4 = *param_2;
          pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_011dd864:
          uVar2 = (*pcVar3)(iVar4,&DAT_00418e07,1);
          return uVar2;
        }
      }
    }
    else {
      iVar1 = (*pcVar3)(iVar4,"(\n",2);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_28 = param_1 + 3;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        local_38 = &local_48;
        local_48 = iVar4;
        local_44 = iVar5;
        iVar1 = FUN_00fb34b0(&local_38,&DAT_0038bde8,10,&DAT_0038bdf2,10,param_1,&LAB_011dd55c,
                             &DAT_0056a088,8,param_1 + 1,FUN_011cadf8,&DAT_0038bdfc,0xd,param_1 + 4,
                             FUN_011cac74,&DAT_0038be09,0x19,&local_28,FUN_011dca7c);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_011dd864;
      }
    }
  }
  return 1;
}

