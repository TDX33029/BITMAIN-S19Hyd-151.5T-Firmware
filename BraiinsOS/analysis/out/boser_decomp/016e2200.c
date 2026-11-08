// FUN_016e2200 @ 016e2200 size=144 calls_out=2 calls_in=0
// strings: ClassBytesRange | start

void FUN_016e2200(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1a;
  undefined1 local_19;
  
  uVar1 = *(undefined1 *)*param_1;
  uVar2 = ((undefined1 *)*param_1)[1];
  local_20 = (**(code **)(param_2[1] + 0xc))(*param_2,"ClassBytesRange",0xf);
  local_1f = 0;
  local_24 = param_2;
  local_1a = uVar1;
  uVar3 = FUN_01302c38(&local_24,"start",5,&local_1a,FUN_016f34f4);
  local_19 = uVar2;
  FUN_01302c38(uVar3,"end",3,&local_19,FUN_016f34f4);
  FUN_01302e1c();
  return;
}

