// FUN_0155c0fc @ 0155c0fc size=268 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0155c0fc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,&DAT_00571178,8);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_012fb170(*param_1 + 8,param_1[1],uVar4,iVar5);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar4;
    iStack_2c = iVar5;
    iVar1 = FUN_012fb170(*param_1 + 8,param_1[1],&local_30,&DAT_01ce45f8);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  }
  return uVar2;
}

