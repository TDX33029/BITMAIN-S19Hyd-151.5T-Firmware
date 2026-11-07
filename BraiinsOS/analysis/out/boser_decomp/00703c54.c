// FUN_00703c54 @ 00703c54 size=148 calls_out=5 calls_in=2
// strings: 

undefined4
FUN_00703c54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  
  FUN_01b3b838(auStack_34);
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = FUN_00705838(param_4 + 0x18,extraout_r1,0);
  }
  local_1c = 0;
  iVar1 = FUN_01b4af08(auStack_34,&local_1c,uVar2,0,param_1);
  uVar2 = 1;
  if (iVar1 == 1) {
    iVar1 = FUN_01b498d8(auStack_34,param_5,param_6,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 1) {
      uVar2 = 1;
    }
  }
  FUN_01b3b854(auStack_34);
  return uVar2;
}

