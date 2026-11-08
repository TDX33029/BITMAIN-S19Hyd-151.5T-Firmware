// FUN_01210d04 @ 01210d04 size=148 calls_out=3 calls_in=0
// strings: 

longlong FUN_01210d04(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_01ab985c(param_1 + 0x900);
  lVar1 = *param_2;
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  if (lVar3 != *param_2) {
    FUN_012672ac(0,0,param_1 + 0x900,extraout_r3,(int)lVar1,uVar2,*(undefined4 *)(param_1 + 0x8f8),
                 *(undefined4 *)(param_1 + 0x8fc));
    FUN_0120be0c(0,0,param_1 + 0x480,extraout_r3_00,(int)lVar1,uVar2,
                 *(undefined4 *)(param_1 + 0x478),*(undefined4 *)(param_1 + 0x47c));
  }
  return lVar3;
}

