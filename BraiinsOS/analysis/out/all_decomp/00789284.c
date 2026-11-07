// FUN_00789284 @ 00789284 size=644 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00789284(int *param_1,int *param_2)

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
  
  if (*param_1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x007892f0. Too many branches */
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
        local_38 = param_1 + 1;
        iVar1 = FUN_00fb34b0(param_2,&DAT_00568454,4,&DAT_00566fb4,4,param_1 + 2,FUN_0078955c,
                             &DAT_00414803,6,(int)param_1 + 9,FUN_0078955c,&DAT_00414809,6,
                             (int)param_1 + 10,FUN_0078955c,&DAT_0041480f,10,&local_38,FUN_00d47d08)
        ;
        if (iVar1 == 0) {
          iVar4 = *param_2;
          pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_007894e4:
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
        local_38 = &local_48;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        local_48 = iVar4;
        local_44 = iVar5;
        local_28 = param_1 + 1;
        iVar1 = FUN_00fb34b0(&local_38,&DAT_00568454,4,&DAT_00566fb4,4,param_1 + 2,FUN_0078955c,
                             &DAT_00414803,6,(int)param_1 + 9,FUN_0078955c,&DAT_00414809,6,
                             (int)param_1 + 10,FUN_0078955c,&DAT_0041480f,10,&local_28,FUN_00d47d08)
        ;
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_007894e4;
      }
    }
  }
  return 1;
}

