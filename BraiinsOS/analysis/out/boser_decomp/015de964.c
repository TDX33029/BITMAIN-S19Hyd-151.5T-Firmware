// FUN_015de964 @ 015de964 size=124 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_015de964(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_34 [12];
  int local_28;
  code *local_24;
  undefined1 *local_20;
  code *local_1c;
  
  FUN_015dea04(auStack_34,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  local_1c = FUN_015e8860;
  local_24 = FUN_015dde1c;
  local_28 = param_1;
  local_20 = auStack_34;
  uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_0058fe1a,&local_28);
  FUN_015dee24(auStack_34);
  return uVar1;
}

