// FUN_00061240 @ 00061240  size=124  callers=67
// program: bmminer


undefined4 FUN_00061240(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_00944cbc == 0) && (iVar1 = FUN_00060dc8(), iVar1 != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = DAT_00944cc4;
    iVar2 = FUN_00060d70(param_1);
    *param_2 = *(undefined4 *)(iVar1 + iVar2 * 4);
    uVar3 = 0;
  }
  return uVar3;
}

