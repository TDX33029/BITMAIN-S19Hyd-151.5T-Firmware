// FUN_0141a460 @ 0141a460 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_0141a460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  char local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  
  local_48 = 0;
  uStack_44 = 0x18;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_01414a18(auStack_38,&local_48,param_3,param_4);
  FUN_0141d310(&iStack_5c,param_2,&local_48,auStack_38);
  if (local_4c != '\x02') {
    (**(code **)(iStack_5c + 0x10))(auStack_50,uStack_58,uStack_54);
  }
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 1;
  param_1[3] = param_4;
  return;
}

