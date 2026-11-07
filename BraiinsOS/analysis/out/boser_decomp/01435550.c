// FUN_01435550 @ 01435550 size=132 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01435550(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_24;
  int **local_20;
  undefined1 *local_1c;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  iVar1 = (**(code **)(iVar4 + 0xc))(uVar3,*param_1,param_1[1]);
  uVar2 = 1;
  if (iVar1 == 0) {
    local_24 = param_1 + 2;
    if (*local_24 == 0) {
      uVar2 = 0;
    }
    else {
      local_1c = &LAB_019cf5b8;
      local_20 = &local_24;
      uVar2 = FUN_012fa178(uVar3,iVar4,&DAT_00578eff,&local_20);
    }
  }
  return uVar2;
}

