// FUN_00783ad0 @ 00783ad0 size=272 calls_out=4 calls_in=0
// strings: 

void FUN_00783ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,1,0);
  uVar1 = 1;
  local_34 = param_1 + 2;
  local_37 = 1;
  local_3c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,"(",1);
      if (iVar2 == 0) {
        uVar1 = FUN_012fb170(*param_1,param_1[1],*param_2,param_2[1]);
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,"(\n",2);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_30 = *param_2;
        uStack_2c = param_2[1];
        puStack_28 = &local_21;
        local_21 = 1;
        iVar2 = FUN_012fb170(*param_1,param_1[1],&local_30,&DAT_01ce45f8);
        if (iVar2 == 0) {
          uVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
        }
      }
    }
  }
  local_40 = 1;
  local_38 = uVar1;
  FUN_01302888(&local_40,&local_34,&LAB_016093b0);
  FUN_01302aa0();
  return;
}

