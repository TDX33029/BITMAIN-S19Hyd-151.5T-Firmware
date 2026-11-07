// FUN_013f37e0 @ 013f37e0 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_013f37e0(undefined4 *param_1,int param_2)

{
  undefined4 local_38;
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(byte *)(param_2 + 0x14) == 2) || ((*(byte *)(param_2 + 0x14) & 1) != 0)) {
    local_18 = 4;
    local_14 = 0;
    local_1c = 0;
    FUN_013f9dd4(auStack_34,&local_1c);
    local_38 = 9;
  }
  else {
    local_18 = 1;
    local_14 = 0;
    local_1c = 0;
    FUN_013f9ed8(auStack_34,&local_1c);
    local_38 = 10;
  }
  FUN_013eece4(param_2,&local_38);
  *param_1 = 0x80000000;
  return;
}

