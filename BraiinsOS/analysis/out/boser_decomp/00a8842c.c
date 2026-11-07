// FUN_00a8842c @ 00a8842c size=104 calls_out=2 calls_in=0
// strings: 

longlong FUN_00a8842c(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01ab985c(param_1 + 0x428);
  if (lVar1 != *param_2) {
    FUN_012672ac(0,0,param_1 + 0x428,*(undefined4 *)(param_1 + 0x424),(int)*param_2,
                 *(undefined4 *)((int)param_2 + 4),*(undefined4 *)(param_1 + 0x420),
                 *(undefined4 *)(param_1 + 0x424));
  }
  return lVar1;
}

