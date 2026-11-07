// FUN_0191233c @ 0191233c size=120 calls_out=4 calls_in=1
// strings: 

void FUN_0191233c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 auStack_118 [120];
  undefined2 local_a0;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_98 = &DAT_80000004;
  local_94 = *param_2;
  uStack_90 = param_2[1];
  uStack_8c = param_2[2];
  FUN_0191d7c0(auStack_118,&local_98);
  local_a0 = 4;
  FUN_0191e124(param_1,auStack_118);
  FUN_01bed4e2(&local_98,auStack_118,0x7c);
  FUN_018f1fc4(param_3,&local_98,0);
  return;
}

