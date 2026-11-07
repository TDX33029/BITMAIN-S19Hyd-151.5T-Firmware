// FUN_013abc4c @ 013abc4c size=276 calls_out=3 calls_in=6
// strings: 

void FUN_013abc4c(undefined4 *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_130 [128];
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  byte local_a7;
  undefined1 auStack_a6 [98];
  byte local_44;
  byte local_43;
  byte local_42;
  undefined1 uStack_41;
  undefined4 local_40;
  int local_3c;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    local_a8 = *(byte *)(param_2 + 2);
    local_ac = 0;
    local_a7 = *(byte *)((int)param_2 + 9);
    local_b0 = 3;
    if ((9 < *param_3) && (*(int *)(param_3 + 8) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_3 + 4));
    }
  }
  else {
    bVar1 = *param_3;
    bVar2 = param_3[1];
    bVar3 = param_3[2];
    FUN_01bed4e2(&local_b0,param_2,0x88);
    if (bVar1 == 0xb) {
      FUN_009d5814(&local_b0);
      local_ac = 0;
      local_b0 = 3;
      local_a8 = bVar2;
      local_a7 = bVar3;
    }
    else {
      if ((9 < local_44) && (local_3c != 0)) {
        thunk_FUN_01be4678(local_40);
      }
      local_44 = bVar1;
      local_43 = bVar2;
      local_42 = bVar3;
      FUN_01bed4e2(&uStack_41,param_3 + 3,0x11);
      FUN_01bed4e2(auStack_130,auStack_a6,0x7e);
    }
  }
  *param_1 = local_b0;
  *(byte *)((int)param_1 + 9) = local_a7;
  *(byte *)(param_1 + 2) = local_a8;
  param_1[1] = local_ac;
  FUN_01bed4e2((int)param_1 + 10,auStack_130,0x7e);
  return;
}

