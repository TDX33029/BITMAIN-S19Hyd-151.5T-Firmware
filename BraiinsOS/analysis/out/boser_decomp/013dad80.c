// FUN_013dad80 @ 013dad80 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_013dad80(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  param_1 = (int *)*param_1;
  iVar3 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0047450c,0xd);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,&DAT_00474519,5,param_1 + 3,FUN_013e5e14);
  puVar2 = &DAT_01cf2dc8;
  if (iVar3 == -0x80000000) {
    puVar2 = &DAT_01cf2dc0;
  }
  FUN_01302c38(uVar1,&DAT_0047451e,0x11,puVar2,&LAB_01674ec4);
  FUN_01302e1c();
  return;
}

